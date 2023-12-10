#ifndef org_orekit_forces_gravity_potential_PythonGravityFields_H
#define org_orekit_forces_gravity_potential_PythonGravityFields_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          class GravityFields;
          class NormalizedSphericalHarmonicsProvider;
          class UnnormalizedSphericalHarmonicsProvider;
          class OceanTidesWave;
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          class PythonGravityFields : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0fa09c18fee449d5,
              mid_finalize_0fa09c18fee449d5,
              mid_getConstantNormalizedProvider_8be9acc0db722a5e,
              mid_getConstantUnnormalizedProvider_1a4f51636cfaa7fe,
              mid_getNormalizedProvider_0fdcb0a280e1e598,
              mid_getOceanTidesWaves_10d7c0f6de166543,
              mid_getUnnormalizedProvider_c2f412128b078525,
              mid_pythonDecRef_0fa09c18fee449d5,
              mid_pythonExtension_492808a339bfa35f,
              mid_pythonExtension_3a8e7649f31fdb20,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonGravityFields(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonGravityFields(const PythonGravityFields& obj) : ::java::lang::Object(obj) {}

            PythonGravityFields();

            void finalize() const;
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider getConstantNormalizedProvider(jint, jint, const ::org::orekit::time::AbsoluteDate &) const;
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider getConstantUnnormalizedProvider(jint, jint, const ::org::orekit::time::AbsoluteDate &) const;
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider getNormalizedProvider(jint, jint) const;
            ::java::util::List getOceanTidesWaves(jint, jint) const;
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider getUnnormalizedProvider(jint, jint) const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonGravityFields);
          extern PyTypeObject *PY_TYPE(PythonGravityFields);

          class t_PythonGravityFields {
          public:
            PyObject_HEAD
            PythonGravityFields object;
            static PyObject *wrap_Object(const PythonGravityFields&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
