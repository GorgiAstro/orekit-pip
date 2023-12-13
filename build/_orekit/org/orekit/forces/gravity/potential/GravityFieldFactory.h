#ifndef org_orekit_forces_gravity_potential_GravityFieldFactory_H
#define org_orekit_forces_gravity_potential_GravityFieldFactory_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          class PotentialCoefficientsReader;
          class NormalizedSphericalHarmonicsProvider;
          class LazyLoadedGravityFields;
          class OceanTidesWave;
          class UnnormalizedSphericalHarmonicsProvider;
          class OceanLoadDeformationCoefficients;
          class OceanTidesReader;
          class TideSystem;
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

          class GravityFieldFactory : public ::java::lang::Object {
           public:
            enum {
              mid_addDefaultOceanTidesReaders_a1fa5dae97ea5ed2,
              mid_addDefaultPotentialCoefficientsReaders_a1fa5dae97ea5ed2,
              mid_addOceanTidesReader_8553ac96c69b089e,
              mid_addPotentialCoefficientsReader_a78d658c1995df90,
              mid_clearOceanTidesReaders_a1fa5dae97ea5ed2,
              mid_clearPotentialCoefficientsReaders_a1fa5dae97ea5ed2,
              mid_configureOceanLoadDeformationCoefficients_245a505170348b26,
              mid_getConstantNormalizedProvider_405c10e81094d951,
              mid_getConstantUnnormalizedProvider_3d381fbe1e441e33,
              mid_getGravityFields_7edff6ac38775a4d,
              mid_getNormalizedProvider_c13ce70d0d253382,
              mid_getNormalizedProvider_a686ea82e96d2c01,
              mid_getNormalizedProvider_2e45d418bc95ef10,
              mid_getOceanLoadDeformationCoefficients_69ab25dc2098be80,
              mid_getOceanTidesWaves_39b43a702bd6611c,
              mid_getUnnormalizationFactors_4bd4edddfa48c3b3,
              mid_getUnnormalizedProvider_d5f7c11565985cd3,
              mid_getUnnormalizedProvider_fbbe2c197b102dc9,
              mid_getUnnormalizedProvider_3cf900d10629a5ef,
              mid_readGravityField_f43b948b764d44fc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GravityFieldFactory(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GravityFieldFactory(const GravityFieldFactory& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::String *EGM_FILENAME;
            static ::java::lang::String *FES_CHAT_EPSILON_FILENAME;
            static ::java::lang::String *FES_CNM_SNM_FILENAME;
            static ::java::lang::String *FES_HF_FILENAME;
            static ::java::lang::String *GRGS_FILENAME;
            static ::java::lang::String *ICGEM_FILENAME;
            static ::java::lang::String *SHM_FILENAME;

            static void addDefaultOceanTidesReaders();
            static void addDefaultPotentialCoefficientsReaders();
            static void addOceanTidesReader(const ::org::orekit::forces::gravity::potential::OceanTidesReader &);
            static void addPotentialCoefficientsReader(const ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader &);
            static void clearOceanTidesReaders();
            static void clearPotentialCoefficientsReaders();
            static void configureOceanLoadDeformationCoefficients(const ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients &);
            static ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider getConstantNormalizedProvider(jint, jint, const ::org::orekit::time::AbsoluteDate &);
            static ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider getConstantUnnormalizedProvider(jint, jint, const ::org::orekit::time::AbsoluteDate &);
            static ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields getGravityFields();
            static ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider getNormalizedProvider(const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &);
            static ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider getNormalizedProvider(jint, jint);
            static ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider getNormalizedProvider(jdouble, jdouble, const ::org::orekit::forces::gravity::potential::TideSystem &, const JArray< JArray< jdouble > > &, const JArray< JArray< jdouble > > &);
            static ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients getOceanLoadDeformationCoefficients();
            static ::java::util::List getOceanTidesWaves(jint, jint);
            static JArray< JArray< jdouble > > getUnnormalizationFactors(jint, jint);
            static ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider getUnnormalizedProvider(const ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider &);
            static ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider getUnnormalizedProvider(jint, jint);
            static ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider getUnnormalizedProvider(jdouble, jdouble, const ::org::orekit::forces::gravity::potential::TideSystem &, const JArray< JArray< jdouble > > &, const JArray< JArray< jdouble > > &);
            static ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader readGravityField(jint, jint);
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
          extern PyType_Def PY_TYPE_DEF(GravityFieldFactory);
          extern PyTypeObject *PY_TYPE(GravityFieldFactory);

          class t_GravityFieldFactory {
          public:
            PyObject_HEAD
            GravityFieldFactory object;
            static PyObject *wrap_Object(const GravityFieldFactory&);
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
