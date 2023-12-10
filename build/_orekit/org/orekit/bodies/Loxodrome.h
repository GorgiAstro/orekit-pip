#ifndef org_orekit_bodies_Loxodrome_H
#define org_orekit_bodies_Loxodrome_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace bodies {
      class OneAxisEllipsoid;
      class GeodeticPoint;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace bodies {

      class Loxodrome : public ::java::lang::Object {
       public:
        enum {
          mid_init$_e44c7e3973d8d7ab,
          mid_init$_99012ad18b805d28,
          mid_getAltitude_456d9a2f64d6b28d,
          mid_getAzimuth_456d9a2f64d6b28d,
          mid_getBody_940814a1dcab100a,
          mid_getPoint_fabc97b1aefe5844,
          mid_pointAtDistance_e381e99dbfc90980,
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
