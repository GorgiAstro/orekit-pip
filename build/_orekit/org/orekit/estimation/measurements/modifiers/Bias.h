#ifndef org_orekit_estimation_measurements_modifiers_Bias_H
#define org_orekit_estimation_measurements_modifiers_Bias_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurementBase;
        class EstimationModifier;
        class EstimatedMeasurement;
        class ObservedMeasurement;
      }
    }
    namespace utils {
      class ParameterDriver;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          class Bias : public ::java::lang::Object {
           public:
            enum {
              mid_init$_b03b861fc4ed7007,
              mid_getParametersDrivers_d751c1a57012b438,
              mid_modify_0f0ae9411e47b72e,
              mid_modifyWithoutDerivatives_ecce216dce506020,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Bias(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Bias(const Bias& obj) : ::java::lang::Object(obj) {}

            Bias(const JArray< ::java::lang::String > &, const JArray< jdouble > &, const JArray< jdouble > &, const JArray< jdouble > &, const JArray< jdouble > &);

            ::java::util::List getParametersDrivers() const;
            void modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement &) const;
            void modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          extern PyType_Def PY_TYPE_DEF(Bias);
          extern PyTypeObject *PY_TYPE(Bias);

          class t_Bias {
          public:
            PyObject_HEAD
            Bias object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Bias *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Bias&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Bias&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
