#ifndef org_orekit_forces_maneuvers_propulsion_ThrustDirectionAndAttitudeProvider_H
#define org_orekit_forces_maneuvers_propulsion_ThrustDirectionAndAttitudeProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
      class FieldAttitude;
      class Attitude;
    }
    namespace utils {
      class FieldPVCoordinatesProvider;
      class PVCoordinatesProvider;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace frames {
      class Frame;
      class LOF;
    }
    namespace forces {
      namespace maneuvers {
        namespace propulsion {
          class ThrustDirectionAndAttitudeProvider;
          class ThrustDirectionProvider;
        }
      }
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
              mid_buildFromCustomAttitude_630b12cc4bbba462,
              mid_buildFromDirectionInFrame_f9da80b6cff579e4,
              mid_buildFromDirectionInLOF_867467bf597b045b,
              mid_buildFromFixedDirectionInSatelliteFrame_063651f4feb64ece,
              mid_getAttitude_aab1c6ab68ffdcbb,
              mid_getAttitude_a02177519e1b6a45,
              mid_getManeuverAttitudeProvider_2f73d1f4460b8d6c,
              mid_getThrusterAxisInSatelliteFrame_032312bdeb3f2f93,
              mid_getAttitudeFromFrame_a02177519e1b6a45,
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
            ::org::orekit::attitudes::FieldAttitude getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
            ::org::orekit::attitudes::Attitude getAttitude(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
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
