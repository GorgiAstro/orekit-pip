#ifndef org_orekit_estimation_measurements_gnss_MeasurementCombinationFactory_H
#define org_orekit_estimation_measurements_gnss_MeasurementCombinationFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class SatelliteSystem;
    }
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class NarrowLaneCombination;
          class MelbourneWubbenaCombination;
          class GeometryFreeCombination;
          class WideLaneCombination;
          class PhaseMinusCodeCombination;
          class IonosphereFreeCombination;
          class GRAPHICCombination;
        }
      }
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
              mid_getGRAPHICCombination_d7bec929149053a7,
              mid_getGeometryFreeCombination_402a059c905d285c,
              mid_getIonosphereFreeCombination_1229de4c47e96ea4,
              mid_getMelbourneWubbenaCombination_19fc771d40383d9e,
              mid_getNarrowLaneCombination_07f29255bc3eb116,
              mid_getPhaseMinusCodeCombination_772c0092ad4a1d41,
              mid_getWideLaneCombination_2e88547eebb61d89,
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
