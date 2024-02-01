#ifndef org_orekit_forces_gravity_OceanTides_H
#define org_orekit_forces_gravity_OceanTides_H

#include "java/lang/Object.h"

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
namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriver;
      class IERSConventions;
    }
    namespace propagation {
      namespace events {
        class FieldEventDetector;
        class EventDetector;
      }
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace forces {
      namespace gravity {
        namespace potential {
          class GravityFields;
        }
      }
      class ForceModel;
    }
    namespace time {
      class UT1Scale;
    }
    namespace frames {
      class Frame;
    }
  }
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
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        class OceanTides : public ::java::lang::Object {
         public:
          enum {
            mid_init$_4ec4d79c3f1a5fea,
            mid_init$_4b789182888c9d81,
            mid_init$_88d634625dc0aa67,
            mid_acceleration_5e147f44c28a35c9,
            mid_acceleration_9816b8f76e94356a,
            mid_dependsOnPositionOnly_eee3de00fe971136,
            mid_getEventDetectors_11e4ca8182c1933d,
            mid_getFieldEventDetectors_d3db121d9deb0312,
            mid_getParametersDrivers_d751c1a57012b438,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OceanTides(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OceanTides(const OceanTides& obj) : ::java::lang::Object(obj) {}

          static jint DEFAULT_POINTS;
          static jdouble DEFAULT_STEP;

          OceanTides(const ::org::orekit::frames::Frame &, jdouble, jdouble, jint, jint, const ::org::orekit::utils::IERSConventions &, const ::org::orekit::time::UT1Scale &);
          OceanTides(const ::org::orekit::frames::Frame &, jdouble, jdouble, jboolean, jdouble, jint, jint, jint, const ::org::orekit::utils::IERSConventions &, const ::org::orekit::time::UT1Scale &);
          OceanTides(const ::org::orekit::frames::Frame &, jdouble, jdouble, jboolean, jdouble, jint, jint, jint, const ::org::orekit::utils::IERSConventions &, const ::org::orekit::time::UT1Scale &, const ::org::orekit::forces::gravity::potential::GravityFields &);

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
        extern PyType_Def PY_TYPE_DEF(OceanTides);
        extern PyTypeObject *PY_TYPE(OceanTides);

        class t_OceanTides {
        public:
          PyObject_HEAD
          OceanTides object;
          static PyObject *wrap_Object(const OceanTides&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
