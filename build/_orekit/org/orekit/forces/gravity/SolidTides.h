#ifndef org_orekit_forces_gravity_SolidTides_H
#define org_orekit_forces_gravity_SolidTides_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
    class Field;
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      namespace events {
        class EventDetector;
        class FieldEventDetector;
      }
      class SpacecraftState;
    }
    namespace bodies {
      class CelestialBody;
    }
    namespace forces {
      namespace gravity {
        namespace potential {
          class TideSystem;
        }
      }
      class ForceModel;
    }
    namespace utils {
      class ParameterDriver;
      class IERSConventions;
    }
    namespace time {
      class UT1Scale;
    }
    namespace frames {
      class Frame;
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
            mid_init$_dc6d7777df2d1607,
            mid_init$_38f73b113c0a4fc1,
            mid_acceleration_61944e27a39e8290,
            mid_acceleration_b61fb59a041240c6,
            mid_dependsOnPositionOnly_89b302893bdbe1f1,
            mid_getEventDetectors_d7cce92225eb0db2,
            mid_getFieldEventDetectors_8130af76f6998f44,
            mid_getParametersDrivers_0d9551367f7ecdef,
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

          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
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
