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
          class LazyLoadedGravityFields;
          class UnnormalizedSphericalHarmonicsProvider;
          class OceanLoadDeformationCoefficients;
          class OceanTidesReader;
          class PotentialCoefficientsReader;
          class TideSystem;
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

          class GravityFieldFactory : public ::java::lang::Object {
           public:
            enum {
              mid_addDefaultOceanTidesReaders_ff7cb6c242604316,
              mid_addDefaultPotentialCoefficientsReaders_ff7cb6c242604316,
              mid_addOceanTidesReader_ee0d26b4bbabbfbf,
              mid_addPotentialCoefficientsReader_71869fcd17a69cc7,
              mid_clearOceanTidesReaders_ff7cb6c242604316,
              mid_clearPotentialCoefficientsReaders_ff7cb6c242604316,
              mid_configureOceanLoadDeformationCoefficients_c836e871c1d3958a,
              mid_getConstantNormalizedProvider_bb5918e0884e4ae2,
              mid_getConstantUnnormalizedProvider_c4894db538d805f8,
              mid_getGravityFields_0b533a519307756d,
              mid_getNormalizedProvider_c4c73ebc544a3972,
              mid_getNormalizedProvider_47519026ac46bd97,
              mid_getNormalizedProvider_b6f9da14e9666c56,
              mid_getOceanLoadDeformationCoefficients_73c3e0c37fcdfda8,
              mid_getOceanTidesWaves_4e3c0741dd4bb632,
              mid_getUnnormalizationFactors_257ef40acf1ad25f,
              mid_getUnnormalizedProvider_0c90473246f89be5,
              mid_getUnnormalizedProvider_bc2bae0b3b31fcf0,
              mid_getUnnormalizedProvider_e19081210481e857,
              mid_readGravityField_d70c66dab04a3d84,
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
