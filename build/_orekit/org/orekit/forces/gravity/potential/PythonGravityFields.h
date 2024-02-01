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
          class UnnormalizedSphericalHarmonicsProvider;
          class GravityFields;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          class PythonGravityFields : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_finalize_ff7cb6c242604316,
              mid_getConstantNormalizedProvider_bb5918e0884e4ae2,
              mid_getConstantUnnormalizedProvider_c4894db538d805f8,
              mid_getNormalizedProvider_47519026ac46bd97,
              mid_getOceanTidesWaves_4e3c0741dd4bb632,
              mid_getUnnormalizedProvider_bc2bae0b3b31fcf0,
              mid_pythonDecRef_ff7cb6c242604316,
              mid_pythonExtension_42c72b98e3c2e08a,
              mid_pythonExtension_f5bbab7e97879358,
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
