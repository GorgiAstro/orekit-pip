#ifndef org_orekit_forces_gravity_potential_LazyLoadedGravityFields_H
#define org_orekit_forces_gravity_potential_LazyLoadedGravityFields_H

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
          class PotentialCoefficientsReader;
          class NormalizedSphericalHarmonicsProvider;
          class OceanTidesWave;
          class UnnormalizedSphericalHarmonicsProvider;
          class GravityFields;
          class OceanLoadDeformationCoefficients;
          class OceanTidesReader;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          class LazyLoadedGravityFields : public ::java::lang::Object {
           public:
            enum {
              mid_init$_405b68d44521ed68,
              mid_addDefaultOceanTidesReaders_a1fa5dae97ea5ed2,
              mid_addDefaultPotentialCoefficientsReaders_a1fa5dae97ea5ed2,
              mid_addOceanTidesReader_8553ac96c69b089e,
              mid_addPotentialCoefficientsReader_a78d658c1995df90,
              mid_clearOceanTidesReaders_a1fa5dae97ea5ed2,
              mid_clearPotentialCoefficientsReaders_a1fa5dae97ea5ed2,
              mid_configureOceanLoadDeformationCoefficients_245a505170348b26,
              mid_getConstantNormalizedProvider_405c10e81094d951,
              mid_getConstantUnnormalizedProvider_3d381fbe1e441e33,
              mid_getNormalizedProvider_a686ea82e96d2c01,
              mid_getOceanLoadDeformationCoefficients_69ab25dc2098be80,
              mid_getOceanTidesWaves_39b43a702bd6611c,
              mid_getUnnormalizedProvider_fbbe2c197b102dc9,
              mid_readGravityField_f43b948b764d44fc,
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
