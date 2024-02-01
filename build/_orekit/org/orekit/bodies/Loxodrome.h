#ifndef org_orekit_bodies_Loxodrome_H
#define org_orekit_bodies_Loxodrome_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class GeodeticPoint;
      class OneAxisEllipsoid;
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
    namespace bodies {

      class Loxodrome : public ::java::lang::Object {
       public:
        enum {
          mid_init$_218fd8b99ca99ca0,
          mid_init$_fae9e6423d088e39,
          mid_getAltitude_9981f74b2d109da6,
          mid_getAzimuth_9981f74b2d109da6,
          mid_getBody_dc8275c31111ad9c,
          mid_getPoint_bdca252cae79438c,
          mid_pointAtDistance_ec6f4d2d88b0733c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Loxodrome(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Loxodrome(const Loxodrome& obj) : ::java::lang::Object(obj) {}

        Loxodrome(const ::org::orekit::bodies::GeodeticPoint &, jdouble, const ::org::orekit::bodies::OneAxisEllipsoid &);
        Loxodrome(const ::org::orekit::bodies::GeodeticPoint &, jdouble, const ::org::orekit::bodies::OneAxisEllipsoid &, jdouble);

        jdouble getAltitude() const;
        jdouble getAzimuth() const;
        ::org::orekit::bodies::OneAxisEllipsoid getBody() const;
        ::org::orekit::bodies::GeodeticPoint getPoint() const;
        ::org::orekit::bodies::GeodeticPoint pointAtDistance(jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace bodies {
      extern PyType_Def PY_TYPE_DEF(Loxodrome);
      extern PyTypeObject *PY_TYPE(Loxodrome);

      class t_Loxodrome {
      public:
        PyObject_HEAD
        Loxodrome object;
        static PyObject *wrap_Object(const Loxodrome&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
