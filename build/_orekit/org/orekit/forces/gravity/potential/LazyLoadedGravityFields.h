#ifndef org_orekit_forces_gravity_potential_LazyLoadedGravityFields_H
#define org_orekit_forces_gravity_potential_LazyLoadedGravityFields_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          class OceanTidesReader;
          class GravityFields;
          class NormalizedSphericalHarmonicsProvider;
          class PotentialCoefficientsReader;
          class OceanLoadDeformationCoefficients;
          class UnnormalizedSphericalHarmonicsProvider;
          class OceanTidesWave;
        }
      }
    }
    namespace data {
      class DataProvidersManager;
    }
    namespace time {
      class AbsoluteDate;
      class TimeScale;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          class LazyLoadedGravityFields : public ::java::lang::Object {
           public:
            enum {
              mid_init$_d2f452d2d1d098c7,
              mid_addDefaultOceanTidesReaders_0fa09c18fee449d5,
              mid_addDefaultPotentialCoefficientsReaders_0fa09c18fee449d5,
              mid_addOceanTidesReader_aaf944cdf3a65ca7,
              mid_addPotentialCoefficientsReader_bb91501de12fc9cd,
              mid_clearOceanTidesReaders_0fa09c18fee449d5,
              mid_clearPotentialCoefficientsReaders_0fa09c18fee449d5,
              mid_configureOceanLoadDeformationCoefficients_1f277f0c1fb1d25f,
              mid_getConstantNormalizedProvider_8be9acc0db722a5e,
              mid_getConstantUnnormalizedProvider_1a4f51636cfaa7fe,
              mid_getNormalizedProvider_0fdcb0a280e1e598,
              mid_getOceanLoadDeformationCoefficients_ed8ed7679d88de0a,
              mid_getOceanTidesWaves_10d7c0f6de166543,
              mid_getUnnormalizedProvider_c2f412128b078525,
              mid_readGravityField_59c1b784e0263abd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LazyLoadedGravityFields(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LazyLoadedGravityFields(const LazyLoadedGravityFields& obj) : ::java::lang::Object(obj) {}

            LazyLoadedGravityFields(const ::org::orekit::data::DataProvidersManager &, const ::org::orekit::time::TimeScale &);

            void addDefaultOceanTidesReaders() const;
            void addDefaultPotentialCoefficientsReaders() const;
            void addOceanTidesReader(const ::org::orekit::forces::gravity::potential::OceanTidesReader &) const;
            void addPotentialCoefficientsReader(const ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader &) const;
            void clearOceanTidesReaders() const;
            void clearPotentialCoefficientsReaders() const;
            void configureOceanLoadDeformationCoefficients(const ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients &) const;
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider getConstantNormalizedProvider(jint, jint, const ::org::orekit::time::AbsoluteDate &) const;
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider getConstantUnnormalizedProvider(jint, jint, const ::org::orekit::time::AbsoluteDate &) const;
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider getNormalizedProvider(jint, jint) const;
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients getOceanLoadDeformationCoefficients() const;
            ::java::util::List getOceanTidesWaves(jint, jint) const;
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider getUnnormalizedProvider(jint, jint) const;
            ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader readGravityField(jint, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(LazyLoadedGravityFields);
          extern PyTypeObject *PY_TYPE(LazyLoadedGravityFields);

          class t_LazyLoadedGravityFields {
          public:
            PyObject_HEAD
            LazyLoadedGravityFields object;
            static PyObject *wrap_Object(const LazyLoadedGravityFields&);
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
