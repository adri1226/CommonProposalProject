#include "DDSView.hpp"

namespace utils
{
DDSView::DDSView(unsigned int domainId, unsigned int sampleCount):
  mDomainId(domainId), mSampleCount(sampleCount),
  mParticipant(std::make_shared<::dds::domain::DomainParticipant>(mDomainId)),
  mPublisher(std::make_shared<::dds::pub::Publisher>(*mParticipant)),
  mSubscriber(std::make_shared<::dds::sub::Subscriber>(*mParticipant))
{
  mWait = ::dds::core::Duration(1);
}

DDSView::~DDSView()
{
  for(auto& pair : mThreadsForReading)
  {
    auto& thread = pair.second;
    if (thread.joinable())
    {
      thread.join();
    }
  }
}

}  // namespace utils
