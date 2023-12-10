#ifndef org_orekit_frames_SingleParameterFitter_H
#define org_orekit_frames_SingleParameterFitter_H

#include "java/lang/Object.h"

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
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class SingleParameterFitter : public ::java::lang::Object {
       public:
        enum {
          mid_init$_e266cf4efadb0399,
          mid_createDefaultDut1FitterLongTermPrediction_1d5518c43ee2f17a,
          mid_createDefaultDut1FitterShortTermPrediction_1d5518c43ee2f17a,
          mid_createDefaultNutationFitterLongTermPrediction_1d5518c43ee2f17a,
          mid_createDefaultNutationFitterShortTermPrediction_1d5518c43ee2f17a,
          mid_createDefaultPoleFitterLongTermPrediction_1d5518c43ee2f17a,
          mid_createDefaultPoleFitterShortTermPrediction_1d5518c43ee2f17a,
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
