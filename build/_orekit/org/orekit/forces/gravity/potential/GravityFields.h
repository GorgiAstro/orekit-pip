#ifndef org_orekit_forces_gravity_potential_GravityFields_H
#define org_orekit_forces_gravity_potential_GravityFields_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          class GravityFields : public ::java::lang::Object {
           public:
            enum {
              mid_getConstantNormalizedProvider_0c77c94a83049da8,
              mid_getConstantUnnormalizedProvider_eb1ce3dfed700512,
              mid_getNormalizedProvider_79759f2115f6836e,
              mid_getOceanTidesWaves_db6a96225c690c76,
              mid_getUnnormalizedProvider_2609e3e741b941bf,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GravityFields(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GravityFields(const GravityFields& obj) : ::java::lang::Object(obj) {}

            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider getConstantNormalizedProvider(jint, jint, const ::org::orekit::time::AbsoluteDate &) const;
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider getConstantUnnormalizedProvider(jint, jint, const ::org::orekit::time::AbsoluteDate &) const;
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider getNormalizedProvider(jint, jint) const;
            ::java::util::List getOceanTidesWaves(jint, jint) const;
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider getUnnormalizedProvider(jint, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(GravityFields);
          extern PyTypeObject *PY_TYPE(GravityFields);

          class t_GravityFields {
          public:
            PyObject_HEAD
            GravityFields object;
            static PyObject *wrap_Object(const GravityFields&);
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
