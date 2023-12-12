#ifndef org_orekit_forces_gravity_potential_PythonGravityFields_H
#define org_orekit_forces_gravity_potential_PythonGravityFields_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          class GravityFields;
          class UnnormalizedSphericalHarmonicsProvider;
          class OceanTidesWave;
          class NormalizedSphericalHarmonicsProvider;
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
    class Class;
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
              mid_init$_0640e6acf969ed28,
              mid_finalize_0640e6acf969ed28,
              mid_getConstantNormalizedProvider_0c77c94a83049da8,
              mid_getConstantUnnormalizedProvider_eb1ce3dfed700512,
              mid_getNormalizedProvider_79759f2115f6836e,
              mid_getOceanTidesWaves_db6a96225c690c76,
              mid_getUnnormalizedProvider_2609e3e741b941bf,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
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
