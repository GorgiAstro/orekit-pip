#ifndef org_orekit_gnss_DOP_H
#define org_orekit_gnss_DOP_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class GeodeticPoint;
    }
    namespace time {
      class AbsoluteDate;
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
    namespace gnss {

      class DOP : public ::java::lang::Object {
       public:
        enum {
          mid_init$_9685a2714fd60e95,
          mid_getDate_c325492395d89b24,
          mid_getGdop_b74f83833fdad017,
          mid_getGnssNb_55546ef6a647f39b,
          mid_getHdop_b74f83833fdad017,
          mid_getLocation_963915d358b1e63a,
          mid_getPdop_b74f83833fdad017,
          mid_getTdop_b74f83833fdad017,
          mid_getVdop_b74f83833fdad017,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DOP(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DOP(const DOP& obj) : ::java::lang::Object(obj) {}

        DOP(const ::org::orekit::bodies::GeodeticPoint &, const ::org::orekit::time::AbsoluteDate &, jint, jdouble, jdouble, jdouble, jdouble, jdouble);

        ::org::orekit::time::AbsoluteDate getDate() const;
        jdouble getGdop() const;
        jint getGnssNb() const;
        jdouble getHdop() const;
        ::org::orekit::bodies::GeodeticPoint getLocation() const;
        jdouble getPdop() const;
        jdouble getTdop() const;
        jdouble getVdop() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      extern PyType_Def PY_TYPE_DEF(DOP);
      extern PyTypeObject *PY_TYPE(DOP);

      class t_DOP {
      public:
        PyObject_HEAD
        DOP object;
        static PyObject *wrap_Object(const DOP&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
