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
          class TideSystem;
          class UnnormalizedSphericalHarmonicsProvider;
          class OceanTidesReader;
          class OceanTidesWave;
          class PotentialCoefficientsReader;
          class NormalizedSphericalHarmonicsProvider;
          class LazyLoadedGravityFields;
          class OceanLoadDeformationCoefficients;
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
              mid_addDefaultOceanTidesReaders_0640e6acf969ed28,
              mid_addDefaultPotentialCoefficientsReaders_0640e6acf969ed28,
              mid_addOceanTidesReader_53a9275b0b397970,
              mid_addPotentialCoefficientsReader_5853b49c202b050b,
              mid_clearOceanTidesReaders_0640e6acf969ed28,
              mid_clearPotentialCoefficientsReaders_0640e6acf969ed28,
              mid_configureOceanLoadDeformationCoefficients_48fb5ba519b6ce93,
              mid_getConstantNormalizedProvider_0c77c94a83049da8,
              mid_getConstantUnnormalizedProvider_eb1ce3dfed700512,
              mid_getGravityFields_0d8a4be514230626,
              mid_getNormalizedProvider_003cf918a8e938f4,
              mid_getNormalizedProvider_79759f2115f6836e,
              mid_getNormalizedProvider_9108cf7f45bb896a,
              mid_getOceanLoadDeformationCoefficients_5e90d7425c16a9f8,
              mid_getOceanTidesWaves_db6a96225c690c76,
              mid_getUnnormalizationFactors_c5a249365f81f631,
              mid_getUnnormalizedProvider_d395c492ef90bcf1,
              mid_getUnnormalizedProvider_2609e3e741b941bf,
              mid_getUnnormalizedProvider_016911f22f84e125,
              mid_readGravityField_88cf88e8bd59d4fa,
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
