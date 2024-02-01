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
          class UnnormalizedSphericalHarmonicsProvider;
          class GravityFields;
          class OceanLoadDeformationCoefficients;
          class OceanTidesReader;
          class PotentialCoefficientsReader;
          class OceanTidesWave;
          class NormalizedSphericalHarmonicsProvider;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          class LazyLoadedGravityFields : public ::java::lang::Object {
           public:
            enum {
              mid_init$_6f5123b8c0023b4a,
              mid_addDefaultOceanTidesReaders_ff7cb6c242604316,
              mid_addDefaultPotentialCoefficientsReaders_ff7cb6c242604316,
              mid_addOceanTidesReader_ee0d26b4bbabbfbf,
              mid_addPotentialCoefficientsReader_71869fcd17a69cc7,
              mid_clearOceanTidesReaders_ff7cb6c242604316,
              mid_clearPotentialCoefficientsReaders_ff7cb6c242604316,
              mid_configureOceanLoadDeformationCoefficients_c836e871c1d3958a,
              mid_getConstantNormalizedProvider_bb5918e0884e4ae2,
              mid_getConstantUnnormalizedProvider_c4894db538d805f8,
              mid_getNormalizedProvider_47519026ac46bd97,
              mid_getOceanLoadDeformationCoefficients_73c3e0c37fcdfda8,
              mid_getOceanTidesWaves_4e3c0741dd4bb632,
              mid_getUnnormalizedProvider_bc2bae0b3b31fcf0,
              mid_readGravityField_d70c66dab04a3d84,
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
