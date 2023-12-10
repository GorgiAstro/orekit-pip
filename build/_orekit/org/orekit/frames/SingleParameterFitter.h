#ifndef org_orekit_frames_SingleParameterFitter_H
#define org_orekit_frames_SingleParameterFitter_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace frames {
      class EOPHistory;
      class SingleParameterFitter;
    }
    namespace utils {
      class SecularAndHarmonic;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class SingleParameterFitter : public ::java::lang::Object {
       public:
        enum {
          mid_init$_cc1f2fc8a56d171b,
          mid_createDefaultDut1FitterLongTermPrediction_1395ce7e030f12ba,
          mid_createDefaultDut1FitterShortTermPrediction_1395ce7e030f12ba,
          mid_createDefaultNutationFitterLongTermPrediction_1395ce7e030f12ba,
          mid_createDefaultNutationFitterShortTermPrediction_1395ce7e030f12ba,
          mid_createDefaultPoleFitterLongTermPrediction_1395ce7e030f12ba,
          mid_createDefaultPoleFitterShortTermPrediction_1395ce7e030f12ba,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SingleParameterFitter(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SingleParameterFitter(const SingleParameterFitter& obj) : ::java::lang::Object(obj) {}

        static jdouble MOON_DRACONIC_PULSATION;
        static jdouble SUN_PULSATION;

        SingleParameterFitter(jdouble, jdouble, jdouble, jint, const JArray< jdouble > &);

        static SingleParameterFitter createDefaultDut1FitterLongTermPrediction();
        static SingleParameterFitter createDefaultDut1FitterShortTermPrediction();
        static SingleParameterFitter createDefaultNutationFitterLongTermPrediction();
        static SingleParameterFitter createDefaultNutationFitterShortTermPrediction();
        static SingleParameterFitter createDefaultPoleFitterLongTermPrediction();
        static SingleParameterFitter createDefaultPoleFitterShortTermPrediction();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(SingleParameterFitter);
      extern PyTypeObject *PY_TYPE(SingleParameterFitter);

      class t_SingleParameterFitter {
      public:
        PyObject_HEAD
        SingleParameterFitter object;
        static PyObject *wrap_Object(const SingleParameterFitter&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
