#ifndef org_orekit_estimation_measurements_EstimatedMeasurementBase$Status_H
#define org_orekit_estimation_measurements_EstimatedMeasurementBase$Status_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurementBase$Status;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        class EstimatedMeasurementBase$Status : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_5665b50728ced594,
            mid_values_4d932bd6622f60c9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EstimatedMeasurementBase$Status(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EstimatedMeasurementBase$Status(const EstimatedMeasurementBase$Status& obj) : ::java::lang::Enum(obj) {}

          static EstimatedMeasurementBase$Status *PROCESSED;
          static EstimatedMeasurementBase$Status *REJECTED;

          static EstimatedMeasurementBase$Status valueOf(const ::java::lang::String &);
          static JArray< EstimatedMeasurementBase$Status > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        extern PyType_Def PY_TYPE_DEF(EstimatedMeasurementBase$Status);
        extern PyTypeObject *PY_TYPE(EstimatedMeasurementBase$Status);

        class t_EstimatedMeasurementBase$Status {
        public:
          PyObject_HEAD
          EstimatedMeasurementBase$Status object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_EstimatedMeasurementBase$Status *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const EstimatedMeasurementBase$Status&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const EstimatedMeasurementBase$Status&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
