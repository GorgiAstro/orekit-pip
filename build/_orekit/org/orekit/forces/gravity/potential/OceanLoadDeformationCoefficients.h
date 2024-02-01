#ifndef org_orekit_forces_gravity_potential_OceanLoadDeformationCoefficients_H
#define org_orekit_forces_gravity_potential_OceanLoadDeformationCoefficients_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          class OceanLoadDeformationCoefficients;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          class OceanLoadDeformationCoefficients : public ::java::lang::Enum {
           public:
            enum {
              mid_getCoefficients_be783177b060994b,
              mid_valueOf_6aa299fb8ef27170,
              mid_values_97c4af0801a238d8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OceanLoadDeformationCoefficients(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OceanLoadDeformationCoefficients(const OceanLoadDeformationCoefficients& obj) : ::java::lang::Enum(obj) {}

            static OceanLoadDeformationCoefficients *GEGOUT;
            static OceanLoadDeformationCoefficients *IERS_1996;
            static OceanLoadDeformationCoefficients *IERS_2003;
            static OceanLoadDeformationCoefficients *IERS_2010;

            JArray< jdouble > getCoefficients() const;
            static OceanLoadDeformationCoefficients valueOf(const ::java::lang::String &);
            static JArray< OceanLoadDeformationCoefficients > values();
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          extern PyType_Def PY_TYPE_DEF(OceanLoadDeformationCoefficients);
          extern PyTypeObject *PY_TYPE(OceanLoadDeformationCoefficients);

          class t_OceanLoadDeformationCoefficients {
          public:
            PyObject_HEAD
            OceanLoadDeformationCoefficients object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_OceanLoadDeformationCoefficients *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const OceanLoadDeformationCoefficients&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const OceanLoadDeformationCoefficients&, PyTypeObject *);
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
