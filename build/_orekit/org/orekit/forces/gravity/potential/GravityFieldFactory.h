#ifndef org_orekit_forces_gravity_potential_GravityFieldFactory_H
#define org_orekit_forces_gravity_potential_GravityFieldFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          class OceanTidesReader;
          class NormalizedSphericalHarmonicsProvider;
          class PotentialCoefficientsReader;
          class OceanLoadDeformationCoefficients;
          class LazyLoadedGravityFields;
          class UnnormalizedSphericalHarmonicsProvider;
          class OceanTidesWave;
          class TideSystem;
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
    class Class;
    class String;
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
              mid_addDefaultOceanTidesReaders_0fa09c18fee449d5,
              mid_addDefaultPotentialCoefficientsReaders_0fa09c18fee449d5,
              mid_addOceanTidesReader_aaf944cdf3a65ca7,
              mid_addPotentialCoefficientsReader_bb91501de12fc9cd,
              mid_clearOceanTidesReaders_0fa09c18fee449d5,
              mid_clearPotentialCoefficientsReaders_0fa09c18fee449d5,
              mid_configureOceanLoadDeformationCoefficients_1f277f0c1fb1d25f,
              mid_getConstantNormalizedProvider_8be9acc0db722a5e,
              mid_getConstantUnnormalizedProvider_1a4f51636cfaa7fe,
              mid_getGravityFields_6e6081b92fd46837,
              mid_getNormalizedProvider_85db78a69810583e,
              mid_getNormalizedProvider_0fdcb0a280e1e598,
              mid_getNormalizedProvider_7e4305b432a52ae3,
              mid_getOceanLoadDeformationCoefficients_ed8ed7679d88de0a,
              mid_getOceanTidesWaves_10d7c0f6de166543,
              mid_getUnnormalizationFactors_5f8b4bdc912abcfa,
              mid_getUnnormalizedProvider_95cc2006b0da2544,
              mid_getUnnormalizedProvider_c2f412128b078525,
              mid_getUnnormalizedProvider_05607b190f3105e2,
              mid_readGravityField_59c1b784e0263abd,
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
