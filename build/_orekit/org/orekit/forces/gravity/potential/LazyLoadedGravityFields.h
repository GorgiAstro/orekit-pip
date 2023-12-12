#ifndef org_orekit_forces_gravity_potential_LazyLoadedGravityFields_H
#define org_orekit_forces_gravity_potential_LazyLoadedGravityFields_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          class GravityFields;
          class UnnormalizedSphericalHarmonicsProvider;
          class OceanTidesReader;
          class OceanTidesWave;
          class PotentialCoefficientsReader;
          class NormalizedSphericalHarmonicsProvider;
          class OceanLoadDeformationCoefficients;
        }
      }
    }
    namespace time {
      class AbsoluteDate;
      class TimeScale;
    }
    namespace data {
      class DataProvidersManager;
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
              mid_init$_4b4582012f303e6a,
              mid_addDefaultOceanTidesReaders_0640e6acf969ed28,
              mid_addDefaultPotentialCoefficientsReaders_0640e6acf969ed28,
              mid_addOceanTidesReader_53a9275b0b397970,
              mid_addPotentialCoefficientsReader_5853b49c202b050b,
              mid_clearOceanTidesReaders_0640e6acf969ed28,
              mid_clearPotentialCoefficientsReaders_0640e6acf969ed28,
              mid_configureOceanLoadDeformationCoefficients_48fb5ba519b6ce93,
              mid_getConstantNormalizedProvider_0c77c94a83049da8,
              mid_getConstantUnnormalizedProvider_eb1ce3dfed700512,
              mid_getNormalizedProvider_79759f2115f6836e,
              mid_getOceanLoadDeformationCoefficients_5e90d7425c16a9f8,
              mid_getOceanTidesWaves_db6a96225c690c76,
              mid_getUnnormalizedProvider_2609e3e741b941bf,
              mid_readGravityField_88cf88e8bd59d4fa,
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
