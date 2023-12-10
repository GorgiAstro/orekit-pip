#ifndef org_orekit_gnss_MeasurementType_H
#define org_orekit_gnss_MeasurementType_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace gnss {
      class MeasurementType;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {

      class MeasurementType : public ::java::lang::Enum {
       public:
        enum {
          mid_valueOf_058c92e2fb537a5e,
          mid_values_7b73cd10cc5686d6,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MeasurementType(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MeasurementType(const MeasurementType& obj) : ::java::lang::Enum(obj) {}

        static MeasurementType *CARRIER_PHASE;
        static MeasurementType *COMBINED_RANGE_PHASE;
        static MeasurementType *DOPPLER;
        static MeasurementType *PSEUDO_RANGE;
        static MeasurementType *SIGNAL_STRENGTH;

        static MeasurementType valueOf(const ::java::lang::String &);
        static JArray< MeasurementType > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      extern PyType_Def PY_TYPE_DEF(MeasurementType);
      extern PyTypeObject *PY_TYPE(MeasurementType);

      class t_MeasurementType {
      public:
        PyObject_HEAD
        MeasurementType object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_MeasurementType *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const MeasurementType&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const MeasurementType&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
