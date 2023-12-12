#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Tan.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Tan::class$ = NULL;
        jmethodID *Tan::mids$ = NULL;
        bool Tan::live$ = false;

        jclass Tan::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Tan");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Tan::Tan() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Tan::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Tan::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Tan_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Tan_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Tan_init_(t_Tan *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Tan_value(t_Tan *self, PyObject *args);

        static PyMethodDef t_Tan__methods_[] = {
          DECLARE_METHOD(t_Tan, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tan, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tan, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Tan)[] = {
          { Py_tp_methods, t_Tan__methods_ },
          { Py_tp_init, (void *) t_Tan_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Tan)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Tan, t_Tan, Tan);

        void t_Tan::install(PyObject *module)
        {
          installType(&PY_TYPE(Tan), &PY_TYPE_DEF(Tan), module, "Tan", 0);
        }

        void t_Tan::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tan), "class_", make_descriptor(Tan::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tan), "wrapfn_", make_descriptor(t_Tan::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tan), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Tan_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Tan::initializeClass, 1)))
            return NULL;
          return t_Tan::wrap_Object(Tan(((t_Tan *) arg)->object.this$));
        }
        static PyObject *t_Tan_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Tan::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Tan_init_(t_Tan *self, PyObject *args, PyObject *kwds)
        {
          Tan object((jobject) NULL);

          INT_CALL(object = Tan());
          self->object = object;

          return 0;
        }

        static PyObject *t_Tan_value(t_Tan *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3.h"
#include "org/orekit/files/sp3/SP3Header.h"
#include "java/util/Map.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "org/orekit/files/sp3/SP3.h"
#include "java/util/Collection.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/files/sp3/SP3Segment.h"
#include "org/orekit/files/sp3/SP3Ephemeris.h"
#include "org/orekit/files/sp3/SP3Coordinate.h"
#include "java/lang/String.h"
#include "org/orekit/errors/OrekitException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3::class$ = NULL;
        jmethodID *SP3::mids$ = NULL;
        bool SP3::live$ = false;

        jclass SP3::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fda6b007012d679a] = env->getMethodID(cls, "<init>", "(DILorg/orekit/frames/Frame;)V");
            mids$[mid_addSatellite_f5ffdf29129ef90a] = env->getMethodID(cls, "addSatellite", "(Ljava/lang/String;)V");
            mids$[mid_containsSatellite_fd2162b8a05a22fe] = env->getMethodID(cls, "containsSatellite", "(Ljava/lang/String;)Z");
            mids$[mid_getEphemeris_436340884b8e841c] = env->getMethodID(cls, "getEphemeris", "(Ljava/lang/String;)Lorg/orekit/files/sp3/SP3Ephemeris;");
            mids$[mid_getEphemeris_5c60541aa8c904eb] = env->getMethodID(cls, "getEphemeris", "(I)Lorg/orekit/files/sp3/SP3Ephemeris;");
            mids$[mid_getHeader_b34b324ec840e668] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/sp3/SP3Header;");
            mids$[mid_getSatelliteCount_412668abc8d889e9] = env->getMethodID(cls, "getSatelliteCount", "()I");
            mids$[mid_getSatellites_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");
            mids$[mid_splice_bc34dcc3e09bb00e] = env->getStaticMethodID(cls, "splice", "(Ljava/util/Collection;)Lorg/orekit/files/sp3/SP3;");
            mids$[mid_validate_5a8308d61cc2a692] = env->getMethodID(cls, "validate", "(ZLjava/lang/String;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3::SP3(jdouble a0, jint a1, const ::org::orekit::frames::Frame & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fda6b007012d679a, a0, a1, a2.this$)) {}

        void SP3::addSatellite(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addSatellite_f5ffdf29129ef90a], a0.this$);
        }

        jboolean SP3::containsSatellite(const ::java::lang::String & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_containsSatellite_fd2162b8a05a22fe], a0.this$);
        }

        ::org::orekit::files::sp3::SP3Ephemeris SP3::getEphemeris(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::sp3::SP3Ephemeris(env->callObjectMethod(this$, mids$[mid_getEphemeris_436340884b8e841c], a0.this$));
        }

        ::org::orekit::files::sp3::SP3Ephemeris SP3::getEphemeris(jint a0) const
        {
          return ::org::orekit::files::sp3::SP3Ephemeris(env->callObjectMethod(this$, mids$[mid_getEphemeris_5c60541aa8c904eb], a0));
        }

        ::org::orekit::files::sp3::SP3Header SP3::getHeader() const
        {
          return ::org::orekit::files::sp3::SP3Header(env->callObjectMethod(this$, mids$[mid_getHeader_b34b324ec840e668]));
        }

        jint SP3::getSatelliteCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getSatelliteCount_412668abc8d889e9]);
        }

        ::java::util::Map SP3::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_1e62c2f73fbdd1c4]));
        }

        SP3 SP3::splice(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SP3(env->callStaticObjectMethod(cls, mids$[mid_splice_bc34dcc3e09bb00e], a0.this$));
        }

        void SP3::validate(jboolean a0, const ::java::lang::String & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_validate_5a8308d61cc2a692], a0, a1.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {
        static PyObject *t_SP3_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3_init_(t_SP3 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3_addSatellite(t_SP3 *self, PyObject *arg);
        static PyObject *t_SP3_containsSatellite(t_SP3 *self, PyObject *arg);
        static PyObject *t_SP3_getEphemeris(t_SP3 *self, PyObject *args);
        static PyObject *t_SP3_getHeader(t_SP3 *self);
        static PyObject *t_SP3_getSatelliteCount(t_SP3 *self);
        static PyObject *t_SP3_getSatellites(t_SP3 *self);
        static PyObject *t_SP3_splice(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3_validate(t_SP3 *self, PyObject *args);
        static PyObject *t_SP3_get__header(t_SP3 *self, void *data);
        static PyObject *t_SP3_get__satelliteCount(t_SP3 *self, void *data);
        static PyObject *t_SP3_get__satellites(t_SP3 *self, void *data);
        static PyGetSetDef t_SP3__fields_[] = {
          DECLARE_GET_FIELD(t_SP3, header),
          DECLARE_GET_FIELD(t_SP3, satelliteCount),
          DECLARE_GET_FIELD(t_SP3, satellites),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3__methods_[] = {
          DECLARE_METHOD(t_SP3, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3, addSatellite, METH_O),
          DECLARE_METHOD(t_SP3, containsSatellite, METH_O),
          DECLARE_METHOD(t_SP3, getEphemeris, METH_VARARGS),
          DECLARE_METHOD(t_SP3, getHeader, METH_NOARGS),
          DECLARE_METHOD(t_SP3, getSatelliteCount, METH_NOARGS),
          DECLARE_METHOD(t_SP3, getSatellites, METH_NOARGS),
          DECLARE_METHOD(t_SP3, splice, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3, validate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3)[] = {
          { Py_tp_methods, t_SP3__methods_ },
          { Py_tp_init, (void *) t_SP3_init_ },
          { Py_tp_getset, t_SP3__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3, t_SP3, SP3);

        void t_SP3::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3), &PY_TYPE_DEF(SP3), module, "SP3", 0);
        }

        void t_SP3::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3), "class_", make_descriptor(SP3::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3), "wrapfn_", make_descriptor(t_SP3::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SP3_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3::initializeClass, 1)))
            return NULL;
          return t_SP3::wrap_Object(SP3(((t_SP3 *) arg)->object.this$));
        }
        static PyObject *t_SP3_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3_init_(t_SP3 *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jint a1;
          ::org::orekit::frames::Frame a2((jobject) NULL);
          SP3 object((jobject) NULL);

          if (!parseArgs(args, "DIk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = SP3(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SP3_addSatellite(t_SP3 *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.addSatellite(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSatellite", arg);
          return NULL;
        }

        static PyObject *t_SP3_containsSatellite(t_SP3 *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.containsSatellite(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "containsSatellite", arg);
          return NULL;
        }

        static PyObject *t_SP3_getEphemeris(t_SP3 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::files::sp3::SP3Ephemeris result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = self->object.getEphemeris(a0));
                return ::org::orekit::files::sp3::t_SP3Ephemeris::wrap_Object(result);
              }
            }
            {
              jint a0;
              ::org::orekit::files::sp3::SP3Ephemeris result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.getEphemeris(a0));
                return ::org::orekit::files::sp3::t_SP3Ephemeris::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getEphemeris", args);
          return NULL;
        }

        static PyObject *t_SP3_getHeader(t_SP3 *self)
        {
          ::org::orekit::files::sp3::SP3Header result((jobject) NULL);
          OBJ_CALL(result = self->object.getHeader());
          return ::org::orekit::files::sp3::t_SP3Header::wrap_Object(result);
        }

        static PyObject *t_SP3_getSatelliteCount(t_SP3 *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSatelliteCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SP3_getSatellites(t_SP3 *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::sp3::PY_TYPE(SP3Ephemeris));
        }

        static PyObject *t_SP3_splice(PyTypeObject *type, PyObject *arg)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          SP3 result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3::splice(a0));
            return t_SP3::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "splice", arg);
          return NULL;
        }

        static PyObject *t_SP3_validate(t_SP3 *self, PyObject *args)
        {
          jboolean a0;
          ::java::lang::String a1((jobject) NULL);

          if (!parseArgs(args, "Zs", &a0, &a1))
          {
            OBJ_CALL(self->object.validate(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "validate", args);
          return NULL;
        }

        static PyObject *t_SP3_get__header(t_SP3 *self, void *data)
        {
          ::org::orekit::files::sp3::SP3Header value((jobject) NULL);
          OBJ_CALL(value = self->object.getHeader());
          return ::org::orekit::files::sp3::t_SP3Header::wrap_Object(value);
        }

        static PyObject *t_SP3_get__satelliteCount(t_SP3 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSatelliteCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SP3_get__satellites(t_SP3 *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/SphericalCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *SphericalCoordinates::class$ = NULL;
          jmethodID *SphericalCoordinates::mids$ = NULL;
          bool SphericalCoordinates::live$ = false;

          jclass SphericalCoordinates::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/SphericalCoordinates");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2810d2bec90e7b1c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getCartesian_f88961cca75a2c0a] = env->getMethodID(cls, "getCartesian", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getPhi_557b8123390d8d0c] = env->getMethodID(cls, "getPhi", "()D");
              mids$[mid_getR_557b8123390d8d0c] = env->getMethodID(cls, "getR", "()D");
              mids$[mid_getTheta_557b8123390d8d0c] = env->getMethodID(cls, "getTheta", "()D");
              mids$[mid_toCartesianGradient_1db7c087750eaffe] = env->getMethodID(cls, "toCartesianGradient", "([D)[D");
              mids$[mid_toCartesianHessian_31bf75c889c32990] = env->getMethodID(cls, "toCartesianHessian", "([[D[D)[[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SphericalCoordinates::SphericalCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2810d2bec90e7b1c, a0.this$)) {}

          SphericalCoordinates::SphericalCoordinates(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D SphericalCoordinates::getCartesian() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCartesian_f88961cca75a2c0a]));
          }

          jdouble SphericalCoordinates::getPhi() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPhi_557b8123390d8d0c]);
          }

          jdouble SphericalCoordinates::getR() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getR_557b8123390d8d0c]);
          }

          jdouble SphericalCoordinates::getTheta() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTheta_557b8123390d8d0c]);
          }

          JArray< jdouble > SphericalCoordinates::toCartesianGradient(const JArray< jdouble > & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toCartesianGradient_1db7c087750eaffe], a0.this$));
          }

          JArray< JArray< jdouble > > SphericalCoordinates::toCartesianHessian(const JArray< JArray< jdouble > > & a0, const JArray< jdouble > & a1) const
          {
            return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_toCartesianHessian_31bf75c889c32990], a0.this$, a1.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          static PyObject *t_SphericalCoordinates_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SphericalCoordinates_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SphericalCoordinates_init_(t_SphericalCoordinates *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SphericalCoordinates_getCartesian(t_SphericalCoordinates *self);
          static PyObject *t_SphericalCoordinates_getPhi(t_SphericalCoordinates *self);
          static PyObject *t_SphericalCoordinates_getR(t_SphericalCoordinates *self);
          static PyObject *t_SphericalCoordinates_getTheta(t_SphericalCoordinates *self);
          static PyObject *t_SphericalCoordinates_toCartesianGradient(t_SphericalCoordinates *self, PyObject *arg);
          static PyObject *t_SphericalCoordinates_toCartesianHessian(t_SphericalCoordinates *self, PyObject *args);
          static PyObject *t_SphericalCoordinates_get__cartesian(t_SphericalCoordinates *self, void *data);
          static PyObject *t_SphericalCoordinates_get__phi(t_SphericalCoordinates *self, void *data);
          static PyObject *t_SphericalCoordinates_get__r(t_SphericalCoordinates *self, void *data);
          static PyObject *t_SphericalCoordinates_get__theta(t_SphericalCoordinates *self, void *data);
          static PyGetSetDef t_SphericalCoordinates__fields_[] = {
            DECLARE_GET_FIELD(t_SphericalCoordinates, cartesian),
            DECLARE_GET_FIELD(t_SphericalCoordinates, phi),
            DECLARE_GET_FIELD(t_SphericalCoordinates, r),
            DECLARE_GET_FIELD(t_SphericalCoordinates, theta),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SphericalCoordinates__methods_[] = {
            DECLARE_METHOD(t_SphericalCoordinates, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphericalCoordinates, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphericalCoordinates, getCartesian, METH_NOARGS),
            DECLARE_METHOD(t_SphericalCoordinates, getPhi, METH_NOARGS),
            DECLARE_METHOD(t_SphericalCoordinates, getR, METH_NOARGS),
            DECLARE_METHOD(t_SphericalCoordinates, getTheta, METH_NOARGS),
            DECLARE_METHOD(t_SphericalCoordinates, toCartesianGradient, METH_O),
            DECLARE_METHOD(t_SphericalCoordinates, toCartesianHessian, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SphericalCoordinates)[] = {
            { Py_tp_methods, t_SphericalCoordinates__methods_ },
            { Py_tp_init, (void *) t_SphericalCoordinates_init_ },
            { Py_tp_getset, t_SphericalCoordinates__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SphericalCoordinates)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SphericalCoordinates, t_SphericalCoordinates, SphericalCoordinates);

          void t_SphericalCoordinates::install(PyObject *module)
          {
            installType(&PY_TYPE(SphericalCoordinates), &PY_TYPE_DEF(SphericalCoordinates), module, "SphericalCoordinates", 0);
          }

          void t_SphericalCoordinates::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalCoordinates), "class_", make_descriptor(SphericalCoordinates::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalCoordinates), "wrapfn_", make_descriptor(t_SphericalCoordinates::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalCoordinates), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SphericalCoordinates_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SphericalCoordinates::initializeClass, 1)))
              return NULL;
            return t_SphericalCoordinates::wrap_Object(SphericalCoordinates(((t_SphericalCoordinates *) arg)->object.this$));
          }
          static PyObject *t_SphericalCoordinates_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SphericalCoordinates::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SphericalCoordinates_init_(t_SphericalCoordinates *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                SphericalCoordinates object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  INT_CALL(object = SphericalCoordinates(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                SphericalCoordinates object((jobject) NULL);

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  INT_CALL(object = SphericalCoordinates(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SphericalCoordinates_getCartesian(t_SphericalCoordinates *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getCartesian());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_SphericalCoordinates_getPhi(t_SphericalCoordinates *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getPhi());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SphericalCoordinates_getR(t_SphericalCoordinates *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getR());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SphericalCoordinates_getTheta(t_SphericalCoordinates *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTheta());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SphericalCoordinates_toCartesianGradient(t_SphericalCoordinates *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(result = self->object.toCartesianGradient(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "toCartesianGradient", arg);
            return NULL;
          }

          static PyObject *t_SphericalCoordinates_toCartesianHessian(t_SphericalCoordinates *self, PyObject *args)
          {
            JArray< JArray< jdouble > > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            JArray< JArray< jdouble > > result((jobject) NULL);

            if (!parseArgs(args, "[[D[D", &a0, &a1))
            {
              OBJ_CALL(result = self->object.toCartesianHessian(a0, a1));
              return JArray<jobject>(result.this$).wrap(NULL);
            }

            PyErr_SetArgsError((PyObject *) self, "toCartesianHessian", args);
            return NULL;
          }

          static PyObject *t_SphericalCoordinates_get__cartesian(t_SphericalCoordinates *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getCartesian());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_SphericalCoordinates_get__phi(t_SphericalCoordinates *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getPhi());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SphericalCoordinates_get__r(t_SphericalCoordinates *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getR());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SphericalCoordinates_get__theta(t_SphericalCoordinates *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTheta());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *AdapterPropagator$DifferentialEffect::class$ = NULL;
        jmethodID *AdapterPropagator$DifferentialEffect::mids$ = NULL;
        bool AdapterPropagator$DifferentialEffect::live$ = false;

        jclass AdapterPropagator$DifferentialEffect::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect");

            mids$ = new jmethodID[max_mid];
            mids$[mid_apply_2c4cc16b11f79a6c] = env->getMethodID(cls, "apply", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::SpacecraftState AdapterPropagator$DifferentialEffect::apply(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_apply_2c4cc16b11f79a6c], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        static PyObject *t_AdapterPropagator$DifferentialEffect_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdapterPropagator$DifferentialEffect_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdapterPropagator$DifferentialEffect_apply(t_AdapterPropagator$DifferentialEffect *self, PyObject *arg);

        static PyMethodDef t_AdapterPropagator$DifferentialEffect__methods_[] = {
          DECLARE_METHOD(t_AdapterPropagator$DifferentialEffect, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdapterPropagator$DifferentialEffect, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdapterPropagator$DifferentialEffect, apply, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdapterPropagator$DifferentialEffect)[] = {
          { Py_tp_methods, t_AdapterPropagator$DifferentialEffect__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdapterPropagator$DifferentialEffect)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdapterPropagator$DifferentialEffect, t_AdapterPropagator$DifferentialEffect, AdapterPropagator$DifferentialEffect);

        void t_AdapterPropagator$DifferentialEffect::install(PyObject *module)
        {
          installType(&PY_TYPE(AdapterPropagator$DifferentialEffect), &PY_TYPE_DEF(AdapterPropagator$DifferentialEffect), module, "AdapterPropagator$DifferentialEffect", 0);
        }

        void t_AdapterPropagator$DifferentialEffect::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator$DifferentialEffect), "class_", make_descriptor(AdapterPropagator$DifferentialEffect::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator$DifferentialEffect), "wrapfn_", make_descriptor(t_AdapterPropagator$DifferentialEffect::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator$DifferentialEffect), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdapterPropagator$DifferentialEffect_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdapterPropagator$DifferentialEffect::initializeClass, 1)))
            return NULL;
          return t_AdapterPropagator$DifferentialEffect::wrap_Object(AdapterPropagator$DifferentialEffect(((t_AdapterPropagator$DifferentialEffect *) arg)->object.this$));
        }
        static PyObject *t_AdapterPropagator$DifferentialEffect_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdapterPropagator$DifferentialEffect::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdapterPropagator$DifferentialEffect_apply(t_AdapterPropagator$DifferentialEffect *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.apply(a0));
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "apply", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealVectorPreservingVisitor.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealVectorPreservingVisitor::class$ = NULL;
      jmethodID *RealVectorPreservingVisitor::mids$ = NULL;
      bool RealVectorPreservingVisitor::live$ = false;

      jclass RealVectorPreservingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealVectorPreservingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_557b8123390d8d0c] = env->getMethodID(cls, "end", "()D");
          mids$[mid_start_3796b665437eba81] = env->getMethodID(cls, "start", "(III)V");
          mids$[mid_visit_89aad365fb0ed8da] = env->getMethodID(cls, "visit", "(ID)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble RealVectorPreservingVisitor::end() const
      {
        return env->callDoubleMethod(this$, mids$[mid_end_557b8123390d8d0c]);
      }

      void RealVectorPreservingVisitor::start(jint a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_start_3796b665437eba81], a0, a1, a2);
      }

      void RealVectorPreservingVisitor::visit(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_visit_89aad365fb0ed8da], a0, a1);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_RealVectorPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVectorPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVectorPreservingVisitor_end(t_RealVectorPreservingVisitor *self);
      static PyObject *t_RealVectorPreservingVisitor_start(t_RealVectorPreservingVisitor *self, PyObject *args);
      static PyObject *t_RealVectorPreservingVisitor_visit(t_RealVectorPreservingVisitor *self, PyObject *args);

      static PyMethodDef t_RealVectorPreservingVisitor__methods_[] = {
        DECLARE_METHOD(t_RealVectorPreservingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVectorPreservingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVectorPreservingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_RealVectorPreservingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_RealVectorPreservingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealVectorPreservingVisitor)[] = {
        { Py_tp_methods, t_RealVectorPreservingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealVectorPreservingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealVectorPreservingVisitor, t_RealVectorPreservingVisitor, RealVectorPreservingVisitor);

      void t_RealVectorPreservingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(RealVectorPreservingVisitor), &PY_TYPE_DEF(RealVectorPreservingVisitor), module, "RealVectorPreservingVisitor", 0);
      }

      void t_RealVectorPreservingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorPreservingVisitor), "class_", make_descriptor(RealVectorPreservingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorPreservingVisitor), "wrapfn_", make_descriptor(t_RealVectorPreservingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorPreservingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealVectorPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealVectorPreservingVisitor::initializeClass, 1)))
          return NULL;
        return t_RealVectorPreservingVisitor::wrap_Object(RealVectorPreservingVisitor(((t_RealVectorPreservingVisitor *) arg)->object.this$));
      }
      static PyObject *t_RealVectorPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealVectorPreservingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealVectorPreservingVisitor_end(t_RealVectorPreservingVisitor *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.end());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVectorPreservingVisitor_start(t_RealVectorPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;

        if (!parseArgs(args, "III", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.start(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_RealVectorPreservingVisitor_visit(t_RealVectorPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.visit(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/IntegratedEphemeris.h"
#include "org/hipparchus/ode/DenseOutputModel.h"
#include "java/util/List.h"
#include "org/orekit/propagation/integration/StateMapper.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *IntegratedEphemeris::class$ = NULL;
        jmethodID *IntegratedEphemeris::mids$ = NULL;
        bool IntegratedEphemeris::live$ = false;

        jclass IntegratedEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/IntegratedEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6bc781ad2aa5b2b2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/propagation/integration/StateMapper;Lorg/orekit/propagation/PropagationType;Lorg/hipparchus/ode/DenseOutputModel;Lorg/orekit/utils/DoubleArrayDictionary;Ljava/util/List;[Ljava/lang/String;[I)V");
            mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInitialState_15e85d5301b90ef8] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getMaxDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getPVCoordinates_17742a9a6655bdb1] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_resetInitialState_8655761ebf04b503] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_setAttitudeProvider_8fa6c0c067ead7b2] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_propagateOrbit_9e937c0ae63d8022] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_resetIntermediateState_45bf76e836befe86] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
            mids$[mid_getMass_b0b988f941da47d8] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_updateAdditionalStates_2c4cc16b11f79a6c] = env->getMethodID(cls, "updateAdditionalStates", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_basicPropagate_15e0d02372b1347b] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IntegratedEphemeris::IntegratedEphemeris(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::propagation::integration::StateMapper & a3, const ::org::orekit::propagation::PropagationType & a4, const ::org::hipparchus::ode::DenseOutputModel & a5, const ::org::orekit::utils::DoubleArrayDictionary & a6, const ::java::util::List & a7, const JArray< ::java::lang::String > & a8, const JArray< jint > & a9) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_6bc781ad2aa5b2b2, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$)) {}

        ::org::orekit::frames::Frame IntegratedEphemeris::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
        }

        ::org::orekit::propagation::SpacecraftState IntegratedEphemeris::getInitialState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_15e85d5301b90ef8]));
        }

        ::org::orekit::time::AbsoluteDate IntegratedEphemeris::getMaxDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_7a97f7e149e79afb]));
        }

        ::org::orekit::time::AbsoluteDate IntegratedEphemeris::getMinDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_7a97f7e149e79afb]));
        }

        ::org::orekit::utils::TimeStampedPVCoordinates IntegratedEphemeris::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_17742a9a6655bdb1], a0.this$, a1.this$));
        }

        void IntegratedEphemeris::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_8655761ebf04b503], a0.this$);
        }

        void IntegratedEphemeris::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_8fa6c0c067ead7b2], a0.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        static PyObject *t_IntegratedEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IntegratedEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IntegratedEphemeris_init_(t_IntegratedEphemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IntegratedEphemeris_getFrame(t_IntegratedEphemeris *self, PyObject *args);
        static PyObject *t_IntegratedEphemeris_getInitialState(t_IntegratedEphemeris *self, PyObject *args);
        static PyObject *t_IntegratedEphemeris_getMaxDate(t_IntegratedEphemeris *self);
        static PyObject *t_IntegratedEphemeris_getMinDate(t_IntegratedEphemeris *self);
        static PyObject *t_IntegratedEphemeris_getPVCoordinates(t_IntegratedEphemeris *self, PyObject *args);
        static PyObject *t_IntegratedEphemeris_resetInitialState(t_IntegratedEphemeris *self, PyObject *args);
        static PyObject *t_IntegratedEphemeris_setAttitudeProvider(t_IntegratedEphemeris *self, PyObject *args);
        static int t_IntegratedEphemeris_set__attitudeProvider(t_IntegratedEphemeris *self, PyObject *arg, void *data);
        static PyObject *t_IntegratedEphemeris_get__frame(t_IntegratedEphemeris *self, void *data);
        static PyObject *t_IntegratedEphemeris_get__initialState(t_IntegratedEphemeris *self, void *data);
        static PyObject *t_IntegratedEphemeris_get__maxDate(t_IntegratedEphemeris *self, void *data);
        static PyObject *t_IntegratedEphemeris_get__minDate(t_IntegratedEphemeris *self, void *data);
        static PyGetSetDef t_IntegratedEphemeris__fields_[] = {
          DECLARE_SET_FIELD(t_IntegratedEphemeris, attitudeProvider),
          DECLARE_GET_FIELD(t_IntegratedEphemeris, frame),
          DECLARE_GET_FIELD(t_IntegratedEphemeris, initialState),
          DECLARE_GET_FIELD(t_IntegratedEphemeris, maxDate),
          DECLARE_GET_FIELD(t_IntegratedEphemeris, minDate),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IntegratedEphemeris__methods_[] = {
          DECLARE_METHOD(t_IntegratedEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IntegratedEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IntegratedEphemeris, getFrame, METH_VARARGS),
          DECLARE_METHOD(t_IntegratedEphemeris, getInitialState, METH_VARARGS),
          DECLARE_METHOD(t_IntegratedEphemeris, getMaxDate, METH_NOARGS),
          DECLARE_METHOD(t_IntegratedEphemeris, getMinDate, METH_NOARGS),
          DECLARE_METHOD(t_IntegratedEphemeris, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_IntegratedEphemeris, resetInitialState, METH_VARARGS),
          DECLARE_METHOD(t_IntegratedEphemeris, setAttitudeProvider, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IntegratedEphemeris)[] = {
          { Py_tp_methods, t_IntegratedEphemeris__methods_ },
          { Py_tp_init, (void *) t_IntegratedEphemeris_init_ },
          { Py_tp_getset, t_IntegratedEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IntegratedEphemeris)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(IntegratedEphemeris, t_IntegratedEphemeris, IntegratedEphemeris);

        void t_IntegratedEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(IntegratedEphemeris), &PY_TYPE_DEF(IntegratedEphemeris), module, "IntegratedEphemeris", 0);
        }

        void t_IntegratedEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IntegratedEphemeris), "class_", make_descriptor(IntegratedEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IntegratedEphemeris), "wrapfn_", make_descriptor(t_IntegratedEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IntegratedEphemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IntegratedEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IntegratedEphemeris::initializeClass, 1)))
            return NULL;
          return t_IntegratedEphemeris::wrap_Object(IntegratedEphemeris(((t_IntegratedEphemeris *) arg)->object.this$));
        }
        static PyObject *t_IntegratedEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IntegratedEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IntegratedEphemeris_init_(t_IntegratedEphemeris *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::propagation::integration::StateMapper a3((jobject) NULL);
          ::org::orekit::propagation::PropagationType a4((jobject) NULL);
          PyTypeObject **p4;
          ::org::hipparchus::ode::DenseOutputModel a5((jobject) NULL);
          ::org::orekit::utils::DoubleArrayDictionary a6((jobject) NULL);
          ::java::util::List a7((jobject) NULL);
          PyTypeObject **p7;
          JArray< ::java::lang::String > a8((jobject) NULL);
          JArray< jint > a9((jobject) NULL);
          IntegratedEphemeris object((jobject) NULL);

          if (!parseArgs(args, "kkkkKkkK[s[I", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::propagation::integration::StateMapper::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::hipparchus::ode::DenseOutputModel::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_, &a5, &a6, &a7, &p7, ::java::util::t_List::parameters_, &a8, &a9))
          {
            INT_CALL(object = IntegratedEphemeris(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IntegratedEphemeris_getFrame(t_IntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          return callSuper(PY_TYPE(IntegratedEphemeris), (PyObject *) self, "getFrame", args, 2);
        }

        static PyObject *t_IntegratedEphemeris_getInitialState(t_IntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getInitialState());
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          return callSuper(PY_TYPE(IntegratedEphemeris), (PyObject *) self, "getInitialState", args, 2);
        }

        static PyObject *t_IntegratedEphemeris_getMaxDate(t_IntegratedEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_IntegratedEphemeris_getMinDate(t_IntegratedEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_IntegratedEphemeris_getPVCoordinates(t_IntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
            return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
          }

          return callSuper(PY_TYPE(IntegratedEphemeris), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_IntegratedEphemeris_resetInitialState(t_IntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(IntegratedEphemeris), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_IntegratedEphemeris_setAttitudeProvider(t_IntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setAttitudeProvider(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(IntegratedEphemeris), (PyObject *) self, "setAttitudeProvider", args, 2);
        }

        static int t_IntegratedEphemeris_set__attitudeProvider(t_IntegratedEphemeris *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
            {
              INT_CALL(self->object.setAttitudeProvider(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
          return -1;
        }

        static PyObject *t_IntegratedEphemeris_get__frame(t_IntegratedEphemeris *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_IntegratedEphemeris_get__initialState(t_IntegratedEphemeris *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_IntegratedEphemeris_get__maxDate(t_IntegratedEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_IntegratedEphemeris_get__minDate(t_IntegratedEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractShortTermEncounter2DPOCMethod.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethod.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *AbstractShortTermEncounter2DPOCMethod::class$ = NULL;
              jmethodID *AbstractShortTermEncounter2DPOCMethod::mids$ = NULL;
              bool AbstractShortTermEncounter2DPOCMethod::live$ = false;
              jdouble AbstractShortTermEncounter2DPOCMethod::DEFAULT_TCA_DIFFERENCE_TOLERANCE = (jdouble) 0;

              jclass AbstractShortTermEncounter2DPOCMethod::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractShortTermEncounter2DPOCMethod");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_compute_7917f8d0fe4dcee2] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_5bd7443246955087] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_d4afe7edfd93d28b] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_54a027380ebb9f4f] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_ddf22cd33bfe153c] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_8d09da96ce925a0b] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_51013759c7807d3e] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_0fff86b0133b54f7] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
                  mids$[mid_isAMaximumProbabilityOfCollisionMethod_89b302893bdbe1f1] = env->getMethodID(cls, "isAMaximumProbabilityOfCollisionMethod", "()Z");
                  mids$[mid_getObjectOrbitFromCdm_73f786077ee136c5] = env->getMethodID(cls, "getObjectOrbitFromCdm", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;Lorg/orekit/files/ccsds/ndm/cdm/CdmData;Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadata;Lorg/orekit/data/DataContext;)Lorg/orekit/orbits/Orbit;");
                  mids$[mid_getObjectStateCovarianceFromCdm_225db9af3cee9489] = env->getMethodID(cls, "getObjectStateCovarianceFromCdm", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;Lorg/orekit/files/ccsds/ndm/cdm/CdmData;)Lorg/orekit/propagation/StateCovariance;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEFAULT_TCA_DIFFERENCE_TOLERANCE = env->getStaticDoubleField(cls, "DEFAULT_TCA_DIFFERENCE_TOLERANCE");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, jdouble a1) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_7917f8d0fe4dcee2], a0.this$, a1));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition & a0, jdouble a1) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_5bd7443246955087], a0.this$, a1));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition & a0, jdouble a1) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_d4afe7edfd93d28b], a0.this$, a1));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, const ::org::hipparchus::CalculusFieldElement & a1, jdouble a2) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_54a027380ebb9f4f], a0.this$, a1.this$, a2));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_ddf22cd33bfe153c], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_8d09da96ce925a0b], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, const ::org::orekit::orbits::Orbit & a2, const ::org::orekit::propagation::StateCovariance & a3, jdouble a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_51013759c7807d3e], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::orekit::orbits::FieldOrbit & a2, const ::org::orekit::propagation::FieldStateCovariance & a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_0fff86b0133b54f7], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5));
              }

              ::java::lang::String AbstractShortTermEncounter2DPOCMethod::getName() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
              }

              jboolean AbstractShortTermEncounter2DPOCMethod::isAMaximumProbabilityOfCollisionMethod() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isAMaximumProbabilityOfCollisionMethod_89b302893bdbe1f1]);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_compute(t_AbstractShortTermEncounter2DPOCMethod *self, PyObject *args);
              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_getName(t_AbstractShortTermEncounter2DPOCMethod *self);
              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_isAMaximumProbabilityOfCollisionMethod(t_AbstractShortTermEncounter2DPOCMethod *self);
              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_get__aMaximumProbabilityOfCollisionMethod(t_AbstractShortTermEncounter2DPOCMethod *self, void *data);
              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_get__name(t_AbstractShortTermEncounter2DPOCMethod *self, void *data);
              static PyGetSetDef t_AbstractShortTermEncounter2DPOCMethod__fields_[] = {
                DECLARE_GET_FIELD(t_AbstractShortTermEncounter2DPOCMethod, aMaximumProbabilityOfCollisionMethod),
                DECLARE_GET_FIELD(t_AbstractShortTermEncounter2DPOCMethod, name),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AbstractShortTermEncounter2DPOCMethod__methods_[] = {
                DECLARE_METHOD(t_AbstractShortTermEncounter2DPOCMethod, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AbstractShortTermEncounter2DPOCMethod, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AbstractShortTermEncounter2DPOCMethod, compute, METH_VARARGS),
                DECLARE_METHOD(t_AbstractShortTermEncounter2DPOCMethod, getName, METH_NOARGS),
                DECLARE_METHOD(t_AbstractShortTermEncounter2DPOCMethod, isAMaximumProbabilityOfCollisionMethod, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AbstractShortTermEncounter2DPOCMethod)[] = {
                { Py_tp_methods, t_AbstractShortTermEncounter2DPOCMethod__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AbstractShortTermEncounter2DPOCMethod__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AbstractShortTermEncounter2DPOCMethod)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AbstractShortTermEncounter2DPOCMethod, t_AbstractShortTermEncounter2DPOCMethod, AbstractShortTermEncounter2DPOCMethod);

              void t_AbstractShortTermEncounter2DPOCMethod::install(PyObject *module)
              {
                installType(&PY_TYPE(AbstractShortTermEncounter2DPOCMethod), &PY_TYPE_DEF(AbstractShortTermEncounter2DPOCMethod), module, "AbstractShortTermEncounter2DPOCMethod", 0);
              }

              void t_AbstractShortTermEncounter2DPOCMethod::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShortTermEncounter2DPOCMethod), "class_", make_descriptor(AbstractShortTermEncounter2DPOCMethod::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShortTermEncounter2DPOCMethod), "wrapfn_", make_descriptor(t_AbstractShortTermEncounter2DPOCMethod::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShortTermEncounter2DPOCMethod), "boxfn_", make_descriptor(boxObject));
                env->getClass(AbstractShortTermEncounter2DPOCMethod::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShortTermEncounter2DPOCMethod), "DEFAULT_TCA_DIFFERENCE_TOLERANCE", make_descriptor(AbstractShortTermEncounter2DPOCMethod::DEFAULT_TCA_DIFFERENCE_TOLERANCE));
              }

              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AbstractShortTermEncounter2DPOCMethod::initializeClass, 1)))
                  return NULL;
                return t_AbstractShortTermEncounter2DPOCMethod::wrap_Object(AbstractShortTermEncounter2DPOCMethod(((t_AbstractShortTermEncounter2DPOCMethod *) arg)->object.this$));
              }
              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AbstractShortTermEncounter2DPOCMethod::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_compute(t_AbstractShortTermEncounter2DPOCMethod *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 2:
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    jdouble a1;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KD", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition a0((jobject) NULL);
                    PyTypeObject **p0;
                    jdouble a1;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KD", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition::initializeClass, &a0, &p0, ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_FieldShortTermEncounter2DDefinition::parameters_, &a1))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition a0((jobject) NULL);
                    jdouble a1;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "kD", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition::initializeClass, &a0, &a1))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 3:
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    jdouble a2;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKD", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 5:
                  {
                    jdouble a0;
                    jdouble a1;
                    jdouble a2;
                    jdouble a3;
                    jdouble a4;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "DDDDD", &a0, &a1, &a2, &a3, &a4))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 6:
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::orbits::FieldOrbit a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::propagation::FieldStateCovariance a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    jdouble a5;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a3, &p3, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    ::org::orekit::orbits::Orbit a2((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a3((jobject) NULL);
                    jdouble a4;
                    jdouble a5;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "kkkkDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "compute", args);
                return NULL;
              }

              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_getName(t_AbstractShortTermEncounter2DPOCMethod *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getName());
                return j2p(result);
              }

              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_isAMaximumProbabilityOfCollisionMethod(t_AbstractShortTermEncounter2DPOCMethod *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isAMaximumProbabilityOfCollisionMethod());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_get__aMaximumProbabilityOfCollisionMethod(t_AbstractShortTermEncounter2DPOCMethod *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isAMaximumProbabilityOfCollisionMethod());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_get__name(t_AbstractShortTermEncounter2DPOCMethod *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getName());
                return j2p(value);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile.h"
#include "java/util/Map.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *OrekitAttitudeEphemerisFile::class$ = NULL;
        jmethodID *OrekitAttitudeEphemerisFile::mids$ = NULL;
        bool OrekitAttitudeEphemerisFile::live$ = false;

        jclass OrekitAttitudeEphemerisFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/OrekitAttitudeEphemerisFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addSatellite_3e46e2278870a0eb] = env->getMethodID(cls, "addSatellite", "(Ljava/lang/String;)Lorg/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris;");
            mids$[mid_getSatellites_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitAttitudeEphemerisFile::OrekitAttitudeEphemerisFile() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        ::org::orekit::files::general::OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris OrekitAttitudeEphemerisFile::addSatellite(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::general::OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris(env->callObjectMethod(this$, mids$[mid_addSatellite_3e46e2278870a0eb], a0.this$));
        }

        ::java::util::Map OrekitAttitudeEphemerisFile::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_1e62c2f73fbdd1c4]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        static PyObject *t_OrekitAttitudeEphemerisFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitAttitudeEphemerisFile_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OrekitAttitudeEphemerisFile_init_(t_OrekitAttitudeEphemerisFile *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OrekitAttitudeEphemerisFile_addSatellite(t_OrekitAttitudeEphemerisFile *self, PyObject *arg);
        static PyObject *t_OrekitAttitudeEphemerisFile_getSatellites(t_OrekitAttitudeEphemerisFile *self);
        static PyObject *t_OrekitAttitudeEphemerisFile_get__satellites(t_OrekitAttitudeEphemerisFile *self, void *data);
        static PyGetSetDef t_OrekitAttitudeEphemerisFile__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile, satellites),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitAttitudeEphemerisFile__methods_[] = {
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile, addSatellite, METH_O),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile, getSatellites, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitAttitudeEphemerisFile)[] = {
          { Py_tp_methods, t_OrekitAttitudeEphemerisFile__methods_ },
          { Py_tp_init, (void *) t_OrekitAttitudeEphemerisFile_init_ },
          { Py_tp_getset, t_OrekitAttitudeEphemerisFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitAttitudeEphemerisFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitAttitudeEphemerisFile, t_OrekitAttitudeEphemerisFile, OrekitAttitudeEphemerisFile);

        void t_OrekitAttitudeEphemerisFile::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitAttitudeEphemerisFile), &PY_TYPE_DEF(OrekitAttitudeEphemerisFile), module, "OrekitAttitudeEphemerisFile", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile), "OrekitSatelliteAttitudeEphemeris", make_descriptor(&PY_TYPE_DEF(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile), "OrekitAttitudeEphemerisSegment", make_descriptor(&PY_TYPE_DEF(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment)));
        }

        void t_OrekitAttitudeEphemerisFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile), "class_", make_descriptor(OrekitAttitudeEphemerisFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile), "wrapfn_", make_descriptor(t_OrekitAttitudeEphemerisFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitAttitudeEphemerisFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitAttitudeEphemerisFile::initializeClass, 1)))
            return NULL;
          return t_OrekitAttitudeEphemerisFile::wrap_Object(OrekitAttitudeEphemerisFile(((t_OrekitAttitudeEphemerisFile *) arg)->object.this$));
        }
        static PyObject *t_OrekitAttitudeEphemerisFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitAttitudeEphemerisFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OrekitAttitudeEphemerisFile_init_(t_OrekitAttitudeEphemerisFile *self, PyObject *args, PyObject *kwds)
        {
          OrekitAttitudeEphemerisFile object((jobject) NULL);

          INT_CALL(object = OrekitAttitudeEphemerisFile());
          self->object = object;

          return 0;
        }

        static PyObject *t_OrekitAttitudeEphemerisFile_addSatellite(t_OrekitAttitudeEphemerisFile *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::general::OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.addSatellite(a0));
            return ::org::orekit::files::general::t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addSatellite", arg);
          return NULL;
        }

        static PyObject *t_OrekitAttitudeEphemerisFile_getSatellites(t_OrekitAttitudeEphemerisFile *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::general::PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris));
        }

        static PyObject *t_OrekitAttitudeEphemerisFile_get__satellites(t_OrekitAttitudeEphemerisFile *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/InterSatellitesPhaseBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *InterSatellitesPhaseBuilder::class$ = NULL;
          jmethodID *InterSatellitesPhaseBuilder::mids$ = NULL;
          bool InterSatellitesPhaseBuilder::live$ = false;

          jclass InterSatellitesPhaseBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/InterSatellitesPhaseBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_51607f67c0155454] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/ObservableSatellite;Lorg/orekit/estimation/measurements/ObservableSatellite;DDD)V");
              mids$[mid_build_c48356df581a3c0b] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/gnss/InterSatellitesPhase;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          InterSatellitesPhaseBuilder::InterSatellitesPhaseBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::ObservableSatellite & a1, const ::org::orekit::estimation::measurements::ObservableSatellite & a2, jdouble a3, jdouble a4, jdouble a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_51607f67c0155454, a0.this$, a1.this$, a2.this$, a3, a4, a5)) {}

          ::org::orekit::estimation::measurements::gnss::InterSatellitesPhase InterSatellitesPhaseBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::gnss::InterSatellitesPhase(env->callObjectMethod(this$, mids$[mid_build_c48356df581a3c0b], a0.this$, a1.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {
          static PyObject *t_InterSatellitesPhaseBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesPhaseBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesPhaseBuilder_of_(t_InterSatellitesPhaseBuilder *self, PyObject *args);
          static int t_InterSatellitesPhaseBuilder_init_(t_InterSatellitesPhaseBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_InterSatellitesPhaseBuilder_build(t_InterSatellitesPhaseBuilder *self, PyObject *args);
          static PyObject *t_InterSatellitesPhaseBuilder_get__parameters_(t_InterSatellitesPhaseBuilder *self, void *data);
          static PyGetSetDef t_InterSatellitesPhaseBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_InterSatellitesPhaseBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_InterSatellitesPhaseBuilder__methods_[] = {
            DECLARE_METHOD(t_InterSatellitesPhaseBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesPhaseBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesPhaseBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_InterSatellitesPhaseBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InterSatellitesPhaseBuilder)[] = {
            { Py_tp_methods, t_InterSatellitesPhaseBuilder__methods_ },
            { Py_tp_init, (void *) t_InterSatellitesPhaseBuilder_init_ },
            { Py_tp_getset, t_InterSatellitesPhaseBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InterSatellitesPhaseBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(InterSatellitesPhaseBuilder, t_InterSatellitesPhaseBuilder, InterSatellitesPhaseBuilder);
          PyObject *t_InterSatellitesPhaseBuilder::wrap_Object(const InterSatellitesPhaseBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesPhaseBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesPhaseBuilder *self = (t_InterSatellitesPhaseBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_InterSatellitesPhaseBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesPhaseBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesPhaseBuilder *self = (t_InterSatellitesPhaseBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_InterSatellitesPhaseBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(InterSatellitesPhaseBuilder), &PY_TYPE_DEF(InterSatellitesPhaseBuilder), module, "InterSatellitesPhaseBuilder", 0);
          }

          void t_InterSatellitesPhaseBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhaseBuilder), "class_", make_descriptor(InterSatellitesPhaseBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhaseBuilder), "wrapfn_", make_descriptor(t_InterSatellitesPhaseBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhaseBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_InterSatellitesPhaseBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InterSatellitesPhaseBuilder::initializeClass, 1)))
              return NULL;
            return t_InterSatellitesPhaseBuilder::wrap_Object(InterSatellitesPhaseBuilder(((t_InterSatellitesPhaseBuilder *) arg)->object.this$));
          }
          static PyObject *t_InterSatellitesPhaseBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InterSatellitesPhaseBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_InterSatellitesPhaseBuilder_of_(t_InterSatellitesPhaseBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_InterSatellitesPhaseBuilder_init_(t_InterSatellitesPhaseBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a1((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            jdouble a5;
            InterSatellitesPhaseBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkkDDD", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = InterSatellitesPhaseBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::gnss::PY_TYPE(InterSatellitesPhase);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_InterSatellitesPhaseBuilder_build(t_InterSatellitesPhaseBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::gnss::InterSatellitesPhase result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::gnss::t_InterSatellitesPhase::wrap_Object(result);
            }

            return callSuper(PY_TYPE(InterSatellitesPhaseBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_InterSatellitesPhaseBuilder_get__parameters_(t_InterSatellitesPhaseBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$SessionStatistics.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$SessionStatistics::class$ = NULL;
        jmethodID *CRD$SessionStatistics::mids$ = NULL;
        bool CRD$SessionStatistics::live$ = false;

        jclass CRD$SessionStatistics::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$SessionStatistics");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f7c7df29365814a4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDDDI)V");
            mids$[mid_getDataQulityIndicator_412668abc8d889e9] = env->getMethodID(cls, "getDataQulityIndicator", "()I");
            mids$[mid_getKurtosis_557b8123390d8d0c] = env->getMethodID(cls, "getKurtosis", "()D");
            mids$[mid_getPeakMinusMean_557b8123390d8d0c] = env->getMethodID(cls, "getPeakMinusMean", "()D");
            mids$[mid_getRms_557b8123390d8d0c] = env->getMethodID(cls, "getRms", "()D");
            mids$[mid_getSkewness_557b8123390d8d0c] = env->getMethodID(cls, "getSkewness", "()D");
            mids$[mid_getSystemConfigurationId_3cffd47377eca18a] = env->getMethodID(cls, "getSystemConfigurationId", "()Ljava/lang/String;");
            mids$[mid_toCrdString_3cffd47377eca18a] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$SessionStatistics::CRD$SessionStatistics(const ::java::lang::String & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jint a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f7c7df29365814a4, a0.this$, a1, a2, a3, a4, a5)) {}

        jint CRD$SessionStatistics::getDataQulityIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getDataQulityIndicator_412668abc8d889e9]);
        }

        jdouble CRD$SessionStatistics::getKurtosis() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getKurtosis_557b8123390d8d0c]);
        }

        jdouble CRD$SessionStatistics::getPeakMinusMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPeakMinusMean_557b8123390d8d0c]);
        }

        jdouble CRD$SessionStatistics::getRms() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRms_557b8123390d8d0c]);
        }

        jdouble CRD$SessionStatistics::getSkewness() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSkewness_557b8123390d8d0c]);
        }

        ::java::lang::String CRD$SessionStatistics::getSystemConfigurationId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSystemConfigurationId_3cffd47377eca18a]));
        }

        ::java::lang::String CRD$SessionStatistics::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_3cffd47377eca18a]));
        }

        ::java::lang::String CRD$SessionStatistics::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_CRD$SessionStatistics_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$SessionStatistics_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$SessionStatistics_init_(t_CRD$SessionStatistics *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$SessionStatistics_getDataQulityIndicator(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_getKurtosis(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_getPeakMinusMean(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_getRms(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_getSkewness(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_getSystemConfigurationId(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_toCrdString(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_toString(t_CRD$SessionStatistics *self, PyObject *args);
        static PyObject *t_CRD$SessionStatistics_get__dataQulityIndicator(t_CRD$SessionStatistics *self, void *data);
        static PyObject *t_CRD$SessionStatistics_get__kurtosis(t_CRD$SessionStatistics *self, void *data);
        static PyObject *t_CRD$SessionStatistics_get__peakMinusMean(t_CRD$SessionStatistics *self, void *data);
        static PyObject *t_CRD$SessionStatistics_get__rms(t_CRD$SessionStatistics *self, void *data);
        static PyObject *t_CRD$SessionStatistics_get__skewness(t_CRD$SessionStatistics *self, void *data);
        static PyObject *t_CRD$SessionStatistics_get__systemConfigurationId(t_CRD$SessionStatistics *self, void *data);
        static PyGetSetDef t_CRD$SessionStatistics__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$SessionStatistics, dataQulityIndicator),
          DECLARE_GET_FIELD(t_CRD$SessionStatistics, kurtosis),
          DECLARE_GET_FIELD(t_CRD$SessionStatistics, peakMinusMean),
          DECLARE_GET_FIELD(t_CRD$SessionStatistics, rms),
          DECLARE_GET_FIELD(t_CRD$SessionStatistics, skewness),
          DECLARE_GET_FIELD(t_CRD$SessionStatistics, systemConfigurationId),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$SessionStatistics__methods_[] = {
          DECLARE_METHOD(t_CRD$SessionStatistics, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$SessionStatistics, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$SessionStatistics, getDataQulityIndicator, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, getKurtosis, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, getPeakMinusMean, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, getRms, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, getSkewness, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, getSystemConfigurationId, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, toCrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$SessionStatistics)[] = {
          { Py_tp_methods, t_CRD$SessionStatistics__methods_ },
          { Py_tp_init, (void *) t_CRD$SessionStatistics_init_ },
          { Py_tp_getset, t_CRD$SessionStatistics__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$SessionStatistics)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$SessionStatistics, t_CRD$SessionStatistics, CRD$SessionStatistics);

        void t_CRD$SessionStatistics::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$SessionStatistics), &PY_TYPE_DEF(CRD$SessionStatistics), module, "CRD$SessionStatistics", 0);
        }

        void t_CRD$SessionStatistics::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$SessionStatistics), "class_", make_descriptor(CRD$SessionStatistics::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$SessionStatistics), "wrapfn_", make_descriptor(t_CRD$SessionStatistics::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$SessionStatistics), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$SessionStatistics_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$SessionStatistics::initializeClass, 1)))
            return NULL;
          return t_CRD$SessionStatistics::wrap_Object(CRD$SessionStatistics(((t_CRD$SessionStatistics *) arg)->object.this$));
        }
        static PyObject *t_CRD$SessionStatistics_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$SessionStatistics::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$SessionStatistics_init_(t_CRD$SessionStatistics *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          jdouble a3;
          jdouble a4;
          jint a5;
          CRD$SessionStatistics object((jobject) NULL);

          if (!parseArgs(args, "sDDDDI", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = CRD$SessionStatistics(a0, a1, a2, a3, a4, a5));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$SessionStatistics_getDataQulityIndicator(t_CRD$SessionStatistics *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDataQulityIndicator());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$SessionStatistics_getKurtosis(t_CRD$SessionStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getKurtosis());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$SessionStatistics_getPeakMinusMean(t_CRD$SessionStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPeakMinusMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$SessionStatistics_getRms(t_CRD$SessionStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRms());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$SessionStatistics_getSkewness(t_CRD$SessionStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSkewness());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$SessionStatistics_getSystemConfigurationId(t_CRD$SessionStatistics *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemConfigurationId());
          return j2p(result);
        }

        static PyObject *t_CRD$SessionStatistics_toCrdString(t_CRD$SessionStatistics *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRD$SessionStatistics_toString(t_CRD$SessionStatistics *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$SessionStatistics), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$SessionStatistics_get__dataQulityIndicator(t_CRD$SessionStatistics *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDataQulityIndicator());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$SessionStatistics_get__kurtosis(t_CRD$SessionStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getKurtosis());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$SessionStatistics_get__peakMinusMean(t_CRD$SessionStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPeakMinusMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$SessionStatistics_get__rms(t_CRD$SessionStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRms());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$SessionStatistics_get__skewness(t_CRD$SessionStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSkewness());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$SessionStatistics_get__systemConfigurationId(t_CRD$SessionStatistics *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemConfigurationId());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/AngularAzElBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *AngularAzElBuilder::class$ = NULL;
          jmethodID *AngularAzElBuilder::mids$ = NULL;
          bool AngularAzElBuilder::live$ = false;

          jclass AngularAzElBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/AngularAzElBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_5e18a07622b187d4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;[D[DLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_4b39def8071475e7] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/AngularAzEl;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AngularAzElBuilder::AngularAzElBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3, const ::org::orekit::estimation::measurements::ObservableSatellite & a4) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_5e18a07622b187d4, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          ::org::orekit::estimation::measurements::AngularAzEl AngularAzElBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::AngularAzEl(env->callObjectMethod(this$, mids$[mid_build_4b39def8071475e7], a0.this$, a1.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {
          static PyObject *t_AngularAzElBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularAzElBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularAzElBuilder_of_(t_AngularAzElBuilder *self, PyObject *args);
          static int t_AngularAzElBuilder_init_(t_AngularAzElBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AngularAzElBuilder_build(t_AngularAzElBuilder *self, PyObject *args);
          static PyObject *t_AngularAzElBuilder_get__parameters_(t_AngularAzElBuilder *self, void *data);
          static PyGetSetDef t_AngularAzElBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_AngularAzElBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AngularAzElBuilder__methods_[] = {
            DECLARE_METHOD(t_AngularAzElBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularAzElBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularAzElBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_AngularAzElBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AngularAzElBuilder)[] = {
            { Py_tp_methods, t_AngularAzElBuilder__methods_ },
            { Py_tp_init, (void *) t_AngularAzElBuilder_init_ },
            { Py_tp_getset, t_AngularAzElBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AngularAzElBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(AngularAzElBuilder, t_AngularAzElBuilder, AngularAzElBuilder);
          PyObject *t_AngularAzElBuilder::wrap_Object(const AngularAzElBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AngularAzElBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AngularAzElBuilder *self = (t_AngularAzElBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AngularAzElBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AngularAzElBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AngularAzElBuilder *self = (t_AngularAzElBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AngularAzElBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(AngularAzElBuilder), &PY_TYPE_DEF(AngularAzElBuilder), module, "AngularAzElBuilder", 0);
          }

          void t_AngularAzElBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzElBuilder), "class_", make_descriptor(AngularAzElBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzElBuilder), "wrapfn_", make_descriptor(t_AngularAzElBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzElBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AngularAzElBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AngularAzElBuilder::initializeClass, 1)))
              return NULL;
            return t_AngularAzElBuilder::wrap_Object(AngularAzElBuilder(((t_AngularAzElBuilder *) arg)->object.this$));
          }
          static PyObject *t_AngularAzElBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AngularAzElBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AngularAzElBuilder_of_(t_AngularAzElBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_AngularAzElBuilder_init_(t_AngularAzElBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            JArray< jdouble > a3((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a4((jobject) NULL);
            AngularAzElBuilder object((jobject) NULL);

            if (!parseArgs(args, "kk[D[Dk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = AngularAzElBuilder(a0, a1, a2, a3, a4));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(AngularAzEl);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AngularAzElBuilder_build(t_AngularAzElBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::AngularAzEl result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_AngularAzEl::wrap_Object(result);
            }

            return callSuper(PY_TYPE(AngularAzElBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_AngularAzElBuilder_get__parameters_(t_AngularAzElBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/MariniMurrayModel.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/troposphere/MariniMurrayModel.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *MariniMurrayModel::class$ = NULL;
          jmethodID *MariniMurrayModel::mids$ = NULL;
          bool MariniMurrayModel::live$ = false;

          jclass MariniMurrayModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/MariniMurrayModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bc3712e794ac7a81] = env->getMethodID(cls, "<init>", "(DDDD)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getStandardModel_885bd0311205fa21] = env->getStaticMethodID(cls, "getStandardModel", "(D)Lorg/orekit/models/earth/troposphere/MariniMurrayModel;");
              mids$[mid_pathDelay_129678f244f63094] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_pathDelay_a4fdd877b349d4a6] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MariniMurrayModel::MariniMurrayModel(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bc3712e794ac7a81, a0, a1, a2, a3)) {}

          ::java::util::List MariniMurrayModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          MariniMurrayModel MariniMurrayModel::getStandardModel(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return MariniMurrayModel(env->callStaticObjectMethod(cls, mids$[mid_getStandardModel_885bd0311205fa21], a0));
          }

          jdouble MariniMurrayModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_129678f244f63094], a0, a1.this$, a2.this$, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement MariniMurrayModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_a4fdd877b349d4a6], a0.this$, a1.this$, a2.this$, a3.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {
          static PyObject *t_MariniMurrayModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MariniMurrayModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MariniMurrayModel_init_(t_MariniMurrayModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MariniMurrayModel_getParametersDrivers(t_MariniMurrayModel *self);
          static PyObject *t_MariniMurrayModel_getStandardModel(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MariniMurrayModel_pathDelay(t_MariniMurrayModel *self, PyObject *args);
          static PyObject *t_MariniMurrayModel_get__parametersDrivers(t_MariniMurrayModel *self, void *data);
          static PyGetSetDef t_MariniMurrayModel__fields_[] = {
            DECLARE_GET_FIELD(t_MariniMurrayModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MariniMurrayModel__methods_[] = {
            DECLARE_METHOD(t_MariniMurrayModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MariniMurrayModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MariniMurrayModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_MariniMurrayModel, getStandardModel, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MariniMurrayModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MariniMurrayModel)[] = {
            { Py_tp_methods, t_MariniMurrayModel__methods_ },
            { Py_tp_init, (void *) t_MariniMurrayModel_init_ },
            { Py_tp_getset, t_MariniMurrayModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MariniMurrayModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MariniMurrayModel, t_MariniMurrayModel, MariniMurrayModel);

          void t_MariniMurrayModel::install(PyObject *module)
          {
            installType(&PY_TYPE(MariniMurrayModel), &PY_TYPE_DEF(MariniMurrayModel), module, "MariniMurrayModel", 0);
          }

          void t_MariniMurrayModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MariniMurrayModel), "class_", make_descriptor(MariniMurrayModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MariniMurrayModel), "wrapfn_", make_descriptor(t_MariniMurrayModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MariniMurrayModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MariniMurrayModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MariniMurrayModel::initializeClass, 1)))
              return NULL;
            return t_MariniMurrayModel::wrap_Object(MariniMurrayModel(((t_MariniMurrayModel *) arg)->object.this$));
          }
          static PyObject *t_MariniMurrayModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MariniMurrayModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MariniMurrayModel_init_(t_MariniMurrayModel *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            MariniMurrayModel object((jobject) NULL);

            if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = MariniMurrayModel(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MariniMurrayModel_getParametersDrivers(t_MariniMurrayModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_MariniMurrayModel_getStandardModel(PyTypeObject *type, PyObject *arg)
          {
            jdouble a0;
            MariniMurrayModel result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = ::org::orekit::models::earth::troposphere::MariniMurrayModel::getStandardModel(a0));
              return t_MariniMurrayModel::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getStandardModel", arg);
            return NULL;
          }

          static PyObject *t_MariniMurrayModel_pathDelay(t_MariniMurrayModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "Dk[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_MariniMurrayModel_get__parametersDrivers(t_MariniMurrayModel *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FieldStepEndEventState.h"
#include "org/hipparchus/ode/events/FieldEventState.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/events/FieldODEStepEndHandler.h"
#include "org/hipparchus/ode/events/FieldEventOccurrence.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldStepEndEventState::class$ = NULL;
        jmethodID *FieldStepEndEventState::mids$ = NULL;
        bool FieldStepEndEventState::live$ = false;

        jclass FieldStepEndEventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldStepEndEventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f4eae0b3d6c5e2af] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/FieldODEStepEndHandler;)V");
            mids$[mid_doEvent_0c16f01e69648df7] = env->getMethodID(cls, "doEvent", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/ode/events/FieldEventOccurrence;");
            mids$[mid_evaluateStep_568d6c99e8870196] = env->getMethodID(cls, "evaluateStep", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)Z");
            mids$[mid_getEventTime_613c8f46c659f636] = env->getMethodID(cls, "getEventTime", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getHandler_4c44fbf92f21f6a9] = env->getMethodID(cls, "getHandler", "()Lorg/hipparchus/ode/events/FieldODEStepEndHandler;");
            mids$[mid_init_f808a4f21f8be825] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_setStepEnd_1ee4bed350fde589] = env->getMethodID(cls, "setStepEnd", "(Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldStepEndEventState::FieldStepEndEventState(const ::org::hipparchus::ode::events::FieldODEStepEndHandler & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f4eae0b3d6c5e2af, a0.this$)) {}

        ::org::hipparchus::ode::events::FieldEventOccurrence FieldStepEndEventState::doEvent(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::events::FieldEventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_0c16f01e69648df7], a0.this$));
        }

        jboolean FieldStepEndEventState::evaluateStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_568d6c99e8870196], a0.this$);
        }

        ::org::hipparchus::CalculusFieldElement FieldStepEndEventState::getEventTime() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEventTime_613c8f46c659f636]));
        }

        ::org::hipparchus::ode::events::FieldODEStepEndHandler FieldStepEndEventState::getHandler() const
        {
          return ::org::hipparchus::ode::events::FieldODEStepEndHandler(env->callObjectMethod(this$, mids$[mid_getHandler_4c44fbf92f21f6a9]));
        }

        void FieldStepEndEventState::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_f808a4f21f8be825], a0.this$, a1.this$);
        }

        void FieldStepEndEventState::setStepEnd(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStepEnd_1ee4bed350fde589], a0.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        static PyObject *t_FieldStepEndEventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStepEndEventState_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStepEndEventState_of_(t_FieldStepEndEventState *self, PyObject *args);
        static int t_FieldStepEndEventState_init_(t_FieldStepEndEventState *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldStepEndEventState_doEvent(t_FieldStepEndEventState *self, PyObject *arg);
        static PyObject *t_FieldStepEndEventState_evaluateStep(t_FieldStepEndEventState *self, PyObject *arg);
        static PyObject *t_FieldStepEndEventState_getEventTime(t_FieldStepEndEventState *self);
        static PyObject *t_FieldStepEndEventState_getHandler(t_FieldStepEndEventState *self);
        static PyObject *t_FieldStepEndEventState_init(t_FieldStepEndEventState *self, PyObject *args);
        static PyObject *t_FieldStepEndEventState_setStepEnd(t_FieldStepEndEventState *self, PyObject *arg);
        static PyObject *t_FieldStepEndEventState_get__eventTime(t_FieldStepEndEventState *self, void *data);
        static PyObject *t_FieldStepEndEventState_get__handler(t_FieldStepEndEventState *self, void *data);
        static int t_FieldStepEndEventState_set__stepEnd(t_FieldStepEndEventState *self, PyObject *arg, void *data);
        static PyObject *t_FieldStepEndEventState_get__parameters_(t_FieldStepEndEventState *self, void *data);
        static PyGetSetDef t_FieldStepEndEventState__fields_[] = {
          DECLARE_GET_FIELD(t_FieldStepEndEventState, eventTime),
          DECLARE_GET_FIELD(t_FieldStepEndEventState, handler),
          DECLARE_SET_FIELD(t_FieldStepEndEventState, stepEnd),
          DECLARE_GET_FIELD(t_FieldStepEndEventState, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldStepEndEventState__methods_[] = {
          DECLARE_METHOD(t_FieldStepEndEventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStepEndEventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStepEndEventState, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldStepEndEventState, doEvent, METH_O),
          DECLARE_METHOD(t_FieldStepEndEventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_FieldStepEndEventState, getEventTime, METH_NOARGS),
          DECLARE_METHOD(t_FieldStepEndEventState, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_FieldStepEndEventState, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldStepEndEventState, setStepEnd, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldStepEndEventState)[] = {
          { Py_tp_methods, t_FieldStepEndEventState__methods_ },
          { Py_tp_init, (void *) t_FieldStepEndEventState_init_ },
          { Py_tp_getset, t_FieldStepEndEventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldStepEndEventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldStepEndEventState, t_FieldStepEndEventState, FieldStepEndEventState);
        PyObject *t_FieldStepEndEventState::wrap_Object(const FieldStepEndEventState& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStepEndEventState::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStepEndEventState *self = (t_FieldStepEndEventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldStepEndEventState::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStepEndEventState::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStepEndEventState *self = (t_FieldStepEndEventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldStepEndEventState::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldStepEndEventState), &PY_TYPE_DEF(FieldStepEndEventState), module, "FieldStepEndEventState", 0);
        }

        void t_FieldStepEndEventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepEndEventState), "class_", make_descriptor(FieldStepEndEventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepEndEventState), "wrapfn_", make_descriptor(t_FieldStepEndEventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepEndEventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldStepEndEventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldStepEndEventState::initializeClass, 1)))
            return NULL;
          return t_FieldStepEndEventState::wrap_Object(FieldStepEndEventState(((t_FieldStepEndEventState *) arg)->object.this$));
        }
        static PyObject *t_FieldStepEndEventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldStepEndEventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldStepEndEventState_of_(t_FieldStepEndEventState *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldStepEndEventState_init_(t_FieldStepEndEventState *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::events::FieldODEStepEndHandler a0((jobject) NULL);
          PyTypeObject **p0;
          FieldStepEndEventState object((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::ode::events::FieldODEStepEndHandler::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEStepEndHandler::parameters_))
          {
            INT_CALL(object = FieldStepEndEventState(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldStepEndEventState_doEvent(t_FieldStepEndEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::events::FieldEventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::hipparchus::ode::events::t_FieldEventOccurrence::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_FieldStepEndEventState_evaluateStep(t_FieldStepEndEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_FieldStepEndEventState_getEventTime(t_FieldStepEndEventState *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventTime());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldStepEndEventState_getHandler(t_FieldStepEndEventState *self)
        {
          ::org::hipparchus::ode::events::FieldODEStepEndHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_FieldODEStepEndHandler::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldStepEndEventState_init(t_FieldStepEndEventState *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_FieldStepEndEventState_setStepEnd(t_FieldStepEndEventState *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.setStepEnd(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStepEnd", arg);
          return NULL;
        }
        static PyObject *t_FieldStepEndEventState_get__parameters_(t_FieldStepEndEventState *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldStepEndEventState_get__eventTime(t_FieldStepEndEventState *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventTime());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldStepEndEventState_get__handler(t_FieldStepEndEventState *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldODEStepEndHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_FieldODEStepEndHandler::wrap_Object(value);
        }

        static int t_FieldStepEndEventState_set__stepEnd(t_FieldStepEndEventState *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              INT_CALL(self->object.setStepEnd(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "stepEnd", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/DormandPrince853Integrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *DormandPrince853Integrator::class$ = NULL;
        jmethodID *DormandPrince853Integrator::mids$ = NULL;
        bool DormandPrince853Integrator::live$ = false;

        jclass DormandPrince853Integrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/DormandPrince853Integrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c13e969c0f339014] = env->getMethodID(cls, "<init>", "(DD[D[D)V");
            mids$[mid_init$_bc3712e794ac7a81] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_getA_8cf5267aa13a77f3] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_a53a7513ecedada2] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_a53a7513ecedada2] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_getOrder_412668abc8d889e9] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_estimateError_ce34cd66684833d2] = env->getMethodID(cls, "estimateError", "([[D[D[DD)D");
            mids$[mid_createInterpolator_d10b2280a850c03f] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/DormandPrince853StateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince853Integrator::DormandPrince853Integrator(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_c13e969c0f339014, a0, a1, a2.this$, a3.this$)) {}

        DormandPrince853Integrator::DormandPrince853Integrator(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_bc3712e794ac7a81, a0, a1, a2, a3)) {}

        JArray< JArray< jdouble > > DormandPrince853Integrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_8cf5267aa13a77f3]));
        }

        JArray< jdouble > DormandPrince853Integrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_a53a7513ecedada2]));
        }

        JArray< jdouble > DormandPrince853Integrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_a53a7513ecedada2]));
        }

        jint DormandPrince853Integrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_412668abc8d889e9]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        static PyObject *t_DormandPrince853Integrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince853Integrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DormandPrince853Integrator_init_(t_DormandPrince853Integrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince853Integrator_getA(t_DormandPrince853Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince853Integrator_getB(t_DormandPrince853Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince853Integrator_getC(t_DormandPrince853Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince853Integrator_getOrder(t_DormandPrince853Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince853Integrator_get__a(t_DormandPrince853Integrator *self, void *data);
        static PyObject *t_DormandPrince853Integrator_get__b(t_DormandPrince853Integrator *self, void *data);
        static PyObject *t_DormandPrince853Integrator_get__c(t_DormandPrince853Integrator *self, void *data);
        static PyObject *t_DormandPrince853Integrator_get__order(t_DormandPrince853Integrator *self, void *data);
        static PyGetSetDef t_DormandPrince853Integrator__fields_[] = {
          DECLARE_GET_FIELD(t_DormandPrince853Integrator, a),
          DECLARE_GET_FIELD(t_DormandPrince853Integrator, b),
          DECLARE_GET_FIELD(t_DormandPrince853Integrator, c),
          DECLARE_GET_FIELD(t_DormandPrince853Integrator, order),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DormandPrince853Integrator__methods_[] = {
          DECLARE_METHOD(t_DormandPrince853Integrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853Integrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853Integrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853Integrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853Integrator, getC, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853Integrator, getOrder, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince853Integrator)[] = {
          { Py_tp_methods, t_DormandPrince853Integrator__methods_ },
          { Py_tp_init, (void *) t_DormandPrince853Integrator_init_ },
          { Py_tp_getset, t_DormandPrince853Integrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince853Integrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(DormandPrince853Integrator, t_DormandPrince853Integrator, DormandPrince853Integrator);

        void t_DormandPrince853Integrator::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince853Integrator), &PY_TYPE_DEF(DormandPrince853Integrator), module, "DormandPrince853Integrator", 0);
        }

        void t_DormandPrince853Integrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853Integrator), "class_", make_descriptor(DormandPrince853Integrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853Integrator), "wrapfn_", make_descriptor(t_DormandPrince853Integrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853Integrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince853Integrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince853Integrator::initializeClass, 1)))
            return NULL;
          return t_DormandPrince853Integrator::wrap_Object(DormandPrince853Integrator(((t_DormandPrince853Integrator *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince853Integrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince853Integrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DormandPrince853Integrator_init_(t_DormandPrince853Integrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              DormandPrince853Integrator object((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = DormandPrince853Integrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              DormandPrince853Integrator object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = DormandPrince853Integrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DormandPrince853Integrator_getA(t_DormandPrince853Integrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(DormandPrince853Integrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_DormandPrince853Integrator_getB(t_DormandPrince853Integrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(DormandPrince853Integrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_DormandPrince853Integrator_getC(t_DormandPrince853Integrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(DormandPrince853Integrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_DormandPrince853Integrator_getOrder(t_DormandPrince853Integrator *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(DormandPrince853Integrator), (PyObject *) self, "getOrder", args, 2);
        }

        static PyObject *t_DormandPrince853Integrator_get__a(t_DormandPrince853Integrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_DormandPrince853Integrator_get__b(t_DormandPrince853Integrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_DormandPrince853Integrator_get__c(t_DormandPrince853Integrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }

        static PyObject *t_DormandPrince853Integrator_get__order(t_DormandPrince853Integrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/util/FieldBlendable.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/FieldMatrixChangingVisitor.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/linear/FieldMatrixPreservingVisitor.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldMatrix::class$ = NULL;
      jmethodID *FieldMatrix::mids$ = NULL;
      bool FieldMatrix::live$ = false;

      jclass FieldMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_60dc3401cb1a0936] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_addToEntry_a6d8caed839ba827] = env->getMethodID(cls, "addToEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_blendArithmeticallyWith_6205da4460d5ffa5] = env->getMethodID(cls, "blendArithmeticallyWith", "(Lorg/hipparchus/linear/FieldMatrix;Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_copy_1d6b27621d7bea96] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_copySubMatrix_34a2b695f72320ee] = env->getMethodID(cls, "copySubMatrix", "([I[I[[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_copySubMatrix_37e94d303ae8db89] = env->getMethodID(cls, "copySubMatrix", "(IIII[[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_createMatrix_f57999d9fe0fa8c7] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumn_5bf832a9d0c2a7e7] = env->getMethodID(cls, "getColumn", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getColumnMatrix_86145252a1591a99] = env->getMethodID(cls, "getColumnMatrix", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumnVector_6f1c886add96d5a0] = env->getMethodID(cls, "getColumnVector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getData_7007d1e2762517a8] = env->getMethodID(cls, "getData", "()[[Lorg/hipparchus/FieldElement;");
          mids$[mid_getEntry_a7f16df0741fd579] = env->getMethodID(cls, "getEntry", "(II)Lorg/hipparchus/FieldElement;");
          mids$[mid_getField_20f98801541dcec1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getRow_5bf832a9d0c2a7e7] = env->getMethodID(cls, "getRow", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getRowMatrix_86145252a1591a99] = env->getMethodID(cls, "getRowMatrix", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getRowVector_6f1c886add96d5a0] = env->getMethodID(cls, "getRowVector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getSubMatrix_827ce2a37cea418a] = env->getMethodID(cls, "getSubMatrix", "([I[I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getSubMatrix_455eec4445ba70d4] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getTrace_ce0470d468f80a56] = env->getMethodID(cls, "getTrace", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_multiply_60dc3401cb1a0936] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_multiplyEntry_a6d8caed839ba827] = env->getMethodID(cls, "multiplyEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_multiplyTransposed_60dc3401cb1a0936] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_operate_ee5975d9ac401b83] = env->getMethodID(cls, "operate", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_operate_a7c6926a425759ad] = env->getMethodID(cls, "operate", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_power_86145252a1591a99] = env->getMethodID(cls, "power", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_preMultiply_ee5975d9ac401b83] = env->getMethodID(cls, "preMultiply", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_preMultiply_60dc3401cb1a0936] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_preMultiply_a7c6926a425759ad] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_scalarAdd_59a8d7279b1a66f0] = env->getMethodID(cls, "scalarAdd", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_scalarMultiply_59a8d7279b1a66f0] = env->getMethodID(cls, "scalarMultiply", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_setColumn_25fe2a3042ba75d1] = env->getMethodID(cls, "setColumn", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setColumnMatrix_82ae94aaf3c46d50] = env->getMethodID(cls, "setColumnMatrix", "(ILorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_setColumnVector_502f8ed205bebebd] = env->getMethodID(cls, "setColumnVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_setEntry_a6d8caed839ba827] = env->getMethodID(cls, "setEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_setRow_25fe2a3042ba75d1] = env->getMethodID(cls, "setRow", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setRowMatrix_82ae94aaf3c46d50] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_setRowVector_502f8ed205bebebd] = env->getMethodID(cls, "setRowVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_setSubMatrix_7c2e1cd72b6eb4ce] = env->getMethodID(cls, "setSubMatrix", "([[Lorg/hipparchus/FieldElement;II)V");
          mids$[mid_subtract_60dc3401cb1a0936] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_transpose_1d6b27621d7bea96] = env->getMethodID(cls, "transpose", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_transposeMultiply_60dc3401cb1a0936] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_walkInColumnOrder_7d4c76689ca2f3c1] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_76fd1db3efda6447] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_516fb751ccd95d3b] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_e5d38b926487f1a5] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_7d4c76689ca2f3c1] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_76fd1db3efda6447] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_516fb751ccd95d3b] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_e5d38b926487f1a5] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_7d4c76689ca2f3c1] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_76fd1db3efda6447] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_516fb751ccd95d3b] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_e5d38b926487f1a5] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldMatrix FieldMatrix::add(const FieldMatrix & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_add_60dc3401cb1a0936], a0.this$));
      }

      void FieldMatrix::addToEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_a6d8caed839ba827], a0, a1, a2.this$);
      }

      FieldMatrix FieldMatrix::blendArithmeticallyWith(const FieldMatrix & a0, const ::org::hipparchus::FieldElement & a1) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_6205da4460d5ffa5], a0.this$, a1.this$));
      }

      FieldMatrix FieldMatrix::copy() const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_copy_1d6b27621d7bea96]));
      }

      void FieldMatrix::copySubMatrix(const JArray< jint > & a0, const JArray< jint > & a1, const JArray< JArray< ::org::hipparchus::FieldElement > > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_34a2b695f72320ee], a0.this$, a1.this$, a2.this$);
      }

      void FieldMatrix::copySubMatrix(jint a0, jint a1, jint a2, jint a3, const JArray< JArray< ::org::hipparchus::FieldElement > > & a4) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_37e94d303ae8db89], a0, a1, a2, a3, a4.this$);
      }

      FieldMatrix FieldMatrix::createMatrix(jint a0, jint a1) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_f57999d9fe0fa8c7], a0, a1));
      }

      JArray< ::org::hipparchus::FieldElement > FieldMatrix::getColumn(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getColumn_5bf832a9d0c2a7e7], a0));
      }

      FieldMatrix FieldMatrix::getColumnMatrix(jint a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_getColumnMatrix_86145252a1591a99], a0));
      }

      ::org::hipparchus::linear::FieldVector FieldMatrix::getColumnVector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getColumnVector_6f1c886add96d5a0], a0));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > FieldMatrix::getData() const
      {
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callObjectMethod(this$, mids$[mid_getData_7007d1e2762517a8]));
      }

      ::org::hipparchus::FieldElement FieldMatrix::getEntry(jint a0, jint a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_a7f16df0741fd579], a0, a1));
      }

      ::org::hipparchus::Field FieldMatrix::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_20f98801541dcec1]));
      }

      JArray< ::org::hipparchus::FieldElement > FieldMatrix::getRow(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getRow_5bf832a9d0c2a7e7], a0));
      }

      FieldMatrix FieldMatrix::getRowMatrix(jint a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_getRowMatrix_86145252a1591a99], a0));
      }

      ::org::hipparchus::linear::FieldVector FieldMatrix::getRowVector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getRowVector_6f1c886add96d5a0], a0));
      }

      FieldMatrix FieldMatrix::getSubMatrix(const JArray< jint > & a0, const JArray< jint > & a1) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_827ce2a37cea418a], a0.this$, a1.this$));
      }

      FieldMatrix FieldMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_455eec4445ba70d4], a0, a1, a2, a3));
      }

      ::org::hipparchus::FieldElement FieldMatrix::getTrace() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getTrace_ce0470d468f80a56]));
      }

      FieldMatrix FieldMatrix::multiply(const FieldMatrix & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiply_60dc3401cb1a0936], a0.this$));
      }

      void FieldMatrix::multiplyEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_a6d8caed839ba827], a0, a1, a2.this$);
      }

      FieldMatrix FieldMatrix::multiplyTransposed(const FieldMatrix & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_60dc3401cb1a0936], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > FieldMatrix::operate(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_operate_ee5975d9ac401b83], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector FieldMatrix::operate(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_operate_a7c6926a425759ad], a0.this$));
      }

      FieldMatrix FieldMatrix::power(jint a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_power_86145252a1591a99], a0));
      }

      JArray< ::org::hipparchus::FieldElement > FieldMatrix::preMultiply(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_preMultiply_ee5975d9ac401b83], a0.this$));
      }

      FieldMatrix FieldMatrix::preMultiply(const FieldMatrix & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_preMultiply_60dc3401cb1a0936], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector FieldMatrix::preMultiply(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_preMultiply_a7c6926a425759ad], a0.this$));
      }

      FieldMatrix FieldMatrix::scalarAdd(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_scalarAdd_59a8d7279b1a66f0], a0.this$));
      }

      FieldMatrix FieldMatrix::scalarMultiply(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_scalarMultiply_59a8d7279b1a66f0], a0.this$));
      }

      void FieldMatrix::setColumn(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumn_25fe2a3042ba75d1], a0, a1.this$);
      }

      void FieldMatrix::setColumnMatrix(jint a0, const FieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnMatrix_82ae94aaf3c46d50], a0, a1.this$);
      }

      void FieldMatrix::setColumnVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnVector_502f8ed205bebebd], a0, a1.this$);
      }

      void FieldMatrix::setEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_a6d8caed839ba827], a0, a1, a2.this$);
      }

      void FieldMatrix::setRow(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_25fe2a3042ba75d1], a0, a1.this$);
      }

      void FieldMatrix::setRowMatrix(jint a0, const FieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_82ae94aaf3c46d50], a0, a1.this$);
      }

      void FieldMatrix::setRowVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowVector_502f8ed205bebebd], a0, a1.this$);
      }

      void FieldMatrix::setSubMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_7c2e1cd72b6eb4ce], a0.this$, a1, a2);
      }

      FieldMatrix FieldMatrix::subtract(const FieldMatrix & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_subtract_60dc3401cb1a0936], a0.this$));
      }

      FieldMatrix FieldMatrix::transpose() const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_transpose_1d6b27621d7bea96]));
      }

      FieldMatrix FieldMatrix::transposeMultiply(const FieldMatrix & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_60dc3401cb1a0936], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_7d4c76689ca2f3c1], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_76fd1db3efda6447], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_516fb751ccd95d3b], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_e5d38b926487f1a5], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_7d4c76689ca2f3c1], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_76fd1db3efda6447], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_516fb751ccd95d3b], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_e5d38b926487f1a5], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_7d4c76689ca2f3c1], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_76fd1db3efda6447], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_516fb751ccd95d3b], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_e5d38b926487f1a5], a0.this$, a1, a2, a3, a4));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_FieldMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrix_of_(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_add(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_addToEntry(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_blendArithmeticallyWith(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_copy(t_FieldMatrix *self);
      static PyObject *t_FieldMatrix_copySubMatrix(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_createMatrix(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_getColumn(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_getColumnMatrix(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_getColumnVector(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_getData(t_FieldMatrix *self);
      static PyObject *t_FieldMatrix_getEntry(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_getField(t_FieldMatrix *self);
      static PyObject *t_FieldMatrix_getRow(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_getRowMatrix(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_getRowVector(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_getSubMatrix(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_getTrace(t_FieldMatrix *self);
      static PyObject *t_FieldMatrix_multiply(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_multiplyEntry(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_multiplyTransposed(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_operate(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_power(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_preMultiply(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_scalarAdd(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_scalarMultiply(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_setColumn(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_setColumnMatrix(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_setColumnVector(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_setEntry(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_setRow(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_setRowMatrix(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_setRowVector(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_setSubMatrix(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_subtract(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_transpose(t_FieldMatrix *self);
      static PyObject *t_FieldMatrix_transposeMultiply(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_walkInColumnOrder(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_walkInOptimizedOrder(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_walkInRowOrder(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_get__data(t_FieldMatrix *self, void *data);
      static PyObject *t_FieldMatrix_get__field(t_FieldMatrix *self, void *data);
      static PyObject *t_FieldMatrix_get__trace(t_FieldMatrix *self, void *data);
      static PyObject *t_FieldMatrix_get__parameters_(t_FieldMatrix *self, void *data);
      static PyGetSetDef t_FieldMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_FieldMatrix, data),
        DECLARE_GET_FIELD(t_FieldMatrix, field),
        DECLARE_GET_FIELD(t_FieldMatrix, trace),
        DECLARE_GET_FIELD(t_FieldMatrix, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldMatrix__methods_[] = {
        DECLARE_METHOD(t_FieldMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrix, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, add, METH_O),
        DECLARE_METHOD(t_FieldMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, blendArithmeticallyWith, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, copy, METH_NOARGS),
        DECLARE_METHOD(t_FieldMatrix, copySubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, getColumn, METH_O),
        DECLARE_METHOD(t_FieldMatrix, getColumnMatrix, METH_O),
        DECLARE_METHOD(t_FieldMatrix, getColumnVector, METH_O),
        DECLARE_METHOD(t_FieldMatrix, getData, METH_NOARGS),
        DECLARE_METHOD(t_FieldMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, getField, METH_NOARGS),
        DECLARE_METHOD(t_FieldMatrix, getRow, METH_O),
        DECLARE_METHOD(t_FieldMatrix, getRowMatrix, METH_O),
        DECLARE_METHOD(t_FieldMatrix, getRowVector, METH_O),
        DECLARE_METHOD(t_FieldMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, getTrace, METH_NOARGS),
        DECLARE_METHOD(t_FieldMatrix, multiply, METH_O),
        DECLARE_METHOD(t_FieldMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, multiplyTransposed, METH_O),
        DECLARE_METHOD(t_FieldMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, power, METH_O),
        DECLARE_METHOD(t_FieldMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, scalarAdd, METH_O),
        DECLARE_METHOD(t_FieldMatrix, scalarMultiply, METH_O),
        DECLARE_METHOD(t_FieldMatrix, setColumn, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, setColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, setColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, setRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, setRowVector, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, subtract, METH_O),
        DECLARE_METHOD(t_FieldMatrix, transpose, METH_NOARGS),
        DECLARE_METHOD(t_FieldMatrix, transposeMultiply, METH_O),
        DECLARE_METHOD(t_FieldMatrix, walkInColumnOrder, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, walkInOptimizedOrder, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMatrix)[] = {
        { Py_tp_methods, t_FieldMatrix__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AnyMatrix),
        NULL
      };

      DEFINE_TYPE(FieldMatrix, t_FieldMatrix, FieldMatrix);
      PyObject *t_FieldMatrix::wrap_Object(const FieldMatrix& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrix::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrix *self = (t_FieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldMatrix::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrix::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrix *self = (t_FieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMatrix), &PY_TYPE_DEF(FieldMatrix), module, "FieldMatrix", 0);
      }

      void t_FieldMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrix), "class_", make_descriptor(FieldMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrix), "wrapfn_", make_descriptor(t_FieldMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMatrix::initializeClass, 1)))
          return NULL;
        return t_FieldMatrix::wrap_Object(FieldMatrix(((t_FieldMatrix *) arg)->object.this$));
      }
      static PyObject *t_FieldMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMatrix_of_(t_FieldMatrix *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldMatrix_add(t_FieldMatrix *self, PyObject *arg)
      {
        FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", FieldMatrix::initializeClass, &a0, &p0, t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_addToEntry(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addToEntry", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_blendArithmeticallyWith(t_FieldMatrix *self, PyObject *args)
      {
        FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::FieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldMatrix::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, t_FieldMatrix::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_copy(t_FieldMatrix *self)
      {
        FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldMatrix_copySubMatrix(t_FieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            JArray< JArray< ::org::hipparchus::FieldElement > > a2((jobject) NULL);
            PyTypeObject **p2;

            if (!parseArgs(args, "[I[I[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(self->object.copySubMatrix(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          break;
         case 5:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            JArray< JArray< ::org::hipparchus::FieldElement > > a4((jobject) NULL);
            PyTypeObject **p4;

            if (!parseArgs(args, "IIII[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(self->object.copySubMatrix(a0, a1, a2, a3, a4));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySubMatrix", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_createMatrix(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "createMatrix", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getColumn(t_FieldMatrix *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumn(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumn", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getColumnMatrix(t_FieldMatrix *self, PyObject *arg)
      {
        jint a0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnMatrix(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnMatrix", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getColumnVector(t_FieldMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnVector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnVector", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getData(t_FieldMatrix *self)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getData());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_FieldMatrix_getEntry(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getField(t_FieldMatrix *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldMatrix_getRow(t_FieldMatrix *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getRow", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getRowMatrix(t_FieldMatrix *self, PyObject *arg)
      {
        jint a0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowMatrix(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowMatrix", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getRowVector(t_FieldMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowVector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowVector", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getSubMatrix(t_FieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1));
              return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 4:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
              return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getSubMatrix", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getTrace(t_FieldMatrix *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getTrace());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldMatrix_multiply(t_FieldMatrix *self, PyObject *arg)
      {
        FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", FieldMatrix::initializeClass, &a0, &p0, t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.multiply(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_multiplyEntry(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "multiplyEntry", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_multiplyTransposed(t_FieldMatrix *self, PyObject *arg)
      {
        FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", FieldMatrix::initializeClass, &a0, &p0, t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.multiplyTransposed(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "multiplyTransposed", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_operate(t_FieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

            if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.operate(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.operate(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "operate", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_power(t_FieldMatrix *self, PyObject *arg)
      {
        jint a0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.power(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "power", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_preMultiply(t_FieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

            if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
            }
          }
          {
            FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", FieldMatrix::initializeClass, &a0, &p0, t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "preMultiply", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_scalarAdd(t_FieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.scalarAdd(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarAdd", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_scalarMultiply(t_FieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_setColumn(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "I[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setColumn(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumn", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_setColumnMatrix(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        FieldMatrix a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", FieldMatrix::initializeClass, &a0, &a1, &p1, t_FieldMatrix::parameters_))
        {
          OBJ_CALL(self->object.setColumnMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnMatrix", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_setColumnVector(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setColumnVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnVector", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_setEntry(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEntry", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_setRow(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "I[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRow", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_setRowMatrix(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        FieldMatrix a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", FieldMatrix::initializeClass, &a0, &a1, &p1, t_FieldMatrix::parameters_))
        {
          OBJ_CALL(self->object.setRowMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowMatrix", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_setRowVector(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setRowVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowVector", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_setSubMatrix(t_FieldMatrix *self, PyObject *args)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        jint a2;

        if (!parseArgs(args, "[[KII", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &a2))
        {
          OBJ_CALL(self->object.setSubMatrix(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubMatrix", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_subtract(t_FieldMatrix *self, PyObject *arg)
      {
        FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", FieldMatrix::initializeClass, &a0, &p0, t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_transpose(t_FieldMatrix *self)
      {
        FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.transpose());
        return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldMatrix_transposeMultiply(t_FieldMatrix *self, PyObject *arg)
      {
        FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", FieldMatrix::initializeClass, &a0, &p0, t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.transposeMultiply(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "transposeMultiply", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_walkInColumnOrder(t_FieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInColumnOrder", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_walkInOptimizedOrder(t_FieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInOptimizedOrder", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_walkInRowOrder(t_FieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInRowOrder", args);
        return NULL;
      }
      static PyObject *t_FieldMatrix_get__parameters_(t_FieldMatrix *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldMatrix_get__data(t_FieldMatrix *self, void *data)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_FieldMatrix_get__field(t_FieldMatrix *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_FieldMatrix_get__trace(t_FieldMatrix *self, void *data)
      {
        ::org::hipparchus::FieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getTrace());
        return ::org::hipparchus::t_FieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/errors/RuggedException.h"
#include "java/util/Locale.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/exception/LocalizedException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *RuggedException::class$ = NULL;
        jmethodID *RuggedException::mids$ = NULL;
        bool RuggedException::live$ = false;

        jclass RuggedException::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/RuggedException");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4fde7f3f87bbd6f7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
            mids$[mid_init$_0ff5a331e85ddf14] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
            mids$[mid_getLocalizedMessage_3cffd47377eca18a] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
            mids$[mid_getMessage_3cffd47377eca18a] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
            mids$[mid_getMessage_4b51060c6b7ea981] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
            mids$[mid_getParts_6555a5198c71b73a] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
            mids$[mid_getSpecifier_a86d7419cf3241b7] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RuggedException::RuggedException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_4fde7f3f87bbd6f7, a0.this$, a1.this$)) {}

        RuggedException::RuggedException(const ::java::lang::Throwable & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0ff5a331e85ddf14, a0.this$, a1.this$, a2.this$)) {}

        ::java::lang::String RuggedException::getLocalizedMessage() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_3cffd47377eca18a]));
        }

        ::java::lang::String RuggedException::getMessage() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_3cffd47377eca18a]));
        }

        ::java::lang::String RuggedException::getMessage(const ::java::util::Locale & a0) const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_4b51060c6b7ea981], a0.this$));
        }

        JArray< ::java::lang::Object > RuggedException::getParts() const
        {
          return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_6555a5198c71b73a]));
        }

        ::org::hipparchus::exception::Localizable RuggedException::getSpecifier() const
        {
          return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_a86d7419cf3241b7]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {
        static PyObject *t_RuggedException_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedException_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RuggedException_init_(t_RuggedException *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RuggedException_getLocalizedMessage(t_RuggedException *self, PyObject *args);
        static PyObject *t_RuggedException_getMessage(t_RuggedException *self, PyObject *args);
        static PyObject *t_RuggedException_getParts(t_RuggedException *self);
        static PyObject *t_RuggedException_getSpecifier(t_RuggedException *self);
        static PyObject *t_RuggedException_get__localizedMessage(t_RuggedException *self, void *data);
        static PyObject *t_RuggedException_get__message(t_RuggedException *self, void *data);
        static PyObject *t_RuggedException_get__parts(t_RuggedException *self, void *data);
        static PyObject *t_RuggedException_get__specifier(t_RuggedException *self, void *data);
        static PyGetSetDef t_RuggedException__fields_[] = {
          DECLARE_GET_FIELD(t_RuggedException, localizedMessage),
          DECLARE_GET_FIELD(t_RuggedException, message),
          DECLARE_GET_FIELD(t_RuggedException, parts),
          DECLARE_GET_FIELD(t_RuggedException, specifier),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RuggedException__methods_[] = {
          DECLARE_METHOD(t_RuggedException, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedException, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedException, getLocalizedMessage, METH_VARARGS),
          DECLARE_METHOD(t_RuggedException, getMessage, METH_VARARGS),
          DECLARE_METHOD(t_RuggedException, getParts, METH_NOARGS),
          DECLARE_METHOD(t_RuggedException, getSpecifier, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RuggedException)[] = {
          { Py_tp_methods, t_RuggedException__methods_ },
          { Py_tp_init, (void *) t_RuggedException_init_ },
          { Py_tp_getset, t_RuggedException__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RuggedException)[] = {
          &PY_TYPE_DEF(::java::lang::RuntimeException),
          NULL
        };

        DEFINE_TYPE(RuggedException, t_RuggedException, RuggedException);

        void t_RuggedException::install(PyObject *module)
        {
          installType(&PY_TYPE(RuggedException), &PY_TYPE_DEF(RuggedException), module, "RuggedException", 0);
        }

        void t_RuggedException::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedException), "class_", make_descriptor(RuggedException::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedException), "wrapfn_", make_descriptor(t_RuggedException::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedException), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RuggedException_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RuggedException::initializeClass, 1)))
            return NULL;
          return t_RuggedException::wrap_Object(RuggedException(((t_RuggedException *) arg)->object.this$));
        }
        static PyObject *t_RuggedException_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RuggedException::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RuggedException_init_(t_RuggedException *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::exception::Localizable a0((jobject) NULL);
              JArray< ::java::lang::Object > a1((jobject) NULL);
              RuggedException object((jobject) NULL);

              if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
              {
                INT_CALL(object = RuggedException(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::java::lang::Throwable a0((jobject) NULL);
              ::org::hipparchus::exception::Localizable a1((jobject) NULL);
              JArray< ::java::lang::Object > a2((jobject) NULL);
              RuggedException object((jobject) NULL);

              if (!parseArgs(args, "kk[o", ::java::lang::Throwable::initializeClass, ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = RuggedException(a0, a1, a2));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_RuggedException_getLocalizedMessage(t_RuggedException *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getLocalizedMessage());
            return j2p(result);
          }

          return callSuper(PY_TYPE(RuggedException), (PyObject *) self, "getLocalizedMessage", args, 2);
        }

        static PyObject *t_RuggedException_getMessage(t_RuggedException *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getMessage());
              return j2p(result);
            }
            break;
           case 1:
            {
              ::java::util::Locale a0((jobject) NULL);
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMessage(a0));
                return j2p(result);
              }
            }
          }

          return callSuper(PY_TYPE(RuggedException), (PyObject *) self, "getMessage", args, 2);
        }

        static PyObject *t_RuggedException_getParts(t_RuggedException *self)
        {
          JArray< ::java::lang::Object > result((jobject) NULL);
          OBJ_CALL(result = self->object.getParts());
          return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }

        static PyObject *t_RuggedException_getSpecifier(t_RuggedException *self)
        {
          ::org::hipparchus::exception::Localizable result((jobject) NULL);
          OBJ_CALL(result = self->object.getSpecifier());
          return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
        }

        static PyObject *t_RuggedException_get__localizedMessage(t_RuggedException *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getLocalizedMessage());
          return j2p(value);
        }

        static PyObject *t_RuggedException_get__message(t_RuggedException *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getMessage());
          return j2p(value);
        }

        static PyObject *t_RuggedException_get__parts(t_RuggedException *self, void *data)
        {
          JArray< ::java::lang::Object > value((jobject) NULL);
          OBJ_CALL(value = self->object.getParts());
          return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }

        static PyObject *t_RuggedException_get__specifier(t_RuggedException *self, void *data)
        {
          ::org::hipparchus::exception::Localizable value((jobject) NULL);
          OBJ_CALL(value = self->object.getSpecifier());
          return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Rint.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Rint::class$ = NULL;
        jmethodID *Rint::mids$ = NULL;
        bool Rint::live$ = false;

        jclass Rint::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Rint");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Rint::Rint() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Rint::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Rint::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Rint_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Rint_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Rint_init_(t_Rint *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Rint_value(t_Rint *self, PyObject *args);

        static PyMethodDef t_Rint__methods_[] = {
          DECLARE_METHOD(t_Rint, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Rint, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Rint, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Rint)[] = {
          { Py_tp_methods, t_Rint__methods_ },
          { Py_tp_init, (void *) t_Rint_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Rint)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Rint, t_Rint, Rint);

        void t_Rint::install(PyObject *module)
        {
          installType(&PY_TYPE(Rint), &PY_TYPE_DEF(Rint), module, "Rint", 0);
        }

        void t_Rint::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Rint), "class_", make_descriptor(Rint::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Rint), "wrapfn_", make_descriptor(t_Rint::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Rint), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Rint_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Rint::initializeClass, 1)))
            return NULL;
          return t_Rint::wrap_Object(Rint(((t_Rint *) arg)->object.this$));
        }
        static PyObject *t_Rint_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Rint::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Rint_init_(t_Rint *self, PyObject *args, PyObject *kwds)
        {
          Rint object((jobject) NULL);

          INT_CALL(object = Rint());
          self->object = object;

          return 0;
        }

        static PyObject *t_Rint_value(t_Rint *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader.h"
#include "java/util/SortedSet.h"
#include "org/orekit/data/DataLoader.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *AbstractSolarActivityDataLoader::class$ = NULL;
            jmethodID *AbstractSolarActivityDataLoader::mids$ = NULL;
            bool AbstractSolarActivityDataLoader::live$ = false;

            jclass AbstractSolarActivityDataLoader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getDataSet_c6b6a992db588a51] = env->getMethodID(cls, "getDataSet", "()Ljava/util/SortedSet;");
                mids$[mid_getMaxDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getMinDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getUTC_527ee9dde1a96470] = env->getMethodID(cls, "getUTC", "()Lorg/orekit/time/TimeScale;");
                mids$[mid_setMaxDate_20affcbd28542333] = env->getMethodID(cls, "setMaxDate", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setMinDate_20affcbd28542333] = env->getMethodID(cls, "setMinDate", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_stillAcceptsData_89b302893bdbe1f1] = env->getMethodID(cls, "stillAcceptsData", "()Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::util::SortedSet AbstractSolarActivityDataLoader::getDataSet() const
            {
              return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getDataSet_c6b6a992db588a51]));
            }

            ::org::orekit::time::AbsoluteDate AbstractSolarActivityDataLoader::getMaxDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_7a97f7e149e79afb]));
            }

            ::org::orekit::time::AbsoluteDate AbstractSolarActivityDataLoader::getMinDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_7a97f7e149e79afb]));
            }

            ::org::orekit::time::TimeScale AbstractSolarActivityDataLoader::getUTC() const
            {
              return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getUTC_527ee9dde1a96470]));
            }

            void AbstractSolarActivityDataLoader::setMaxDate(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMaxDate_20affcbd28542333], a0.this$);
            }

            void AbstractSolarActivityDataLoader::setMinDate(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMinDate_20affcbd28542333], a0.this$);
            }

            jboolean AbstractSolarActivityDataLoader::stillAcceptsData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_89b302893bdbe1f1]);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            static PyObject *t_AbstractSolarActivityDataLoader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader_of_(t_AbstractSolarActivityDataLoader *self, PyObject *args);
            static PyObject *t_AbstractSolarActivityDataLoader_getDataSet(t_AbstractSolarActivityDataLoader *self);
            static PyObject *t_AbstractSolarActivityDataLoader_getMaxDate(t_AbstractSolarActivityDataLoader *self);
            static PyObject *t_AbstractSolarActivityDataLoader_getMinDate(t_AbstractSolarActivityDataLoader *self);
            static PyObject *t_AbstractSolarActivityDataLoader_getUTC(t_AbstractSolarActivityDataLoader *self);
            static PyObject *t_AbstractSolarActivityDataLoader_setMaxDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader_setMinDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader_stillAcceptsData(t_AbstractSolarActivityDataLoader *self);
            static PyObject *t_AbstractSolarActivityDataLoader_get__dataSet(t_AbstractSolarActivityDataLoader *self, void *data);
            static PyObject *t_AbstractSolarActivityDataLoader_get__maxDate(t_AbstractSolarActivityDataLoader *self, void *data);
            static int t_AbstractSolarActivityDataLoader_set__maxDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg, void *data);
            static PyObject *t_AbstractSolarActivityDataLoader_get__minDate(t_AbstractSolarActivityDataLoader *self, void *data);
            static int t_AbstractSolarActivityDataLoader_set__minDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg, void *data);
            static PyObject *t_AbstractSolarActivityDataLoader_get__uTC(t_AbstractSolarActivityDataLoader *self, void *data);
            static PyObject *t_AbstractSolarActivityDataLoader_get__parameters_(t_AbstractSolarActivityDataLoader *self, void *data);
            static PyGetSetDef t_AbstractSolarActivityDataLoader__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractSolarActivityDataLoader, dataSet),
              DECLARE_GETSET_FIELD(t_AbstractSolarActivityDataLoader, maxDate),
              DECLARE_GETSET_FIELD(t_AbstractSolarActivityDataLoader, minDate),
              DECLARE_GET_FIELD(t_AbstractSolarActivityDataLoader, uTC),
              DECLARE_GET_FIELD(t_AbstractSolarActivityDataLoader, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractSolarActivityDataLoader__methods_[] = {
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, of_, METH_VARARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, getDataSet, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, getMaxDate, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, getMinDate, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, getUTC, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, setMaxDate, METH_O),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, setMinDate, METH_O),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, stillAcceptsData, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractSolarActivityDataLoader)[] = {
              { Py_tp_methods, t_AbstractSolarActivityDataLoader__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractSolarActivityDataLoader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractSolarActivityDataLoader)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractSolarActivityDataLoader, t_AbstractSolarActivityDataLoader, AbstractSolarActivityDataLoader);
            PyObject *t_AbstractSolarActivityDataLoader::wrap_Object(const AbstractSolarActivityDataLoader& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AbstractSolarActivityDataLoader::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractSolarActivityDataLoader *self = (t_AbstractSolarActivityDataLoader *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AbstractSolarActivityDataLoader::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AbstractSolarActivityDataLoader::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractSolarActivityDataLoader *self = (t_AbstractSolarActivityDataLoader *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AbstractSolarActivityDataLoader::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractSolarActivityDataLoader), &PY_TYPE_DEF(AbstractSolarActivityDataLoader), module, "AbstractSolarActivityDataLoader", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader), "LineParameters", make_descriptor(&PY_TYPE_DEF(AbstractSolarActivityDataLoader$LineParameters)));
            }

            void t_AbstractSolarActivityDataLoader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader), "class_", make_descriptor(AbstractSolarActivityDataLoader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader), "wrapfn_", make_descriptor(t_AbstractSolarActivityDataLoader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractSolarActivityDataLoader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractSolarActivityDataLoader::initializeClass, 1)))
                return NULL;
              return t_AbstractSolarActivityDataLoader::wrap_Object(AbstractSolarActivityDataLoader(((t_AbstractSolarActivityDataLoader *) arg)->object.this$));
            }
            static PyObject *t_AbstractSolarActivityDataLoader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractSolarActivityDataLoader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractSolarActivityDataLoader_of_(t_AbstractSolarActivityDataLoader *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AbstractSolarActivityDataLoader_getDataSet(t_AbstractSolarActivityDataLoader *self)
            {
              ::java::util::SortedSet result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
            }

            static PyObject *t_AbstractSolarActivityDataLoader_getMaxDate(t_AbstractSolarActivityDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractSolarActivityDataLoader_getMinDate(t_AbstractSolarActivityDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractSolarActivityDataLoader_getUTC(t_AbstractSolarActivityDataLoader *self)
            {
              ::org::orekit::time::TimeScale result((jobject) NULL);
              OBJ_CALL(result = self->object.getUTC());
              return ::org::orekit::time::t_TimeScale::wrap_Object(result);
            }

            static PyObject *t_AbstractSolarActivityDataLoader_setMaxDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setMaxDate(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMaxDate", arg);
              return NULL;
            }

            static PyObject *t_AbstractSolarActivityDataLoader_setMinDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setMinDate(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMinDate", arg);
              return NULL;
            }

            static PyObject *t_AbstractSolarActivityDataLoader_stillAcceptsData(t_AbstractSolarActivityDataLoader *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.stillAcceptsData());
              Py_RETURN_BOOL(result);
            }
            static PyObject *t_AbstractSolarActivityDataLoader_get__parameters_(t_AbstractSolarActivityDataLoader *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AbstractSolarActivityDataLoader_get__dataSet(t_AbstractSolarActivityDataLoader *self, void *data)
            {
              ::java::util::SortedSet value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(value);
            }

            static PyObject *t_AbstractSolarActivityDataLoader_get__maxDate(t_AbstractSolarActivityDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_AbstractSolarActivityDataLoader_set__maxDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setMaxDate(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "maxDate", arg);
              return -1;
            }

            static PyObject *t_AbstractSolarActivityDataLoader_get__minDate(t_AbstractSolarActivityDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_AbstractSolarActivityDataLoader_set__minDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setMinDate(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "minDate", arg);
              return -1;
            }

            static PyObject *t_AbstractSolarActivityDataLoader_get__uTC(t_AbstractSolarActivityDataLoader *self, void *data)
            {
              ::org::orekit::time::TimeScale value((jobject) NULL);
              OBJ_CALL(value = self->object.getUTC());
              return ::org::orekit::time::t_TimeScale::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/GPSBlockIIA.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *GPSBlockIIA::class$ = NULL;
        jmethodID *GPSBlockIIA::mids$ = NULL;
        bool GPSBlockIIA::live$ = false;
        jdouble GPSBlockIIA::DEFAULT_YAW_BIAS = (jdouble) 0;

        jclass GPSBlockIIA::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/GPSBlockIIA");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_edf894401b24faef] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_getDefaultYawRate_69cfb132c661aca4] = env->getStaticMethodID(cls, "getDefaultYawRate", "(I)D");
            mids$[mid_correctedYaw_c46751716d57fe1f] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
            mids$[mid_correctedYaw_2a43991494de952e] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_YAW_BIAS = env->getStaticDoubleField(cls, "DEFAULT_YAW_BIAS");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GPSBlockIIA::GPSBlockIIA(jdouble a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::time::AbsoluteDate & a3, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a4, const ::org::orekit::frames::Frame & a5) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_edf894401b24faef, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        jdouble GPSBlockIIA::getDefaultYawRate(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_getDefaultYawRate_69cfb132c661aca4], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {
        static PyObject *t_GPSBlockIIA_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GPSBlockIIA_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GPSBlockIIA_init_(t_GPSBlockIIA *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GPSBlockIIA_getDefaultYawRate(PyTypeObject *type, PyObject *arg);

        static PyMethodDef t_GPSBlockIIA__methods_[] = {
          DECLARE_METHOD(t_GPSBlockIIA, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GPSBlockIIA, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GPSBlockIIA, getDefaultYawRate, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GPSBlockIIA)[] = {
          { Py_tp_methods, t_GPSBlockIIA__methods_ },
          { Py_tp_init, (void *) t_GPSBlockIIA_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GPSBlockIIA)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(GPSBlockIIA, t_GPSBlockIIA, GPSBlockIIA);

        void t_GPSBlockIIA::install(PyObject *module)
        {
          installType(&PY_TYPE(GPSBlockIIA), &PY_TYPE_DEF(GPSBlockIIA), module, "GPSBlockIIA", 0);
        }

        void t_GPSBlockIIA::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIA), "class_", make_descriptor(GPSBlockIIA::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIA), "wrapfn_", make_descriptor(t_GPSBlockIIA::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIA), "boxfn_", make_descriptor(boxObject));
          env->getClass(GPSBlockIIA::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIA), "DEFAULT_YAW_BIAS", make_descriptor(GPSBlockIIA::DEFAULT_YAW_BIAS));
        }

        static PyObject *t_GPSBlockIIA_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GPSBlockIIA::initializeClass, 1)))
            return NULL;
          return t_GPSBlockIIA::wrap_Object(GPSBlockIIA(((t_GPSBlockIIA *) arg)->object.this$));
        }
        static PyObject *t_GPSBlockIIA_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GPSBlockIIA::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GPSBlockIIA_init_(t_GPSBlockIIA *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a4((jobject) NULL);
          ::org::orekit::frames::Frame a5((jobject) NULL);
          GPSBlockIIA object((jobject) NULL);

          if (!parseArgs(args, "DDkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = GPSBlockIIA(a0, a1, a2, a3, a4, a5));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GPSBlockIIA_getDefaultYawRate(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::orekit::gnss::attitude::GPSBlockIIA::getDefaultYawRate(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "getDefaultYawRate", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/PythonTLEPropagator.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *PythonTLEPropagator::class$ = NULL;
          jmethodID *PythonTLEPropagator::mids$ = NULL;
          bool PythonTLEPropagator::live$ = false;

          jclass PythonTLEPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/PythonTLEPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c15edfeff3b77424] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;D)V");
              mids$[mid_init$_2f68d31a9dcd927c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/frames/Frame;)V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_sxpInitialize_0640e6acf969ed28] = env->getMethodID(cls, "sxpInitialize", "()V");
              mids$[mid_sxpPropagate_10f281d777284cea] = env->getMethodID(cls, "sxpPropagate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonTLEPropagator::PythonTLEPropagator(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2) : ::org::orekit::propagation::analytical::tle::TLEPropagator(env->newObject(initializeClass, &mids$, mid_init$_c15edfeff3b77424, a0.this$, a1.this$, a2)) {}

          PythonTLEPropagator::PythonTLEPropagator(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::propagation::analytical::tle::TLEPropagator(env->newObject(initializeClass, &mids$, mid_init$_2f68d31a9dcd927c, a0.this$, a1.this$, a2, a3.this$)) {}

          void PythonTLEPropagator::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonTLEPropagator::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonTLEPropagator::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          static PyObject *t_PythonTLEPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonTLEPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonTLEPropagator_init_(t_PythonTLEPropagator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonTLEPropagator_finalize(t_PythonTLEPropagator *self);
          static PyObject *t_PythonTLEPropagator_pythonExtension(t_PythonTLEPropagator *self, PyObject *args);
          static void JNICALL t_PythonTLEPropagator_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonTLEPropagator_sxpInitialize1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonTLEPropagator_sxpPropagate2(JNIEnv *jenv, jobject jobj, jdouble a0);
          static PyObject *t_PythonTLEPropagator_get__self(t_PythonTLEPropagator *self, void *data);
          static PyGetSetDef t_PythonTLEPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_PythonTLEPropagator, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonTLEPropagator__methods_[] = {
            DECLARE_METHOD(t_PythonTLEPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonTLEPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonTLEPropagator, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonTLEPropagator, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonTLEPropagator)[] = {
            { Py_tp_methods, t_PythonTLEPropagator__methods_ },
            { Py_tp_init, (void *) t_PythonTLEPropagator_init_ },
            { Py_tp_getset, t_PythonTLEPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonTLEPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::TLEPropagator),
            NULL
          };

          DEFINE_TYPE(PythonTLEPropagator, t_PythonTLEPropagator, PythonTLEPropagator);

          void t_PythonTLEPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonTLEPropagator), &PY_TYPE_DEF(PythonTLEPropagator), module, "PythonTLEPropagator", 1);
          }

          void t_PythonTLEPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTLEPropagator), "class_", make_descriptor(PythonTLEPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTLEPropagator), "wrapfn_", make_descriptor(t_PythonTLEPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTLEPropagator), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonTLEPropagator::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PythonTLEPropagator_pythonDecRef0 },
              { "sxpInitialize", "()V", (void *) t_PythonTLEPropagator_sxpInitialize1 },
              { "sxpPropagate", "(D)V", (void *) t_PythonTLEPropagator_sxpPropagate2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonTLEPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonTLEPropagator::initializeClass, 1)))
              return NULL;
            return t_PythonTLEPropagator::wrap_Object(PythonTLEPropagator(((t_PythonTLEPropagator *) arg)->object.this$));
          }
          static PyObject *t_PythonTLEPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonTLEPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonTLEPropagator_init_(t_PythonTLEPropagator *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                PythonTLEPropagator object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = PythonTLEPropagator(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                ::org::orekit::frames::Frame a3((jobject) NULL);
                PythonTLEPropagator object((jobject) NULL);

                if (!parseArgs(args, "kkDk", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = PythonTLEPropagator(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonTLEPropagator_finalize(t_PythonTLEPropagator *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonTLEPropagator_pythonExtension(t_PythonTLEPropagator *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jlong result;
                OBJ_CALL(result = self->object.pythonExtension());
                return PyLong_FromLongLong((PY_LONG_LONG) result);
              }
              break;
             case 1:
              {
                jlong a0;

                if (!parseArgs(args, "J", &a0))
                {
                  OBJ_CALL(self->object.pythonExtension(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
            return NULL;
          }

          static void JNICALL t_PythonTLEPropagator_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTLEPropagator::mids$[PythonTLEPropagator::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonTLEPropagator::mids$[PythonTLEPropagator::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PythonTLEPropagator_sxpInitialize1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTLEPropagator::mids$[PythonTLEPropagator::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "sxpInitialize", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonTLEPropagator_sxpPropagate2(JNIEnv *jenv, jobject jobj, jdouble a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTLEPropagator::mids$[PythonTLEPropagator::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "sxpPropagate", "d", (double) a0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PythonTLEPropagator_get__self(t_PythonTLEPropagator *self, void *data)
          {
            jlong ptr;
            OBJ_CALL(ptr = self->object.pythonExtension());
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              Py_INCREF(obj);
              return obj;
            }
            else
              Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonAbstractAlfriend1999.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *PythonAbstractAlfriend1999::class$ = NULL;
              jmethodID *PythonAbstractAlfriend1999::mids$ = NULL;
              bool PythonAbstractAlfriend1999::live$ = false;

              jclass PythonAbstractAlfriend1999::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonAbstractAlfriend1999");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
                  mids$[mid_computeValue_8d02ba458f22e508] = env->getMethodID(cls, "computeValue", "(DDD)D");
                  mids$[mid_computeValue_d181e731358aa045] = env->getMethodID(cls, "computeValue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
                  mids$[mid_getType_4b8bf2bb84f7480e] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
                  mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
                  mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              PythonAbstractAlfriend1999::PythonAbstractAlfriend1999(const ::java::lang::String & a0) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

              void PythonAbstractAlfriend1999::finalize() const
              {
                env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
              }

              jlong PythonAbstractAlfriend1999::pythonExtension() const
              {
                return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
              }

              void PythonAbstractAlfriend1999::pythonExtension(jlong a0) const
              {
                env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              static PyObject *t_PythonAbstractAlfriend1999_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PythonAbstractAlfriend1999_instance_(PyTypeObject *type, PyObject *arg);
              static int t_PythonAbstractAlfriend1999_init_(t_PythonAbstractAlfriend1999 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_PythonAbstractAlfriend1999_finalize(t_PythonAbstractAlfriend1999 *self);
              static PyObject *t_PythonAbstractAlfriend1999_pythonExtension(t_PythonAbstractAlfriend1999 *self, PyObject *args);
              static jdouble JNICALL t_PythonAbstractAlfriend1999_computeValue0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2);
              static jobject JNICALL t_PythonAbstractAlfriend1999_computeValue1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
              static jobject JNICALL t_PythonAbstractAlfriend1999_getType2(JNIEnv *jenv, jobject jobj);
              static void JNICALL t_PythonAbstractAlfriend1999_pythonDecRef3(JNIEnv *jenv, jobject jobj);
              static PyObject *t_PythonAbstractAlfriend1999_get__self(t_PythonAbstractAlfriend1999 *self, void *data);
              static PyGetSetDef t_PythonAbstractAlfriend1999__fields_[] = {
                DECLARE_GET_FIELD(t_PythonAbstractAlfriend1999, self),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_PythonAbstractAlfriend1999__methods_[] = {
                DECLARE_METHOD(t_PythonAbstractAlfriend1999, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonAbstractAlfriend1999, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonAbstractAlfriend1999, finalize, METH_NOARGS),
                DECLARE_METHOD(t_PythonAbstractAlfriend1999, pythonExtension, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(PythonAbstractAlfriend1999)[] = {
                { Py_tp_methods, t_PythonAbstractAlfriend1999__methods_ },
                { Py_tp_init, (void *) t_PythonAbstractAlfriend1999_init_ },
                { Py_tp_getset, t_PythonAbstractAlfriend1999__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(PythonAbstractAlfriend1999)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999),
                NULL
              };

              DEFINE_TYPE(PythonAbstractAlfriend1999, t_PythonAbstractAlfriend1999, PythonAbstractAlfriend1999);

              void t_PythonAbstractAlfriend1999::install(PyObject *module)
              {
                installType(&PY_TYPE(PythonAbstractAlfriend1999), &PY_TYPE_DEF(PythonAbstractAlfriend1999), module, "PythonAbstractAlfriend1999", 1);
              }

              void t_PythonAbstractAlfriend1999::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAlfriend1999), "class_", make_descriptor(PythonAbstractAlfriend1999::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAlfriend1999), "wrapfn_", make_descriptor(t_PythonAbstractAlfriend1999::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAlfriend1999), "boxfn_", make_descriptor(boxObject));
                jclass cls = env->getClass(PythonAbstractAlfriend1999::initializeClass);
                JNINativeMethod methods[] = {
                  { "computeValue", "(DDD)D", (void *) t_PythonAbstractAlfriend1999_computeValue0 },
                  { "computeValue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonAbstractAlfriend1999_computeValue1 },
                  { "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;", (void *) t_PythonAbstractAlfriend1999_getType2 },
                  { "pythonDecRef", "()V", (void *) t_PythonAbstractAlfriend1999_pythonDecRef3 },
                };
                env->registerNatives(cls, methods, 4);
              }

              static PyObject *t_PythonAbstractAlfriend1999_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, PythonAbstractAlfriend1999::initializeClass, 1)))
                  return NULL;
                return t_PythonAbstractAlfriend1999::wrap_Object(PythonAbstractAlfriend1999(((t_PythonAbstractAlfriend1999 *) arg)->object.this$));
              }
              static PyObject *t_PythonAbstractAlfriend1999_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, PythonAbstractAlfriend1999::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_PythonAbstractAlfriend1999_init_(t_PythonAbstractAlfriend1999 *self, PyObject *args, PyObject *kwds)
              {
                ::java::lang::String a0((jobject) NULL);
                PythonAbstractAlfriend1999 object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = PythonAbstractAlfriend1999(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                Py_INCREF((PyObject *) self);
                self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

                return 0;
              }

              static PyObject *t_PythonAbstractAlfriend1999_finalize(t_PythonAbstractAlfriend1999 *self)
              {
                OBJ_CALL(self->object.finalize());
                Py_RETURN_NONE;
              }

              static PyObject *t_PythonAbstractAlfriend1999_pythonExtension(t_PythonAbstractAlfriend1999 *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    jlong result;
                    OBJ_CALL(result = self->object.pythonExtension());
                    return PyLong_FromLongLong((PY_LONG_LONG) result);
                  }
                  break;
                 case 1:
                  {
                    jlong a0;

                    if (!parseArgs(args, "J", &a0))
                    {
                      OBJ_CALL(self->object.pythonExtension(a0));
                      Py_RETURN_NONE;
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
                return NULL;
              }

              static jdouble JNICALL t_PythonAbstractAlfriend1999_computeValue0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAlfriend1999::mids$[PythonAbstractAlfriend1999::mid_pythonExtension_9e26256fb0d384a2]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                jdouble value;
                PyObject *result = PyObject_CallMethod(obj, "computeValue", "ddd", (double) a0, (double) a1, (double) a2);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "D", &value))
                {
                  throwTypeError("computeValue", result);
                  Py_DECREF(result);
                }
                else
                {
                  Py_DECREF(result);
                  return value;
                }

                return (jdouble) 0;
              }

              static jobject JNICALL t_PythonAbstractAlfriend1999_computeValue1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAlfriend1999::mids$[PythonAbstractAlfriend1999::mid_pythonExtension_9e26256fb0d384a2]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
                PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
                PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
                PyObject *o2 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a2));
                PyObject *result = PyObject_CallMethod(obj, "computeValue", "OOO", o0, o1, o2);
                Py_DECREF(o0);
                Py_DECREF(o1);
                Py_DECREF(o2);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
                {
                  throwTypeError("computeValue", result);
                  Py_DECREF(result);
                }
                else
                {
                  jobj = jenv->NewLocalRef(value.this$);
                  Py_DECREF(result);
                  return jobj;
                }

                return (jobject) NULL;
              }

              static jobject JNICALL t_PythonAbstractAlfriend1999_getType2(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAlfriend1999::mids$[PythonAbstractAlfriend1999::mid_pythonExtension_9e26256fb0d384a2]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                PyObject *result = PyObject_CallMethod(obj, "getType", "");
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType::initializeClass, &value))
                {
                  throwTypeError("getType", result);
                  Py_DECREF(result);
                }
                else
                {
                  jobj = jenv->NewLocalRef(value.this$);
                  Py_DECREF(result);
                  return jobj;
                }

                return (jobject) NULL;
              }

              static void JNICALL t_PythonAbstractAlfriend1999_pythonDecRef3(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAlfriend1999::mids$[PythonAbstractAlfriend1999::mid_pythonExtension_9e26256fb0d384a2]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

                if (obj != NULL)
                {
                  jenv->CallVoidMethod(jobj, PythonAbstractAlfriend1999::mids$[PythonAbstractAlfriend1999::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
                  env->finalizeObject(jenv, obj);
                }
              }

              static PyObject *t_PythonAbstractAlfriend1999_get__self(t_PythonAbstractAlfriend1999 *self, void *data)
              {
                jlong ptr;
                OBJ_CALL(ptr = self->object.pythonExtension());
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

                if (obj != NULL)
                {
                  Py_INCREF(obj);
                  return obj;
                }
                else
                  Py_RETURN_NONE;
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/dfp/DfpMath.h"
#include "org/hipparchus/dfp/Dfp.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace dfp {

      ::java::lang::Class *DfpMath::class$ = NULL;
      jmethodID *DfpMath::mids$ = NULL;
      bool DfpMath::live$ = false;

      jclass DfpMath::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/dfp/DfpMath");

          mids$ = new jmethodID[max_mid];
          mids$[mid_acos_f081bcbf4bd8f1ad] = env->getStaticMethodID(cls, "acos", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_asin_f081bcbf4bd8f1ad] = env->getStaticMethodID(cls, "asin", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_atan_f081bcbf4bd8f1ad] = env->getStaticMethodID(cls, "atan", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_cos_f081bcbf4bd8f1ad] = env->getStaticMethodID(cls, "cos", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_exp_f081bcbf4bd8f1ad] = env->getStaticMethodID(cls, "exp", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_log_f081bcbf4bd8f1ad] = env->getStaticMethodID(cls, "log", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_pow_badefef06f0dff33] = env->getStaticMethodID(cls, "pow", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_pow_4a186cd89cd0804a] = env->getStaticMethodID(cls, "pow", "(Lorg/hipparchus/dfp/Dfp;I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_sin_f081bcbf4bd8f1ad] = env->getStaticMethodID(cls, "sin", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_tan_f081bcbf4bd8f1ad] = env->getStaticMethodID(cls, "tan", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_splitMult_bc523e2f59a11e70] = env->getStaticMethodID(cls, "splitMult", "([Lorg/hipparchus/dfp/Dfp;[Lorg/hipparchus/dfp/Dfp;)[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_splitDiv_bc523e2f59a11e70] = env->getStaticMethodID(cls, "splitDiv", "([Lorg/hipparchus/dfp/Dfp;[Lorg/hipparchus/dfp/Dfp;)[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_splitPow_1e10e883106ff8c1] = env->getStaticMethodID(cls, "splitPow", "([Lorg/hipparchus/dfp/Dfp;I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_expInternal_f081bcbf4bd8f1ad] = env->getStaticMethodID(cls, "expInternal", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_logInternal_e9d3f4d880e87fce] = env->getStaticMethodID(cls, "logInternal", "([Lorg/hipparchus/dfp/Dfp;)[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_sinInternal_417736a9ecc0c959] = env->getStaticMethodID(cls, "sinInternal", "([Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_cosInternal_417736a9ecc0c959] = env->getStaticMethodID(cls, "cosInternal", "([Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_atanInternal_f081bcbf4bd8f1ad] = env->getStaticMethodID(cls, "atanInternal", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_split_2975de3e6def407a] = env->getStaticMethodID(cls, "split", "(Lorg/hipparchus/dfp/DfpField;Ljava/lang/String;)[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_split_00348e9337681d3d] = env->getStaticMethodID(cls, "split", "(Lorg/hipparchus/dfp/Dfp;)[Lorg/hipparchus/dfp/Dfp;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::dfp::Dfp DfpMath::acos(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_acos_f081bcbf4bd8f1ad], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::asin(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_asin_f081bcbf4bd8f1ad], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::atan(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_atan_f081bcbf4bd8f1ad], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::cos(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_cos_f081bcbf4bd8f1ad], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::exp(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_exp_f081bcbf4bd8f1ad], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::log(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_log_f081bcbf4bd8f1ad], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::pow(const ::org::hipparchus::dfp::Dfp & a0, const ::org::hipparchus::dfp::Dfp & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_pow_badefef06f0dff33], a0.this$, a1.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::pow(const ::org::hipparchus::dfp::Dfp & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_pow_4a186cd89cd0804a], a0.this$, a1));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::sin(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_sin_f081bcbf4bd8f1ad], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::tan(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_tan_f081bcbf4bd8f1ad], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace dfp {
      static PyObject *t_DfpMath_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_acos(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_asin(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_atan(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_cos(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_exp(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_log(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_pow(PyTypeObject *type, PyObject *args);
      static PyObject *t_DfpMath_sin(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_tan(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_DfpMath__methods_[] = {
        DECLARE_METHOD(t_DfpMath, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, acos, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, asin, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, atan, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, cos, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, exp, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, log, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, pow, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, sin, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, tan, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DfpMath)[] = {
        { Py_tp_methods, t_DfpMath__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DfpMath)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DfpMath, t_DfpMath, DfpMath);

      void t_DfpMath::install(PyObject *module)
      {
        installType(&PY_TYPE(DfpMath), &PY_TYPE_DEF(DfpMath), module, "DfpMath", 0);
      }

      void t_DfpMath::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpMath), "class_", make_descriptor(DfpMath::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpMath), "wrapfn_", make_descriptor(t_DfpMath::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpMath), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DfpMath_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DfpMath::initializeClass, 1)))
          return NULL;
        return t_DfpMath::wrap_Object(DfpMath(((t_DfpMath *) arg)->object.this$));
      }
      static PyObject *t_DfpMath_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DfpMath::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DfpMath_acos(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::acos(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "acos", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_asin(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::asin(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "asin", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_atan(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::atan(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "atan", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_cos(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::cos(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "cos", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_exp(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::exp(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "exp", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_log(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::log(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "log", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_pow(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
            ::org::hipparchus::dfp::Dfp a1((jobject) NULL);
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::dfp::Dfp::initializeClass, ::org::hipparchus::dfp::Dfp::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::pow(a0, a1));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
            jint a1;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::hipparchus::dfp::Dfp::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::pow(a0, a1));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "pow", args);
        return NULL;
      }

      static PyObject *t_DfpMath_sin(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::sin(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "sin", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_tan(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::tan(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "tan", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/jacobians/Duration.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace jacobians {

          ::java::lang::Class *Duration::class$ = NULL;
          jmethodID *Duration::mids$ = NULL;
          bool Duration::live$ = false;

          jclass Duration::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/jacobians/Duration");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f5c244a0f15376be] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_getAdditionalState_2a145999b8c9a41d] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
              mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_yields_abdf3beb789bbd4e] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Duration::Duration(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5c244a0f15376be, a0.this$, a1.this$, a2.this$)) {}

          JArray< jdouble > Duration::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_2a145999b8c9a41d], a0.this$));
          }

          ::java::lang::String Duration::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
          }

          jboolean Duration::yields(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_yields_abdf3beb789bbd4e], a0.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace jacobians {
          static PyObject *t_Duration_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Duration_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Duration_init_(t_Duration *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Duration_getAdditionalState(t_Duration *self, PyObject *arg);
          static PyObject *t_Duration_getName(t_Duration *self);
          static PyObject *t_Duration_yields(t_Duration *self, PyObject *arg);
          static PyObject *t_Duration_get__name(t_Duration *self, void *data);
          static PyGetSetDef t_Duration__fields_[] = {
            DECLARE_GET_FIELD(t_Duration, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Duration__methods_[] = {
            DECLARE_METHOD(t_Duration, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Duration, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Duration, getAdditionalState, METH_O),
            DECLARE_METHOD(t_Duration, getName, METH_NOARGS),
            DECLARE_METHOD(t_Duration, yields, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Duration)[] = {
            { Py_tp_methods, t_Duration__methods_ },
            { Py_tp_init, (void *) t_Duration_init_ },
            { Py_tp_getset, t_Duration__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Duration)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Duration, t_Duration, Duration);

          void t_Duration::install(PyObject *module)
          {
            installType(&PY_TYPE(Duration), &PY_TYPE_DEF(Duration), module, "Duration", 0);
          }

          void t_Duration::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Duration), "class_", make_descriptor(Duration::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Duration), "wrapfn_", make_descriptor(t_Duration::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Duration), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Duration_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Duration::initializeClass, 1)))
              return NULL;
            return t_Duration::wrap_Object(Duration(((t_Duration *) arg)->object.this$));
          }
          static PyObject *t_Duration_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Duration::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Duration_init_(t_Duration *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            Duration object((jobject) NULL);

            if (!parseArgs(args, "sss", &a0, &a1, &a2))
            {
              INT_CALL(object = Duration(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Duration_getAdditionalState(t_Duration *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getAdditionalState(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
            return NULL;
          }

          static PyObject *t_Duration_getName(t_Duration *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_Duration_yields(t_Duration *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.yields(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "yields", arg);
            return NULL;
          }

          static PyObject *t_Duration_get__name(t_Duration *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/weather/GlobalPressureTemperature2Model.h"
#include "org/orekit/models/earth/weather/WeatherModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/Geoid.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace weather {

          ::java::lang::Class *GlobalPressureTemperature2Model::class$ = NULL;
          jmethodID *GlobalPressureTemperature2Model::mids$ = NULL;
          bool GlobalPressureTemperature2Model::live$ = false;
          ::java::lang::String *GlobalPressureTemperature2Model::DEFAULT_SUPPORTED_NAMES = NULL;

          jclass GlobalPressureTemperature2Model::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/weather/GlobalPressureTemperature2Model");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_13b9421b93b56628] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/models/earth/Geoid;)V");
              mids$[mid_init$_7d537054ffc60b02] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDLorg/orekit/models/earth/Geoid;)V");
              mids$[mid_init$_4c2f0029514de5e4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDLorg/orekit/models/earth/Geoid;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_getA_a53a7513ecedada2] = env->getMethodID(cls, "getA", "()[D");
              mids$[mid_getPressure_557b8123390d8d0c] = env->getMethodID(cls, "getPressure", "()D");
              mids$[mid_getTemperature_557b8123390d8d0c] = env->getMethodID(cls, "getTemperature", "()D");
              mids$[mid_getWaterVaporPressure_557b8123390d8d0c] = env->getMethodID(cls, "getWaterVaporPressure", "()D");
              mids$[mid_weatherParameters_4ca6118c75b70100] = env->getMethodID(cls, "weatherParameters", "(DLorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GlobalPressureTemperature2Model::GlobalPressureTemperature2Model(jdouble a0, jdouble a1, const ::org::orekit::models::earth::Geoid & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_13b9421b93b56628, a0, a1, a2.this$)) {}

          GlobalPressureTemperature2Model::GlobalPressureTemperature2Model(const ::java::lang::String & a0, jdouble a1, jdouble a2, const ::org::orekit::models::earth::Geoid & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7d537054ffc60b02, a0.this$, a1, a2, a3.this$)) {}

          GlobalPressureTemperature2Model::GlobalPressureTemperature2Model(const ::java::lang::String & a0, jdouble a1, jdouble a2, const ::org::orekit::models::earth::Geoid & a3, const ::org::orekit::data::DataProvidersManager & a4, const ::org::orekit::time::TimeScale & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4c2f0029514de5e4, a0.this$, a1, a2, a3.this$, a4.this$, a5.this$)) {}

          JArray< jdouble > GlobalPressureTemperature2Model::getA() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getA_a53a7513ecedada2]));
          }

          jdouble GlobalPressureTemperature2Model::getPressure() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPressure_557b8123390d8d0c]);
          }

          jdouble GlobalPressureTemperature2Model::getTemperature() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTemperature_557b8123390d8d0c]);
          }

          jdouble GlobalPressureTemperature2Model::getWaterVaporPressure() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWaterVaporPressure_557b8123390d8d0c]);
          }

          void GlobalPressureTemperature2Model::weatherParameters(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_weatherParameters_4ca6118c75b70100], a0, a1.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace weather {
          static PyObject *t_GlobalPressureTemperature2Model_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GlobalPressureTemperature2Model_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GlobalPressureTemperature2Model_init_(t_GlobalPressureTemperature2Model *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GlobalPressureTemperature2Model_getA(t_GlobalPressureTemperature2Model *self);
          static PyObject *t_GlobalPressureTemperature2Model_getPressure(t_GlobalPressureTemperature2Model *self);
          static PyObject *t_GlobalPressureTemperature2Model_getTemperature(t_GlobalPressureTemperature2Model *self);
          static PyObject *t_GlobalPressureTemperature2Model_getWaterVaporPressure(t_GlobalPressureTemperature2Model *self);
          static PyObject *t_GlobalPressureTemperature2Model_weatherParameters(t_GlobalPressureTemperature2Model *self, PyObject *args);
          static PyObject *t_GlobalPressureTemperature2Model_get__a(t_GlobalPressureTemperature2Model *self, void *data);
          static PyObject *t_GlobalPressureTemperature2Model_get__pressure(t_GlobalPressureTemperature2Model *self, void *data);
          static PyObject *t_GlobalPressureTemperature2Model_get__temperature(t_GlobalPressureTemperature2Model *self, void *data);
          static PyObject *t_GlobalPressureTemperature2Model_get__waterVaporPressure(t_GlobalPressureTemperature2Model *self, void *data);
          static PyGetSetDef t_GlobalPressureTemperature2Model__fields_[] = {
            DECLARE_GET_FIELD(t_GlobalPressureTemperature2Model, a),
            DECLARE_GET_FIELD(t_GlobalPressureTemperature2Model, pressure),
            DECLARE_GET_FIELD(t_GlobalPressureTemperature2Model, temperature),
            DECLARE_GET_FIELD(t_GlobalPressureTemperature2Model, waterVaporPressure),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GlobalPressureTemperature2Model__methods_[] = {
            DECLARE_METHOD(t_GlobalPressureTemperature2Model, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalPressureTemperature2Model, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalPressureTemperature2Model, getA, METH_NOARGS),
            DECLARE_METHOD(t_GlobalPressureTemperature2Model, getPressure, METH_NOARGS),
            DECLARE_METHOD(t_GlobalPressureTemperature2Model, getTemperature, METH_NOARGS),
            DECLARE_METHOD(t_GlobalPressureTemperature2Model, getWaterVaporPressure, METH_NOARGS),
            DECLARE_METHOD(t_GlobalPressureTemperature2Model, weatherParameters, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GlobalPressureTemperature2Model)[] = {
            { Py_tp_methods, t_GlobalPressureTemperature2Model__methods_ },
            { Py_tp_init, (void *) t_GlobalPressureTemperature2Model_init_ },
            { Py_tp_getset, t_GlobalPressureTemperature2Model__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GlobalPressureTemperature2Model)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GlobalPressureTemperature2Model, t_GlobalPressureTemperature2Model, GlobalPressureTemperature2Model);

          void t_GlobalPressureTemperature2Model::install(PyObject *module)
          {
            installType(&PY_TYPE(GlobalPressureTemperature2Model), &PY_TYPE_DEF(GlobalPressureTemperature2Model), module, "GlobalPressureTemperature2Model", 0);
          }

          void t_GlobalPressureTemperature2Model::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalPressureTemperature2Model), "class_", make_descriptor(GlobalPressureTemperature2Model::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalPressureTemperature2Model), "wrapfn_", make_descriptor(t_GlobalPressureTemperature2Model::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalPressureTemperature2Model), "boxfn_", make_descriptor(boxObject));
            env->getClass(GlobalPressureTemperature2Model::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalPressureTemperature2Model), "DEFAULT_SUPPORTED_NAMES", make_descriptor(j2p(*GlobalPressureTemperature2Model::DEFAULT_SUPPORTED_NAMES)));
          }

          static PyObject *t_GlobalPressureTemperature2Model_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GlobalPressureTemperature2Model::initializeClass, 1)))
              return NULL;
            return t_GlobalPressureTemperature2Model::wrap_Object(GlobalPressureTemperature2Model(((t_GlobalPressureTemperature2Model *) arg)->object.this$));
          }
          static PyObject *t_GlobalPressureTemperature2Model_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GlobalPressureTemperature2Model::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GlobalPressureTemperature2Model_init_(t_GlobalPressureTemperature2Model *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::models::earth::Geoid a2((jobject) NULL);
                GlobalPressureTemperature2Model object((jobject) NULL);

                if (!parseArgs(args, "DDk", ::org::orekit::models::earth::Geoid::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = GlobalPressureTemperature2Model(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::java::lang::String a0((jobject) NULL);
                jdouble a1;
                jdouble a2;
                ::org::orekit::models::earth::Geoid a3((jobject) NULL);
                GlobalPressureTemperature2Model object((jobject) NULL);

                if (!parseArgs(args, "sDDk", ::org::orekit::models::earth::Geoid::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = GlobalPressureTemperature2Model(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 6:
              {
                ::java::lang::String a0((jobject) NULL);
                jdouble a1;
                jdouble a2;
                ::org::orekit::models::earth::Geoid a3((jobject) NULL);
                ::org::orekit::data::DataProvidersManager a4((jobject) NULL);
                ::org::orekit::time::TimeScale a5((jobject) NULL);
                GlobalPressureTemperature2Model object((jobject) NULL);

                if (!parseArgs(args, "sDDkkk", ::org::orekit::models::earth::Geoid::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                {
                  INT_CALL(object = GlobalPressureTemperature2Model(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_GlobalPressureTemperature2Model_getA(t_GlobalPressureTemperature2Model *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getA());
            return result.wrap();
          }

          static PyObject *t_GlobalPressureTemperature2Model_getPressure(t_GlobalPressureTemperature2Model *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getPressure());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_GlobalPressureTemperature2Model_getTemperature(t_GlobalPressureTemperature2Model *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTemperature());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_GlobalPressureTemperature2Model_getWaterVaporPressure(t_GlobalPressureTemperature2Model *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getWaterVaporPressure());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_GlobalPressureTemperature2Model_weatherParameters(t_GlobalPressureTemperature2Model *self, PyObject *args)
          {
            jdouble a0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.weatherParameters(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "weatherParameters", args);
            return NULL;
          }

          static PyObject *t_GlobalPressureTemperature2Model_get__a(t_GlobalPressureTemperature2Model *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getA());
            return value.wrap();
          }

          static PyObject *t_GlobalPressureTemperature2Model_get__pressure(t_GlobalPressureTemperature2Model *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getPressure());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_GlobalPressureTemperature2Model_get__temperature(t_GlobalPressureTemperature2Model *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTemperature());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_GlobalPressureTemperature2Model_get__waterVaporPressure(t_GlobalPressureTemperature2Model *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getWaterVaporPressure());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonAbstractPropagator.h"
#include "java/lang/Throwable.h"
#include "java/util/Collection.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonAbstractPropagator::class$ = NULL;
      jmethodID *PythonAbstractPropagator::mids$ = NULL;
      bool PythonAbstractPropagator::live$ = false;

      jclass PythonAbstractPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonAbstractPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addEventDetector_2e2dfaf38ed50d1d] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V");
          mids$[mid_clearEventsDetectors_0640e6acf969ed28] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getEphemerisGenerator_6a3edfe13bcee780] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;");
          mids$[mid_getEventsDetectors_12ee61573a18f417] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_propagate_b96c0d97a162784d] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractPropagator::PythonAbstractPropagator() : ::org::orekit::propagation::AbstractPropagator(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonAbstractPropagator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonAbstractPropagator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonAbstractPropagator::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      static PyObject *t_PythonAbstractPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractPropagator_init_(t_PythonAbstractPropagator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractPropagator_finalize(t_PythonAbstractPropagator *self);
      static PyObject *t_PythonAbstractPropagator_pythonExtension(t_PythonAbstractPropagator *self, PyObject *args);
      static void JNICALL t_PythonAbstractPropagator_addEventDetector0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonAbstractPropagator_clearEventsDetectors1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractPropagator_getEphemerisGenerator2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractPropagator_getEventsDetectors3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractPropagator_propagate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonAbstractPropagator_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractPropagator_get__self(t_PythonAbstractPropagator *self, void *data);
      static PyGetSetDef t_PythonAbstractPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractPropagator, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractPropagator__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractPropagator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractPropagator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractPropagator)[] = {
        { Py_tp_methods, t_PythonAbstractPropagator__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractPropagator_init_ },
        { Py_tp_getset, t_PythonAbstractPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractPropagator)[] = {
        &PY_TYPE_DEF(::org::orekit::propagation::AbstractPropagator),
        NULL
      };

      DEFINE_TYPE(PythonAbstractPropagator, t_PythonAbstractPropagator, PythonAbstractPropagator);

      void t_PythonAbstractPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractPropagator), &PY_TYPE_DEF(PythonAbstractPropagator), module, "PythonAbstractPropagator", 1);
      }

      void t_PythonAbstractPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagator), "class_", make_descriptor(PythonAbstractPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagator), "wrapfn_", make_descriptor(t_PythonAbstractPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractPropagator::initializeClass);
        JNINativeMethod methods[] = {
          { "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V", (void *) t_PythonAbstractPropagator_addEventDetector0 },
          { "clearEventsDetectors", "()V", (void *) t_PythonAbstractPropagator_clearEventsDetectors1 },
          { "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;", (void *) t_PythonAbstractPropagator_getEphemerisGenerator2 },
          { "getEventsDetectors", "()Ljava/util/Collection;", (void *) t_PythonAbstractPropagator_getEventsDetectors3 },
          { "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonAbstractPropagator_propagate4 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractPropagator_pythonDecRef5 },
        };
        env->registerNatives(cls, methods, 6);
      }

      static PyObject *t_PythonAbstractPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractPropagator::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractPropagator::wrap_Object(PythonAbstractPropagator(((t_PythonAbstractPropagator *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractPropagator_init_(t_PythonAbstractPropagator *self, PyObject *args, PyObject *kwds)
      {
        PythonAbstractPropagator object((jobject) NULL);

        INT_CALL(object = PythonAbstractPropagator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAbstractPropagator_finalize(t_PythonAbstractPropagator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractPropagator_pythonExtension(t_PythonAbstractPropagator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static void JNICALL t_PythonAbstractPropagator_addEventDetector0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::events::t_EventDetector::wrap_Object(::org::orekit::propagation::events::EventDetector(a0));
        PyObject *result = PyObject_CallMethod(obj, "addEventDetector", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonAbstractPropagator_clearEventsDetectors1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *result = PyObject_CallMethod(obj, "clearEventsDetectors", "");
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonAbstractPropagator_getEphemerisGenerator2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::EphemerisGenerator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEphemerisGenerator", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::EphemerisGenerator::initializeClass, &value))
        {
          throwTypeError("getEphemerisGenerator", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonAbstractPropagator_getEventsDetectors3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::Collection value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEventsDetectors", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::Collection::initializeClass, &value))
        {
          throwTypeError("getEventsDetectors", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonAbstractPropagator_propagate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
        {
          throwTypeError("propagate", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static void JNICALL t_PythonAbstractPropagator_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractPropagator_get__self(t_PythonAbstractPropagator *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1D.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/geometry/Point.h"
#include "java/text/NumberFormat.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1D.h"
#include "org/hipparchus/geometry/Space.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/Vector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *Vector1D::class$ = NULL;
          jmethodID *Vector1D::mids$ = NULL;
          bool Vector1D::live$ = false;
          Vector1D *Vector1D::NEGATIVE_INFINITY = NULL;
          Vector1D *Vector1D::NaN = NULL;
          Vector1D *Vector1D::ONE = NULL;
          Vector1D *Vector1D::POSITIVE_INFINITY = NULL;
          Vector1D *Vector1D::ZERO = NULL;

          jclass Vector1D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/Vector1D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_6660e0e219ae6305] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/oned/Vector1D;)V");
              mids$[mid_init$_930cbfef52871ef4] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/oned/Vector1D;DLorg/hipparchus/geometry/euclidean/oned/Vector1D;)V");
              mids$[mid_init$_e450a5f39d2b7fe6] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/oned/Vector1D;DLorg/hipparchus/geometry/euclidean/oned/Vector1D;DLorg/hipparchus/geometry/euclidean/oned/Vector1D;)V");
              mids$[mid_init$_7c81f54288af27f7] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/oned/Vector1D;DLorg/hipparchus/geometry/euclidean/oned/Vector1D;DLorg/hipparchus/geometry/euclidean/oned/Vector1D;DLorg/hipparchus/geometry/euclidean/oned/Vector1D;)V");
              mids$[mid_add_be3d5e0f525cd980] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_add_08732e6f726f426f] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_distance_cf1fec2b7b1c0efe] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_distance_6ca3078378362c71] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/oned/Vector1D;Lorg/hipparchus/geometry/euclidean/oned/Vector1D;)D");
              mids$[mid_distance1_b540ea36818b5810] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceInf_b540ea36818b5810] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceInf_6ca3078378362c71] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/oned/Vector1D;Lorg/hipparchus/geometry/euclidean/oned/Vector1D;)D");
              mids$[mid_distanceSq_b540ea36818b5810] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceSq_6ca3078378362c71] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/oned/Vector1D;Lorg/hipparchus/geometry/euclidean/oned/Vector1D;)D");
              mids$[mid_dotProduct_b540ea36818b5810] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_equalsIeee754_221e8e85cb385209] = env->getMethodID(cls, "equalsIeee754", "(Ljava/lang/Object;)Z");
              mids$[mid_getNorm_557b8123390d8d0c] = env->getMethodID(cls, "getNorm", "()D");
              mids$[mid_getNorm1_557b8123390d8d0c] = env->getMethodID(cls, "getNorm1", "()D");
              mids$[mid_getNormInf_557b8123390d8d0c] = env->getMethodID(cls, "getNormInf", "()D");
              mids$[mid_getNormSq_557b8123390d8d0c] = env->getMethodID(cls, "getNormSq", "()D");
              mids$[mid_getSpace_cf9410d213a7cbb9] = env->getMethodID(cls, "getSpace", "()Lorg/hipparchus/geometry/Space;");
              mids$[mid_getX_557b8123390d8d0c] = env->getMethodID(cls, "getX", "()D");
              mids$[mid_getZero_466c0ad242ce3f41] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isInfinite_89b302893bdbe1f1] = env->getMethodID(cls, "isInfinite", "()Z");
              mids$[mid_isNaN_89b302893bdbe1f1] = env->getMethodID(cls, "isNaN", "()Z");
              mids$[mid_negate_466c0ad242ce3f41] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_scalarMultiply_5dbe0d73eb008e74] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_subtract_be3d5e0f525cd980] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_subtract_08732e6f726f426f] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_toString_8d9667e91d8ffa97] = env->getMethodID(cls, "toString", "(Ljava/text/NumberFormat;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              NEGATIVE_INFINITY = new Vector1D(env->getStaticObjectField(cls, "NEGATIVE_INFINITY", "Lorg/hipparchus/geometry/euclidean/oned/Vector1D;"));
              NaN = new Vector1D(env->getStaticObjectField(cls, "NaN", "Lorg/hipparchus/geometry/euclidean/oned/Vector1D;"));
              ONE = new Vector1D(env->getStaticObjectField(cls, "ONE", "Lorg/hipparchus/geometry/euclidean/oned/Vector1D;"));
              POSITIVE_INFINITY = new Vector1D(env->getStaticObjectField(cls, "POSITIVE_INFINITY", "Lorg/hipparchus/geometry/euclidean/oned/Vector1D;"));
              ZERO = new Vector1D(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/geometry/euclidean/oned/Vector1D;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Vector1D::Vector1D(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

          Vector1D::Vector1D(jdouble a0, const Vector1D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6660e0e219ae6305, a0, a1.this$)) {}

          Vector1D::Vector1D(jdouble a0, const Vector1D & a1, jdouble a2, const Vector1D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_930cbfef52871ef4, a0, a1.this$, a2, a3.this$)) {}

          Vector1D::Vector1D(jdouble a0, const Vector1D & a1, jdouble a2, const Vector1D & a3, jdouble a4, const Vector1D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e450a5f39d2b7fe6, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

          Vector1D::Vector1D(jdouble a0, const Vector1D & a1, jdouble a2, const Vector1D & a3, jdouble a4, const Vector1D & a5, jdouble a6, const Vector1D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7c81f54288af27f7, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

          Vector1D Vector1D::add(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_add_be3d5e0f525cd980], a0.this$));
          }

          Vector1D Vector1D::add(jdouble a0, const ::org::hipparchus::geometry::Vector & a1) const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_add_08732e6f726f426f], a0, a1.this$));
          }

          jdouble Vector1D::distance(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_cf1fec2b7b1c0efe], a0.this$);
          }

          jdouble Vector1D::distance(const Vector1D & a0, const Vector1D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance_6ca3078378362c71], a0.this$, a1.this$);
          }

          jdouble Vector1D::distance1(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance1_b540ea36818b5810], a0.this$);
          }

          jdouble Vector1D::distanceInf(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distanceInf_b540ea36818b5810], a0.this$);
          }

          jdouble Vector1D::distanceInf(const Vector1D & a0, const Vector1D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distanceInf_6ca3078378362c71], a0.this$, a1.this$);
          }

          jdouble Vector1D::distanceSq(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distanceSq_b540ea36818b5810], a0.this$);
          }

          jdouble Vector1D::distanceSq(const Vector1D & a0, const Vector1D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distanceSq_6ca3078378362c71], a0.this$, a1.this$);
          }

          jdouble Vector1D::dotProduct(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_dotProduct_b540ea36818b5810], a0.this$);
          }

          jboolean Vector1D::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
          }

          jboolean Vector1D::equalsIeee754(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equalsIeee754_221e8e85cb385209], a0.this$);
          }

          jdouble Vector1D::getNorm() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNorm_557b8123390d8d0c]);
          }

          jdouble Vector1D::getNorm1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNorm1_557b8123390d8d0c]);
          }

          jdouble Vector1D::getNormInf() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormInf_557b8123390d8d0c]);
          }

          jdouble Vector1D::getNormSq() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormSq_557b8123390d8d0c]);
          }

          ::org::hipparchus::geometry::Space Vector1D::getSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSpace_cf9410d213a7cbb9]));
          }

          jdouble Vector1D::getX() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getX_557b8123390d8d0c]);
          }

          Vector1D Vector1D::getZero() const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_getZero_466c0ad242ce3f41]));
          }

          jint Vector1D::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
          }

          jboolean Vector1D::isInfinite() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isInfinite_89b302893bdbe1f1]);
          }

          jboolean Vector1D::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_89b302893bdbe1f1]);
          }

          Vector1D Vector1D::negate() const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_negate_466c0ad242ce3f41]));
          }

          Vector1D Vector1D::scalarMultiply(jdouble a0) const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_5dbe0d73eb008e74], a0));
          }

          Vector1D Vector1D::subtract(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_subtract_be3d5e0f525cd980], a0.this$));
          }

          Vector1D Vector1D::subtract(jdouble a0, const ::org::hipparchus::geometry::Vector & a1) const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_subtract_08732e6f726f426f], a0, a1.this$));
          }

          ::java::lang::String Vector1D::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
          }

          ::java::lang::String Vector1D::toString(const ::java::text::NumberFormat & a0) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_8d9667e91d8ffa97], a0.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {
          static PyObject *t_Vector1D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector1D_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Vector1D_init_(t_Vector1D *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Vector1D_add(t_Vector1D *self, PyObject *args);
          static PyObject *t_Vector1D_distance(t_Vector1D *self, PyObject *arg);
          static PyObject *t_Vector1D_distance1(t_Vector1D *self, PyObject *arg);
          static PyObject *t_Vector1D_distanceInf(t_Vector1D *self, PyObject *arg);
          static PyObject *t_Vector1D_distanceInf_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector1D_distanceSq(t_Vector1D *self, PyObject *arg);
          static PyObject *t_Vector1D_distanceSq_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector1D_distance_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector1D_dotProduct(t_Vector1D *self, PyObject *arg);
          static PyObject *t_Vector1D_equals(t_Vector1D *self, PyObject *args);
          static PyObject *t_Vector1D_equalsIeee754(t_Vector1D *self, PyObject *arg);
          static PyObject *t_Vector1D_getNorm(t_Vector1D *self);
          static PyObject *t_Vector1D_getNorm1(t_Vector1D *self);
          static PyObject *t_Vector1D_getNormInf(t_Vector1D *self);
          static PyObject *t_Vector1D_getNormSq(t_Vector1D *self);
          static PyObject *t_Vector1D_getSpace(t_Vector1D *self);
          static PyObject *t_Vector1D_getX(t_Vector1D *self);
          static PyObject *t_Vector1D_getZero(t_Vector1D *self);
          static PyObject *t_Vector1D_hashCode(t_Vector1D *self, PyObject *args);
          static PyObject *t_Vector1D_isInfinite(t_Vector1D *self);
          static PyObject *t_Vector1D_isNaN(t_Vector1D *self);
          static PyObject *t_Vector1D_negate(t_Vector1D *self);
          static PyObject *t_Vector1D_scalarMultiply(t_Vector1D *self, PyObject *arg);
          static PyObject *t_Vector1D_subtract(t_Vector1D *self, PyObject *args);
          static PyObject *t_Vector1D_toString(t_Vector1D *self, PyObject *args);
          static PyObject *t_Vector1D_get__infinite(t_Vector1D *self, void *data);
          static PyObject *t_Vector1D_get__naN(t_Vector1D *self, void *data);
          static PyObject *t_Vector1D_get__norm(t_Vector1D *self, void *data);
          static PyObject *t_Vector1D_get__norm1(t_Vector1D *self, void *data);
          static PyObject *t_Vector1D_get__normInf(t_Vector1D *self, void *data);
          static PyObject *t_Vector1D_get__normSq(t_Vector1D *self, void *data);
          static PyObject *t_Vector1D_get__space(t_Vector1D *self, void *data);
          static PyObject *t_Vector1D_get__x(t_Vector1D *self, void *data);
          static PyObject *t_Vector1D_get__zero(t_Vector1D *self, void *data);
          static PyGetSetDef t_Vector1D__fields_[] = {
            DECLARE_GET_FIELD(t_Vector1D, infinite),
            DECLARE_GET_FIELD(t_Vector1D, naN),
            DECLARE_GET_FIELD(t_Vector1D, norm),
            DECLARE_GET_FIELD(t_Vector1D, norm1),
            DECLARE_GET_FIELD(t_Vector1D, normInf),
            DECLARE_GET_FIELD(t_Vector1D, normSq),
            DECLARE_GET_FIELD(t_Vector1D, space),
            DECLARE_GET_FIELD(t_Vector1D, x),
            DECLARE_GET_FIELD(t_Vector1D, zero),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Vector1D__methods_[] = {
            DECLARE_METHOD(t_Vector1D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector1D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector1D, add, METH_VARARGS),
            DECLARE_METHOD(t_Vector1D, distance, METH_O),
            DECLARE_METHOD(t_Vector1D, distance1, METH_O),
            DECLARE_METHOD(t_Vector1D, distanceInf, METH_O),
            DECLARE_METHOD(t_Vector1D, distanceInf_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector1D, distanceSq, METH_O),
            DECLARE_METHOD(t_Vector1D, distanceSq_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector1D, distance_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector1D, dotProduct, METH_O),
            DECLARE_METHOD(t_Vector1D, equals, METH_VARARGS),
            DECLARE_METHOD(t_Vector1D, equalsIeee754, METH_O),
            DECLARE_METHOD(t_Vector1D, getNorm, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, getNorm1, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, getNormInf, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, getNormSq, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, getSpace, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, getX, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, getZero, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_Vector1D, isInfinite, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, isNaN, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, negate, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, scalarMultiply, METH_O),
            DECLARE_METHOD(t_Vector1D, subtract, METH_VARARGS),
            DECLARE_METHOD(t_Vector1D, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Vector1D)[] = {
            { Py_tp_methods, t_Vector1D__methods_ },
            { Py_tp_init, (void *) t_Vector1D_init_ },
            { Py_tp_getset, t_Vector1D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Vector1D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Vector1D, t_Vector1D, Vector1D);

          void t_Vector1D::install(PyObject *module)
          {
            installType(&PY_TYPE(Vector1D), &PY_TYPE_DEF(Vector1D), module, "Vector1D", 0);
          }

          void t_Vector1D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1D), "class_", make_descriptor(Vector1D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1D), "wrapfn_", make_descriptor(t_Vector1D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1D), "boxfn_", make_descriptor(boxObject));
            env->getClass(Vector1D::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1D), "NEGATIVE_INFINITY", make_descriptor(t_Vector1D::wrap_Object(*Vector1D::NEGATIVE_INFINITY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1D), "NaN", make_descriptor(t_Vector1D::wrap_Object(*Vector1D::NaN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1D), "ONE", make_descriptor(t_Vector1D::wrap_Object(*Vector1D::ONE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1D), "POSITIVE_INFINITY", make_descriptor(t_Vector1D::wrap_Object(*Vector1D::POSITIVE_INFINITY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1D), "ZERO", make_descriptor(t_Vector1D::wrap_Object(*Vector1D::ZERO)));
          }

          static PyObject *t_Vector1D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Vector1D::initializeClass, 1)))
              return NULL;
            return t_Vector1D::wrap_Object(Vector1D(((t_Vector1D *) arg)->object.this$));
          }
          static PyObject *t_Vector1D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Vector1D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Vector1D_init_(t_Vector1D *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                Vector1D object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = Vector1D(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                Vector1D a1((jobject) NULL);
                Vector1D object((jobject) NULL);

                if (!parseArgs(args, "Dk", Vector1D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Vector1D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                Vector1D a1((jobject) NULL);
                jdouble a2;
                Vector1D a3((jobject) NULL);
                Vector1D object((jobject) NULL);

                if (!parseArgs(args, "DkDk", Vector1D::initializeClass, Vector1D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Vector1D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 6:
              {
                jdouble a0;
                Vector1D a1((jobject) NULL);
                jdouble a2;
                Vector1D a3((jobject) NULL);
                jdouble a4;
                Vector1D a5((jobject) NULL);
                Vector1D object((jobject) NULL);

                if (!parseArgs(args, "DkDkDk", Vector1D::initializeClass, Vector1D::initializeClass, Vector1D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                {
                  INT_CALL(object = Vector1D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 8:
              {
                jdouble a0;
                Vector1D a1((jobject) NULL);
                jdouble a2;
                Vector1D a3((jobject) NULL);
                jdouble a4;
                Vector1D a5((jobject) NULL);
                jdouble a6;
                Vector1D a7((jobject) NULL);
                Vector1D object((jobject) NULL);

                if (!parseArgs(args, "DkDkDkDk", Vector1D::initializeClass, Vector1D::initializeClass, Vector1D::initializeClass, Vector1D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
                {
                  INT_CALL(object = Vector1D(a0, a1, a2, a3, a4, a5, a6, a7));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Vector1D_add(t_Vector1D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                Vector1D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_Vector1D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                ::org::hipparchus::geometry::Vector a1((jobject) NULL);
                PyTypeObject **p1;
                Vector1D result((jobject) NULL);

                if (!parseArgs(args, "DK", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_Vector1D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "add", args);
            return NULL;
          }

          static PyObject *t_Vector1D_distance(t_Vector1D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.distance(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance", arg);
            return NULL;
          }

          static PyObject *t_Vector1D_distance1(t_Vector1D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distance1(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance1", arg);
            return NULL;
          }

          static PyObject *t_Vector1D_distanceInf(t_Vector1D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distanceInf(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distanceInf", arg);
            return NULL;
          }

          static PyObject *t_Vector1D_distanceInf_(PyTypeObject *type, PyObject *args)
          {
            Vector1D a0((jobject) NULL);
            Vector1D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector1D::initializeClass, Vector1D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::oned::Vector1D::distanceInf(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distanceInf_", args);
            return NULL;
          }

          static PyObject *t_Vector1D_distanceSq(t_Vector1D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distanceSq(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distanceSq", arg);
            return NULL;
          }

          static PyObject *t_Vector1D_distanceSq_(PyTypeObject *type, PyObject *args)
          {
            Vector1D a0((jobject) NULL);
            Vector1D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector1D::initializeClass, Vector1D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::oned::Vector1D::distanceSq(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distanceSq_", args);
            return NULL;
          }

          static PyObject *t_Vector1D_distance_(PyTypeObject *type, PyObject *args)
          {
            Vector1D a0((jobject) NULL);
            Vector1D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector1D::initializeClass, Vector1D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::oned::Vector1D::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance_", args);
            return NULL;
          }

          static PyObject *t_Vector1D_dotProduct(t_Vector1D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.dotProduct(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
            return NULL;
          }

          static PyObject *t_Vector1D_equals(t_Vector1D *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(Vector1D), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_Vector1D_equalsIeee754(t_Vector1D *self, PyObject *arg)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "o", &a0))
            {
              OBJ_CALL(result = self->object.equalsIeee754(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "equalsIeee754", arg);
            return NULL;
          }

          static PyObject *t_Vector1D_getNorm(t_Vector1D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNorm());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector1D_getNorm1(t_Vector1D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNorm1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector1D_getNormInf(t_Vector1D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNormInf());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector1D_getNormSq(t_Vector1D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNormSq());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector1D_getSpace(t_Vector1D *self)
          {
            ::org::hipparchus::geometry::Space result((jobject) NULL);
            OBJ_CALL(result = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
          }

          static PyObject *t_Vector1D_getX(t_Vector1D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getX());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector1D_getZero(t_Vector1D *self)
          {
            Vector1D result((jobject) NULL);
            OBJ_CALL(result = self->object.getZero());
            return t_Vector1D::wrap_Object(result);
          }

          static PyObject *t_Vector1D_hashCode(t_Vector1D *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(Vector1D), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_Vector1D_isInfinite(t_Vector1D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isInfinite());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Vector1D_isNaN(t_Vector1D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNaN());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Vector1D_negate(t_Vector1D *self)
          {
            Vector1D result((jobject) NULL);
            OBJ_CALL(result = self->object.negate());
            return t_Vector1D::wrap_Object(result);
          }

          static PyObject *t_Vector1D_scalarMultiply(t_Vector1D *self, PyObject *arg)
          {
            jdouble a0;
            Vector1D result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.scalarMultiply(a0));
              return t_Vector1D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
            return NULL;
          }

          static PyObject *t_Vector1D_subtract(t_Vector1D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                Vector1D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_Vector1D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                ::org::hipparchus::geometry::Vector a1((jobject) NULL);
                PyTypeObject **p1;
                Vector1D result((jobject) NULL);

                if (!parseArgs(args, "DK", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_Vector1D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "subtract", args);
            return NULL;
          }

          static PyObject *t_Vector1D_toString(t_Vector1D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.toString());
                return j2p(result);
              }
              break;
             case 1:
              {
                ::java::text::NumberFormat a0((jobject) NULL);
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.toString(a0));
                  return j2p(result);
                }
              }
            }

            return callSuper(PY_TYPE(Vector1D), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_Vector1D_get__infinite(t_Vector1D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isInfinite());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Vector1D_get__naN(t_Vector1D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNaN());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Vector1D_get__norm(t_Vector1D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNorm());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector1D_get__norm1(t_Vector1D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNorm1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector1D_get__normInf(t_Vector1D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNormInf());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector1D_get__normSq(t_Vector1D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNormSq());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector1D_get__space(t_Vector1D *self, void *data)
          {
            ::org::hipparchus::geometry::Space value((jobject) NULL);
            OBJ_CALL(value = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
          }

          static PyObject *t_Vector1D_get__x(t_Vector1D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getX());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector1D_get__zero(t_Vector1D *self, void *data)
          {
            Vector1D value((jobject) NULL);
            OBJ_CALL(value = self->object.getZero());
            return t_Vector1D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/FieldLaguerreRuleFactory.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *FieldLaguerreRuleFactory::class$ = NULL;
          jmethodID *FieldLaguerreRuleFactory::mids$ = NULL;
          bool FieldLaguerreRuleFactory::live$ = false;

          jclass FieldLaguerreRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/FieldLaguerreRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_979ae7f57a96b096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
              mids$[mid_computeRule_9a5adfb225849173] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldLaguerreRuleFactory::FieldLaguerreRuleFactory(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_979ae7f57a96b096, a0.this$)) {}

          ::org::hipparchus::util::Pair FieldLaguerreRuleFactory::computeRule(jint a0) const
          {
            return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_computeRule_9a5adfb225849173], a0));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {
          static PyObject *t_FieldLaguerreRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldLaguerreRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldLaguerreRuleFactory_of_(t_FieldLaguerreRuleFactory *self, PyObject *args);
          static int t_FieldLaguerreRuleFactory_init_(t_FieldLaguerreRuleFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldLaguerreRuleFactory_computeRule(t_FieldLaguerreRuleFactory *self, PyObject *arg);
          static PyObject *t_FieldLaguerreRuleFactory_get__parameters_(t_FieldLaguerreRuleFactory *self, void *data);
          static PyGetSetDef t_FieldLaguerreRuleFactory__fields_[] = {
            DECLARE_GET_FIELD(t_FieldLaguerreRuleFactory, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldLaguerreRuleFactory__methods_[] = {
            DECLARE_METHOD(t_FieldLaguerreRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldLaguerreRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldLaguerreRuleFactory, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldLaguerreRuleFactory, computeRule, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldLaguerreRuleFactory)[] = {
            { Py_tp_methods, t_FieldLaguerreRuleFactory__methods_ },
            { Py_tp_init, (void *) t_FieldLaguerreRuleFactory_init_ },
            { Py_tp_getset, t_FieldLaguerreRuleFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldLaguerreRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(FieldLaguerreRuleFactory, t_FieldLaguerreRuleFactory, FieldLaguerreRuleFactory);
          PyObject *t_FieldLaguerreRuleFactory::wrap_Object(const FieldLaguerreRuleFactory& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldLaguerreRuleFactory::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldLaguerreRuleFactory *self = (t_FieldLaguerreRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldLaguerreRuleFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldLaguerreRuleFactory::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldLaguerreRuleFactory *self = (t_FieldLaguerreRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldLaguerreRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldLaguerreRuleFactory), &PY_TYPE_DEF(FieldLaguerreRuleFactory), module, "FieldLaguerreRuleFactory", 0);
          }

          void t_FieldLaguerreRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLaguerreRuleFactory), "class_", make_descriptor(FieldLaguerreRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLaguerreRuleFactory), "wrapfn_", make_descriptor(t_FieldLaguerreRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLaguerreRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldLaguerreRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldLaguerreRuleFactory::initializeClass, 1)))
              return NULL;
            return t_FieldLaguerreRuleFactory::wrap_Object(FieldLaguerreRuleFactory(((t_FieldLaguerreRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_FieldLaguerreRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldLaguerreRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldLaguerreRuleFactory_of_(t_FieldLaguerreRuleFactory *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldLaguerreRuleFactory_init_(t_FieldLaguerreRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldLaguerreRuleFactory object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldLaguerreRuleFactory(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FieldLaguerreRuleFactory_computeRule(t_FieldLaguerreRuleFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::util::Pair result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.computeRule(a0));
              return ::org::hipparchus::util::t_Pair::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "computeRule", arg);
            return NULL;
          }
          static PyObject *t_FieldLaguerreRuleFactory_get__parameters_(t_FieldLaguerreRuleFactory *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D$NoSubSpaceException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *Sphere1D$NoSubSpaceException::class$ = NULL;
          jmethodID *Sphere1D$NoSubSpaceException::mids$ = NULL;
          bool Sphere1D$NoSubSpaceException::live$ = false;

          jclass Sphere1D$NoSubSpaceException::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/Sphere1D$NoSubSpaceException");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Sphere1D$NoSubSpaceException::Sphere1D$NoSubSpaceException() : ::org::hipparchus::exception::MathRuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {
          static PyObject *t_Sphere1D$NoSubSpaceException_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere1D$NoSubSpaceException_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Sphere1D$NoSubSpaceException_init_(t_Sphere1D$NoSubSpaceException *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_Sphere1D$NoSubSpaceException__methods_[] = {
            DECLARE_METHOD(t_Sphere1D$NoSubSpaceException, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere1D$NoSubSpaceException, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Sphere1D$NoSubSpaceException)[] = {
            { Py_tp_methods, t_Sphere1D$NoSubSpaceException__methods_ },
            { Py_tp_init, (void *) t_Sphere1D$NoSubSpaceException_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Sphere1D$NoSubSpaceException)[] = {
            &PY_TYPE_DEF(::org::hipparchus::exception::MathRuntimeException),
            NULL
          };

          DEFINE_TYPE(Sphere1D$NoSubSpaceException, t_Sphere1D$NoSubSpaceException, Sphere1D$NoSubSpaceException);

          void t_Sphere1D$NoSubSpaceException::install(PyObject *module)
          {
            installType(&PY_TYPE(Sphere1D$NoSubSpaceException), &PY_TYPE_DEF(Sphere1D$NoSubSpaceException), module, "Sphere1D$NoSubSpaceException", 0);
          }

          void t_Sphere1D$NoSubSpaceException::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D$NoSubSpaceException), "class_", make_descriptor(Sphere1D$NoSubSpaceException::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D$NoSubSpaceException), "wrapfn_", make_descriptor(t_Sphere1D$NoSubSpaceException::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D$NoSubSpaceException), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Sphere1D$NoSubSpaceException_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Sphere1D$NoSubSpaceException::initializeClass, 1)))
              return NULL;
            return t_Sphere1D$NoSubSpaceException::wrap_Object(Sphere1D$NoSubSpaceException(((t_Sphere1D$NoSubSpaceException *) arg)->object.this$));
          }
          static PyObject *t_Sphere1D$NoSubSpaceException_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Sphere1D$NoSubSpaceException::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Sphere1D$NoSubSpaceException_init_(t_Sphere1D$NoSubSpaceException *self, PyObject *args, PyObject *kwds)
          {
            Sphere1D$NoSubSpaceException object((jobject) NULL);

            INT_CALL(object = Sphere1D$NoSubSpaceException());
            self->object = object;

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1Field.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDerivative1Field::class$ = NULL;
        jmethodID *UnivariateDerivative1Field::mids$ = NULL;
        bool UnivariateDerivative1Field::live$ = false;

        jclass UnivariateDerivative1Field::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDerivative1Field");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getInstance_a70907128b423cca] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1Field;");
            mids$[mid_getOne_23c0f53d490c173c] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_getRuntimeClass_d4b191ff8147475d] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getZero_23c0f53d490c173c] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean UnivariateDerivative1Field::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
        }

        UnivariateDerivative1Field UnivariateDerivative1Field::getInstance()
        {
          jclass cls = env->getClass(initializeClass);
          return UnivariateDerivative1Field(env->callStaticObjectMethod(cls, mids$[mid_getInstance_a70907128b423cca]));
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDerivative1 UnivariateDerivative1Field::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_getOne_23c0f53d490c173c]));
        }

        ::java::lang::Class UnivariateDerivative1Field::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_d4b191ff8147475d]));
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDerivative1 UnivariateDerivative1Field::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_getZero_23c0f53d490c173c]));
        }

        jint UnivariateDerivative1Field::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        static PyObject *t_UnivariateDerivative1Field_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative1Field_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative1Field_equals(t_UnivariateDerivative1Field *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1Field_getInstance(PyTypeObject *type);
        static PyObject *t_UnivariateDerivative1Field_getOne(t_UnivariateDerivative1Field *self);
        static PyObject *t_UnivariateDerivative1Field_getRuntimeClass(t_UnivariateDerivative1Field *self);
        static PyObject *t_UnivariateDerivative1Field_getZero(t_UnivariateDerivative1Field *self);
        static PyObject *t_UnivariateDerivative1Field_hashCode(t_UnivariateDerivative1Field *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1Field_get__instance(t_UnivariateDerivative1Field *self, void *data);
        static PyObject *t_UnivariateDerivative1Field_get__one(t_UnivariateDerivative1Field *self, void *data);
        static PyObject *t_UnivariateDerivative1Field_get__runtimeClass(t_UnivariateDerivative1Field *self, void *data);
        static PyObject *t_UnivariateDerivative1Field_get__zero(t_UnivariateDerivative1Field *self, void *data);
        static PyGetSetDef t_UnivariateDerivative1Field__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateDerivative1Field, instance),
          DECLARE_GET_FIELD(t_UnivariateDerivative1Field, one),
          DECLARE_GET_FIELD(t_UnivariateDerivative1Field, runtimeClass),
          DECLARE_GET_FIELD(t_UnivariateDerivative1Field, zero),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateDerivative1Field__methods_[] = {
          DECLARE_METHOD(t_UnivariateDerivative1Field, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, equals, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, getInstance, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, getOne, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, getZero, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDerivative1Field)[] = {
          { Py_tp_methods, t_UnivariateDerivative1Field__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UnivariateDerivative1Field__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDerivative1Field)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateDerivative1Field, t_UnivariateDerivative1Field, UnivariateDerivative1Field);

        void t_UnivariateDerivative1Field::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDerivative1Field), &PY_TYPE_DEF(UnivariateDerivative1Field), module, "UnivariateDerivative1Field", 0);
        }

        void t_UnivariateDerivative1Field::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1Field), "class_", make_descriptor(UnivariateDerivative1Field::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1Field), "wrapfn_", make_descriptor(t_UnivariateDerivative1Field::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1Field), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateDerivative1Field_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDerivative1Field::initializeClass, 1)))
            return NULL;
          return t_UnivariateDerivative1Field::wrap_Object(UnivariateDerivative1Field(((t_UnivariateDerivative1Field *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDerivative1Field_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDerivative1Field::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDerivative1Field_equals(t_UnivariateDerivative1Field *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1Field), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_UnivariateDerivative1Field_getInstance(PyTypeObject *type)
        {
          UnivariateDerivative1Field result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::UnivariateDerivative1Field::getInstance());
          return t_UnivariateDerivative1Field::wrap_Object(result);
        }

        static PyObject *t_UnivariateDerivative1Field_getOne(t_UnivariateDerivative1Field *self)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1 result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative1::wrap_Object(result);
        }

        static PyObject *t_UnivariateDerivative1Field_getRuntimeClass(t_UnivariateDerivative1Field *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1));
        }

        static PyObject *t_UnivariateDerivative1Field_getZero(t_UnivariateDerivative1Field *self)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1 result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative1::wrap_Object(result);
        }

        static PyObject *t_UnivariateDerivative1Field_hashCode(t_UnivariateDerivative1Field *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1Field), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_UnivariateDerivative1Field_get__instance(t_UnivariateDerivative1Field *self, void *data)
        {
          UnivariateDerivative1Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getInstance());
          return t_UnivariateDerivative1Field::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative1Field_get__one(t_UnivariateDerivative1Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1 value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative1::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative1Field_get__runtimeClass(t_UnivariateDerivative1Field *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative1Field_get__zero(t_UnivariateDerivative1Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1 value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative1::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *VisibilityTrigger::class$ = NULL;
        jmethodID *VisibilityTrigger::mids$ = NULL;
        bool VisibilityTrigger::live$ = false;
        VisibilityTrigger *VisibilityTrigger::VISIBLE_AS_SOON_AS_PARTIALLY_IN_FOV = NULL;
        VisibilityTrigger *VisibilityTrigger::VISIBLE_ONLY_WHEN_FULLY_IN_FOV = NULL;

        jclass VisibilityTrigger::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/VisibilityTrigger");

            mids$ = new jmethodID[max_mid];
            mids$[mid_radiusCorrection_7e960cd6eee376d8] = env->getMethodID(cls, "radiusCorrection", "(D)D");
            mids$[mid_valueOf_490da29f9297d604] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/propagation/events/VisibilityTrigger;");
            mids$[mid_values_f224f973835886a3] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/propagation/events/VisibilityTrigger;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            VISIBLE_AS_SOON_AS_PARTIALLY_IN_FOV = new VisibilityTrigger(env->getStaticObjectField(cls, "VISIBLE_AS_SOON_AS_PARTIALLY_IN_FOV", "Lorg/orekit/propagation/events/VisibilityTrigger;"));
            VISIBLE_ONLY_WHEN_FULLY_IN_FOV = new VisibilityTrigger(env->getStaticObjectField(cls, "VISIBLE_ONLY_WHEN_FULLY_IN_FOV", "Lorg/orekit/propagation/events/VisibilityTrigger;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble VisibilityTrigger::radiusCorrection(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_radiusCorrection_7e960cd6eee376d8], a0);
        }

        VisibilityTrigger VisibilityTrigger::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return VisibilityTrigger(env->callStaticObjectMethod(cls, mids$[mid_valueOf_490da29f9297d604], a0.this$));
        }

        JArray< VisibilityTrigger > VisibilityTrigger::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< VisibilityTrigger >(env->callStaticObjectMethod(cls, mids$[mid_values_f224f973835886a3]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        static PyObject *t_VisibilityTrigger_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_VisibilityTrigger_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_VisibilityTrigger_of_(t_VisibilityTrigger *self, PyObject *args);
        static PyObject *t_VisibilityTrigger_radiusCorrection(t_VisibilityTrigger *self, PyObject *arg);
        static PyObject *t_VisibilityTrigger_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_VisibilityTrigger_values(PyTypeObject *type);
        static PyObject *t_VisibilityTrigger_get__parameters_(t_VisibilityTrigger *self, void *data);
        static PyGetSetDef t_VisibilityTrigger__fields_[] = {
          DECLARE_GET_FIELD(t_VisibilityTrigger, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_VisibilityTrigger__methods_[] = {
          DECLARE_METHOD(t_VisibilityTrigger, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_VisibilityTrigger, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_VisibilityTrigger, of_, METH_VARARGS),
          DECLARE_METHOD(t_VisibilityTrigger, radiusCorrection, METH_O),
          DECLARE_METHOD(t_VisibilityTrigger, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_VisibilityTrigger, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(VisibilityTrigger)[] = {
          { Py_tp_methods, t_VisibilityTrigger__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_VisibilityTrigger__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(VisibilityTrigger)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(VisibilityTrigger, t_VisibilityTrigger, VisibilityTrigger);
        PyObject *t_VisibilityTrigger::wrap_Object(const VisibilityTrigger& object, PyTypeObject *p0)
        {
          PyObject *obj = t_VisibilityTrigger::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_VisibilityTrigger *self = (t_VisibilityTrigger *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_VisibilityTrigger::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_VisibilityTrigger::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_VisibilityTrigger *self = (t_VisibilityTrigger *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_VisibilityTrigger::install(PyObject *module)
        {
          installType(&PY_TYPE(VisibilityTrigger), &PY_TYPE_DEF(VisibilityTrigger), module, "VisibilityTrigger", 0);
        }

        void t_VisibilityTrigger::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(VisibilityTrigger), "class_", make_descriptor(VisibilityTrigger::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(VisibilityTrigger), "wrapfn_", make_descriptor(t_VisibilityTrigger::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(VisibilityTrigger), "boxfn_", make_descriptor(boxObject));
          env->getClass(VisibilityTrigger::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(VisibilityTrigger), "VISIBLE_AS_SOON_AS_PARTIALLY_IN_FOV", make_descriptor(t_VisibilityTrigger::wrap_Object(*VisibilityTrigger::VISIBLE_AS_SOON_AS_PARTIALLY_IN_FOV)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(VisibilityTrigger), "VISIBLE_ONLY_WHEN_FULLY_IN_FOV", make_descriptor(t_VisibilityTrigger::wrap_Object(*VisibilityTrigger::VISIBLE_ONLY_WHEN_FULLY_IN_FOV)));
        }

        static PyObject *t_VisibilityTrigger_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, VisibilityTrigger::initializeClass, 1)))
            return NULL;
          return t_VisibilityTrigger::wrap_Object(VisibilityTrigger(((t_VisibilityTrigger *) arg)->object.this$));
        }
        static PyObject *t_VisibilityTrigger_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, VisibilityTrigger::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_VisibilityTrigger_of_(t_VisibilityTrigger *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_VisibilityTrigger_radiusCorrection(t_VisibilityTrigger *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.radiusCorrection(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "radiusCorrection", arg);
          return NULL;
        }

        static PyObject *t_VisibilityTrigger_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          VisibilityTrigger result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::propagation::events::VisibilityTrigger::valueOf(a0));
            return t_VisibilityTrigger::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_VisibilityTrigger_values(PyTypeObject *type)
        {
          JArray< VisibilityTrigger > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::propagation::events::VisibilityTrigger::values());
          return JArray<jobject>(result.this$).wrap(t_VisibilityTrigger::wrap_jobject);
        }
        static PyObject *t_VisibilityTrigger_get__parameters_(t_VisibilityTrigger *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/HarmonicOscillator$Parametric.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *HarmonicOscillator$Parametric::class$ = NULL;
        jmethodID *HarmonicOscillator$Parametric::mids$ = NULL;
        bool HarmonicOscillator$Parametric::live$ = false;

        jclass HarmonicOscillator$Parametric::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/HarmonicOscillator$Parametric");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_gradient_31b9a2982d73e37a] = env->getMethodID(cls, "gradient", "(D[D)[D");
            mids$[mid_value_1bc40469b56f2c3c] = env->getMethodID(cls, "value", "(D[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HarmonicOscillator$Parametric::HarmonicOscillator$Parametric() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        JArray< jdouble > HarmonicOscillator$Parametric::gradient(jdouble a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_31b9a2982d73e37a], a0, a1.this$));
        }

        jdouble HarmonicOscillator$Parametric::value(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_1bc40469b56f2c3c], a0, a1.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_HarmonicOscillator$Parametric_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HarmonicOscillator$Parametric_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HarmonicOscillator$Parametric_init_(t_HarmonicOscillator$Parametric *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HarmonicOscillator$Parametric_gradient(t_HarmonicOscillator$Parametric *self, PyObject *args);
        static PyObject *t_HarmonicOscillator$Parametric_value(t_HarmonicOscillator$Parametric *self, PyObject *args);

        static PyMethodDef t_HarmonicOscillator$Parametric__methods_[] = {
          DECLARE_METHOD(t_HarmonicOscillator$Parametric, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HarmonicOscillator$Parametric, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HarmonicOscillator$Parametric, gradient, METH_VARARGS),
          DECLARE_METHOD(t_HarmonicOscillator$Parametric, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HarmonicOscillator$Parametric)[] = {
          { Py_tp_methods, t_HarmonicOscillator$Parametric__methods_ },
          { Py_tp_init, (void *) t_HarmonicOscillator$Parametric_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HarmonicOscillator$Parametric)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HarmonicOscillator$Parametric, t_HarmonicOscillator$Parametric, HarmonicOscillator$Parametric);

        void t_HarmonicOscillator$Parametric::install(PyObject *module)
        {
          installType(&PY_TYPE(HarmonicOscillator$Parametric), &PY_TYPE_DEF(HarmonicOscillator$Parametric), module, "HarmonicOscillator$Parametric", 0);
        }

        void t_HarmonicOscillator$Parametric::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator$Parametric), "class_", make_descriptor(HarmonicOscillator$Parametric::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator$Parametric), "wrapfn_", make_descriptor(t_HarmonicOscillator$Parametric::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator$Parametric), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HarmonicOscillator$Parametric_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HarmonicOscillator$Parametric::initializeClass, 1)))
            return NULL;
          return t_HarmonicOscillator$Parametric::wrap_Object(HarmonicOscillator$Parametric(((t_HarmonicOscillator$Parametric *) arg)->object.this$));
        }
        static PyObject *t_HarmonicOscillator$Parametric_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HarmonicOscillator$Parametric::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HarmonicOscillator$Parametric_init_(t_HarmonicOscillator$Parametric *self, PyObject *args, PyObject *kwds)
        {
          HarmonicOscillator$Parametric object((jobject) NULL);

          INT_CALL(object = HarmonicOscillator$Parametric());
          self->object = object;

          return 0;
        }

        static PyObject *t_HarmonicOscillator$Parametric_gradient(t_HarmonicOscillator$Parametric *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.gradient(a0, a1));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "gradient", args);
          return NULL;
        }

        static PyObject *t_HarmonicOscillator$Parametric_value(t_HarmonicOscillator$Parametric *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.value(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Patera2005.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/hipparchus/analysis/integration/FieldUnivariateIntegrator.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/integration/UnivariateIntegrator.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *Patera2005::class$ = NULL;
              jmethodID *Patera2005::mids$ = NULL;
              bool Patera2005::live$ = false;

              jclass Patera2005::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/Patera2005");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_init$_75c609fbbc605945] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/integration/UnivariateIntegrator;I)V");
                  mids$[mid_compute_376cdf1ab01ad011] = env->getMethodID(cls, "compute", "(DDDDDLorg/hipparchus/analysis/integration/UnivariateIntegrator;I)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_4b0f59ff7b8720f9] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;I)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_getType_4b8bf2bb84f7480e] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Patera2005::Patera2005() : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter1DNumerical2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              Patera2005::Patera2005(const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a0, jint a1) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter1DNumerical2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_75c609fbbc605945, a0.this$, a1)) {}

              ::org::orekit::ssa::metrics::ProbabilityOfCollision Patera2005::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a5, jint a6) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_376cdf1ab01ad011], a0, a1, a2, a3, a4, a5.this$, a6));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision Patera2005::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator & a5, jint a6) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_4b0f59ff7b8720f9], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType Patera2005::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_4b8bf2bb84f7480e]));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              static PyObject *t_Patera2005_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Patera2005_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Patera2005_init_(t_Patera2005 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Patera2005_compute(t_Patera2005 *self, PyObject *args);
              static PyObject *t_Patera2005_getType(t_Patera2005 *self, PyObject *args);
              static PyObject *t_Patera2005_get__type(t_Patera2005 *self, void *data);
              static PyGetSetDef t_Patera2005__fields_[] = {
                DECLARE_GET_FIELD(t_Patera2005, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Patera2005__methods_[] = {
                DECLARE_METHOD(t_Patera2005, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Patera2005, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Patera2005, compute, METH_VARARGS),
                DECLARE_METHOD(t_Patera2005, getType, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Patera2005)[] = {
                { Py_tp_methods, t_Patera2005__methods_ },
                { Py_tp_init, (void *) t_Patera2005_init_ },
                { Py_tp_getset, t_Patera2005__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Patera2005)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter1DNumerical2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(Patera2005, t_Patera2005, Patera2005);

              void t_Patera2005::install(PyObject *module)
              {
                installType(&PY_TYPE(Patera2005), &PY_TYPE_DEF(Patera2005), module, "Patera2005", 0);
              }

              void t_Patera2005::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Patera2005), "class_", make_descriptor(Patera2005::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Patera2005), "wrapfn_", make_descriptor(t_Patera2005::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Patera2005), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Patera2005_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Patera2005::initializeClass, 1)))
                  return NULL;
                return t_Patera2005::wrap_Object(Patera2005(((t_Patera2005 *) arg)->object.this$));
              }
              static PyObject *t_Patera2005_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Patera2005::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Patera2005_init_(t_Patera2005 *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    Patera2005 object((jobject) NULL);

                    INT_CALL(object = Patera2005());
                    self->object = object;
                    break;
                  }
                 case 2:
                  {
                    ::org::hipparchus::analysis::integration::UnivariateIntegrator a0((jobject) NULL);
                    jint a1;
                    Patera2005 object((jobject) NULL);

                    if (!parseArgs(args, "kI", ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &a1))
                    {
                      INT_CALL(object = Patera2005(a0, a1));
                      self->object = object;
                      break;
                    }
                  }
                 default:
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Patera2005_compute(t_Patera2005 *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 7:
                  {
                    ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator a5((jobject) NULL);
                    PyTypeObject **p5;
                    jint a6;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKKKI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::parameters_, &a6))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5, a6));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    jdouble a0;
                    jdouble a1;
                    jdouble a2;
                    jdouble a3;
                    jdouble a4;
                    ::org::hipparchus::analysis::integration::UnivariateIntegrator a5((jobject) NULL);
                    jint a6;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "DDDDDkI", ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5, a6));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                }

                return callSuper(PY_TYPE(Patera2005), (PyObject *) self, "compute", args, 2);
              }

              static PyObject *t_Patera2005_getType(t_Patera2005 *self, PyObject *args)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getType());
                  return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(PY_TYPE(Patera2005), (PyObject *) self, "getType", args, 2);
              }

              static PyObject *t_Patera2005_get__type(t_Patera2005 *self, void *data)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                OBJ_CALL(value = self->object.getType());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
