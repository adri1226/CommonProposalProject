#ifndef UTILS_DDSVIEW_HPP
#define UTILS_DDSVIEW_HPP

#include <thread>

#include <dds/pub/Publisher.hpp>
#include <dds/sub/ddssub.hpp>
#include <rti/config/Logger.hpp>
#include <rti/util/util.hpp>

#include <utils/DDSDataReader.hpp>
#include <utils/DDSDataWriter.hpp>

namespace utils
{

class DDSView
{
  public:
    DDSView(unsigned int domainId, unsigned int sampleCount);
    ~DDSView();

  protected:
    template<class TTopic>
    utils::DDSDataReader<TTopic> createDataReader(const std::string& topicName,
                                                       std::function<void(TTopic)> function)
    {
      return utils::DDSDataReader<TTopic>(mParticipant, mSubscriber, topicName, function);
    }

    template<class TTopic>
    utils::DDSDataWriter<TTopic> createrDataWriter(const std::string& topicName)
    {
      return utils::DDSDataWriter<TTopic>(mParticipant, mPublisher, topicName);
    }

    unsigned int mDomainId;
    unsigned int mSampleCount;
    ::dds::core::Duration mWait;
    std::shared_ptr<::dds::domain::DomainParticipant> mParticipant;
    std::shared_ptr<::dds::pub::Publisher> mPublisher;
    std::shared_ptr<::dds::sub::Subscriber> mSubscriber;
    std::map<std::string, std::thread> mThreadsForReading;
};

}  // namespace utils

#endif  // UTILS_DDSVIEW_HPP
