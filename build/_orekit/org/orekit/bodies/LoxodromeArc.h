#ifndef org_orekit_bodies_LoxodromeArc_H
#define org_orekit_bodies_LoxodromeArc_H

#include "org/orekit/bodies/Loxodrome.h"

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

      class LoxodromeArc : public ::org::orekit::bodies::Loxodrome {
       public:
        enum {
          mid_init$_4844c9c998947019,
          mid_init$_7ddbea5e851c6edb,
          mid_calculatePointAlongArc_e381e99dbfc90980,
          mid_getDistance_456d9a2f64d6b28d,
          mid_getFinalPoint_fabc97b1aefe5844,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LoxodromeArc(jobject obj) : ::org::orekit::bodies::Loxodrome(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LoxodromeArc(const LoxodromeArc& obj) : ::org::orekit::bodies::Loxodrome(obj) {}

        LoxodromeArc(const ::org::orekit::bodies::GeodeticPoint &, const ::org::orekit::bodies::GeodeticPoint &, const ::org::orekit::bodies::OneAxisEllipsoid &);
        LoxodromeArc(const ::org::orekit::bodies::GeodeticPoint &, const ::org::orekit::bodies::GeodeticPoint &, const ::org::orekit::bodies::OneAxisEllipsoid &, jdouble);

        ::org::orekit::bodies::GeodeticPoint calculatePointAlongArc(jdouble) const;
        jdouble getDistance() const;
        ::org::orekit::bodies::GeodeticPoint getFinalPoint() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace bodies {
      extern PyType_Def PY_TYPE_DEF(LoxodromeArc);
      extern PyTypeObject *PY_TYPE(LoxodromeArc);

      class t_LoxodromeArc {
      public:
        PyObject_HEAD
        LoxodromeArc object;
        static PyObject *wrap_Object(const LoxodromeArc&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
