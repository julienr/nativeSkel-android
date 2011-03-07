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

      glClearColor(0.5,0.5,0.5,1);

    }

    void drawImpl () {
      glClear(GL_COLOR_BUFFER_BIT); 

      glEnableClientState(GL_VERTEX_ARRAY);
      #define fX(x) ((int)(x * (1  << 16)))
      static int verts[6] = {
        0,0,
        fX(1),0,
        0,fX(1)
      };
      glVertexPointer(2, GL_FIXED, 0, verts);
      glColor4f(1,0,0,1);
      glDrawArrays(GL_TRIANGLES, 0, 3);
    }
};

void android_main (android_app* app) {
  app_dummy();
  SampleActivity activity(app);
  activity.run();
}
