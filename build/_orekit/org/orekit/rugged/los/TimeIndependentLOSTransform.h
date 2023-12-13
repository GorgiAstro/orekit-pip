#ifndef org_orekit_rugged_los_TimeIndependentLOSTransform_H
#define org_orekit_rugged_los_TimeIndependentLOSTransform_H

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
  }
  namespace orekit {
    namespace rugged {
      namespace utils {
        class DerivativeGenerator;
      }
    }
    namespace utils {
      class ParameterDriver;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    namespace stream {
      class Stream;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        class TimeIndependentLOSTransform : public ::java::lang::Object {
         public:
          enum {
            mid_getParametersDrivers_14e21bf777ff0ccf,
            mid_transformLOS_23b7762b1a728d4c,
            mid_transformLOS_624b61103e61016a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TimeIndependentLOSTransform(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TimeIndependentLOSTransform(const TimeIndependentLOSTransform& obj) : ::java::lang::Object(obj) {}

          ::java::util::stream::Stream getParametersDrivers() const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D transformLOS(jint, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D transformLOS(jint, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::rugged::utils::DerivativeGenerator &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {
        extern PyType_Def PY_TYPE_DEF(TimeIndependentLOSTransform);
        extern PyTypeObject *PY_TYPE(TimeIndependentLOSTransform);

        class t_TimeIndependentLOSTransform {
        public:
          PyObject_HEAD
          TimeIndependentLOSTransform object;
          static PyObject *wrap_Object(const TimeIndependentLOSTransform&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
