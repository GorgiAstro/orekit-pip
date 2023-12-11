#ifndef org_orekit_estimation_measurements_gnss_MeasurementCombinationFactory_H
#define org_orekit_estimation_measurements_gnss_MeasurementCombinationFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class PhaseMinusCodeCombination;
          class GeometryFreeCombination;
          class IonosphereFreeCombination;
          class NarrowLaneCombination;
          class GRAPHICCombination;
          class MelbourneWubbenaCombination;
          class WideLaneCombination;
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
              mid_getGRAPHICCombination_b80d8f8528f7c532,
              mid_getGeometryFreeCombination_67d54b328b5ec799,
              mid_getIonosphereFreeCombination_d842a68344c6ba82,
              mid_getMelbourneWubbenaCombination_10a56ef5d39182b1,
              mid_getNarrowLaneCombination_32012fea9b2fc3d3,
              mid_getPhaseMinusCodeCombination_96d7bd866e3f6da7,
              mid_getWideLaneCombination_183fcfefa59f744b,
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
