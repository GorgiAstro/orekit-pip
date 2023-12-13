#ifndef org_orekit_gnss_ObservationTimeScale_H
#define org_orekit_gnss_ObservationTimeScale_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeScales;
      class TimeScale;
    }
    namespace gnss {
      class ObservationTimeScale;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {

      class ObservationTimeScale : public ::java::lang::Enum {
       public:
        enum {
          mid_getTimeScale_d429fb7b5ff8192c,
          mid_valueOf_0657edc456f5404c,
          mid_values_109cb81c097a63d2,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ObservationTimeScale(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ObservationTimeScale(const ObservationTimeScale& obj) : ::java::lang::Enum(obj) {}

        static ObservationTimeScale *BDT;
        static ObservationTimeScale *GAL;
        static ObservationTimeScale *GLO;
        static ObservationTimeScale *GPS;
        static ObservationTimeScale *IRN;
        static ObservationTimeScale *QZS;

        ::org::orekit::time::TimeScale getTimeScale(const ::org::orekit::time::TimeScales &) const;
        static ObservationTimeScale valueOf(const ::java::lang::String &);
        static JArray< ObservationTimeScale > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      extern PyType_Def PY_TYPE_DEF(ObservationTimeScale);
      extern PyTypeObject *PY_TYPE(ObservationTimeScale);

      class t_ObservationTimeScale {
      public:
        PyObject_HEAD
        ObservationTimeScale object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_ObservationTimeScale *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const ObservationTimeScale&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const ObservationTimeScale&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
