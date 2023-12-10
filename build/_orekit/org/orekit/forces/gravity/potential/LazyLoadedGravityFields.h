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
    namespace time {
      class TimeScale;
      class AbsoluteDate;
    }
    namespace forces {
      namespace gravity {
        namespace potential {
          class OceanTidesReader;
          class UnnormalizedSphericalHarmonicsProvider;
          class PotentialCoefficientsReader;
          class OceanLoadDeformationCoefficients;
          class NormalizedSphericalHarmonicsProvider;
          class GravityFields;
          class OceanTidesWave;
        }
      }
    }
    namespace data {
      class DataProvidersManager;
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
              mid_init$_6cbb4bccf98d200d,
              mid_addDefaultOceanTidesReaders_7ae3461a92a43152,
              mid_addDefaultPotentialCoefficientsReaders_7ae3461a92a43152,
              mid_addOceanTidesReader_a19ff095f5dde418,
              mid_addPotentialCoefficientsReader_c27d2a7feed8b0f7,
              mid_clearOceanTidesReaders_7ae3461a92a43152,
              mid_clearPotentialCoefficientsReaders_7ae3461a92a43152,
              mid_configureOceanLoadDeformationCoefficients_6f5119332010876e,
              mid_getConstantNormalizedProvider_f23a878f7162aa63,
              mid_getConstantUnnormalizedProvider_4ff4b36d038a4d30,
              mid_getNormalizedProvider_cd3e5e7b86486169,
              mid_getOceanLoadDeformationCoefficients_7fa94372497f9b33,
              mid_getOceanTidesWaves_4a0f7788a82593c4,
              mid_getUnnormalizedProvider_d3751d16c1e699b1,
              mid_readGravityField_f25139d655c52fed,
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
