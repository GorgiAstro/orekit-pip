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
          mid_init$_a9ff5df2027c94d3,
          mid_init$_c225dd5200da8e62,
          mid_getAltitude_557b8123390d8d0c,
          mid_getAzimuth_557b8123390d8d0c,
          mid_getBody_0c55bd1adf955c4c,
          mid_getPoint_8672b163b0e4a5a3,
          mid_pointAtDistance_fdfcc3c813d87498,
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
