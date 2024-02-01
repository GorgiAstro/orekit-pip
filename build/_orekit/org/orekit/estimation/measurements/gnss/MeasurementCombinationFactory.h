#ifndef org_orekit_estimation_measurements_gnss_MeasurementCombinationFactory_H
#define org_orekit_estimation_measurements_gnss_MeasurementCombinationFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class IonosphereFreeCombination;
          class PhaseMinusCodeCombination;
          class GRAPHICCombination;
          class GeometryFreeCombination;
          class NarrowLaneCombination;
          class WideLaneCombination;
          class MelbourneWubbenaCombination;
        }
      }
    }
    namespace gnss {
      class SatelliteSystem;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          class MeasurementCombinationFactory : public ::java::lang::Object {
           public:
            enum {
              mid_getGRAPHICCombination_b92663e8da5c43ad,
              mid_getGeometryFreeCombination_dba7fd906e3c5e63,
              mid_getIonosphereFreeCombination_dafeb9ffc6910ed5,
              mid_getMelbourneWubbenaCombination_34c7738020dbdd5b,
              mid_getNarrowLaneCombination_42b52900ed481da2,
              mid_getPhaseMinusCodeCombination_208509c493513fe6,
              mid_getWideLaneCombination_caecb67386603e44,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MeasurementCombinationFactory(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MeasurementCombinationFactory(const MeasurementCombinationFactory& obj) : ::java::lang::Object(obj) {}

            static ::org::orekit::estimation::measurements::gnss::GRAPHICCombination getGRAPHICCombination(const ::org::orekit::gnss::SatelliteSystem &);
            static ::org::orekit::estimation::measurements::gnss::GeometryFreeCombination getGeometryFreeCombination(const ::org::orekit::gnss::SatelliteSystem &);
            static ::org::orekit::estimation::measurements::gnss::IonosphereFreeCombination getIonosphereFreeCombination(const ::org::orekit::gnss::SatelliteSystem &);
            static ::org::orekit::estimation::measurements::gnss::MelbourneWubbenaCombination getMelbourneWubbenaCombination(const ::org::orekit::gnss::SatelliteSystem &);
            static ::org::orekit::estimation::measurements::gnss::NarrowLaneCombination getNarrowLaneCombination(const ::org::orekit::gnss::SatelliteSystem &);
            static ::org::orekit::estimation::measurements::gnss::PhaseMinusCodeCombination getPhaseMinusCodeCombination(const ::org::orekit::gnss::SatelliteSystem &);
            static ::org::orekit::estimation::measurements::gnss::WideLaneCombination getWideLaneCombination(const ::org::orekit::gnss::SatelliteSystem &);
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          extern PyType_Def PY_TYPE_DEF(MeasurementCombinationFactory);
          extern PyTypeObject *PY_TYPE(MeasurementCombinationFactory);

          class t_MeasurementCombinationFactory {
          public:
            PyObject_HEAD
            MeasurementCombinationFactory object;
            static PyObject *wrap_Object(const MeasurementCombinationFactory&);
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
