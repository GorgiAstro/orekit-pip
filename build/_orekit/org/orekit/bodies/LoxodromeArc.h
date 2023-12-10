#ifndef org_orekit_bodies_LoxodromeArc_H
#define org_orekit_bodies_LoxodromeArc_H

#include "org/orekit/bodies/Loxodrome.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class OneAxisEllipsoid;
      class GeodeticPoint;
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
          mid_init$_e382dba4b5c7f7ec,
          mid_init$_bba3738469ae684f,
          mid_calculatePointAlongArc_a6daea86c60e2668,
          mid_getDistance_dff5885c2c873297,
          mid_getFinalPoint_82d0a9bcd06489bb,
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
