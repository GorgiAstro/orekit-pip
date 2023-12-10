#ifndef org_orekit_estimation_measurements_gnss_MeasurementCombinationFactory_H
#define org_orekit_estimation_measurements_gnss_MeasurementCombinationFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class NarrowLaneCombination;
          class GeometryFreeCombination;
          class PhaseMinusCodeCombination;
          class IonosphereFreeCombination;
          class WideLaneCombination;
          class GRAPHICCombination;
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
              mid_getGRAPHICCombination_979ce7b43d1b2c80,
              mid_getGeometryFreeCombination_a2abfffa847f5fff,
              mid_getIonosphereFreeCombination_9f9496c58dd1dc9e,
              mid_getMelbourneWubbenaCombination_03477675e9c07cf5,
              mid_getNarrowLaneCombination_8d190c6f7f1e4307,
              mid_getPhaseMinusCodeCombination_d4fcb8d3a08c75c7,
              mid_getWideLaneCombination_37a6597594b2dcf4,
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
