#ifndef org_orekit_forces_gravity_SolidTides_H
#define org_orekit_forces_gravity_SolidTides_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldVector3D;
        }
      }
    }
    class Field;
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace time {
      class UT1Scale;
    }
    namespace propagation {
      namespace events {
        class FieldEventDetector;
        class EventDetector;
      }
      class SpacecraftState;
      class FieldSpacecraftState;
    }
    namespace utils {
      class IERSConventions;
      class ParameterDriver;
    }
    namespace bodies {
      class CelestialBody;
    }
    namespace forces {
      class ForceModel;
      namespace gravity {
        namespace potential {
          class TideSystem;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
    namespace stream {
      class Stream;
    }
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        class SolidTides : public ::java::lang::Object {
         public:
          enum {
            mid_init$_b016086181b32719,
            mid_init$_34b273274ee3b9aa,
            mid_acceleration_78989e44b99f7cc2,
            mid_acceleration_00aba28d3abe9a8c,
            mid_dependsOnPositionOnly_e470b6d9e0d979db,
            mid_getEventDetectors_a68a17dd093f796d,
            mid_getFieldEventDetectors_1328ddb491531a35,
            mid_getParametersDrivers_a6156df500549a58,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SolidTides(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SolidTides(const SolidTides& obj) : ::java::lang::Object(obj) {}

          static jint DEFAULT_POINTS;
          static jdouble DEFAULT_STEP;

          SolidTides(const ::org::orekit::frames::Frame &, jdouble, jdouble, const ::org::orekit::forces::gravity::potential::TideSystem &, const ::org::orekit::utils::IERSConventions &, const ::org::orekit::time::UT1Scale &, const JArray< ::org::orekit::bodies::CelestialBody > &);
          SolidTides(const ::org::orekit::frames::Frame &, jdouble, jdouble, const ::org::orekit::forces::gravity::potential::TideSystem &, jboolean, jdouble, jint, const ::org::orekit::utils::IERSConventions &, const ::org::orekit::time::UT1Scale &, const JArray< ::org::orekit::bodies::CelestialBody > &);

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
          jboolean dependsOnPositionOnly() const;
          ::java::util::stream::Stream getEventDetectors() const;
          ::java::util::stream::Stream getFieldEventDetectors(const ::org::hipparchus::Field &) const;
          ::java::util::List getParametersDrivers() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        extern PyType_Def PY_TYPE_DEF(SolidTides);
        extern PyTypeObject *PY_TYPE(SolidTides);

        class t_SolidTides {
        public:
          PyObject_HEAD
          SolidTides object;
          static PyObject *wrap_Object(const SolidTides&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
