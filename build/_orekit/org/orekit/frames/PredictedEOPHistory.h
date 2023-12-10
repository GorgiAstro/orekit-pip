#ifndef org_orekit_frames_PredictedEOPHistory_H
#define org_orekit_frames_PredictedEOPHistory_H

#include "org/orekit/frames/EOPHistory.h"

namespace org {
  namespace orekit {
    namespace frames {
      class EOPFitter;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class PredictedEOPHistory : public ::org::orekit::frames::EOPHistory {
       public:
        enum {
          mid_init$_eecc46ed0fd30bf7,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PredictedEOPHistory(jobject obj) : ::org::orekit::frames::EOPHistory(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PredictedEOPHistory(const PredictedEOPHistory& obj) : ::org::orekit::frames::EOPHistory(obj) {}

        PredictedEOPHistory(const ::org::orekit::frames::EOPHistory &, jdouble, const ::org::orekit::frames::EOPFitter &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(PredictedEOPHistory);
      extern PyTypeObject *PY_TYPE(PredictedEOPHistory);

      class t_PredictedEOPHistory {
      public:
        PyObject_HEAD
        PredictedEOPHistory object;
        static PyObject *wrap_Object(const PredictedEOPHistory&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
