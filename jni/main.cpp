#include "Activity.h"

class SampleActivity : public Activity {
  public:
    SampleActivity (android_app* app) : Activity(app) {}

  protected:
    void drawImpl () {
      glClear(GL_COLOR_BUFFER_BIT); 
    }
};

void android_main (android_app* app) {
  app_dummy();
  SampleActivity activity(app);
  activity.run();
}
