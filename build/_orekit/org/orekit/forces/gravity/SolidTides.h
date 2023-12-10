#ifndef org_orekit_forces_gravity_SolidTides_H
#define org_orekit_forces_gravity_SolidTides_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
    class Field;
  }
  namespace orekit {
    namespace propagation {
      namespace events {
        class EventDetector;
        class FieldEventDetector;
      }
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace utils {
      class IERSConventions;
      class ParameterDriver;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class UT1Scale;
    }
    namespace forces {
      class ForceModel;
      namespace gravity {
        namespace potential {
          class TideSystem;
        }
      }
    }
    namespace bodies {
      class CelestialBody;
    }
  }
}
namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
    class List;
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
            mid_init$_65d48fb0e0a62b88,
            mid_init$_86cb61f7db6d3e91,
            mid_acceleration_b42ac4b5bfb80fab,
            mid_acceleration_8954761face5e1a7,
            mid_dependsOnPositionOnly_b108b35ef48e27bd,
            mid_getEventDetectors_20f6d2b462aaef4b,
            mid_getFieldEventDetectors_361313cd1a9c693a,
            mid_getParametersDrivers_2afa36052df4765d,
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
