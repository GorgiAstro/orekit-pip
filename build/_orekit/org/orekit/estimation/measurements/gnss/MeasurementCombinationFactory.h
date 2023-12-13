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
          class IonosphereFreeCombination;
          class PhaseMinusCodeCombination;
          class GeometryFreeCombination;
          class NarrowLaneCombination;
          class MelbourneWubbenaCombination;
          class GRAPHICCombination;
          class WideLaneCombination;
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
              mid_getGRAPHICCombination_05eaead3f6c962c2,
              mid_getGeometryFreeCombination_121b9cf82dc3bdc3,
              mid_getIonosphereFreeCombination_3545ecbb84db7a18,
              mid_getMelbourneWubbenaCombination_399e07cbc9c075f2,
              mid_getNarrowLaneCombination_3ce07ee6ddc5d392,
              mid_getPhaseMinusCodeCombination_1c5eaad33f9b1105,
              mid_getWideLaneCombination_fd7b4de373a995c4,
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
