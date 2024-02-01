#ifndef org_orekit_bodies_LoxodromeArc_H
#define org_orekit_bodies_LoxodromeArc_H

#include "org/orekit/bodies/Loxodrome.h"

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

      class LoxodromeArc : public ::org::orekit::bodies::Loxodrome {
       public:
        enum {
          mid_init$_3c96165ad9f4c0ab,
          mid_init$_586d4a08b742b674,
          mid_calculatePointAlongArc_ec6f4d2d88b0733c,
          mid_getDistance_9981f74b2d109da6,
          mid_getFinalPoint_bdca252cae79438c,
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
