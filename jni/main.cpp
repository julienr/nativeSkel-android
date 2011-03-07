#include "Activity.h"

class SampleActivity : public Activity {
  public:
    SampleActivity (android_app* app) : Activity(app) {}

  protected:
    void postInit () {
      // Initialize GL state.
      glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_FASTEST);
      glEnable(GL_CULL_FACE);
      glShadeModel(GL_SMOOTH);
      glDisable(GL_DEPTH_TEST);

      glClearColor(1,0,0,1);

    }

    void drawImpl () {
      glClear(GL_COLOR_BUFFER_BIT); 
    }
};

void android_main (android_app* app) {
  app_dummy();
  SampleActivity activity(app);
  activity.run();
}
