#ifndef org_orekit_forces_gravity_potential_GravityFieldFactory_H
#define org_orekit_forces_gravity_potential_GravityFieldFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          class LazyLoadedGravityFields;
          class OceanTidesReader;
          class UnnormalizedSphericalHarmonicsProvider;
          class PotentialCoefficientsReader;
          class OceanLoadDeformationCoefficients;
          class NormalizedSphericalHarmonicsProvider;
          class TideSystem;
          class OceanTidesWave;
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
              mid_addDefaultOceanTidesReaders_7ae3461a92a43152,
              mid_addDefaultPotentialCoefficientsReaders_7ae3461a92a43152,
              mid_addOceanTidesReader_a19ff095f5dde418,
              mid_addPotentialCoefficientsReader_c27d2a7feed8b0f7,
              mid_clearOceanTidesReaders_7ae3461a92a43152,
              mid_clearPotentialCoefficientsReaders_7ae3461a92a43152,
              mid_configureOceanLoadDeformationCoefficients_6f5119332010876e,
              mid_getConstantNormalizedProvider_f23a878f7162aa63,
              mid_getConstantUnnormalizedProvider_4ff4b36d038a4d30,
              mid_getGravityFields_4859dab0854ea5fb,
              mid_getNormalizedProvider_3aeac0fafd85c71f,
              mid_getNormalizedProvider_cd3e5e7b86486169,
              mid_getNormalizedProvider_4e92c72ca26ca4f1,
              mid_getOceanLoadDeformationCoefficients_7fa94372497f9b33,
              mid_getOceanTidesWaves_4a0f7788a82593c4,
              mid_getUnnormalizationFactors_f76bfea7a1ff2879,
              mid_getUnnormalizedProvider_8888b7d9f03b3bbf,
              mid_getUnnormalizedProvider_d3751d16c1e699b1,
              mid_getUnnormalizedProvider_8d51d69981863dcd,
              mid_readGravityField_f25139d655c52fed,
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
