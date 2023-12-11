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
    namespace utils {
      class SecularAndHarmonic;
    }
    namespace frames {
      class SingleParameterFitter;
      class EOPHistory;
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
          mid_init$_f21737dc64f9d4b3,
          mid_createDefaultDut1FitterLongTermPrediction_e3f99774da48cc23,
          mid_createDefaultDut1FitterShortTermPrediction_e3f99774da48cc23,
          mid_createDefaultNutationFitterLongTermPrediction_e3f99774da48cc23,
          mid_createDefaultNutationFitterShortTermPrediction_e3f99774da48cc23,
          mid_createDefaultPoleFitterLongTermPrediction_e3f99774da48cc23,
          mid_createDefaultPoleFitterShortTermPrediction_e3f99774da48cc23,
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
