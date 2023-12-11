#ifndef org_orekit_forces_maneuvers_propulsion_ThrustDirectionAndAttitudeProvider_H
#define org_orekit_forces_maneuvers_propulsion_ThrustDirectionAndAttitudeProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class Attitude;
      class AttitudeProvider;
      class FieldAttitude;
    }
    namespace forces {
      namespace maneuvers {
        namespace propulsion {
          class ThrustDirectionProvider;
          class ThrustDirectionAndAttitudeProvider;
        }
      }
    }
    namespace frames {
      class LOF;
      class Frame;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class PVCoordinatesProvider;
      class FieldPVCoordinatesProvider;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
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
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          class ThrustDirectionAndAttitudeProvider : public ::java::lang::Object {
           public:
            enum {
              mid_buildFromCustomAttitude_f505ac706dd9e1f4,
              mid_buildFromDirectionInFrame_607094d91814431a,
              mid_buildFromDirectionInLOF_8aa09489b3ae0491,
              mid_buildFromFixedDirectionInSatelliteFrame_80eb1072ad4c73de,
              mid_getAttitude_1306ac39e1d2de3f,
              mid_getAttitude_77e3383de01f3e48,
              mid_getManeuverAttitudeProvider_6df6b78ab9377151,
              mid_getThrusterAxisInSatelliteFrame_f88961cca75a2c0a,
              mid_getAttitudeFromFrame_1306ac39e1d2de3f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ThrustDirectionAndAttitudeProvider(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ThrustDirectionAndAttitudeProvider(const ThrustDirectionAndAttitudeProvider& obj) : ::java::lang::Object(obj) {}

            static ThrustDirectionAndAttitudeProvider buildFromCustomAttitude(const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
            static ThrustDirectionAndAttitudeProvider buildFromDirectionInFrame(const ::org::orekit::frames::Frame &, const ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionProvider &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
            static ThrustDirectionAndAttitudeProvider buildFromDirectionInLOF(const ::org::orekit::frames::LOF &, const ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionProvider &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
            static ThrustDirectionAndAttitudeProvider buildFromFixedDirectionInSatelliteFrame(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
            ::org::orekit::attitudes::Attitude getAttitude(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
            ::org::orekit::attitudes::FieldAttitude getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
            ::org::orekit::attitudes::AttitudeProvider getManeuverAttitudeProvider() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getThrusterAxisInSatelliteFrame() const;
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
      namespace maneuvers {
        namespace propulsion {
          extern PyType_Def PY_TYPE_DEF(ThrustDirectionAndAttitudeProvider);
          extern PyTypeObject *PY_TYPE(ThrustDirectionAndAttitudeProvider);

          class t_ThrustDirectionAndAttitudeProvider {
          public:
            PyObject_HEAD
            ThrustDirectionAndAttitudeProvider object;
            static PyObject *wrap_Object(const ThrustDirectionAndAttitudeProvider&);
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
