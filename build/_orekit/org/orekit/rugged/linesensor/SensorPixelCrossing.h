#ifndef org_orekit_rugged_linesensor_SensorPixelCrossing_H
#define org_orekit_rugged_linesensor_SensorPixelCrossing_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace rugged {
      namespace linesensor {
        class LineSensor;
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
    namespace rugged {
      namespace linesensor {

        class SensorPixelCrossing : public ::java::lang::Object {
         public:
          enum {
            mid_init$_98694b02a500db1c,
            mid_locatePixel_209f08246d708042,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SensorPixelCrossing(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SensorPixelCrossing(const SensorPixelCrossing& obj) : ::java::lang::Object(obj) {}

          SensorPixelCrossing(const ::org::orekit::rugged::linesensor::LineSensor &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jint, jdouble);

          jdouble locatePixel(const ::org::orekit::time::AbsoluteDate &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {
        extern PyType_Def PY_TYPE_DEF(SensorPixelCrossing);
        extern PyTypeObject *PY_TYPE(SensorPixelCrossing);

        class t_SensorPixelCrossing {
        public:
          PyObject_HEAD
          SensorPixelCrossing object;
          static PyObject *wrap_Object(const SensorPixelCrossing&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
