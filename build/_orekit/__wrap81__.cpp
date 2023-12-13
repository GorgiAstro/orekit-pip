#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/univariate/SimpleUnivariateValueChecker.h"
#include "org/hipparchus/optim/univariate/UnivariatePointValuePair.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *SimpleUnivariateValueChecker::class$ = NULL;
        jmethodID *SimpleUnivariateValueChecker::mids$ = NULL;
        bool SimpleUnivariateValueChecker::live$ = false;

        jclass SimpleUnivariateValueChecker::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/SimpleUnivariateValueChecker");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_2aa803b9073e6a76] = env->getMethodID(cls, "<init>", "(DDI)V");
            mids$[mid_converged_5e69550335eac108] = env->getMethodID(cls, "converged", "(ILorg/hipparchus/optim/univariate/UnivariatePointValuePair;Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SimpleUnivariateValueChecker::SimpleUnivariateValueChecker(jdouble a0, jdouble a1) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        SimpleUnivariateValueChecker::SimpleUnivariateValueChecker(jdouble a0, jdouble a1, jint a2) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_2aa803b9073e6a76, a0, a1, a2)) {}

        jboolean SimpleUnivariateValueChecker::converged(jint a0, const ::org::hipparchus::optim::univariate::UnivariatePointValuePair & a1, const ::org::hipparchus::optim::univariate::UnivariatePointValuePair & a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_converged_5e69550335eac108], a0, a1.this$, a2.this$);
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
    namespace optim {
      namespace univariate {
        static PyObject *t_SimpleUnivariateValueChecker_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpleUnivariateValueChecker_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpleUnivariateValueChecker_of_(t_SimpleUnivariateValueChecker *self, PyObject *args);
        static int t_SimpleUnivariateValueChecker_init_(t_SimpleUnivariateValueChecker *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SimpleUnivariateValueChecker_converged(t_SimpleUnivariateValueChecker *self, PyObject *args);
        static PyObject *t_SimpleUnivariateValueChecker_get__parameters_(t_SimpleUnivariateValueChecker *self, void *data);
        static PyGetSetDef t_SimpleUnivariateValueChecker__fields_[] = {
          DECLARE_GET_FIELD(t_SimpleUnivariateValueChecker, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SimpleUnivariateValueChecker__methods_[] = {
          DECLARE_METHOD(t_SimpleUnivariateValueChecker, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleUnivariateValueChecker, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleUnivariateValueChecker, of_, METH_VARARGS),
          DECLARE_METHOD(t_SimpleUnivariateValueChecker, converged, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SimpleUnivariateValueChecker)[] = {
          { Py_tp_methods, t_SimpleUnivariateValueChecker__methods_ },
          { Py_tp_init, (void *) t_SimpleUnivariateValueChecker_init_ },
          { Py_tp_getset, t_SimpleUnivariateValueChecker__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SimpleUnivariateValueChecker)[] = {
          &PY_TYPE_DEF(::org::hipparchus::optim::AbstractConvergenceChecker),
          NULL
        };

        DEFINE_TYPE(SimpleUnivariateValueChecker, t_SimpleUnivariateValueChecker, SimpleUnivariateValueChecker);
        PyObject *t_SimpleUnivariateValueChecker::wrap_Object(const SimpleUnivariateValueChecker& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SimpleUnivariateValueChecker::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SimpleUnivariateValueChecker *self = (t_SimpleUnivariateValueChecker *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SimpleUnivariateValueChecker::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SimpleUnivariateValueChecker::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SimpleUnivariateValueChecker *self = (t_SimpleUnivariateValueChecker *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SimpleUnivariateValueChecker::install(PyObject *module)
        {
          installType(&PY_TYPE(SimpleUnivariateValueChecker), &PY_TYPE_DEF(SimpleUnivariateValueChecker), module, "SimpleUnivariateValueChecker", 0);
        }

        void t_SimpleUnivariateValueChecker::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleUnivariateValueChecker), "class_", make_descriptor(SimpleUnivariateValueChecker::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleUnivariateValueChecker), "wrapfn_", make_descriptor(t_SimpleUnivariateValueChecker::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleUnivariateValueChecker), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SimpleUnivariateValueChecker_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SimpleUnivariateValueChecker::initializeClass, 1)))
            return NULL;
          return t_SimpleUnivariateValueChecker::wrap_Object(SimpleUnivariateValueChecker(((t_SimpleUnivariateValueChecker *) arg)->object.this$));
        }
        static PyObject *t_SimpleUnivariateValueChecker_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SimpleUnivariateValueChecker::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SimpleUnivariateValueChecker_of_(t_SimpleUnivariateValueChecker *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_SimpleUnivariateValueChecker_init_(t_SimpleUnivariateValueChecker *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              SimpleUnivariateValueChecker object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = SimpleUnivariateValueChecker(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::univariate::PY_TYPE(UnivariatePointValuePair);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              SimpleUnivariateValueChecker object((jobject) NULL);

              if (!parseArgs(args, "DDI", &a0, &a1, &a2))
              {
                INT_CALL(object = SimpleUnivariateValueChecker(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::univariate::PY_TYPE(UnivariatePointValuePair);
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

        static PyObject *t_SimpleUnivariateValueChecker_converged(t_SimpleUnivariateValueChecker *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::optim::univariate::UnivariatePointValuePair a1((jobject) NULL);
          ::org::hipparchus::optim::univariate::UnivariatePointValuePair a2((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "Ikk", ::org::hipparchus::optim::univariate::UnivariatePointValuePair::initializeClass, ::org::hipparchus::optim::univariate::UnivariatePointValuePair::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.converged(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(SimpleUnivariateValueChecker), (PyObject *) self, "converged", args, 2);
        }
        static PyObject *t_SimpleUnivariateValueChecker_get__parameters_(t_SimpleUnivariateValueChecker *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3.h"
#include "org/orekit/files/sp3/SP3Header.h"
#include "org/orekit/files/sp3/SP3Ephemeris.h"
#include "java/util/Map.h"
#include "java/util/Collection.h"
#include "org/orekit/files/sp3/SP3.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/sp3/SP3Coordinate.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/Class.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/String.h"
#include "org/orekit/files/sp3/SP3Segment.h"
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
            mids$[mid_init$_5bc611b73af713e4] = env->getMethodID(cls, "<init>", "(DILorg/orekit/frames/Frame;)V");
            mids$[mid_addSatellite_734b91ac30d5f9b4] = env->getMethodID(cls, "addSatellite", "(Ljava/lang/String;)V");
            mids$[mid_containsSatellite_cde6b28e15c96b75] = env->getMethodID(cls, "containsSatellite", "(Ljava/lang/String;)Z");
            mids$[mid_getEphemeris_322c10af64e18348] = env->getMethodID(cls, "getEphemeris", "(Ljava/lang/String;)Lorg/orekit/files/sp3/SP3Ephemeris;");
            mids$[mid_getEphemeris_a4b1793a2b7b47f0] = env->getMethodID(cls, "getEphemeris", "(I)Lorg/orekit/files/sp3/SP3Ephemeris;");
            mids$[mid_getHeader_13873367895735a8] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/sp3/SP3Header;");
            mids$[mid_getSatelliteCount_55546ef6a647f39b] = env->getMethodID(cls, "getSatelliteCount", "()I");
            mids$[mid_getSatellites_810bed48fafb0b9a] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");
            mids$[mid_splice_b100017156b78afe] = env->getStaticMethodID(cls, "splice", "(Ljava/util/Collection;)Lorg/orekit/files/sp3/SP3;");
            mids$[mid_validate_4f735758fe3ca010] = env->getMethodID(cls, "validate", "(ZLjava/lang/String;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3::SP3(jdouble a0, jint a1, const ::org::orekit::frames::Frame & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5bc611b73af713e4, a0, a1, a2.this$)) {}

        void SP3::addSatellite(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addSatellite_734b91ac30d5f9b4], a0.this$);
        }

        jboolean SP3::containsSatellite(const ::java::lang::String & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_containsSatellite_cde6b28e15c96b75], a0.this$);
        }

        ::org::orekit::files::sp3::SP3Ephemeris SP3::getEphemeris(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::sp3::SP3Ephemeris(env->callObjectMethod(this$, mids$[mid_getEphemeris_322c10af64e18348], a0.this$));
        }

        ::org::orekit::files::sp3::SP3Ephemeris SP3::getEphemeris(jint a0) const
        {
          return ::org::orekit::files::sp3::SP3Ephemeris(env->callObjectMethod(this$, mids$[mid_getEphemeris_a4b1793a2b7b47f0], a0));
        }

        ::org::orekit::files::sp3::SP3Header SP3::getHeader() const
        {
          return ::org::orekit::files::sp3::SP3Header(env->callObjectMethod(this$, mids$[mid_getHeader_13873367895735a8]));
        }

        jint SP3::getSatelliteCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getSatelliteCount_55546ef6a647f39b]);
        }

        ::java::util::Map SP3::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_810bed48fafb0b9a]));
        }

        SP3 SP3::splice(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SP3(env->callStaticObjectMethod(cls, mids$[mid_splice_b100017156b78afe], a0.this$));
        }

        void SP3::validate(jboolean a0, const ::java::lang::String & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_validate_4f735758fe3ca010], a0, a1.this$);
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
#include "org/orekit/propagation/integration/FieldCombinedDerivatives.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *FieldCombinedDerivatives::class$ = NULL;
        jmethodID *FieldCombinedDerivatives::mids$ = NULL;
        bool FieldCombinedDerivatives::live$ = false;

        jclass FieldCombinedDerivatives::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/FieldCombinedDerivatives");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2d4b2d13ddc9fb6a] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getAdditionalDerivatives_883be608cfc68c26] = env->getMethodID(cls, "getAdditionalDerivatives", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMainStateDerivativesIncrements_883be608cfc68c26] = env->getMethodID(cls, "getMainStateDerivativesIncrements", "()[Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldCombinedDerivatives::FieldCombinedDerivatives(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2d4b2d13ddc9fb6a, a0.this$, a1.this$)) {}

        JArray< ::org::hipparchus::CalculusFieldElement > FieldCombinedDerivatives::getAdditionalDerivatives() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getAdditionalDerivatives_883be608cfc68c26]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldCombinedDerivatives::getMainStateDerivativesIncrements() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMainStateDerivativesIncrements_883be608cfc68c26]));
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
        static PyObject *t_FieldCombinedDerivatives_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldCombinedDerivatives_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldCombinedDerivatives_of_(t_FieldCombinedDerivatives *self, PyObject *args);
        static int t_FieldCombinedDerivatives_init_(t_FieldCombinedDerivatives *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldCombinedDerivatives_getAdditionalDerivatives(t_FieldCombinedDerivatives *self);
        static PyObject *t_FieldCombinedDerivatives_getMainStateDerivativesIncrements(t_FieldCombinedDerivatives *self);
        static PyObject *t_FieldCombinedDerivatives_get__additionalDerivatives(t_FieldCombinedDerivatives *self, void *data);
        static PyObject *t_FieldCombinedDerivatives_get__mainStateDerivativesIncrements(t_FieldCombinedDerivatives *self, void *data);
        static PyObject *t_FieldCombinedDerivatives_get__parameters_(t_FieldCombinedDerivatives *self, void *data);
        static PyGetSetDef t_FieldCombinedDerivatives__fields_[] = {
          DECLARE_GET_FIELD(t_FieldCombinedDerivatives, additionalDerivatives),
          DECLARE_GET_FIELD(t_FieldCombinedDerivatives, mainStateDerivativesIncrements),
          DECLARE_GET_FIELD(t_FieldCombinedDerivatives, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldCombinedDerivatives__methods_[] = {
          DECLARE_METHOD(t_FieldCombinedDerivatives, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldCombinedDerivatives, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldCombinedDerivatives, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldCombinedDerivatives, getAdditionalDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_FieldCombinedDerivatives, getMainStateDerivativesIncrements, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldCombinedDerivatives)[] = {
          { Py_tp_methods, t_FieldCombinedDerivatives__methods_ },
          { Py_tp_init, (void *) t_FieldCombinedDerivatives_init_ },
          { Py_tp_getset, t_FieldCombinedDerivatives__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldCombinedDerivatives)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldCombinedDerivatives, t_FieldCombinedDerivatives, FieldCombinedDerivatives);
        PyObject *t_FieldCombinedDerivatives::wrap_Object(const FieldCombinedDerivatives& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldCombinedDerivatives::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldCombinedDerivatives *self = (t_FieldCombinedDerivatives *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldCombinedDerivatives::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldCombinedDerivatives::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldCombinedDerivatives *self = (t_FieldCombinedDerivatives *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldCombinedDerivatives::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldCombinedDerivatives), &PY_TYPE_DEF(FieldCombinedDerivatives), module, "FieldCombinedDerivatives", 0);
        }

        void t_FieldCombinedDerivatives::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCombinedDerivatives), "class_", make_descriptor(FieldCombinedDerivatives::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCombinedDerivatives), "wrapfn_", make_descriptor(t_FieldCombinedDerivatives::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCombinedDerivatives), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldCombinedDerivatives_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldCombinedDerivatives::initializeClass, 1)))
            return NULL;
          return t_FieldCombinedDerivatives::wrap_Object(FieldCombinedDerivatives(((t_FieldCombinedDerivatives *) arg)->object.this$));
        }
        static PyObject *t_FieldCombinedDerivatives_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldCombinedDerivatives::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldCombinedDerivatives_of_(t_FieldCombinedDerivatives *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldCombinedDerivatives_init_(t_FieldCombinedDerivatives *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          FieldCombinedDerivatives object((jobject) NULL);

          if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = FieldCombinedDerivatives(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldCombinedDerivatives_getAdditionalDerivatives(t_FieldCombinedDerivatives *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getAdditionalDerivatives());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldCombinedDerivatives_getMainStateDerivativesIncrements(t_FieldCombinedDerivatives *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMainStateDerivativesIncrements());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
        static PyObject *t_FieldCombinedDerivatives_get__parameters_(t_FieldCombinedDerivatives *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldCombinedDerivatives_get__additionalDerivatives(t_FieldCombinedDerivatives *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getAdditionalDerivatives());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldCombinedDerivatives_get__mainStateDerivativesIncrements(t_FieldCombinedDerivatives *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMainStateDerivativesIncrements());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$TransponderConfiguration.h"
#include "java/util/Map.h"
#include "java/util/List.h"
#include "org/orekit/files/ilrs/CRDConfiguration$SoftwareConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$DetectorConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$BaseConfiguration.h"
#include "java/util/Set.h"
#include "org/orekit/files/ilrs/CRDConfiguration$LaserConfiguration.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ilrs/CRDConfiguration$MeteorologicalConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$SystemConfiguration.h"
#include "java/lang/String.h"
#include "org/orekit/files/ilrs/CRDConfiguration$TimingSystemConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$CalibrationTargetConfiguration.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration::mids$ = NULL;
        bool CRDConfiguration::live$ = false;

        jclass CRDConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addConfigurationRecord_f1b594df82bfed08] = env->getMethodID(cls, "addConfigurationRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$BaseConfiguration;)V");
            mids$[mid_getCalibrationTargetRecord_db6bb1f1065e5821] = env->getMethodID(cls, "getCalibrationTargetRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$CalibrationTargetConfiguration;");
            mids$[mid_getCalibrationTargetRecord_445ac2923880777e] = env->getMethodID(cls, "getCalibrationTargetRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$CalibrationTargetConfiguration;");
            mids$[mid_getConfigurationRecord_01eed6bceae98227] = env->getMethodID(cls, "getConfigurationRecord", "(Ljava/lang/String;)Lorg/orekit/files/ilrs/CRDConfiguration$BaseConfiguration;");
            mids$[mid_getConfigurationRecordMap_810bed48fafb0b9a] = env->getMethodID(cls, "getConfigurationRecordMap", "()Ljava/util/Map;");
            mids$[mid_getDetectorRecord_fbeba91b97dc9438] = env->getMethodID(cls, "getDetectorRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$DetectorConfiguration;");
            mids$[mid_getDetectorRecord_7d8ffbbca01ee45d] = env->getMethodID(cls, "getDetectorRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$DetectorConfiguration;");
            mids$[mid_getLaserRecord_3da64c57c8fb5a61] = env->getMethodID(cls, "getLaserRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$LaserConfiguration;");
            mids$[mid_getLaserRecord_21d3ab247db7335a] = env->getMethodID(cls, "getLaserRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$LaserConfiguration;");
            mids$[mid_getLastSystemRecord_ffed19394f3022ee] = env->getMethodID(cls, "getLastSystemRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;");
            mids$[mid_getMeteorologicalRecord_90978aa34fe79fd7] = env->getMethodID(cls, "getMeteorologicalRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$MeteorologicalConfiguration;");
            mids$[mid_getMeteorologicalRecord_f4f67e33c7c208e8] = env->getMethodID(cls, "getMeteorologicalRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$MeteorologicalConfiguration;");
            mids$[mid_getSoftwareRecord_8e11b72a62138a38] = env->getMethodID(cls, "getSoftwareRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$SoftwareConfiguration;");
            mids$[mid_getSoftwareRecord_2d01fb7d10c0c14a] = env->getMethodID(cls, "getSoftwareRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$SoftwareConfiguration;");
            mids$[mid_getSystemConfigurationIds_7e8f11dd23d1142c] = env->getMethodID(cls, "getSystemConfigurationIds", "()Ljava/util/Set;");
            mids$[mid_getSystemConfigurationRecords_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSystemConfigurationRecords", "()Ljava/util/List;");
            mids$[mid_getSystemRecord_ffed19394f3022ee] = env->getMethodID(cls, "getSystemRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;");
            mids$[mid_getSystemRecord_9bd899069035f776] = env->getMethodID(cls, "getSystemRecord", "(Ljava/lang/String;)Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;");
            mids$[mid_getTimingRecord_455c4ecc118e8d50] = env->getMethodID(cls, "getTimingRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$TimingSystemConfiguration;");
            mids$[mid_getTimingRecord_8f4aa879682f3fa7] = env->getMethodID(cls, "getTimingRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$TimingSystemConfiguration;");
            mids$[mid_getTransponderRecord_4143a03a9931db89] = env->getMethodID(cls, "getTransponderRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$TransponderConfiguration;");
            mids$[mid_getTransponderRecord_6397dd21406495e1] = env->getMethodID(cls, "getTransponderRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$TransponderConfiguration;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration::CRDConfiguration() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void CRDConfiguration::addConfigurationRecord(const ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addConfigurationRecord_f1b594df82bfed08], a0.this$);
        }

        ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration CRDConfiguration::getCalibrationTargetRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration(env->callObjectMethod(this$, mids$[mid_getCalibrationTargetRecord_db6bb1f1065e5821]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration CRDConfiguration::getCalibrationTargetRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration(env->callObjectMethod(this$, mids$[mid_getCalibrationTargetRecord_445ac2923880777e], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration CRDConfiguration::getConfigurationRecord(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->callObjectMethod(this$, mids$[mid_getConfigurationRecord_01eed6bceae98227], a0.this$));
        }

        ::java::util::Map CRDConfiguration::getConfigurationRecordMap() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getConfigurationRecordMap_810bed48fafb0b9a]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration CRDConfiguration::getDetectorRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration(env->callObjectMethod(this$, mids$[mid_getDetectorRecord_fbeba91b97dc9438]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration CRDConfiguration::getDetectorRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration(env->callObjectMethod(this$, mids$[mid_getDetectorRecord_7d8ffbbca01ee45d], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration CRDConfiguration::getLaserRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration(env->callObjectMethod(this$, mids$[mid_getLaserRecord_3da64c57c8fb5a61]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration CRDConfiguration::getLaserRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration(env->callObjectMethod(this$, mids$[mid_getLaserRecord_21d3ab247db7335a], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration CRDConfiguration::getLastSystemRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration(env->callObjectMethod(this$, mids$[mid_getLastSystemRecord_ffed19394f3022ee]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration CRDConfiguration::getMeteorologicalRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration(env->callObjectMethod(this$, mids$[mid_getMeteorologicalRecord_90978aa34fe79fd7]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration CRDConfiguration::getMeteorologicalRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration(env->callObjectMethod(this$, mids$[mid_getMeteorologicalRecord_f4f67e33c7c208e8], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration CRDConfiguration::getSoftwareRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration(env->callObjectMethod(this$, mids$[mid_getSoftwareRecord_8e11b72a62138a38]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration CRDConfiguration::getSoftwareRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration(env->callObjectMethod(this$, mids$[mid_getSoftwareRecord_2d01fb7d10c0c14a], a0.this$));
        }

        ::java::util::Set CRDConfiguration::getSystemConfigurationIds() const
        {
          return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getSystemConfigurationIds_7e8f11dd23d1142c]));
        }

        ::java::util::List CRDConfiguration::getSystemConfigurationRecords() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSystemConfigurationRecords_e62d3bb06d56d7e3]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration CRDConfiguration::getSystemRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration(env->callObjectMethod(this$, mids$[mid_getSystemRecord_ffed19394f3022ee]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration CRDConfiguration::getSystemRecord(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration(env->callObjectMethod(this$, mids$[mid_getSystemRecord_9bd899069035f776], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration CRDConfiguration::getTimingRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration(env->callObjectMethod(this$, mids$[mid_getTimingRecord_455c4ecc118e8d50]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration CRDConfiguration::getTimingRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration(env->callObjectMethod(this$, mids$[mid_getTimingRecord_8f4aa879682f3fa7], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration CRDConfiguration::getTransponderRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration(env->callObjectMethod(this$, mids$[mid_getTransponderRecord_4143a03a9931db89]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration CRDConfiguration::getTransponderRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration(env->callObjectMethod(this$, mids$[mid_getTransponderRecord_6397dd21406495e1], a0.this$));
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
        static PyObject *t_CRDConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration_init_(t_CRDConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration_addConfigurationRecord(t_CRDConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration_getCalibrationTargetRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getConfigurationRecord(t_CRDConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration_getConfigurationRecordMap(t_CRDConfiguration *self);
        static PyObject *t_CRDConfiguration_getDetectorRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getLaserRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getLastSystemRecord(t_CRDConfiguration *self);
        static PyObject *t_CRDConfiguration_getMeteorologicalRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getSoftwareRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getSystemConfigurationIds(t_CRDConfiguration *self);
        static PyObject *t_CRDConfiguration_getSystemConfigurationRecords(t_CRDConfiguration *self);
        static PyObject *t_CRDConfiguration_getSystemRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getTimingRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getTransponderRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_get__calibrationTargetRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__configurationRecordMap(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__detectorRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__laserRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__lastSystemRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__meteorologicalRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__softwareRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__systemConfigurationIds(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__systemConfigurationRecords(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__systemRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__timingRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__transponderRecord(t_CRDConfiguration *self, void *data);
        static PyGetSetDef t_CRDConfiguration__fields_[] = {
          DECLARE_GET_FIELD(t_CRDConfiguration, calibrationTargetRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, configurationRecordMap),
          DECLARE_GET_FIELD(t_CRDConfiguration, detectorRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, laserRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, lastSystemRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, meteorologicalRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, softwareRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, systemConfigurationIds),
          DECLARE_GET_FIELD(t_CRDConfiguration, systemConfigurationRecords),
          DECLARE_GET_FIELD(t_CRDConfiguration, systemRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, timingRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, transponderRecord),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration, addConfigurationRecord, METH_O),
          DECLARE_METHOD(t_CRDConfiguration, getCalibrationTargetRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getConfigurationRecord, METH_O),
          DECLARE_METHOD(t_CRDConfiguration, getConfigurationRecordMap, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration, getDetectorRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getLaserRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getLastSystemRecord, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration, getMeteorologicalRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getSoftwareRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getSystemConfigurationIds, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration, getSystemConfigurationRecords, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration, getSystemRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getTimingRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getTransponderRecord, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration, t_CRDConfiguration, CRDConfiguration);

        void t_CRDConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration), &PY_TYPE_DEF(CRDConfiguration), module, "CRDConfiguration", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "SystemConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$SystemConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "LaserConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$LaserConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "DetectorConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$DetectorConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "TimingSystemConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$TimingSystemConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "TransponderConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$TransponderConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "SoftwareConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$SoftwareConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "MeteorologicalConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$MeteorologicalConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "BaseConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$BaseConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "CalibrationTargetConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$CalibrationTargetConfiguration)));
        }

        void t_CRDConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "class_", make_descriptor(CRDConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration::wrap_Object(CRDConfiguration(((t_CRDConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration_init_(t_CRDConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration_addConfigurationRecord(t_CRDConfiguration *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addConfigurationRecord(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addConfigurationRecord", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getCalibrationTargetRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getCalibrationTargetRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$CalibrationTargetConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getCalibrationTargetRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$CalibrationTargetConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getCalibrationTargetRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getConfigurationRecord(t_CRDConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getConfigurationRecord(a0));
            return ::org::orekit::files::ilrs::t_CRDConfiguration$BaseConfiguration::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getConfigurationRecord", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getConfigurationRecordMap(t_CRDConfiguration *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getConfigurationRecordMap());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ilrs::PY_TYPE(CRDConfiguration$BaseConfiguration));
        }

        static PyObject *t_CRDConfiguration_getDetectorRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getDetectorRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$DetectorConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getDetectorRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$DetectorConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getDetectorRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getLaserRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getLaserRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$LaserConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getLaserRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$LaserConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getLaserRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getLastSystemRecord(t_CRDConfiguration *self)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration result((jobject) NULL);
          OBJ_CALL(result = self->object.getLastSystemRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$SystemConfiguration::wrap_Object(result);
        }

        static PyObject *t_CRDConfiguration_getMeteorologicalRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getMeteorologicalRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$MeteorologicalConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMeteorologicalRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$MeteorologicalConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getMeteorologicalRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getSoftwareRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getSoftwareRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$SoftwareConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getSoftwareRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$SoftwareConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getSoftwareRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getSystemConfigurationIds(t_CRDConfiguration *self)
        {
          ::java::util::Set result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemConfigurationIds());
          return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_CRDConfiguration_getSystemConfigurationRecords(t_CRDConfiguration *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemConfigurationRecords());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRDConfiguration$SystemConfiguration));
        }

        static PyObject *t_CRDConfiguration_getSystemRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getSystemRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$SystemConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = self->object.getSystemRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$SystemConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getSystemRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getTimingRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getTimingRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$TimingSystemConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getTimingRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$TimingSystemConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getTimingRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getTransponderRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getTransponderRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$TransponderConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getTransponderRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$TransponderConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getTransponderRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_get__calibrationTargetRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getCalibrationTargetRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$CalibrationTargetConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__configurationRecordMap(t_CRDConfiguration *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getConfigurationRecordMap());
          return ::java::util::t_Map::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__detectorRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetectorRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$DetectorConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__laserRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getLaserRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$LaserConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__lastSystemRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getLastSystemRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$SystemConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__meteorologicalRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeteorologicalRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$MeteorologicalConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__softwareRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getSoftwareRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$SoftwareConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__systemConfigurationIds(t_CRDConfiguration *self, void *data)
        {
          ::java::util::Set value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemConfigurationIds());
          return ::java::util::t_Set::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__systemConfigurationRecords(t_CRDConfiguration *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemConfigurationRecords());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__systemRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$SystemConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__timingRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimingRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$TimingSystemConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__transponderRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getTransponderRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$TransponderConfiguration::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/EphemerisFileWriter.h"
#include "java/io/IOException.h"
#include "java/lang/Appendable.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *EphemerisFileWriter::class$ = NULL;
        jmethodID *EphemerisFileWriter::mids$ = NULL;
        bool EphemerisFileWriter::live$ = false;

        jclass EphemerisFileWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/EphemerisFileWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_write_cb06ae4b8b65b727] = env->getMethodID(cls, "write", "(Ljava/lang/String;Lorg/orekit/files/general/EphemerisFile;)V");
            mids$[mid_write_b257e3ad1002b2a9] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/EphemerisFile;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void EphemerisFileWriter::write(const ::java::lang::String & a0, const ::org::orekit::files::general::EphemerisFile & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_write_cb06ae4b8b65b727], a0.this$, a1.this$);
        }

        void EphemerisFileWriter::write(const ::java::lang::Appendable & a0, const ::org::orekit::files::general::EphemerisFile & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_write_b257e3ad1002b2a9], a0.this$, a1.this$);
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
        static PyObject *t_EphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFileWriter_write(t_EphemerisFileWriter *self, PyObject *args);

        static PyMethodDef t_EphemerisFileWriter__methods_[] = {
          DECLARE_METHOD(t_EphemerisFileWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFileWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFileWriter, write, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EphemerisFileWriter)[] = {
          { Py_tp_methods, t_EphemerisFileWriter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EphemerisFileWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EphemerisFileWriter, t_EphemerisFileWriter, EphemerisFileWriter);

        void t_EphemerisFileWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(EphemerisFileWriter), &PY_TYPE_DEF(EphemerisFileWriter), module, "EphemerisFileWriter", 0);
        }

        void t_EphemerisFileWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFileWriter), "class_", make_descriptor(EphemerisFileWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFileWriter), "wrapfn_", make_descriptor(t_EphemerisFileWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFileWriter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EphemerisFileWriter::initializeClass, 1)))
            return NULL;
          return t_EphemerisFileWriter::wrap_Object(EphemerisFileWriter(((t_EphemerisFileWriter *) arg)->object.this$));
        }
        static PyObject *t_EphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EphemerisFileWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EphemerisFileWriter_write(t_EphemerisFileWriter *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::files::general::EphemerisFile a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "sK", ::org::orekit::files::general::EphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_EphemerisFile::parameters_))
              {
                OBJ_CALL(self->object.write(a0, a1));
                Py_RETURN_NONE;
              }
            }
            {
              ::java::lang::Appendable a0((jobject) NULL);
              ::org::orekit::files::general::EphemerisFile a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::java::lang::Appendable::initializeClass, ::org::orekit::files::general::EphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_EphemerisFile::parameters_))
              {
                OBJ_CALL(self->object.write(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "write", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/displacement/PythonStationDisplacement.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/data/BodiesElements.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/displacement/StationDisplacement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *PythonStationDisplacement::class$ = NULL;
          jmethodID *PythonStationDisplacement::mids$ = NULL;
          bool PythonStationDisplacement::live$ = false;

          jclass PythonStationDisplacement::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/PythonStationDisplacement");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_displacement_729c7f08824f83c6] = env->getMethodID(cls, "displacement", "(Lorg/orekit/data/BodiesElements;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonStationDisplacement::PythonStationDisplacement() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonStationDisplacement::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonStationDisplacement::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonStationDisplacement::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
        namespace displacement {
          static PyObject *t_PythonStationDisplacement_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonStationDisplacement_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonStationDisplacement_init_(t_PythonStationDisplacement *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonStationDisplacement_finalize(t_PythonStationDisplacement *self);
          static PyObject *t_PythonStationDisplacement_pythonExtension(t_PythonStationDisplacement *self, PyObject *args);
          static jobject JNICALL t_PythonStationDisplacement_displacement0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonStationDisplacement_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonStationDisplacement_get__self(t_PythonStationDisplacement *self, void *data);
          static PyGetSetDef t_PythonStationDisplacement__fields_[] = {
            DECLARE_GET_FIELD(t_PythonStationDisplacement, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonStationDisplacement__methods_[] = {
            DECLARE_METHOD(t_PythonStationDisplacement, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonStationDisplacement, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonStationDisplacement, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonStationDisplacement, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonStationDisplacement)[] = {
            { Py_tp_methods, t_PythonStationDisplacement__methods_ },
            { Py_tp_init, (void *) t_PythonStationDisplacement_init_ },
            { Py_tp_getset, t_PythonStationDisplacement__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonStationDisplacement)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonStationDisplacement, t_PythonStationDisplacement, PythonStationDisplacement);

          void t_PythonStationDisplacement::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonStationDisplacement), &PY_TYPE_DEF(PythonStationDisplacement), module, "PythonStationDisplacement", 1);
          }

          void t_PythonStationDisplacement::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStationDisplacement), "class_", make_descriptor(PythonStationDisplacement::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStationDisplacement), "wrapfn_", make_descriptor(t_PythonStationDisplacement::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStationDisplacement), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonStationDisplacement::initializeClass);
            JNINativeMethod methods[] = {
              { "displacement", "(Lorg/orekit/data/BodiesElements;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonStationDisplacement_displacement0 },
              { "pythonDecRef", "()V", (void *) t_PythonStationDisplacement_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonStationDisplacement_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonStationDisplacement::initializeClass, 1)))
              return NULL;
            return t_PythonStationDisplacement::wrap_Object(PythonStationDisplacement(((t_PythonStationDisplacement *) arg)->object.this$));
          }
          static PyObject *t_PythonStationDisplacement_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonStationDisplacement::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonStationDisplacement_init_(t_PythonStationDisplacement *self, PyObject *args, PyObject *kwds)
          {
            PythonStationDisplacement object((jobject) NULL);

            INT_CALL(object = PythonStationDisplacement());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonStationDisplacement_finalize(t_PythonStationDisplacement *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonStationDisplacement_pythonExtension(t_PythonStationDisplacement *self, PyObject *args)
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

          static jobject JNICALL t_PythonStationDisplacement_displacement0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonStationDisplacement::mids$[PythonStationDisplacement::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::data::t_BodiesElements::wrap_Object(::org::orekit::data::BodiesElements(a0));
            PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
            PyObject *o2 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a2));
            PyObject *result = PyObject_CallMethod(obj, "displacement", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("displacement", result);
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

          static void JNICALL t_PythonStationDisplacement_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonStationDisplacement::mids$[PythonStationDisplacement::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonStationDisplacement::mids$[PythonStationDisplacement::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonStationDisplacement_get__self(t_PythonStationDisplacement *self, void *data)
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
#include "org/orekit/forces/maneuvers/propulsion/PythonThrustDirectionProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *PythonThrustDirectionProvider::class$ = NULL;
          jmethodID *PythonThrustDirectionProvider::mids$ = NULL;
          bool PythonThrustDirectionProvider::live$ = false;

          jclass PythonThrustDirectionProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/PythonThrustDirectionProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_computeThrustDirection_ec4cfef21ca9ef1f] = env->getMethodID(cls, "computeThrustDirection", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonThrustDirectionProvider::PythonThrustDirectionProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonThrustDirectionProvider::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonThrustDirectionProvider::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonThrustDirectionProvider::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
        namespace propulsion {
          static PyObject *t_PythonThrustDirectionProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonThrustDirectionProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonThrustDirectionProvider_init_(t_PythonThrustDirectionProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonThrustDirectionProvider_finalize(t_PythonThrustDirectionProvider *self);
          static PyObject *t_PythonThrustDirectionProvider_pythonExtension(t_PythonThrustDirectionProvider *self, PyObject *args);
          static jobject JNICALL t_PythonThrustDirectionProvider_computeThrustDirection0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonThrustDirectionProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonThrustDirectionProvider_get__self(t_PythonThrustDirectionProvider *self, void *data);
          static PyGetSetDef t_PythonThrustDirectionProvider__fields_[] = {
            DECLARE_GET_FIELD(t_PythonThrustDirectionProvider, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonThrustDirectionProvider__methods_[] = {
            DECLARE_METHOD(t_PythonThrustDirectionProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonThrustDirectionProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonThrustDirectionProvider, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonThrustDirectionProvider, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonThrustDirectionProvider)[] = {
            { Py_tp_methods, t_PythonThrustDirectionProvider__methods_ },
            { Py_tp_init, (void *) t_PythonThrustDirectionProvider_init_ },
            { Py_tp_getset, t_PythonThrustDirectionProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonThrustDirectionProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonThrustDirectionProvider, t_PythonThrustDirectionProvider, PythonThrustDirectionProvider);

          void t_PythonThrustDirectionProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonThrustDirectionProvider), &PY_TYPE_DEF(PythonThrustDirectionProvider), module, "PythonThrustDirectionProvider", 1);
          }

          void t_PythonThrustDirectionProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonThrustDirectionProvider), "class_", make_descriptor(PythonThrustDirectionProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonThrustDirectionProvider), "wrapfn_", make_descriptor(t_PythonThrustDirectionProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonThrustDirectionProvider), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonThrustDirectionProvider::initializeClass);
            JNINativeMethod methods[] = {
              { "computeThrustDirection", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonThrustDirectionProvider_computeThrustDirection0 },
              { "pythonDecRef", "()V", (void *) t_PythonThrustDirectionProvider_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonThrustDirectionProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonThrustDirectionProvider::initializeClass, 1)))
              return NULL;
            return t_PythonThrustDirectionProvider::wrap_Object(PythonThrustDirectionProvider(((t_PythonThrustDirectionProvider *) arg)->object.this$));
          }
          static PyObject *t_PythonThrustDirectionProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonThrustDirectionProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonThrustDirectionProvider_init_(t_PythonThrustDirectionProvider *self, PyObject *args, PyObject *kwds)
          {
            PythonThrustDirectionProvider object((jobject) NULL);

            INT_CALL(object = PythonThrustDirectionProvider());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonThrustDirectionProvider_finalize(t_PythonThrustDirectionProvider *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonThrustDirectionProvider_pythonExtension(t_PythonThrustDirectionProvider *self, PyObject *args)
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

          static jobject JNICALL t_PythonThrustDirectionProvider_computeThrustDirection0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustDirectionProvider::mids$[PythonThrustDirectionProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(::org::orekit::utils::PVCoordinatesProvider(a0));
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
            PyObject *result = PyObject_CallMethod(obj, "computeThrustDirection", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("computeThrustDirection", result);
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

          static void JNICALL t_PythonThrustDirectionProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustDirectionProvider::mids$[PythonThrustDirectionProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonThrustDirectionProvider::mids$[PythonThrustDirectionProvider::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonThrustDirectionProvider_get__self(t_PythonThrustDirectionProvider *self, void *data)
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
#include "org/hipparchus/linear/LUDecomposition.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *LUDecomposition::class$ = NULL;
      jmethodID *LUDecomposition::mids$ = NULL;
      bool LUDecomposition::live$ = false;

      jclass LUDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/LUDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_84bd15e0995d0c79] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_5c88fbe0835e7c85] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getDeterminant_b74f83833fdad017] = env->getMethodID(cls, "getDeterminant", "()D");
          mids$[mid_getL_f77d745f2128c391] = env->getMethodID(cls, "getL", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getP_f77d745f2128c391] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getPivot_4d095d7a08163110] = env->getMethodID(cls, "getPivot", "()[I");
          mids$[mid_getSolver_5823fb909376de2c] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/DecompositionSolver;");
          mids$[mid_getU_f77d745f2128c391] = env->getMethodID(cls, "getU", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LUDecomposition::LUDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_84bd15e0995d0c79, a0.this$)) {}

      LUDecomposition::LUDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5c88fbe0835e7c85, a0.this$, a1)) {}

      jdouble LUDecomposition::getDeterminant() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDeterminant_b74f83833fdad017]);
      }

      ::org::hipparchus::linear::RealMatrix LUDecomposition::getL() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getL_f77d745f2128c391]));
      }

      ::org::hipparchus::linear::RealMatrix LUDecomposition::getP() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getP_f77d745f2128c391]));
      }

      JArray< jint > LUDecomposition::getPivot() const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getPivot_4d095d7a08163110]));
      }

      ::org::hipparchus::linear::DecompositionSolver LUDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_5823fb909376de2c]));
      }

      ::org::hipparchus::linear::RealMatrix LUDecomposition::getU() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getU_f77d745f2128c391]));
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
      static PyObject *t_LUDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LUDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LUDecomposition_init_(t_LUDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LUDecomposition_getDeterminant(t_LUDecomposition *self);
      static PyObject *t_LUDecomposition_getL(t_LUDecomposition *self);
      static PyObject *t_LUDecomposition_getP(t_LUDecomposition *self);
      static PyObject *t_LUDecomposition_getPivot(t_LUDecomposition *self);
      static PyObject *t_LUDecomposition_getSolver(t_LUDecomposition *self);
      static PyObject *t_LUDecomposition_getU(t_LUDecomposition *self);
      static PyObject *t_LUDecomposition_get__determinant(t_LUDecomposition *self, void *data);
      static PyObject *t_LUDecomposition_get__l(t_LUDecomposition *self, void *data);
      static PyObject *t_LUDecomposition_get__p(t_LUDecomposition *self, void *data);
      static PyObject *t_LUDecomposition_get__pivot(t_LUDecomposition *self, void *data);
      static PyObject *t_LUDecomposition_get__solver(t_LUDecomposition *self, void *data);
      static PyObject *t_LUDecomposition_get__u(t_LUDecomposition *self, void *data);
      static PyGetSetDef t_LUDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_LUDecomposition, determinant),
        DECLARE_GET_FIELD(t_LUDecomposition, l),
        DECLARE_GET_FIELD(t_LUDecomposition, p),
        DECLARE_GET_FIELD(t_LUDecomposition, pivot),
        DECLARE_GET_FIELD(t_LUDecomposition, solver),
        DECLARE_GET_FIELD(t_LUDecomposition, u),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LUDecomposition__methods_[] = {
        DECLARE_METHOD(t_LUDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LUDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LUDecomposition, getDeterminant, METH_NOARGS),
        DECLARE_METHOD(t_LUDecomposition, getL, METH_NOARGS),
        DECLARE_METHOD(t_LUDecomposition, getP, METH_NOARGS),
        DECLARE_METHOD(t_LUDecomposition, getPivot, METH_NOARGS),
        DECLARE_METHOD(t_LUDecomposition, getSolver, METH_NOARGS),
        DECLARE_METHOD(t_LUDecomposition, getU, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LUDecomposition)[] = {
        { Py_tp_methods, t_LUDecomposition__methods_ },
        { Py_tp_init, (void *) t_LUDecomposition_init_ },
        { Py_tp_getset, t_LUDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LUDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LUDecomposition, t_LUDecomposition, LUDecomposition);

      void t_LUDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(LUDecomposition), &PY_TYPE_DEF(LUDecomposition), module, "LUDecomposition", 0);
      }

      void t_LUDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LUDecomposition), "class_", make_descriptor(LUDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LUDecomposition), "wrapfn_", make_descriptor(t_LUDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LUDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LUDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LUDecomposition::initializeClass, 1)))
          return NULL;
        return t_LUDecomposition::wrap_Object(LUDecomposition(((t_LUDecomposition *) arg)->object.this$));
      }
      static PyObject *t_LUDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LUDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LUDecomposition_init_(t_LUDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            LUDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = LUDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            LUDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = LUDecomposition(a0, a1));
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

      static PyObject *t_LUDecomposition_getDeterminant(t_LUDecomposition *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDeterminant());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_LUDecomposition_getL(t_LUDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getL());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_LUDecomposition_getP(t_LUDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_LUDecomposition_getPivot(t_LUDecomposition *self)
      {
        JArray< jint > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPivot());
        return result.wrap();
      }

      static PyObject *t_LUDecomposition_getSolver(t_LUDecomposition *self)
      {
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
      }

      static PyObject *t_LUDecomposition_getU(t_LUDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getU());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_LUDecomposition_get__determinant(t_LUDecomposition *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDeterminant());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_LUDecomposition_get__l(t_LUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getL());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_LUDecomposition_get__p(t_LUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_LUDecomposition_get__pivot(t_LUDecomposition *self, void *data)
      {
        JArray< jint > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPivot());
        return value.wrap();
      }

      static PyObject *t_LUDecomposition_get__solver(t_LUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::DecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(value);
      }

      static PyObject *t_LUDecomposition_get__u(t_LUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getU());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/EopHistoryLoader.h"
#include "java/util/SortedSet.h"
#include "org/orekit/frames/EOPEntry.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EopHistoryLoader::class$ = NULL;
      jmethodID *EopHistoryLoader::mids$ = NULL;
      bool EopHistoryLoader::live$ = false;

      jclass EopHistoryLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EopHistoryLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_fillHistory_f091b90ef4456eb3] = env->getMethodID(cls, "fillHistory", "(Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;Ljava/util/SortedSet;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void EopHistoryLoader::fillHistory(const ::org::orekit::utils::IERSConventions$NutationCorrectionConverter & a0, const ::java::util::SortedSet & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_fillHistory_f091b90ef4456eb3], a0.this$, a1.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/frames/EopHistoryLoader$Parser.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_EopHistoryLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EopHistoryLoader_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EopHistoryLoader_fillHistory(t_EopHistoryLoader *self, PyObject *args);

      static PyMethodDef t_EopHistoryLoader__methods_[] = {
        DECLARE_METHOD(t_EopHistoryLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader, fillHistory, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EopHistoryLoader)[] = {
        { Py_tp_methods, t_EopHistoryLoader__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EopHistoryLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EopHistoryLoader, t_EopHistoryLoader, EopHistoryLoader);

      void t_EopHistoryLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(EopHistoryLoader), &PY_TYPE_DEF(EopHistoryLoader), module, "EopHistoryLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(EopHistoryLoader), "Parser", make_descriptor(&PY_TYPE_DEF(EopHistoryLoader$Parser)));
      }

      void t_EopHistoryLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EopHistoryLoader), "class_", make_descriptor(EopHistoryLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EopHistoryLoader), "wrapfn_", make_descriptor(t_EopHistoryLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EopHistoryLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EopHistoryLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EopHistoryLoader::initializeClass, 1)))
          return NULL;
        return t_EopHistoryLoader::wrap_Object(EopHistoryLoader(((t_EopHistoryLoader *) arg)->object.this$));
      }
      static PyObject *t_EopHistoryLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EopHistoryLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_EopHistoryLoader_fillHistory(t_EopHistoryLoader *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions$NutationCorrectionConverter a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::SortedSet a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "KK", ::org::orekit::utils::IERSConventions$NutationCorrectionConverter::initializeClass, ::java::util::SortedSet::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::parameters_, &a1, &p1, ::java::util::t_SortedSet::parameters_))
        {
          OBJ_CALL(self->object.fillHistory(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "fillHistory", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/FractionFormat.h"
#include "java/text/FieldPosition.h"
#include "java/util/Locale.h"
#include "java/text/ParsePosition.h"
#include "org/hipparchus/fraction/FractionFormat.h"
#include "java/text/NumberFormat.h"
#include "java/lang/StringBuffer.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *FractionFormat::class$ = NULL;
      jmethodID *FractionFormat::mids$ = NULL;
      bool FractionFormat::live$ = false;

      jclass FractionFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/FractionFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_b7f3d50b51ef7518] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_a87510accfde9c74] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;Ljava/text/NumberFormat;)V");
          mids$[mid_format_87568a31a08a12c5] = env->getMethodID(cls, "format", "(Lorg/hipparchus/fraction/Fraction;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_format_b972afa1d89f0ad4] = env->getMethodID(cls, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_formatFraction_ce23704a3b231ba8] = env->getStaticMethodID(cls, "formatFraction", "(Lorg/hipparchus/fraction/Fraction;)Ljava/lang/String;");
          mids$[mid_getAvailableLocales_8d2cd0b971cc7b85] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
          mids$[mid_getImproperInstance_a5d7d4d1f08eb9e1] = env->getStaticMethodID(cls, "getImproperInstance", "()Lorg/hipparchus/fraction/FractionFormat;");
          mids$[mid_getImproperInstance_229a8f966d65f9e8] = env->getStaticMethodID(cls, "getImproperInstance", "(Ljava/util/Locale;)Lorg/hipparchus/fraction/FractionFormat;");
          mids$[mid_getProperInstance_a5d7d4d1f08eb9e1] = env->getStaticMethodID(cls, "getProperInstance", "()Lorg/hipparchus/fraction/FractionFormat;");
          mids$[mid_getProperInstance_229a8f966d65f9e8] = env->getStaticMethodID(cls, "getProperInstance", "(Ljava/util/Locale;)Lorg/hipparchus/fraction/FractionFormat;");
          mids$[mid_parse_8370e0913d422863] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_parse_813491fbcb23677d] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_getDefaultNumberFormat_87ffffc449cd25a5] = env->getStaticMethodID(cls, "getDefaultNumberFormat", "()Ljava/text/NumberFormat;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FractionFormat::FractionFormat() : ::org::hipparchus::fraction::AbstractFormat(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      FractionFormat::FractionFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::fraction::AbstractFormat(env->newObject(initializeClass, &mids$, mid_init$_b7f3d50b51ef7518, a0.this$)) {}

      FractionFormat::FractionFormat(const ::java::text::NumberFormat & a0, const ::java::text::NumberFormat & a1) : ::org::hipparchus::fraction::AbstractFormat(env->newObject(initializeClass, &mids$, mid_init$_a87510accfde9c74, a0.this$, a1.this$)) {}

      ::java::lang::StringBuffer FractionFormat::format(const ::org::hipparchus::fraction::Fraction & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_87568a31a08a12c5], a0.this$, a1.this$, a2.this$));
      }

      ::java::lang::StringBuffer FractionFormat::format(const ::java::lang::Object & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_b972afa1d89f0ad4], a0.this$, a1.this$, a2.this$));
      }

      ::java::lang::String FractionFormat::formatFraction(const ::org::hipparchus::fraction::Fraction & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_formatFraction_ce23704a3b231ba8], a0.this$));
      }

      JArray< ::java::util::Locale > FractionFormat::getAvailableLocales()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_8d2cd0b971cc7b85]));
      }

      FractionFormat FractionFormat::getImproperInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return FractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getImproperInstance_a5d7d4d1f08eb9e1]));
      }

      FractionFormat FractionFormat::getImproperInstance(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getImproperInstance_229a8f966d65f9e8], a0.this$));
      }

      FractionFormat FractionFormat::getProperInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return FractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getProperInstance_a5d7d4d1f08eb9e1]));
      }

      FractionFormat FractionFormat::getProperInstance(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getProperInstance_229a8f966d65f9e8], a0.this$));
      }

      ::org::hipparchus::fraction::Fraction FractionFormat::parse(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_parse_8370e0913d422863], a0.this$));
      }

      ::org::hipparchus::fraction::Fraction FractionFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_parse_813491fbcb23677d], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      static PyObject *t_FractionFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FractionFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FractionFormat_init_(t_FractionFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FractionFormat_format(t_FractionFormat *self, PyObject *args);
      static PyObject *t_FractionFormat_formatFraction(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FractionFormat_getAvailableLocales(PyTypeObject *type, PyObject *args);
      static PyObject *t_FractionFormat_getImproperInstance(PyTypeObject *type, PyObject *args);
      static PyObject *t_FractionFormat_getProperInstance(PyTypeObject *type, PyObject *args);
      static PyObject *t_FractionFormat_parse(t_FractionFormat *self, PyObject *args);
      static PyObject *t_FractionFormat_get__availableLocales(t_FractionFormat *self, void *data);
      static PyObject *t_FractionFormat_get__improperInstance(t_FractionFormat *self, void *data);
      static PyObject *t_FractionFormat_get__properInstance(t_FractionFormat *self, void *data);
      static PyGetSetDef t_FractionFormat__fields_[] = {
        DECLARE_GET_FIELD(t_FractionFormat, availableLocales),
        DECLARE_GET_FIELD(t_FractionFormat, improperInstance),
        DECLARE_GET_FIELD(t_FractionFormat, properInstance),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FractionFormat__methods_[] = {
        DECLARE_METHOD(t_FractionFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FractionFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FractionFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_FractionFormat, formatFraction, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FractionFormat, getAvailableLocales, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FractionFormat, getImproperInstance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FractionFormat, getProperInstance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FractionFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FractionFormat)[] = {
        { Py_tp_methods, t_FractionFormat__methods_ },
        { Py_tp_init, (void *) t_FractionFormat_init_ },
        { Py_tp_getset, t_FractionFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FractionFormat)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fraction::AbstractFormat),
        NULL
      };

      DEFINE_TYPE(FractionFormat, t_FractionFormat, FractionFormat);

      void t_FractionFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(FractionFormat), &PY_TYPE_DEF(FractionFormat), module, "FractionFormat", 0);
      }

      void t_FractionFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FractionFormat), "class_", make_descriptor(FractionFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FractionFormat), "wrapfn_", make_descriptor(t_FractionFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FractionFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FractionFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FractionFormat::initializeClass, 1)))
          return NULL;
        return t_FractionFormat::wrap_Object(FractionFormat(((t_FractionFormat *) arg)->object.this$));
      }
      static PyObject *t_FractionFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FractionFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FractionFormat_init_(t_FractionFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            FractionFormat object((jobject) NULL);

            INT_CALL(object = FractionFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            FractionFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = FractionFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ::java::text::NumberFormat a1((jobject) NULL);
            FractionFormat object((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, &a0, &a1))
            {
              INT_CALL(object = FractionFormat(a0, a1));
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

      static PyObject *t_FractionFormat_format(t_FractionFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::fraction::Fraction a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::fraction::Fraction::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
          {
            ::java::lang::Object a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "okk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(FractionFormat), (PyObject *) self, "format", args, 2);
      }

      static PyObject *t_FractionFormat_formatFraction(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::fraction::Fraction a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::fraction::Fraction::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::FractionFormat::formatFraction(a0));
          return j2p(result);
        }

        PyErr_SetArgsError(type, "formatFraction", arg);
        return NULL;
      }

      static PyObject *t_FractionFormat_getAvailableLocales(PyTypeObject *type, PyObject *args)
      {
        JArray< ::java::util::Locale > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::FractionFormat::getAvailableLocales());
          return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
        }

        return callSuper(type, "getAvailableLocales", args, 2);
      }

      static PyObject *t_FractionFormat_getImproperInstance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            FractionFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::fraction::FractionFormat::getImproperInstance());
            return t_FractionFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            FractionFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::fraction::FractionFormat::getImproperInstance(a0));
              return t_FractionFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getImproperInstance", args);
        return NULL;
      }

      static PyObject *t_FractionFormat_getProperInstance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            FractionFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::fraction::FractionFormat::getProperInstance());
            return t_FractionFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            FractionFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::fraction::FractionFormat::getProperInstance(a0));
              return t_FractionFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getProperInstance", args);
        return NULL;
      }

      static PyObject *t_FractionFormat_parse(t_FractionFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::fraction::Fraction result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::ParsePosition a1((jobject) NULL);
            ::org::hipparchus::fraction::Fraction result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(FractionFormat), (PyObject *) self, "parse", args, 2);
      }

      static PyObject *t_FractionFormat_get__availableLocales(t_FractionFormat *self, void *data)
      {
        JArray< ::java::util::Locale > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAvailableLocales());
        return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_FractionFormat_get__improperInstance(t_FractionFormat *self, void *data)
      {
        FractionFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getImproperInstance());
        return t_FractionFormat::wrap_Object(value);
      }

      static PyObject *t_FractionFormat_get__properInstance(t_FractionFormat *self, void *data)
      {
        FractionFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getProperInstance());
        return t_FractionFormat::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Perturbations.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *PerturbationsKey::class$ = NULL;
              jmethodID *PerturbationsKey::mids$ = NULL;
              bool PerturbationsKey::live$ = false;
              PerturbationsKey *PerturbationsKey::ALBEDO_GRID_SIZE = NULL;
              PerturbationsKey *PerturbationsKey::ALBEDO_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::ATMOSPHERIC_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::CENTRAL_BODY_ROTATION = NULL;
              PerturbationsKey *PerturbationsKey::COMMENT = NULL;
              PerturbationsKey *PerturbationsKey::EQUATORIAL_RADIUS = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_F10P7 = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_F10P7_MEAN = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_GEOMAG_AP = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_GEOMAG_DST = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_GEOMAG_KP = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_M10P7 = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_M10P7_MEAN = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_S10P7 = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_S10P7_MEAN = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_Y10P7 = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_Y10P7_MEAN = NULL;
              PerturbationsKey *PerturbationsKey::GM = NULL;
              PerturbationsKey *PerturbationsKey::GRAVITY_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::N_BODY_PERTURBATIONS = NULL;
              PerturbationsKey *PerturbationsKey::OBLATE_FLATTENING = NULL;
              PerturbationsKey *PerturbationsKey::OCEAN_TIDES_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::REDUCTION_THEORY = NULL;
              PerturbationsKey *PerturbationsKey::SHADOW_BODIES = NULL;
              PerturbationsKey *PerturbationsKey::SHADOW_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::SOLID_TIDES_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::SRP_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::SW_DATA_EPOCH = NULL;
              PerturbationsKey *PerturbationsKey::SW_DATA_SOURCE = NULL;
              PerturbationsKey *PerturbationsKey::SW_INTERP_METHOD = NULL;

              jclass PerturbationsKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_27d6c060f7d3020f] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/Perturbations;)Z");
                  mids$[mid_valueOf_849a26fbce6aef68] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;");
                  mids$[mid_values_bfe673c4ffe500a9] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ALBEDO_GRID_SIZE = new PerturbationsKey(env->getStaticObjectField(cls, "ALBEDO_GRID_SIZE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  ALBEDO_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "ALBEDO_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  ATMOSPHERIC_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "ATMOSPHERIC_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  CENTRAL_BODY_ROTATION = new PerturbationsKey(env->getStaticObjectField(cls, "CENTRAL_BODY_ROTATION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  COMMENT = new PerturbationsKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  EQUATORIAL_RADIUS = new PerturbationsKey(env->getStaticObjectField(cls, "EQUATORIAL_RADIUS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_F10P7 = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_F10P7", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_F10P7_MEAN = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_F10P7_MEAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_GEOMAG_AP = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_GEOMAG_AP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_GEOMAG_DST = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_GEOMAG_DST", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_GEOMAG_KP = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_GEOMAG_KP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_M10P7 = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_M10P7", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_M10P7_MEAN = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_M10P7_MEAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_S10P7 = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_S10P7", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_S10P7_MEAN = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_S10P7_MEAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_Y10P7 = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_Y10P7", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_Y10P7_MEAN = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_Y10P7_MEAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  GM = new PerturbationsKey(env->getStaticObjectField(cls, "GM", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  GRAVITY_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "GRAVITY_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  N_BODY_PERTURBATIONS = new PerturbationsKey(env->getStaticObjectField(cls, "N_BODY_PERTURBATIONS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  OBLATE_FLATTENING = new PerturbationsKey(env->getStaticObjectField(cls, "OBLATE_FLATTENING", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  OCEAN_TIDES_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "OCEAN_TIDES_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  REDUCTION_THEORY = new PerturbationsKey(env->getStaticObjectField(cls, "REDUCTION_THEORY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SHADOW_BODIES = new PerturbationsKey(env->getStaticObjectField(cls, "SHADOW_BODIES", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SHADOW_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "SHADOW_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SOLID_TIDES_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "SOLID_TIDES_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SRP_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "SRP_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SW_DATA_EPOCH = new PerturbationsKey(env->getStaticObjectField(cls, "SW_DATA_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SW_DATA_SOURCE = new PerturbationsKey(env->getStaticObjectField(cls, "SW_DATA_SOURCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SW_INTERP_METHOD = new PerturbationsKey(env->getStaticObjectField(cls, "SW_INTERP_METHOD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean PerturbationsKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_27d6c060f7d3020f], a0.this$, a1.this$, a2.this$);
              }

              PerturbationsKey PerturbationsKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return PerturbationsKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_849a26fbce6aef68], a0.this$));
              }

              JArray< PerturbationsKey > PerturbationsKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< PerturbationsKey >(env->callStaticObjectMethod(cls, mids$[mid_values_bfe673c4ffe500a9]));
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
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              static PyObject *t_PerturbationsKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PerturbationsKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PerturbationsKey_of_(t_PerturbationsKey *self, PyObject *args);
              static PyObject *t_PerturbationsKey_process(t_PerturbationsKey *self, PyObject *args);
              static PyObject *t_PerturbationsKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_PerturbationsKey_values(PyTypeObject *type);
              static PyObject *t_PerturbationsKey_get__parameters_(t_PerturbationsKey *self, void *data);
              static PyGetSetDef t_PerturbationsKey__fields_[] = {
                DECLARE_GET_FIELD(t_PerturbationsKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_PerturbationsKey__methods_[] = {
                DECLARE_METHOD(t_PerturbationsKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PerturbationsKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PerturbationsKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_PerturbationsKey, process, METH_VARARGS),
                DECLARE_METHOD(t_PerturbationsKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_PerturbationsKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(PerturbationsKey)[] = {
                { Py_tp_methods, t_PerturbationsKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_PerturbationsKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(PerturbationsKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(PerturbationsKey, t_PerturbationsKey, PerturbationsKey);
              PyObject *t_PerturbationsKey::wrap_Object(const PerturbationsKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_PerturbationsKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_PerturbationsKey *self = (t_PerturbationsKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_PerturbationsKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_PerturbationsKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_PerturbationsKey *self = (t_PerturbationsKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_PerturbationsKey::install(PyObject *module)
              {
                installType(&PY_TYPE(PerturbationsKey), &PY_TYPE_DEF(PerturbationsKey), module, "PerturbationsKey", 0);
              }

              void t_PerturbationsKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "class_", make_descriptor(PerturbationsKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "wrapfn_", make_descriptor(t_PerturbationsKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(PerturbationsKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "ALBEDO_GRID_SIZE", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::ALBEDO_GRID_SIZE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "ALBEDO_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::ALBEDO_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "ATMOSPHERIC_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::ATMOSPHERIC_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "CENTRAL_BODY_ROTATION", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::CENTRAL_BODY_ROTATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "COMMENT", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "EQUATORIAL_RADIUS", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::EQUATORIAL_RADIUS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_F10P7", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_F10P7)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_F10P7_MEAN", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_F10P7_MEAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_GEOMAG_AP", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_GEOMAG_AP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_GEOMAG_DST", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_GEOMAG_DST)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_GEOMAG_KP", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_GEOMAG_KP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_M10P7", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_M10P7)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_M10P7_MEAN", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_M10P7_MEAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_S10P7", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_S10P7)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_S10P7_MEAN", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_S10P7_MEAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_Y10P7", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_Y10P7)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_Y10P7_MEAN", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_Y10P7_MEAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "GM", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::GM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "GRAVITY_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::GRAVITY_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "N_BODY_PERTURBATIONS", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::N_BODY_PERTURBATIONS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "OBLATE_FLATTENING", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::OBLATE_FLATTENING)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "OCEAN_TIDES_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::OCEAN_TIDES_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "REDUCTION_THEORY", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::REDUCTION_THEORY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SHADOW_BODIES", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SHADOW_BODIES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SHADOW_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SHADOW_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SOLID_TIDES_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SOLID_TIDES_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SRP_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SRP_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SW_DATA_EPOCH", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SW_DATA_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SW_DATA_SOURCE", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SW_DATA_SOURCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SW_INTERP_METHOD", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SW_INTERP_METHOD)));
              }

              static PyObject *t_PerturbationsKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, PerturbationsKey::initializeClass, 1)))
                  return NULL;
                return t_PerturbationsKey::wrap_Object(PerturbationsKey(((t_PerturbationsKey *) arg)->object.this$));
              }
              static PyObject *t_PerturbationsKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, PerturbationsKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_PerturbationsKey_of_(t_PerturbationsKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_PerturbationsKey_process(t_PerturbationsKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_PerturbationsKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                PerturbationsKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::PerturbationsKey::valueOf(a0));
                  return t_PerturbationsKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_PerturbationsKey_values(PyTypeObject *type)
              {
                JArray< PerturbationsKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::PerturbationsKey::values());
                return JArray<jobject>(result.this$).wrap(t_PerturbationsKey::wrap_jobject);
              }
              static PyObject *t_PerturbationsKey_get__parameters_(t_PerturbationsKey *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
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
#include "org/hipparchus/geometry/spherical/twod/Sphere2D.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/spherical/twod/Sphere2D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *Sphere2D::class$ = NULL;
          jmethodID *Sphere2D::mids$ = NULL;
          bool Sphere2D::live$ = false;
          jdouble Sphere2D::SMALLEST_TOLERANCE = (jdouble) 0;

          jclass Sphere2D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/Sphere2D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_checkTolerance_8ba9fe7a847cecad] = env->getStaticMethodID(cls, "checkTolerance", "(D)V");
              mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getInstance_9869ff45c1c8d145] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/geometry/spherical/twod/Sphere2D;");
              mids$[mid_getSubSpace_198c463f919fa90a] = env->getMethodID(cls, "getSubSpace", "()Lorg/hipparchus/geometry/spherical/oned/Sphere1D;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              SMALLEST_TOLERANCE = env->getStaticDoubleField(cls, "SMALLEST_TOLERANCE");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void Sphere2D::checkTolerance(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_checkTolerance_8ba9fe7a847cecad], a0);
          }

          jint Sphere2D::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
          }

          Sphere2D Sphere2D::getInstance()
          {
            jclass cls = env->getClass(initializeClass);
            return Sphere2D(env->callStaticObjectMethod(cls, mids$[mid_getInstance_9869ff45c1c8d145]));
          }

          ::org::hipparchus::geometry::spherical::oned::Sphere1D Sphere2D::getSubSpace() const
          {
            return ::org::hipparchus::geometry::spherical::oned::Sphere1D(env->callObjectMethod(this$, mids$[mid_getSubSpace_198c463f919fa90a]));
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
      namespace spherical {
        namespace twod {
          static PyObject *t_Sphere2D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere2D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere2D_checkTolerance(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere2D_getDimension(t_Sphere2D *self);
          static PyObject *t_Sphere2D_getInstance(PyTypeObject *type);
          static PyObject *t_Sphere2D_getSubSpace(t_Sphere2D *self);
          static PyObject *t_Sphere2D_get__dimension(t_Sphere2D *self, void *data);
          static PyObject *t_Sphere2D_get__instance(t_Sphere2D *self, void *data);
          static PyObject *t_Sphere2D_get__subSpace(t_Sphere2D *self, void *data);
          static PyGetSetDef t_Sphere2D__fields_[] = {
            DECLARE_GET_FIELD(t_Sphere2D, dimension),
            DECLARE_GET_FIELD(t_Sphere2D, instance),
            DECLARE_GET_FIELD(t_Sphere2D, subSpace),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Sphere2D__methods_[] = {
            DECLARE_METHOD(t_Sphere2D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere2D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere2D, checkTolerance, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere2D, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_Sphere2D, getInstance, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_Sphere2D, getSubSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Sphere2D)[] = {
            { Py_tp_methods, t_Sphere2D__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Sphere2D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Sphere2D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Sphere2D, t_Sphere2D, Sphere2D);

          void t_Sphere2D::install(PyObject *module)
          {
            installType(&PY_TYPE(Sphere2D), &PY_TYPE_DEF(Sphere2D), module, "Sphere2D", 0);
          }

          void t_Sphere2D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere2D), "class_", make_descriptor(Sphere2D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere2D), "wrapfn_", make_descriptor(t_Sphere2D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere2D), "boxfn_", make_descriptor(boxObject));
            env->getClass(Sphere2D::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere2D), "SMALLEST_TOLERANCE", make_descriptor(Sphere2D::SMALLEST_TOLERANCE));
          }

          static PyObject *t_Sphere2D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Sphere2D::initializeClass, 1)))
              return NULL;
            return t_Sphere2D::wrap_Object(Sphere2D(((t_Sphere2D *) arg)->object.this$));
          }
          static PyObject *t_Sphere2D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Sphere2D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Sphere2D_checkTolerance(PyTypeObject *type, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(::org::hipparchus::geometry::spherical::twod::Sphere2D::checkTolerance(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError(type, "checkTolerance", arg);
            return NULL;
          }

          static PyObject *t_Sphere2D_getDimension(t_Sphere2D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Sphere2D_getInstance(PyTypeObject *type)
          {
            Sphere2D result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::spherical::twod::Sphere2D::getInstance());
            return t_Sphere2D::wrap_Object(result);
          }

          static PyObject *t_Sphere2D_getSubSpace(t_Sphere2D *self)
          {
            ::org::hipparchus::geometry::spherical::oned::Sphere1D result((jobject) NULL);
            OBJ_CALL(result = self->object.getSubSpace());
            return ::org::hipparchus::geometry::spherical::oned::t_Sphere1D::wrap_Object(result);
          }

          static PyObject *t_Sphere2D_get__dimension(t_Sphere2D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Sphere2D_get__instance(t_Sphere2D *self, void *data)
          {
            Sphere2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getInstance());
            return t_Sphere2D::wrap_Object(value);
          }

          static PyObject *t_Sphere2D_get__subSpace(t_Sphere2D *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::oned::Sphere1D value((jobject) NULL);
            OBJ_CALL(value = self->object.getSubSpace());
            return ::org::hipparchus::geometry::spherical::oned::t_Sphere1D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1042Data.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1042Data::class$ = NULL;
              jmethodID *Rtcm1042Data::mids$ = NULL;
              bool Rtcm1042Data::live$ = false;

              jclass Rtcm1042Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1042Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getBeidouNavigationMessage_13d1af32939a6e9c] = env->getMethodID(cls, "getBeidouNavigationMessage", "()Lorg/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage;");
                  mids$[mid_getBeidouNavigationMessage_a0991862b918be40] = env->getMethodID(cls, "getBeidouNavigationMessage", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage;");
                  mids$[mid_getBeidouToc_b74f83833fdad017] = env->getMethodID(cls, "getBeidouToc", "()D");
                  mids$[mid_getSvHealth_b74f83833fdad017] = env->getMethodID(cls, "getSvHealth", "()D");
                  mids$[mid_setBeidouNavigationMessage_3bdf636f6ee36324] = env->getMethodID(cls, "setBeidouNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage;)V");
                  mids$[mid_setBeidouToc_8ba9fe7a847cecad] = env->getMethodID(cls, "setBeidouToc", "(D)V");
                  mids$[mid_setSvHealth_8ba9fe7a847cecad] = env->getMethodID(cls, "setSvHealth", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1042Data::Rtcm1042Data() : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage Rtcm1042Data::getBeidouNavigationMessage() const
              {
                return ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage(env->callObjectMethod(this$, mids$[mid_getBeidouNavigationMessage_13d1af32939a6e9c]));
              }

              ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage Rtcm1042Data::getBeidouNavigationMessage(const ::org::orekit::time::TimeScales & a0) const
              {
                return ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage(env->callObjectMethod(this$, mids$[mid_getBeidouNavigationMessage_a0991862b918be40], a0.this$));
              }

              jdouble Rtcm1042Data::getBeidouToc() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getBeidouToc_b74f83833fdad017]);
              }

              jdouble Rtcm1042Data::getSvHealth() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSvHealth_b74f83833fdad017]);
              }

              void Rtcm1042Data::setBeidouNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBeidouNavigationMessage_3bdf636f6ee36324], a0.this$);
              }

              void Rtcm1042Data::setBeidouToc(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBeidouToc_8ba9fe7a847cecad], a0);
              }

              void Rtcm1042Data::setSvHealth(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSvHealth_8ba9fe7a847cecad], a0);
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {
              static PyObject *t_Rtcm1042Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1042Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Rtcm1042Data_init_(t_Rtcm1042Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1042Data_getBeidouNavigationMessage(t_Rtcm1042Data *self, PyObject *args);
              static PyObject *t_Rtcm1042Data_getBeidouToc(t_Rtcm1042Data *self);
              static PyObject *t_Rtcm1042Data_getSvHealth(t_Rtcm1042Data *self);
              static PyObject *t_Rtcm1042Data_setBeidouNavigationMessage(t_Rtcm1042Data *self, PyObject *arg);
              static PyObject *t_Rtcm1042Data_setBeidouToc(t_Rtcm1042Data *self, PyObject *arg);
              static PyObject *t_Rtcm1042Data_setSvHealth(t_Rtcm1042Data *self, PyObject *arg);
              static PyObject *t_Rtcm1042Data_get__beidouNavigationMessage(t_Rtcm1042Data *self, void *data);
              static int t_Rtcm1042Data_set__beidouNavigationMessage(t_Rtcm1042Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1042Data_get__beidouToc(t_Rtcm1042Data *self, void *data);
              static int t_Rtcm1042Data_set__beidouToc(t_Rtcm1042Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1042Data_get__svHealth(t_Rtcm1042Data *self, void *data);
              static int t_Rtcm1042Data_set__svHealth(t_Rtcm1042Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_Rtcm1042Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_Rtcm1042Data, beidouNavigationMessage),
                DECLARE_GETSET_FIELD(t_Rtcm1042Data, beidouToc),
                DECLARE_GETSET_FIELD(t_Rtcm1042Data, svHealth),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1042Data__methods_[] = {
                DECLARE_METHOD(t_Rtcm1042Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1042Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1042Data, getBeidouNavigationMessage, METH_VARARGS),
                DECLARE_METHOD(t_Rtcm1042Data, getBeidouToc, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1042Data, getSvHealth, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1042Data, setBeidouNavigationMessage, METH_O),
                DECLARE_METHOD(t_Rtcm1042Data, setBeidouToc, METH_O),
                DECLARE_METHOD(t_Rtcm1042Data, setSvHealth, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1042Data)[] = {
                { Py_tp_methods, t_Rtcm1042Data__methods_ },
                { Py_tp_init, (void *) t_Rtcm1042Data_init_ },
                { Py_tp_getset, t_Rtcm1042Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1042Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData),
                NULL
              };

              DEFINE_TYPE(Rtcm1042Data, t_Rtcm1042Data, Rtcm1042Data);

              void t_Rtcm1042Data::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1042Data), &PY_TYPE_DEF(Rtcm1042Data), module, "Rtcm1042Data", 0);
              }

              void t_Rtcm1042Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1042Data), "class_", make_descriptor(Rtcm1042Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1042Data), "wrapfn_", make_descriptor(t_Rtcm1042Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1042Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1042Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1042Data::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1042Data::wrap_Object(Rtcm1042Data(((t_Rtcm1042Data *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1042Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1042Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Rtcm1042Data_init_(t_Rtcm1042Data *self, PyObject *args, PyObject *kwds)
              {
                Rtcm1042Data object((jobject) NULL);

                INT_CALL(object = Rtcm1042Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_Rtcm1042Data_getBeidouNavigationMessage(t_Rtcm1042Data *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage result((jobject) NULL);
                    OBJ_CALL(result = self->object.getBeidouNavigationMessage());
                    return ::org::orekit::propagation::analytical::gnss::data::t_BeidouLegacyNavigationMessage::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    ::org::orekit::time::TimeScales a0((jobject) NULL);
                    ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage result((jobject) NULL);

                    if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
                    {
                      OBJ_CALL(result = self->object.getBeidouNavigationMessage(a0));
                      return ::org::orekit::propagation::analytical::gnss::data::t_BeidouLegacyNavigationMessage::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "getBeidouNavigationMessage", args);
                return NULL;
              }

              static PyObject *t_Rtcm1042Data_getBeidouToc(t_Rtcm1042Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getBeidouToc());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1042Data_getSvHealth(t_Rtcm1042Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSvHealth());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1042Data_setBeidouNavigationMessage(t_Rtcm1042Data *self, PyObject *arg)
              {
                ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setBeidouNavigationMessage(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBeidouNavigationMessage", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1042Data_setBeidouToc(t_Rtcm1042Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setBeidouToc(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBeidouToc", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1042Data_setSvHealth(t_Rtcm1042Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSvHealth(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSvHealth", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1042Data_get__beidouNavigationMessage(t_Rtcm1042Data *self, void *data)
              {
                ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage value((jobject) NULL);
                OBJ_CALL(value = self->object.getBeidouNavigationMessage());
                return ::org::orekit::propagation::analytical::gnss::data::t_BeidouLegacyNavigationMessage::wrap_Object(value);
              }
              static int t_Rtcm1042Data_set__beidouNavigationMessage(t_Rtcm1042Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage::initializeClass, &value))
                  {
                    INT_CALL(self->object.setBeidouNavigationMessage(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "beidouNavigationMessage", arg);
                return -1;
              }

              static PyObject *t_Rtcm1042Data_get__beidouToc(t_Rtcm1042Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getBeidouToc());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1042Data_set__beidouToc(t_Rtcm1042Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setBeidouToc(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "beidouToc", arg);
                return -1;
              }

              static PyObject *t_Rtcm1042Data_get__svHealth(t_Rtcm1042Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSvHealth());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1042Data_set__svHealth(t_Rtcm1042Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSvHealth(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "svHealth", arg);
                return -1;
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
#include "org/hipparchus/linear/FieldVectorChangingVisitor.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldVectorChangingVisitor::class$ = NULL;
      jmethodID *FieldVectorChangingVisitor::mids$ = NULL;
      bool FieldVectorChangingVisitor::live$ = false;

      jclass FieldVectorChangingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldVectorChangingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_2ff8de927fda4153] = env->getMethodID(cls, "end", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_start_a0df4b8e4ed3805e] = env->getMethodID(cls, "start", "(III)V");
          mids$[mid_visit_475a3dc033b0d5a5] = env->getMethodID(cls, "visit", "(ILorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::FieldElement FieldVectorChangingVisitor::end() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_end_2ff8de927fda4153]));
      }

      void FieldVectorChangingVisitor::start(jint a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_start_a0df4b8e4ed3805e], a0, a1, a2);
      }

      ::org::hipparchus::FieldElement FieldVectorChangingVisitor::visit(jint a0, const ::org::hipparchus::FieldElement & a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_visit_475a3dc033b0d5a5], a0, a1.this$));
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
      static PyObject *t_FieldVectorChangingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldVectorChangingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldVectorChangingVisitor_of_(t_FieldVectorChangingVisitor *self, PyObject *args);
      static PyObject *t_FieldVectorChangingVisitor_end(t_FieldVectorChangingVisitor *self);
      static PyObject *t_FieldVectorChangingVisitor_start(t_FieldVectorChangingVisitor *self, PyObject *args);
      static PyObject *t_FieldVectorChangingVisitor_visit(t_FieldVectorChangingVisitor *self, PyObject *args);
      static PyObject *t_FieldVectorChangingVisitor_get__parameters_(t_FieldVectorChangingVisitor *self, void *data);
      static PyGetSetDef t_FieldVectorChangingVisitor__fields_[] = {
        DECLARE_GET_FIELD(t_FieldVectorChangingVisitor, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldVectorChangingVisitor__methods_[] = {
        DECLARE_METHOD(t_FieldVectorChangingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldVectorChangingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldVectorChangingVisitor, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldVectorChangingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_FieldVectorChangingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_FieldVectorChangingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldVectorChangingVisitor)[] = {
        { Py_tp_methods, t_FieldVectorChangingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldVectorChangingVisitor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldVectorChangingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldVectorChangingVisitor, t_FieldVectorChangingVisitor, FieldVectorChangingVisitor);
      PyObject *t_FieldVectorChangingVisitor::wrap_Object(const FieldVectorChangingVisitor& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldVectorChangingVisitor::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldVectorChangingVisitor *self = (t_FieldVectorChangingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldVectorChangingVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldVectorChangingVisitor::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldVectorChangingVisitor *self = (t_FieldVectorChangingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldVectorChangingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldVectorChangingVisitor), &PY_TYPE_DEF(FieldVectorChangingVisitor), module, "FieldVectorChangingVisitor", 0);
      }

      void t_FieldVectorChangingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVectorChangingVisitor), "class_", make_descriptor(FieldVectorChangingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVectorChangingVisitor), "wrapfn_", make_descriptor(t_FieldVectorChangingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVectorChangingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldVectorChangingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldVectorChangingVisitor::initializeClass, 1)))
          return NULL;
        return t_FieldVectorChangingVisitor::wrap_Object(FieldVectorChangingVisitor(((t_FieldVectorChangingVisitor *) arg)->object.this$));
      }
      static PyObject *t_FieldVectorChangingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldVectorChangingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldVectorChangingVisitor_of_(t_FieldVectorChangingVisitor *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldVectorChangingVisitor_end(t_FieldVectorChangingVisitor *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.end());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldVectorChangingVisitor_start(t_FieldVectorChangingVisitor *self, PyObject *args)
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

      static PyObject *t_FieldVectorChangingVisitor_visit(t_FieldVectorChangingVisitor *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::FieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "IK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.visit(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
      static PyObject *t_FieldVectorChangingVisitor_get__parameters_(t_FieldVectorChangingVisitor *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer$Sigma.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *CMAESOptimizer$Sigma::class$ = NULL;
            jmethodID *CMAESOptimizer$Sigma::mids$ = NULL;
            bool CMAESOptimizer$Sigma::live$ = false;

            jclass CMAESOptimizer$Sigma::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer$Sigma");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ab69da052b88f50c] = env->getMethodID(cls, "<init>", "([D)V");
                mids$[mid_getSigma_25e1757a36c4dde2] = env->getMethodID(cls, "getSigma", "()[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CMAESOptimizer$Sigma::CMAESOptimizer$Sigma(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab69da052b88f50c, a0.this$)) {}

            JArray< jdouble > CMAESOptimizer$Sigma::getSigma() const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSigma_25e1757a36c4dde2]));
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
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {
            static PyObject *t_CMAESOptimizer$Sigma_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CMAESOptimizer$Sigma_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CMAESOptimizer$Sigma_of_(t_CMAESOptimizer$Sigma *self, PyObject *args);
            static int t_CMAESOptimizer$Sigma_init_(t_CMAESOptimizer$Sigma *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CMAESOptimizer$Sigma_getSigma(t_CMAESOptimizer$Sigma *self);
            static PyObject *t_CMAESOptimizer$Sigma_get__sigma(t_CMAESOptimizer$Sigma *self, void *data);
            static PyObject *t_CMAESOptimizer$Sigma_get__parameters_(t_CMAESOptimizer$Sigma *self, void *data);
            static PyGetSetDef t_CMAESOptimizer$Sigma__fields_[] = {
              DECLARE_GET_FIELD(t_CMAESOptimizer$Sigma, sigma),
              DECLARE_GET_FIELD(t_CMAESOptimizer$Sigma, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CMAESOptimizer$Sigma__methods_[] = {
              DECLARE_METHOD(t_CMAESOptimizer$Sigma, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CMAESOptimizer$Sigma, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CMAESOptimizer$Sigma, of_, METH_VARARGS),
              DECLARE_METHOD(t_CMAESOptimizer$Sigma, getSigma, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CMAESOptimizer$Sigma)[] = {
              { Py_tp_methods, t_CMAESOptimizer$Sigma__methods_ },
              { Py_tp_init, (void *) t_CMAESOptimizer$Sigma_init_ },
              { Py_tp_getset, t_CMAESOptimizer$Sigma__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CMAESOptimizer$Sigma)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CMAESOptimizer$Sigma, t_CMAESOptimizer$Sigma, CMAESOptimizer$Sigma);
            PyObject *t_CMAESOptimizer$Sigma::wrap_Object(const CMAESOptimizer$Sigma& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CMAESOptimizer$Sigma::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CMAESOptimizer$Sigma *self = (t_CMAESOptimizer$Sigma *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CMAESOptimizer$Sigma::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CMAESOptimizer$Sigma::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CMAESOptimizer$Sigma *self = (t_CMAESOptimizer$Sigma *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CMAESOptimizer$Sigma::install(PyObject *module)
            {
              installType(&PY_TYPE(CMAESOptimizer$Sigma), &PY_TYPE_DEF(CMAESOptimizer$Sigma), module, "CMAESOptimizer$Sigma", 0);
            }

            void t_CMAESOptimizer$Sigma::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer$Sigma), "class_", make_descriptor(CMAESOptimizer$Sigma::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer$Sigma), "wrapfn_", make_descriptor(t_CMAESOptimizer$Sigma::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer$Sigma), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CMAESOptimizer$Sigma_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CMAESOptimizer$Sigma::initializeClass, 1)))
                return NULL;
              return t_CMAESOptimizer$Sigma::wrap_Object(CMAESOptimizer$Sigma(((t_CMAESOptimizer$Sigma *) arg)->object.this$));
            }
            static PyObject *t_CMAESOptimizer$Sigma_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CMAESOptimizer$Sigma::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CMAESOptimizer$Sigma_of_(t_CMAESOptimizer$Sigma *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_CMAESOptimizer$Sigma_init_(t_CMAESOptimizer$Sigma *self, PyObject *args, PyObject *kwds)
            {
              JArray< jdouble > a0((jobject) NULL);
              CMAESOptimizer$Sigma object((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                INT_CALL(object = CMAESOptimizer$Sigma(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CMAESOptimizer$Sigma_getSigma(t_CMAESOptimizer$Sigma *self)
            {
              JArray< jdouble > result((jobject) NULL);
              OBJ_CALL(result = self->object.getSigma());
              return result.wrap();
            }
            static PyObject *t_CMAESOptimizer$Sigma_get__parameters_(t_CMAESOptimizer$Sigma *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_CMAESOptimizer$Sigma_get__sigma(t_CMAESOptimizer$Sigma *self, void *data)
            {
              JArray< jdouble > value((jobject) NULL);
              OBJ_CALL(value = self->object.getSigma());
              return value.wrap();
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EclipseDetector.h"
#include "org/orekit/utils/OccultationEngine.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/propagation/events/EclipseDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EclipseDetector::class$ = NULL;
        jmethodID *EclipseDetector::mids$ = NULL;
        bool EclipseDetector::live$ = false;

        jclass EclipseDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EclipseDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_98d17cd2942d5a00] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/OccultationEngine;)V");
            mids$[mid_init$_f54f987ffc77d8f9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;DLorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getMargin_b74f83833fdad017] = env->getMethodID(cls, "getMargin", "()D");
            mids$[mid_getOccultationEngine_cf1cac2b0ace2d84] = env->getMethodID(cls, "getOccultationEngine", "()Lorg/orekit/utils/OccultationEngine;");
            mids$[mid_getTotalEclipse_9ab94ac1dc23b105] = env->getMethodID(cls, "getTotalEclipse", "()Z");
            mids$[mid_withMargin_b8ad17ca08f1a64c] = env->getMethodID(cls, "withMargin", "(D)Lorg/orekit/propagation/events/EclipseDetector;");
            mids$[mid_withPenumbra_a74f8090f9a10174] = env->getMethodID(cls, "withPenumbra", "()Lorg/orekit/propagation/events/EclipseDetector;");
            mids$[mid_withUmbra_a74f8090f9a10174] = env->getMethodID(cls, "withUmbra", "()Lorg/orekit/propagation/events/EclipseDetector;");
            mids$[mid_create_73841b33fb389194] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/EclipseDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EclipseDetector::EclipseDetector(const ::org::orekit::utils::OccultationEngine & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_98d17cd2942d5a00, a0.this$)) {}

        EclipseDetector::EclipseDetector(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_f54f987ffc77d8f9, a0.this$, a1, a2.this$)) {}

        jdouble EclipseDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }

        jdouble EclipseDetector::getMargin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMargin_b74f83833fdad017]);
        }

        ::org::orekit::utils::OccultationEngine EclipseDetector::getOccultationEngine() const
        {
          return ::org::orekit::utils::OccultationEngine(env->callObjectMethod(this$, mids$[mid_getOccultationEngine_cf1cac2b0ace2d84]));
        }

        jboolean EclipseDetector::getTotalEclipse() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getTotalEclipse_9ab94ac1dc23b105]);
        }

        EclipseDetector EclipseDetector::withMargin(jdouble a0) const
        {
          return EclipseDetector(env->callObjectMethod(this$, mids$[mid_withMargin_b8ad17ca08f1a64c], a0));
        }

        EclipseDetector EclipseDetector::withPenumbra() const
        {
          return EclipseDetector(env->callObjectMethod(this$, mids$[mid_withPenumbra_a74f8090f9a10174]));
        }

        EclipseDetector EclipseDetector::withUmbra() const
        {
          return EclipseDetector(env->callObjectMethod(this$, mids$[mid_withUmbra_a74f8090f9a10174]));
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
        static PyObject *t_EclipseDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EclipseDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EclipseDetector_of_(t_EclipseDetector *self, PyObject *args);
        static int t_EclipseDetector_init_(t_EclipseDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EclipseDetector_g(t_EclipseDetector *self, PyObject *args);
        static PyObject *t_EclipseDetector_getMargin(t_EclipseDetector *self);
        static PyObject *t_EclipseDetector_getOccultationEngine(t_EclipseDetector *self);
        static PyObject *t_EclipseDetector_getTotalEclipse(t_EclipseDetector *self);
        static PyObject *t_EclipseDetector_withMargin(t_EclipseDetector *self, PyObject *arg);
        static PyObject *t_EclipseDetector_withPenumbra(t_EclipseDetector *self);
        static PyObject *t_EclipseDetector_withUmbra(t_EclipseDetector *self);
        static PyObject *t_EclipseDetector_get__margin(t_EclipseDetector *self, void *data);
        static PyObject *t_EclipseDetector_get__occultationEngine(t_EclipseDetector *self, void *data);
        static PyObject *t_EclipseDetector_get__totalEclipse(t_EclipseDetector *self, void *data);
        static PyObject *t_EclipseDetector_get__parameters_(t_EclipseDetector *self, void *data);
        static PyGetSetDef t_EclipseDetector__fields_[] = {
          DECLARE_GET_FIELD(t_EclipseDetector, margin),
          DECLARE_GET_FIELD(t_EclipseDetector, occultationEngine),
          DECLARE_GET_FIELD(t_EclipseDetector, totalEclipse),
          DECLARE_GET_FIELD(t_EclipseDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EclipseDetector__methods_[] = {
          DECLARE_METHOD(t_EclipseDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EclipseDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EclipseDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_EclipseDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_EclipseDetector, getMargin, METH_NOARGS),
          DECLARE_METHOD(t_EclipseDetector, getOccultationEngine, METH_NOARGS),
          DECLARE_METHOD(t_EclipseDetector, getTotalEclipse, METH_NOARGS),
          DECLARE_METHOD(t_EclipseDetector, withMargin, METH_O),
          DECLARE_METHOD(t_EclipseDetector, withPenumbra, METH_NOARGS),
          DECLARE_METHOD(t_EclipseDetector, withUmbra, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EclipseDetector)[] = {
          { Py_tp_methods, t_EclipseDetector__methods_ },
          { Py_tp_init, (void *) t_EclipseDetector_init_ },
          { Py_tp_getset, t_EclipseDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EclipseDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(EclipseDetector, t_EclipseDetector, EclipseDetector);
        PyObject *t_EclipseDetector::wrap_Object(const EclipseDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EclipseDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EclipseDetector *self = (t_EclipseDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EclipseDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EclipseDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EclipseDetector *self = (t_EclipseDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EclipseDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(EclipseDetector), &PY_TYPE_DEF(EclipseDetector), module, "EclipseDetector", 0);
        }

        void t_EclipseDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EclipseDetector), "class_", make_descriptor(EclipseDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EclipseDetector), "wrapfn_", make_descriptor(t_EclipseDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EclipseDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EclipseDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EclipseDetector::initializeClass, 1)))
            return NULL;
          return t_EclipseDetector::wrap_Object(EclipseDetector(((t_EclipseDetector *) arg)->object.this$));
        }
        static PyObject *t_EclipseDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EclipseDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EclipseDetector_of_(t_EclipseDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EclipseDetector_init_(t_EclipseDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::utils::OccultationEngine a0((jobject) NULL);
              EclipseDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::utils::OccultationEngine::initializeClass, &a0))
              {
                INT_CALL(object = EclipseDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(EclipseDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              EclipseDetector object((jobject) NULL);

              if (!parseArgs(args, "kDk", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = EclipseDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(EclipseDetector);
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

        static PyObject *t_EclipseDetector_g(t_EclipseDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EclipseDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_EclipseDetector_getMargin(t_EclipseDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMargin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EclipseDetector_getOccultationEngine(t_EclipseDetector *self)
        {
          ::org::orekit::utils::OccultationEngine result((jobject) NULL);
          OBJ_CALL(result = self->object.getOccultationEngine());
          return ::org::orekit::utils::t_OccultationEngine::wrap_Object(result);
        }

        static PyObject *t_EclipseDetector_getTotalEclipse(t_EclipseDetector *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getTotalEclipse());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_EclipseDetector_withMargin(t_EclipseDetector *self, PyObject *arg)
        {
          jdouble a0;
          EclipseDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withMargin(a0));
            return t_EclipseDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMargin", arg);
          return NULL;
        }

        static PyObject *t_EclipseDetector_withPenumbra(t_EclipseDetector *self)
        {
          EclipseDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.withPenumbra());
          return t_EclipseDetector::wrap_Object(result);
        }

        static PyObject *t_EclipseDetector_withUmbra(t_EclipseDetector *self)
        {
          EclipseDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.withUmbra());
          return t_EclipseDetector::wrap_Object(result);
        }
        static PyObject *t_EclipseDetector_get__parameters_(t_EclipseDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EclipseDetector_get__margin(t_EclipseDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMargin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EclipseDetector_get__occultationEngine(t_EclipseDetector *self, void *data)
        {
          ::org::orekit::utils::OccultationEngine value((jobject) NULL);
          OBJ_CALL(value = self->object.getOccultationEngine());
          return ::org::orekit::utils::t_OccultationEngine::wrap_Object(value);
        }

        static PyObject *t_EclipseDetector_get__totalEclipse(t_EclipseDetector *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getTotalEclipse());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/RTNCovariance.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *RTNCovariance::class$ = NULL;
            jmethodID *RTNCovariance::mids$ = NULL;
            bool RTNCovariance::live$ = false;

            jclass RTNCovariance::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/RTNCovariance");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getCdrgdrg_b74f83833fdad017] = env->getMethodID(cls, "getCdrgdrg", "()D");
                mids$[mid_getCdrgn_b74f83833fdad017] = env->getMethodID(cls, "getCdrgn", "()D");
                mids$[mid_getCdrgndot_b74f83833fdad017] = env->getMethodID(cls, "getCdrgndot", "()D");
                mids$[mid_getCdrgr_b74f83833fdad017] = env->getMethodID(cls, "getCdrgr", "()D");
                mids$[mid_getCdrgrdot_b74f83833fdad017] = env->getMethodID(cls, "getCdrgrdot", "()D");
                mids$[mid_getCdrgt_b74f83833fdad017] = env->getMethodID(cls, "getCdrgt", "()D");
                mids$[mid_getCdrgtdot_b74f83833fdad017] = env->getMethodID(cls, "getCdrgtdot", "()D");
                mids$[mid_getCndotn_b74f83833fdad017] = env->getMethodID(cls, "getCndotn", "()D");
                mids$[mid_getCndotndot_b74f83833fdad017] = env->getMethodID(cls, "getCndotndot", "()D");
                mids$[mid_getCndotr_b74f83833fdad017] = env->getMethodID(cls, "getCndotr", "()D");
                mids$[mid_getCndotrdot_b74f83833fdad017] = env->getMethodID(cls, "getCndotrdot", "()D");
                mids$[mid_getCndott_b74f83833fdad017] = env->getMethodID(cls, "getCndott", "()D");
                mids$[mid_getCndottdot_b74f83833fdad017] = env->getMethodID(cls, "getCndottdot", "()D");
                mids$[mid_getCnn_b74f83833fdad017] = env->getMethodID(cls, "getCnn", "()D");
                mids$[mid_getCnr_b74f83833fdad017] = env->getMethodID(cls, "getCnr", "()D");
                mids$[mid_getCnt_b74f83833fdad017] = env->getMethodID(cls, "getCnt", "()D");
                mids$[mid_getCrdotn_b74f83833fdad017] = env->getMethodID(cls, "getCrdotn", "()D");
                mids$[mid_getCrdotr_b74f83833fdad017] = env->getMethodID(cls, "getCrdotr", "()D");
                mids$[mid_getCrdotrdot_b74f83833fdad017] = env->getMethodID(cls, "getCrdotrdot", "()D");
                mids$[mid_getCrdott_b74f83833fdad017] = env->getMethodID(cls, "getCrdott", "()D");
                mids$[mid_getCrr_b74f83833fdad017] = env->getMethodID(cls, "getCrr", "()D");
                mids$[mid_getCsrpdrg_b74f83833fdad017] = env->getMethodID(cls, "getCsrpdrg", "()D");
                mids$[mid_getCsrpn_b74f83833fdad017] = env->getMethodID(cls, "getCsrpn", "()D");
                mids$[mid_getCsrpndot_b74f83833fdad017] = env->getMethodID(cls, "getCsrpndot", "()D");
                mids$[mid_getCsrpr_b74f83833fdad017] = env->getMethodID(cls, "getCsrpr", "()D");
                mids$[mid_getCsrprdot_b74f83833fdad017] = env->getMethodID(cls, "getCsrprdot", "()D");
                mids$[mid_getCsrpsrp_b74f83833fdad017] = env->getMethodID(cls, "getCsrpsrp", "()D");
                mids$[mid_getCsrpt_b74f83833fdad017] = env->getMethodID(cls, "getCsrpt", "()D");
                mids$[mid_getCsrptdot_b74f83833fdad017] = env->getMethodID(cls, "getCsrptdot", "()D");
                mids$[mid_getCtdotn_b74f83833fdad017] = env->getMethodID(cls, "getCtdotn", "()D");
                mids$[mid_getCtdotr_b74f83833fdad017] = env->getMethodID(cls, "getCtdotr", "()D");
                mids$[mid_getCtdotrdot_b74f83833fdad017] = env->getMethodID(cls, "getCtdotrdot", "()D");
                mids$[mid_getCtdott_b74f83833fdad017] = env->getMethodID(cls, "getCtdott", "()D");
                mids$[mid_getCtdottdot_b74f83833fdad017] = env->getMethodID(cls, "getCtdottdot", "()D");
                mids$[mid_getCthrdrg_b74f83833fdad017] = env->getMethodID(cls, "getCthrdrg", "()D");
                mids$[mid_getCthrn_b74f83833fdad017] = env->getMethodID(cls, "getCthrn", "()D");
                mids$[mid_getCthrndot_b74f83833fdad017] = env->getMethodID(cls, "getCthrndot", "()D");
                mids$[mid_getCthrr_b74f83833fdad017] = env->getMethodID(cls, "getCthrr", "()D");
                mids$[mid_getCthrrdot_b74f83833fdad017] = env->getMethodID(cls, "getCthrrdot", "()D");
                mids$[mid_getCthrsrp_b74f83833fdad017] = env->getMethodID(cls, "getCthrsrp", "()D");
                mids$[mid_getCthrt_b74f83833fdad017] = env->getMethodID(cls, "getCthrt", "()D");
                mids$[mid_getCthrtdot_b74f83833fdad017] = env->getMethodID(cls, "getCthrtdot", "()D");
                mids$[mid_getCthrthr_b74f83833fdad017] = env->getMethodID(cls, "getCthrthr", "()D");
                mids$[mid_getCtr_b74f83833fdad017] = env->getMethodID(cls, "getCtr", "()D");
                mids$[mid_getCtt_b74f83833fdad017] = env->getMethodID(cls, "getCtt", "()D");
                mids$[mid_getRTNCovarianceMatrix_f77d745f2128c391] = env->getMethodID(cls, "getRTNCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_setCdrgdrg_8ba9fe7a847cecad] = env->getMethodID(cls, "setCdrgdrg", "(D)V");
                mids$[mid_setCdrgn_8ba9fe7a847cecad] = env->getMethodID(cls, "setCdrgn", "(D)V");
                mids$[mid_setCdrgndot_8ba9fe7a847cecad] = env->getMethodID(cls, "setCdrgndot", "(D)V");
                mids$[mid_setCdrgr_8ba9fe7a847cecad] = env->getMethodID(cls, "setCdrgr", "(D)V");
                mids$[mid_setCdrgrdot_8ba9fe7a847cecad] = env->getMethodID(cls, "setCdrgrdot", "(D)V");
                mids$[mid_setCdrgt_8ba9fe7a847cecad] = env->getMethodID(cls, "setCdrgt", "(D)V");
                mids$[mid_setCdrgtdot_8ba9fe7a847cecad] = env->getMethodID(cls, "setCdrgtdot", "(D)V");
                mids$[mid_setCndotn_8ba9fe7a847cecad] = env->getMethodID(cls, "setCndotn", "(D)V");
                mids$[mid_setCndotndot_8ba9fe7a847cecad] = env->getMethodID(cls, "setCndotndot", "(D)V");
                mids$[mid_setCndotr_8ba9fe7a847cecad] = env->getMethodID(cls, "setCndotr", "(D)V");
                mids$[mid_setCndotrdot_8ba9fe7a847cecad] = env->getMethodID(cls, "setCndotrdot", "(D)V");
                mids$[mid_setCndott_8ba9fe7a847cecad] = env->getMethodID(cls, "setCndott", "(D)V");
                mids$[mid_setCndottdot_8ba9fe7a847cecad] = env->getMethodID(cls, "setCndottdot", "(D)V");
                mids$[mid_setCnn_8ba9fe7a847cecad] = env->getMethodID(cls, "setCnn", "(D)V");
                mids$[mid_setCnr_8ba9fe7a847cecad] = env->getMethodID(cls, "setCnr", "(D)V");
                mids$[mid_setCnt_8ba9fe7a847cecad] = env->getMethodID(cls, "setCnt", "(D)V");
                mids$[mid_setCovarianceMatrixEntry_94fe8d9ffeb50676] = env->getMethodID(cls, "setCovarianceMatrixEntry", "(IID)V");
                mids$[mid_setCrdotn_8ba9fe7a847cecad] = env->getMethodID(cls, "setCrdotn", "(D)V");
                mids$[mid_setCrdotr_8ba9fe7a847cecad] = env->getMethodID(cls, "setCrdotr", "(D)V");
                mids$[mid_setCrdotrdot_8ba9fe7a847cecad] = env->getMethodID(cls, "setCrdotrdot", "(D)V");
                mids$[mid_setCrdott_8ba9fe7a847cecad] = env->getMethodID(cls, "setCrdott", "(D)V");
                mids$[mid_setCrr_8ba9fe7a847cecad] = env->getMethodID(cls, "setCrr", "(D)V");
                mids$[mid_setCsrpdrg_8ba9fe7a847cecad] = env->getMethodID(cls, "setCsrpdrg", "(D)V");
                mids$[mid_setCsrpn_8ba9fe7a847cecad] = env->getMethodID(cls, "setCsrpn", "(D)V");
                mids$[mid_setCsrpndot_8ba9fe7a847cecad] = env->getMethodID(cls, "setCsrpndot", "(D)V");
                mids$[mid_setCsrpr_8ba9fe7a847cecad] = env->getMethodID(cls, "setCsrpr", "(D)V");
                mids$[mid_setCsrprdot_8ba9fe7a847cecad] = env->getMethodID(cls, "setCsrprdot", "(D)V");
                mids$[mid_setCsrpsrp_8ba9fe7a847cecad] = env->getMethodID(cls, "setCsrpsrp", "(D)V");
                mids$[mid_setCsrpt_8ba9fe7a847cecad] = env->getMethodID(cls, "setCsrpt", "(D)V");
                mids$[mid_setCsrptdot_8ba9fe7a847cecad] = env->getMethodID(cls, "setCsrptdot", "(D)V");
                mids$[mid_setCtdotn_8ba9fe7a847cecad] = env->getMethodID(cls, "setCtdotn", "(D)V");
                mids$[mid_setCtdotr_8ba9fe7a847cecad] = env->getMethodID(cls, "setCtdotr", "(D)V");
                mids$[mid_setCtdotrdot_8ba9fe7a847cecad] = env->getMethodID(cls, "setCtdotrdot", "(D)V");
                mids$[mid_setCtdott_8ba9fe7a847cecad] = env->getMethodID(cls, "setCtdott", "(D)V");
                mids$[mid_setCtdottdot_8ba9fe7a847cecad] = env->getMethodID(cls, "setCtdottdot", "(D)V");
                mids$[mid_setCthrdrg_8ba9fe7a847cecad] = env->getMethodID(cls, "setCthrdrg", "(D)V");
                mids$[mid_setCthrn_8ba9fe7a847cecad] = env->getMethodID(cls, "setCthrn", "(D)V");
                mids$[mid_setCthrndot_8ba9fe7a847cecad] = env->getMethodID(cls, "setCthrndot", "(D)V");
                mids$[mid_setCthrr_8ba9fe7a847cecad] = env->getMethodID(cls, "setCthrr", "(D)V");
                mids$[mid_setCthrrdot_8ba9fe7a847cecad] = env->getMethodID(cls, "setCthrrdot", "(D)V");
                mids$[mid_setCthrsrp_8ba9fe7a847cecad] = env->getMethodID(cls, "setCthrsrp", "(D)V");
                mids$[mid_setCthrt_8ba9fe7a847cecad] = env->getMethodID(cls, "setCthrt", "(D)V");
                mids$[mid_setCthrtdot_8ba9fe7a847cecad] = env->getMethodID(cls, "setCthrtdot", "(D)V");
                mids$[mid_setCthrthr_8ba9fe7a847cecad] = env->getMethodID(cls, "setCthrthr", "(D)V");
                mids$[mid_setCtr_8ba9fe7a847cecad] = env->getMethodID(cls, "setCtr", "(D)V");
                mids$[mid_setCtt_8ba9fe7a847cecad] = env->getMethodID(cls, "setCtt", "(D)V");
                mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RTNCovariance::RTNCovariance() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            jdouble RTNCovariance::getCdrgdrg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgdrg_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCdrgn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgn_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCdrgndot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgndot_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCdrgr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgr_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCdrgrdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgrdot_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCdrgt() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgt_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCdrgtdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgtdot_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCndotn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCndotn_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCndotndot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCndotndot_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCndotr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCndotr_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCndotrdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCndotrdot_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCndott() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCndott_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCndottdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCndottdot_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCnn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCnn_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCnr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCnr_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCnt() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCnt_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCrdotn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrdotn_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCrdotr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrdotr_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCrdotrdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrdotrdot_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCrdott() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrdott_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCrr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrr_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCsrpdrg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpdrg_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCsrpn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpn_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCsrpndot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpndot_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCsrpr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpr_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCsrprdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrprdot_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCsrpsrp() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpsrp_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCsrpt() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpt_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCsrptdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrptdot_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCtdotn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtdotn_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCtdotr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtdotr_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCtdotrdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtdotrdot_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCtdott() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtdott_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCtdottdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtdottdot_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCthrdrg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrdrg_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCthrn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrn_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCthrndot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrndot_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCthrr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrr_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCthrrdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrrdot_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCthrsrp() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrsrp_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCthrt() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrt_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCthrtdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrtdot_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCthrthr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrthr_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCtr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtr_b74f83833fdad017]);
            }

            jdouble RTNCovariance::getCtt() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtt_b74f83833fdad017]);
            }

            ::org::hipparchus::linear::RealMatrix RTNCovariance::getRTNCovarianceMatrix() const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getRTNCovarianceMatrix_f77d745f2128c391]));
            }

            void RTNCovariance::setCdrgdrg(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgdrg_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCdrgn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgn_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCdrgndot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgndot_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCdrgr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgr_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCdrgrdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgrdot_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCdrgt(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgt_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCdrgtdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgtdot_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCndotn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCndotn_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCndotndot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCndotndot_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCndotr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCndotr_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCndotrdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCndotrdot_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCndott(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCndott_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCndottdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCndottdot_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCnn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCnn_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCnr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCnr_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCnt(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCnt_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCovarianceMatrixEntry(jint a0, jint a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovarianceMatrixEntry_94fe8d9ffeb50676], a0, a1, a2);
            }

            void RTNCovariance::setCrdotn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrdotn_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCrdotr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrdotr_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCrdotrdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrdotrdot_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCrdott(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrdott_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCrr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrr_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCsrpdrg(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpdrg_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCsrpn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpn_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCsrpndot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpndot_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCsrpr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpr_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCsrprdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrprdot_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCsrpsrp(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpsrp_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCsrpt(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpt_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCsrptdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrptdot_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCtdotn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtdotn_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCtdotr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtdotr_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCtdotrdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtdotrdot_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCtdott(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtdott_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCtdottdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtdottdot_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCthrdrg(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrdrg_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCthrn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrn_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCthrndot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrndot_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCthrr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrr_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCthrrdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrrdot_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCthrsrp(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrsrp_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCthrt(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrt_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCthrtdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrtdot_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCthrthr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrthr_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCtr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtr_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::setCtt(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtt_8ba9fe7a847cecad], a0);
            }

            void RTNCovariance::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
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
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            static PyObject *t_RTNCovariance_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RTNCovariance_instance_(PyTypeObject *type, PyObject *arg);
            static int t_RTNCovariance_init_(t_RTNCovariance *self, PyObject *args, PyObject *kwds);
            static PyObject *t_RTNCovariance_getCdrgdrg(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCdrgn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCdrgndot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCdrgr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCdrgrdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCdrgt(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCdrgtdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCndotn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCndotndot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCndotr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCndotrdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCndott(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCndottdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCnn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCnr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCnt(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCrdotn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCrdotr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCrdotrdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCrdott(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCrr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrpdrg(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrpn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrpndot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrpr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrprdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrpsrp(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrpt(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrptdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtdotn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtdotr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtdotrdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtdott(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtdottdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrdrg(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrndot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrrdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrsrp(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrt(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrtdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrthr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtt(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getRTNCovarianceMatrix(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_setCdrgdrg(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCdrgn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCdrgndot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCdrgr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCdrgrdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCdrgt(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCdrgtdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCndotn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCndotndot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCndotr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCndotrdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCndott(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCndottdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCnn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCnr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCnt(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCovarianceMatrixEntry(t_RTNCovariance *self, PyObject *args);
            static PyObject *t_RTNCovariance_setCrdotn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCrdotr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCrdotrdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCrdott(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCrr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrpdrg(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrpn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrpndot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrpr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrprdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrpsrp(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrpt(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrptdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtdotn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtdotr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtdotrdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtdott(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtdottdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrdrg(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrndot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrrdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrsrp(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrt(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrtdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrthr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtt(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_validate(t_RTNCovariance *self, PyObject *args);
            static PyObject *t_RTNCovariance_get__cdrgdrg(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgdrg(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cdrgn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cdrgndot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgndot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cdrgr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cdrgrdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgrdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cdrgt(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgt(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cdrgtdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgtdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cndotn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cndotn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cndotndot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cndotndot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cndotr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cndotr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cndotrdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cndotrdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cndott(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cndott(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cndottdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cndottdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cnn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cnn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cnr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cnr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cnt(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cnt(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__crdotn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__crdotn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__crdotr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__crdotr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__crdotrdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__crdotrdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__crdott(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__crdott(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__crr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__crr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrpdrg(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrpdrg(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrpn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrpn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrpndot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrpndot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrpr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrpr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrprdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrprdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrpsrp(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrpsrp(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrpt(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrpt(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrptdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrptdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctdotn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctdotn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctdotr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctdotr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctdotrdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctdotrdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctdott(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctdott(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctdottdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctdottdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrdrg(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrdrg(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrndot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrndot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrrdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrrdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrsrp(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrsrp(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrt(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrt(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrtdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrtdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrthr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrthr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctt(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctt(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__rTNCovarianceMatrix(t_RTNCovariance *self, void *data);
            static PyGetSetDef t_RTNCovariance__fields_[] = {
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgdrg),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgndot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgrdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgt),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgtdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cndotn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cndotndot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cndotr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cndotrdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cndott),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cndottdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cnn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cnr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cnt),
              DECLARE_GETSET_FIELD(t_RTNCovariance, crdotn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, crdotr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, crdotrdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, crdott),
              DECLARE_GETSET_FIELD(t_RTNCovariance, crr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrpdrg),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrpn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrpndot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrpr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrprdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrpsrp),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrpt),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrptdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctdotn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctdotr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctdotrdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctdott),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctdottdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrdrg),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrndot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrrdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrsrp),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrt),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrtdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrthr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctt),
              DECLARE_GET_FIELD(t_RTNCovariance, rTNCovarianceMatrix),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_RTNCovariance__methods_[] = {
              DECLARE_METHOD(t_RTNCovariance, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RTNCovariance, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgdrg, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgndot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgrdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgt, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgtdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCndotn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCndotndot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCndotr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCndotrdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCndott, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCndottdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCnn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCnr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCnt, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCrdotn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCrdotr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCrdotrdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCrdott, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCrr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrpdrg, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrpn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrpndot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrpr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrprdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrpsrp, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrpt, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrptdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtdotn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtdotr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtdotrdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtdott, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtdottdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrdrg, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrndot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrrdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrsrp, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrt, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrtdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrthr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtt, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getRTNCovarianceMatrix, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, setCdrgdrg, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCdrgn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCdrgndot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCdrgr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCdrgrdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCdrgt, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCdrgtdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCndotn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCndotndot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCndotr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCndotrdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCndott, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCndottdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCnn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCnr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCnt, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCovarianceMatrixEntry, METH_VARARGS),
              DECLARE_METHOD(t_RTNCovariance, setCrdotn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCrdotr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCrdotrdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCrdott, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCrr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrpdrg, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrpn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrpndot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrpr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrprdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrpsrp, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrpt, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrptdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtdotn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtdotr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtdotrdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtdott, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtdottdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrdrg, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrndot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrrdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrsrp, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrt, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrtdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrthr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtt, METH_O),
              DECLARE_METHOD(t_RTNCovariance, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RTNCovariance)[] = {
              { Py_tp_methods, t_RTNCovariance__methods_ },
              { Py_tp_init, (void *) t_RTNCovariance_init_ },
              { Py_tp_getset, t_RTNCovariance__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RTNCovariance)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(RTNCovariance, t_RTNCovariance, RTNCovariance);

            void t_RTNCovariance::install(PyObject *module)
            {
              installType(&PY_TYPE(RTNCovariance), &PY_TYPE_DEF(RTNCovariance), module, "RTNCovariance", 0);
            }

            void t_RTNCovariance::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovariance), "class_", make_descriptor(RTNCovariance::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovariance), "wrapfn_", make_descriptor(t_RTNCovariance::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovariance), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RTNCovariance_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RTNCovariance::initializeClass, 1)))
                return NULL;
              return t_RTNCovariance::wrap_Object(RTNCovariance(((t_RTNCovariance *) arg)->object.this$));
            }
            static PyObject *t_RTNCovariance_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RTNCovariance::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_RTNCovariance_init_(t_RTNCovariance *self, PyObject *args, PyObject *kwds)
            {
              RTNCovariance object((jobject) NULL);

              INT_CALL(object = RTNCovariance());
              self->object = object;

              return 0;
            }

            static PyObject *t_RTNCovariance_getCdrgdrg(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgdrg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCdrgn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCdrgndot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgndot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCdrgr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCdrgrdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgrdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCdrgt(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgt());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCdrgtdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgtdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCndotn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCndotn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCndotndot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCndotndot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCndotr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCndotr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCndotrdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCndotrdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCndott(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCndott());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCndottdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCndottdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCnn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCnn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCnr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCnr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCnt(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCnt());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCrdotn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrdotn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCrdotr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrdotr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCrdotrdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrdotrdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCrdott(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrdott());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCrr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrpdrg(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpdrg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrpn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrpndot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpndot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrpr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrprdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrprdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrpsrp(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpsrp());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrpt(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpt());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrptdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrptdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtdotn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtdotn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtdotr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtdotr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtdotrdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtdotrdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtdott(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtdott());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtdottdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtdottdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrdrg(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrdrg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrndot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrndot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrrdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrrdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrsrp(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrsrp());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrt(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrt());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrtdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrtdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrthr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrthr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtt(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtt());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getRTNCovarianceMatrix(t_RTNCovariance *self)
            {
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
              OBJ_CALL(result = self->object.getRTNCovarianceMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            static PyObject *t_RTNCovariance_setCdrgdrg(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgdrg(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgdrg", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCdrgn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCdrgndot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgndot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgndot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCdrgr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCdrgrdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgrdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgrdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCdrgt(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgt(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgt", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCdrgtdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgtdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgtdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCndotn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCndotn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCndotn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCndotndot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCndotndot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCndotndot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCndotr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCndotr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCndotr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCndotrdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCndotrdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCndotrdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCndott(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCndott(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCndott", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCndottdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCndottdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCndottdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCnn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCnn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCnn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCnr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCnr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCnr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCnt(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCnt(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCnt", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCovarianceMatrixEntry(t_RTNCovariance *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble a2;

              if (!parseArgs(args, "IID", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.setCovarianceMatrixEntry(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovarianceMatrixEntry", args);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCrdotn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrdotn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrdotn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCrdotr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrdotr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrdotr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCrdotrdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrdotrdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrdotrdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCrdott(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrdott(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrdott", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCrr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrpdrg(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpdrg(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpdrg", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrpn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrpndot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpndot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpndot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrpr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrprdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrprdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrprdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrpsrp(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpsrp(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpsrp", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrpt(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpt(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpt", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrptdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrptdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrptdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtdotn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtdotn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtdotn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtdotr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtdotr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtdotr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtdotrdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtdotrdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtdotrdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtdott(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtdott(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtdott", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtdottdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtdottdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtdottdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrdrg(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrdrg(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrdrg", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrndot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrndot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrndot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrrdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrrdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrrdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrsrp(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrsrp(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrsrp", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrt(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrt(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrt", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrtdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrtdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrtdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrthr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrthr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrthr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtt(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtt(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtt", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_validate(t_RTNCovariance *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(RTNCovariance), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_RTNCovariance_get__cdrgdrg(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgdrg());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgdrg(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgdrg(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgdrg", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cdrgn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cdrgndot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgndot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgndot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgndot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgndot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cdrgr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cdrgrdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgrdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgrdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgrdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgrdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cdrgt(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgt());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgt(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgt(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgt", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cdrgtdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgtdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgtdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgtdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgtdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cndotn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCndotn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cndotn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCndotn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cndotn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cndotndot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCndotndot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cndotndot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCndotndot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cndotndot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cndotr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCndotr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cndotr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCndotr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cndotr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cndotrdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCndotrdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cndotrdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCndotrdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cndotrdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cndott(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCndott());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cndott(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCndott(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cndott", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cndottdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCndottdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cndottdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCndottdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cndottdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cnn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCnn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cnn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCnn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cnn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cnr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCnr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cnr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCnr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cnr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cnt(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCnt());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cnt(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCnt(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cnt", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__crdotn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrdotn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__crdotn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrdotn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crdotn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__crdotr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrdotr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__crdotr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrdotr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crdotr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__crdotrdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrdotrdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__crdotrdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrdotrdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crdotrdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__crdott(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrdott());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__crdott(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrdott(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crdott", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__crr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__crr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrpdrg(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpdrg());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrpdrg(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpdrg(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpdrg", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrpn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrpn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrpndot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpndot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrpndot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpndot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpndot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrpr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrpr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrprdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrprdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrprdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrprdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrprdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrpsrp(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpsrp());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrpsrp(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpsrp(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpsrp", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrpt(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpt());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrpt(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpt(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpt", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrptdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrptdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrptdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrptdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrptdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctdotn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtdotn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctdotn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtdotn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctdotn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctdotr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtdotr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctdotr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtdotr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctdotr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctdotrdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtdotrdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctdotrdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtdotrdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctdotrdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctdott(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtdott());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctdott(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtdott(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctdott", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctdottdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtdottdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctdottdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtdottdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctdottdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrdrg(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrdrg());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrdrg(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrdrg(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrdrg", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrndot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrndot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrndot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrndot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrndot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrrdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrrdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrrdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrrdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrrdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrsrp(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrsrp());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrsrp(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrsrp(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrsrp", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrt(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrt());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrt(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrt(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrt", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrtdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrtdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrtdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrtdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrtdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrthr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrthr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrthr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrthr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrthr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctt(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtt());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctt(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtt(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctt", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__rTNCovarianceMatrix(t_RTNCovariance *self, void *data)
            {
              ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
              OBJ_CALL(value = self->object.getRTNCovarianceMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/KalmanEstimator.h"
#include "java/lang/Iterable.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *KalmanEstimator::class$ = NULL;
        jmethodID *KalmanEstimator::mids$ = NULL;
        bool KalmanEstimator::live$ = false;

        jclass KalmanEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/KalmanEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_estimationStep_9988f04cca62e28c] = env->getMethodID(cls, "estimationStep", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)[Lorg/orekit/propagation/Propagator;");
            mids$[mid_processMeasurements_3bf4a9b896d49678] = env->getMethodID(cls, "processMeasurements", "(Ljava/lang/Iterable;)[Lorg/orekit/propagation/Propagator;");
            mids$[mid_setObserver_578d9ba5b3b8b483] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/sequential/KalmanObserver;)V");
            mids$[mid_getKalmanEstimation_10690b877ea302f7] = env->getMethodID(cls, "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< ::org::orekit::propagation::Propagator > KalmanEstimator::estimationStep(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0) const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_estimationStep_9988f04cca62e28c], a0.this$));
        }

        JArray< ::org::orekit::propagation::Propagator > KalmanEstimator::processMeasurements(const ::java::lang::Iterable & a0) const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_processMeasurements_3bf4a9b896d49678], a0.this$));
        }

        void KalmanEstimator::setObserver(const ::org::orekit::estimation::sequential::KalmanObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_578d9ba5b3b8b483], a0.this$);
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
      namespace sequential {
        static PyObject *t_KalmanEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimator_estimationStep(t_KalmanEstimator *self, PyObject *arg);
        static PyObject *t_KalmanEstimator_processMeasurements(t_KalmanEstimator *self, PyObject *arg);
        static PyObject *t_KalmanEstimator_setObserver(t_KalmanEstimator *self, PyObject *arg);
        static int t_KalmanEstimator_set__observer(t_KalmanEstimator *self, PyObject *arg, void *data);
        static PyGetSetDef t_KalmanEstimator__fields_[] = {
          DECLARE_SET_FIELD(t_KalmanEstimator, observer),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_KalmanEstimator__methods_[] = {
          DECLARE_METHOD(t_KalmanEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimator, estimationStep, METH_O),
          DECLARE_METHOD(t_KalmanEstimator, processMeasurements, METH_O),
          DECLARE_METHOD(t_KalmanEstimator, setObserver, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KalmanEstimator)[] = {
          { Py_tp_methods, t_KalmanEstimator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_KalmanEstimator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KalmanEstimator)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractKalmanEstimator),
          NULL
        };

        DEFINE_TYPE(KalmanEstimator, t_KalmanEstimator, KalmanEstimator);

        void t_KalmanEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(KalmanEstimator), &PY_TYPE_DEF(KalmanEstimator), module, "KalmanEstimator", 0);
        }

        void t_KalmanEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimator), "class_", make_descriptor(KalmanEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimator), "wrapfn_", make_descriptor(t_KalmanEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KalmanEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KalmanEstimator::initializeClass, 1)))
            return NULL;
          return t_KalmanEstimator::wrap_Object(KalmanEstimator(((t_KalmanEstimator *) arg)->object.this$));
        }
        static PyObject *t_KalmanEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KalmanEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_KalmanEstimator_estimationStep(t_KalmanEstimator *self, PyObject *arg)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_))
          {
            OBJ_CALL(result = self->object.estimationStep(a0));
            return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "estimationStep", arg);
          return NULL;
        }

        static PyObject *t_KalmanEstimator_processMeasurements(t_KalmanEstimator *self, PyObject *arg)
        {
          ::java::lang::Iterable a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::lang::Iterable::initializeClass, &a0, &p0, ::java::lang::t_Iterable::parameters_))
          {
            OBJ_CALL(result = self->object.processMeasurements(a0));
            return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "processMeasurements", arg);
          return NULL;
        }

        static PyObject *t_KalmanEstimator_setObserver(t_KalmanEstimator *self, PyObject *arg)
        {
          ::org::orekit::estimation::sequential::KalmanObserver a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setObserver(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setObserver", arg);
          return NULL;
        }

        static int t_KalmanEstimator_set__observer(t_KalmanEstimator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &value))
            {
              INT_CALL(self->object.setObserver(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "observer", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonTimeScale.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonTimeScale::class$ = NULL;
      jmethodID *PythonTimeScale::mids$ = NULL;
      bool PythonTimeScale::live$ = false;

      jclass PythonTimeScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonTimeScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_fd347811007a6ba3] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_140b8964300ddedf] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeScale::PythonTimeScale() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonTimeScale::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonTimeScale::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonTimeScale::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_PythonTimeScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeScale_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonTimeScale_init_(t_PythonTimeScale *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeScale_finalize(t_PythonTimeScale *self);
      static PyObject *t_PythonTimeScale_pythonExtension(t_PythonTimeScale *self, PyObject *args);
      static jobject JNICALL t_PythonTimeScale_getName0(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonTimeScale_offsetFromTAI1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonTimeScale_offsetFromTAI2(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonTimeScale_pythonDecRef3(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTimeScale_get__self(t_PythonTimeScale *self, void *data);
      static PyGetSetDef t_PythonTimeScale__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeScale, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeScale__methods_[] = {
        DECLARE_METHOD(t_PythonTimeScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeScale, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeScale, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeScale)[] = {
        { Py_tp_methods, t_PythonTimeScale__methods_ },
        { Py_tp_init, (void *) t_PythonTimeScale_init_ },
        { Py_tp_getset, t_PythonTimeScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeScale, t_PythonTimeScale, PythonTimeScale);

      void t_PythonTimeScale::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeScale), &PY_TYPE_DEF(PythonTimeScale), module, "PythonTimeScale", 1);
      }

      void t_PythonTimeScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScale), "class_", make_descriptor(PythonTimeScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScale), "wrapfn_", make_descriptor(t_PythonTimeScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScale), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeScale::initializeClass);
        JNINativeMethod methods[] = {
          { "getName", "()Ljava/lang/String;", (void *) t_PythonTimeScale_getName0 },
          { "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonTimeScale_offsetFromTAI1 },
          { "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonTimeScale_offsetFromTAI2 },
          { "pythonDecRef", "()V", (void *) t_PythonTimeScale_pythonDecRef3 },
        };
        env->registerNatives(cls, methods, 4);
      }

      static PyObject *t_PythonTimeScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeScale::initializeClass, 1)))
          return NULL;
        return t_PythonTimeScale::wrap_Object(PythonTimeScale(((t_PythonTimeScale *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonTimeScale_init_(t_PythonTimeScale *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeScale object((jobject) NULL);

        INT_CALL(object = PythonTimeScale());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeScale_finalize(t_PythonTimeScale *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeScale_pythonExtension(t_PythonTimeScale *self, PyObject *args)
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

      static jobject JNICALL t_PythonTimeScale_getName0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScale::mids$[PythonTimeScale::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::String value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getName", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "s", &value))
        {
          throwTypeError("getName", result);
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

      static jdouble JNICALL t_PythonTimeScale_offsetFromTAI1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScale::mids$[PythonTimeScale::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "offsetFromTAI", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("offsetFromTAI", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonTimeScale_offsetFromTAI2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScale::mids$[PythonTimeScale::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "offsetFromTAI", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("offsetFromTAI", result);
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

      static void JNICALL t_PythonTimeScale_pythonDecRef3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScale::mids$[PythonTimeScale::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeScale::mids$[PythonTimeScale::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTimeScale_get__self(t_PythonTimeScale *self, void *data)
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
#include "org/orekit/gnss/metric/parser/IgsSsrDataField.h"
#include "org/orekit/gnss/metric/parser/IgsSsrDataField.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/DataField.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *IgsSsrDataField::class$ = NULL;
          jmethodID *IgsSsrDataField::mids$ = NULL;
          bool IgsSsrDataField::live$ = false;
          IgsSsrDataField *IgsSsrDataField::IDF001 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF002 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF003 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF004 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF005 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF006 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF007 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF008 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF009 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF010 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF011 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF012 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF013 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF014 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF015 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF016 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF017 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF018 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF019 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF020 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF021 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF022 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF023 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF024 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF025 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF026 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF027 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF028 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF029 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF030 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF031 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF032 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF033 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF034 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF035 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF036 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF037 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF038 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF039 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF040 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF041 = NULL;

          jclass IgsSsrDataField::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/IgsSsrDataField");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_1d087cf60cfa2ee8] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/IgsSsrDataField;");
              mids$[mid_values_f99101d86a7712dc] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/parser/IgsSsrDataField;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              IDF001 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF001", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF002 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF002", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF003 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF003", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF004 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF004", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF005 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF005", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF006 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF006", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF007 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF007", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF008 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF008", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF009 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF009", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF010 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF010", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF011 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF011", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF012 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF012", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF013 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF013", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF014 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF014", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF015 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF015", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF016 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF016", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF017 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF017", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF018 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF018", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF019 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF019", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF020 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF020", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF021 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF021", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF022 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF022", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF023 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF023", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF024 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF024", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF025 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF025", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF026 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF026", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF027 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF027", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF028 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF028", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF029 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF029", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF030 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF030", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF031 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF031", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF032 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF032", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF033 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF033", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF034 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF034", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF035 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF035", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF036 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF036", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF037 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF037", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF038 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF038", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF039 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF039", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF040 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF040", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF041 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF041", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IgsSsrDataField IgsSsrDataField::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return IgsSsrDataField(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1d087cf60cfa2ee8], a0.this$));
          }

          JArray< IgsSsrDataField > IgsSsrDataField::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< IgsSsrDataField >(env->callStaticObjectMethod(cls, mids$[mid_values_f99101d86a7712dc]));
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
    namespace gnss {
      namespace metric {
        namespace parser {
          static PyObject *t_IgsSsrDataField_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IgsSsrDataField_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IgsSsrDataField_of_(t_IgsSsrDataField *self, PyObject *args);
          static PyObject *t_IgsSsrDataField_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_IgsSsrDataField_values(PyTypeObject *type);
          static PyObject *t_IgsSsrDataField_get__parameters_(t_IgsSsrDataField *self, void *data);
          static PyGetSetDef t_IgsSsrDataField__fields_[] = {
            DECLARE_GET_FIELD(t_IgsSsrDataField, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IgsSsrDataField__methods_[] = {
            DECLARE_METHOD(t_IgsSsrDataField, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrDataField, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrDataField, of_, METH_VARARGS),
            DECLARE_METHOD(t_IgsSsrDataField, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrDataField, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IgsSsrDataField)[] = {
            { Py_tp_methods, t_IgsSsrDataField__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_IgsSsrDataField__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IgsSsrDataField)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(IgsSsrDataField, t_IgsSsrDataField, IgsSsrDataField);
          PyObject *t_IgsSsrDataField::wrap_Object(const IgsSsrDataField& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IgsSsrDataField::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IgsSsrDataField *self = (t_IgsSsrDataField *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_IgsSsrDataField::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IgsSsrDataField::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IgsSsrDataField *self = (t_IgsSsrDataField *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_IgsSsrDataField::install(PyObject *module)
          {
            installType(&PY_TYPE(IgsSsrDataField), &PY_TYPE_DEF(IgsSsrDataField), module, "IgsSsrDataField", 0);
          }

          void t_IgsSsrDataField::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "class_", make_descriptor(IgsSsrDataField::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "wrapfn_", make_descriptor(t_IgsSsrDataField::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "boxfn_", make_descriptor(boxObject));
            env->getClass(IgsSsrDataField::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF001", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF001)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF002", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF002)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF003", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF003)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF004", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF004)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF005", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF005)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF006", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF006)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF007", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF007)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF008", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF008)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF009", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF009)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF010", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF010)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF011", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF011)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF012", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF012)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF013", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF013)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF014", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF014)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF015", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF015)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF016", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF016)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF017", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF017)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF018", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF018)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF019", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF019)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF020", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF020)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF021", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF021)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF022", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF022)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF023", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF023)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF024", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF024)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF025", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF025)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF026", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF026)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF027", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF027)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF028", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF028)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF029", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF029)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF030", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF030)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF031", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF031)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF032", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF032)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF033", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF033)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF034", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF034)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF035", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF035)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF036", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF036)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF037", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF037)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF038", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF038)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF039", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF039)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF040", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF040)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF041", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF041)));
          }

          static PyObject *t_IgsSsrDataField_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IgsSsrDataField::initializeClass, 1)))
              return NULL;
            return t_IgsSsrDataField::wrap_Object(IgsSsrDataField(((t_IgsSsrDataField *) arg)->object.this$));
          }
          static PyObject *t_IgsSsrDataField_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IgsSsrDataField::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IgsSsrDataField_of_(t_IgsSsrDataField *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_IgsSsrDataField_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            IgsSsrDataField result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::IgsSsrDataField::valueOf(a0));
              return t_IgsSsrDataField::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_IgsSsrDataField_values(PyTypeObject *type)
          {
            JArray< IgsSsrDataField > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::parser::IgsSsrDataField::values());
            return JArray<jobject>(result.this$).wrap(t_IgsSsrDataField::wrap_jobject);
          }
          static PyObject *t_IgsSsrDataField_get__parameters_(t_IgsSsrDataField *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/AngularIonosphericDelayModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AngularIonosphericDelayModifier::class$ = NULL;
          jmethodID *AngularIonosphericDelayModifier::mids$ = NULL;
          bool AngularIonosphericDelayModifier::live$ = false;

          jclass AngularIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AngularIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c3c7040adbf9e5f8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AngularIonosphericDelayModifier::AngularIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c3c7040adbf9e5f8, a0.this$, a1)) {}

          ::java::util::List AngularIonosphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void AngularIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
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
        namespace modifiers {
          static PyObject *t_AngularIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AngularIonosphericDelayModifier_init_(t_AngularIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AngularIonosphericDelayModifier_getParametersDrivers(t_AngularIonosphericDelayModifier *self);
          static PyObject *t_AngularIonosphericDelayModifier_modifyWithoutDerivatives(t_AngularIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_AngularIonosphericDelayModifier_get__parametersDrivers(t_AngularIonosphericDelayModifier *self, void *data);
          static PyGetSetDef t_AngularIonosphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_AngularIonosphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AngularIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_AngularIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularIonosphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_AngularIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AngularIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_AngularIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_AngularIonosphericDelayModifier_init_ },
            { Py_tp_getset, t_AngularIonosphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AngularIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AngularIonosphericDelayModifier, t_AngularIonosphericDelayModifier, AngularIonosphericDelayModifier);

          void t_AngularIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AngularIonosphericDelayModifier), &PY_TYPE_DEF(AngularIonosphericDelayModifier), module, "AngularIonosphericDelayModifier", 0);
          }

          void t_AngularIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularIonosphericDelayModifier), "class_", make_descriptor(AngularIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularIonosphericDelayModifier), "wrapfn_", make_descriptor(t_AngularIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AngularIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AngularIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_AngularIonosphericDelayModifier::wrap_Object(AngularIonosphericDelayModifier(((t_AngularIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_AngularIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AngularIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AngularIonosphericDelayModifier_init_(t_AngularIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            AngularIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AngularIonosphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AngularIonosphericDelayModifier_getParametersDrivers(t_AngularIonosphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_AngularIonosphericDelayModifier_modifyWithoutDerivatives(t_AngularIonosphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_AngularIonosphericDelayModifier_get__parametersDrivers(t_AngularIonosphericDelayModifier *self, void *data)
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
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDifferentiableFunction::class$ = NULL;
        jmethodID *UnivariateDifferentiableFunction::mids$ = NULL;
        bool UnivariateDifferentiableFunction::live$ = false;

        jclass UnivariateDifferentiableFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::differentiation::Derivative UnivariateDifferentiableFunction::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_a5332de4d4d64b08], a0.this$));
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
        static PyObject *t_UnivariateDifferentiableFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDifferentiableFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDifferentiableFunction_value(t_UnivariateDifferentiableFunction *self, PyObject *args);

        static PyMethodDef t_UnivariateDifferentiableFunction__methods_[] = {
          DECLARE_METHOD(t_UnivariateDifferentiableFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDifferentiableFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDifferentiableFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDifferentiableFunction)[] = {
          { Py_tp_methods, t_UnivariateDifferentiableFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDifferentiableFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::UnivariateFunction),
          NULL
        };

        DEFINE_TYPE(UnivariateDifferentiableFunction, t_UnivariateDifferentiableFunction, UnivariateDifferentiableFunction);

        void t_UnivariateDifferentiableFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDifferentiableFunction), &PY_TYPE_DEF(UnivariateDifferentiableFunction), module, "UnivariateDifferentiableFunction", 0);
        }

        void t_UnivariateDifferentiableFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableFunction), "class_", make_descriptor(UnivariateDifferentiableFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableFunction), "wrapfn_", make_descriptor(t_UnivariateDifferentiableFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateDifferentiableFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDifferentiableFunction::initializeClass, 1)))
            return NULL;
          return t_UnivariateDifferentiableFunction::wrap_Object(UnivariateDifferentiableFunction(((t_UnivariateDifferentiableFunction *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDifferentiableFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDifferentiableFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDifferentiableFunction_value(t_UnivariateDifferentiableFunction *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
          {
            OBJ_CALL(result = self->object.value(a0));
            return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDifferentiableFunction), (PyObject *) self, "value", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/NiellMappingFunctionModel.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *NiellMappingFunctionModel::class$ = NULL;
          jmethodID *NiellMappingFunctionModel::mids$ = NULL;
          bool NiellMappingFunctionModel::live$ = false;

          jclass NiellMappingFunctionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/NiellMappingFunctionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_cae5d0c3721eff67] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;)V");
              mids$[mid_mappingFactors_6e118a7a5998051c] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFactors_6dcded9cb7dee3c2] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NiellMappingFunctionModel::NiellMappingFunctionModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          NiellMappingFunctionModel::NiellMappingFunctionModel(const ::org::orekit::time::TimeScale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cae5d0c3721eff67, a0.this$)) {}

          JArray< ::org::hipparchus::CalculusFieldElement > NiellMappingFunctionModel::mappingFactors(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_mappingFactors_6e118a7a5998051c], a0.this$, a1.this$, a2.this$));
          }

          JArray< jdouble > NiellMappingFunctionModel::mappingFactors(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_mappingFactors_6dcded9cb7dee3c2], a0, a1.this$, a2.this$));
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
          static PyObject *t_NiellMappingFunctionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NiellMappingFunctionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_NiellMappingFunctionModel_init_(t_NiellMappingFunctionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_NiellMappingFunctionModel_mappingFactors(t_NiellMappingFunctionModel *self, PyObject *args);

          static PyMethodDef t_NiellMappingFunctionModel__methods_[] = {
            DECLARE_METHOD(t_NiellMappingFunctionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NiellMappingFunctionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NiellMappingFunctionModel, mappingFactors, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NiellMappingFunctionModel)[] = {
            { Py_tp_methods, t_NiellMappingFunctionModel__methods_ },
            { Py_tp_init, (void *) t_NiellMappingFunctionModel_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NiellMappingFunctionModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NiellMappingFunctionModel, t_NiellMappingFunctionModel, NiellMappingFunctionModel);

          void t_NiellMappingFunctionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(NiellMappingFunctionModel), &PY_TYPE_DEF(NiellMappingFunctionModel), module, "NiellMappingFunctionModel", 0);
          }

          void t_NiellMappingFunctionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NiellMappingFunctionModel), "class_", make_descriptor(NiellMappingFunctionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NiellMappingFunctionModel), "wrapfn_", make_descriptor(t_NiellMappingFunctionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NiellMappingFunctionModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NiellMappingFunctionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NiellMappingFunctionModel::initializeClass, 1)))
              return NULL;
            return t_NiellMappingFunctionModel::wrap_Object(NiellMappingFunctionModel(((t_NiellMappingFunctionModel *) arg)->object.this$));
          }
          static PyObject *t_NiellMappingFunctionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NiellMappingFunctionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_NiellMappingFunctionModel_init_(t_NiellMappingFunctionModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                NiellMappingFunctionModel object((jobject) NULL);

                INT_CALL(object = NiellMappingFunctionModel());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::orekit::time::TimeScale a0((jobject) NULL);
                NiellMappingFunctionModel object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
                {
                  INT_CALL(object = NiellMappingFunctionModel(a0));
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

          static PyObject *t_NiellMappingFunctionModel_mappingFactors(t_NiellMappingFunctionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "Dkk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return result.wrap();
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "mappingFactors", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$RotationOrderConsumer.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$RotationOrderConsumer::class$ = NULL;
            jmethodID *ParseToken$RotationOrderConsumer::mids$ = NULL;
            bool ParseToken$RotationOrderConsumer::live$ = false;

            jclass ParseToken$RotationOrderConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$RotationOrderConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_062f1951e591952f] = env->getMethodID(cls, "accept", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$RotationOrderConsumer::accept(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_062f1951e591952f], a0.this$);
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
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            static PyObject *t_ParseToken$RotationOrderConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$RotationOrderConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$RotationOrderConsumer_accept(t_ParseToken$RotationOrderConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$RotationOrderConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$RotationOrderConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$RotationOrderConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$RotationOrderConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$RotationOrderConsumer)[] = {
              { Py_tp_methods, t_ParseToken$RotationOrderConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$RotationOrderConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$RotationOrderConsumer, t_ParseToken$RotationOrderConsumer, ParseToken$RotationOrderConsumer);

            void t_ParseToken$RotationOrderConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$RotationOrderConsumer), &PY_TYPE_DEF(ParseToken$RotationOrderConsumer), module, "ParseToken$RotationOrderConsumer", 0);
            }

            void t_ParseToken$RotationOrderConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$RotationOrderConsumer), "class_", make_descriptor(ParseToken$RotationOrderConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$RotationOrderConsumer), "wrapfn_", make_descriptor(t_ParseToken$RotationOrderConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$RotationOrderConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$RotationOrderConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$RotationOrderConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$RotationOrderConsumer::wrap_Object(ParseToken$RotationOrderConsumer(((t_ParseToken$RotationOrderConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$RotationOrderConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$RotationOrderConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$RotationOrderConsumer_accept(t_ParseToken$RotationOrderConsumer *self, PyObject *arg)
            {
              ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3Ephemeris.h"
#include "java/util/List.h"
#include "org/orekit/files/sp3/SP3Coordinate.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/files/sp3/SP3Segment.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Ephemeris::class$ = NULL;
        jmethodID *SP3Ephemeris::mids$ = NULL;
        bool SP3Ephemeris::live$ = false;

        jclass SP3Ephemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Ephemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e9c7e5d02848b09d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLorg/orekit/frames/Frame;ILorg/orekit/utils/CartesianDerivativesFilter;)V");
            mids$[mid_addCoordinate_cc9684087c360e7f] = env->getMethodID(cls, "addCoordinate", "(Lorg/orekit/files/sp3/SP3Coordinate;D)V");
            mids$[mid_getAvailableDerivatives_63bfdcc4b7a0536c] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getInterpolationSamples_55546ef6a647f39b] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getSegments_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_c325492395d89b24] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_c325492395d89b24] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3Ephemeris::SP3Ephemeris(const ::java::lang::String & a0, jdouble a1, const ::org::orekit::frames::Frame & a2, jint a3, const ::org::orekit::utils::CartesianDerivativesFilter & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e9c7e5d02848b09d, a0.this$, a1, a2.this$, a3, a4.this$)) {}

        void SP3Ephemeris::addCoordinate(const ::org::orekit::files::sp3::SP3Coordinate & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addCoordinate_cc9684087c360e7f], a0.this$, a1);
        }

        ::org::orekit::utils::CartesianDerivativesFilter SP3Ephemeris::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_63bfdcc4b7a0536c]));
        }

        ::org::orekit::frames::Frame SP3Ephemeris::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
        }

        ::java::lang::String SP3Ephemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_1c1fa1e935d6cdcf]));
        }

        jint SP3Ephemeris::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_55546ef6a647f39b]);
        }

        jdouble SP3Ephemeris::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_b74f83833fdad017]);
        }

        ::java::util::List SP3Ephemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_e62d3bb06d56d7e3]));
        }

        ::org::orekit::time::AbsoluteDate SP3Ephemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_c325492395d89b24]));
        }

        ::org::orekit::time::AbsoluteDate SP3Ephemeris::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_c325492395d89b24]));
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
        static PyObject *t_SP3Ephemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Ephemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3Ephemeris_init_(t_SP3Ephemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3Ephemeris_addCoordinate(t_SP3Ephemeris *self, PyObject *args);
        static PyObject *t_SP3Ephemeris_getAvailableDerivatives(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getFrame(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getId(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getInterpolationSamples(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getMu(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getSegments(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getStart(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getStop(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_get__availableDerivatives(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__frame(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__id(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__interpolationSamples(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__mu(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__segments(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__start(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__stop(t_SP3Ephemeris *self, void *data);
        static PyGetSetDef t_SP3Ephemeris__fields_[] = {
          DECLARE_GET_FIELD(t_SP3Ephemeris, availableDerivatives),
          DECLARE_GET_FIELD(t_SP3Ephemeris, frame),
          DECLARE_GET_FIELD(t_SP3Ephemeris, id),
          DECLARE_GET_FIELD(t_SP3Ephemeris, interpolationSamples),
          DECLARE_GET_FIELD(t_SP3Ephemeris, mu),
          DECLARE_GET_FIELD(t_SP3Ephemeris, segments),
          DECLARE_GET_FIELD(t_SP3Ephemeris, start),
          DECLARE_GET_FIELD(t_SP3Ephemeris, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3Ephemeris__methods_[] = {
          DECLARE_METHOD(t_SP3Ephemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Ephemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Ephemeris, addCoordinate, METH_VARARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getMu, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Ephemeris)[] = {
          { Py_tp_methods, t_SP3Ephemeris__methods_ },
          { Py_tp_init, (void *) t_SP3Ephemeris_init_ },
          { Py_tp_getset, t_SP3Ephemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Ephemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3Ephemeris, t_SP3Ephemeris, SP3Ephemeris);

        void t_SP3Ephemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Ephemeris), &PY_TYPE_DEF(SP3Ephemeris), module, "SP3Ephemeris", 0);
        }

        void t_SP3Ephemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Ephemeris), "class_", make_descriptor(SP3Ephemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Ephemeris), "wrapfn_", make_descriptor(t_SP3Ephemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Ephemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SP3Ephemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Ephemeris::initializeClass, 1)))
            return NULL;
          return t_SP3Ephemeris::wrap_Object(SP3Ephemeris(((t_SP3Ephemeris *) arg)->object.this$));
        }
        static PyObject *t_SP3Ephemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Ephemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3Ephemeris_init_(t_SP3Ephemeris *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::frames::Frame a2((jobject) NULL);
          jint a3;
          ::org::orekit::utils::CartesianDerivativesFilter a4((jobject) NULL);
          PyTypeObject **p4;
          SP3Ephemeris object((jobject) NULL);

          if (!parseArgs(args, "sDkIK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
          {
            INT_CALL(object = SP3Ephemeris(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SP3Ephemeris_addCoordinate(t_SP3Ephemeris *self, PyObject *args)
        {
          ::org::orekit::files::sp3::SP3Coordinate a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::orekit::files::sp3::SP3Coordinate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addCoordinate(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addCoordinate", args);
          return NULL;
        }

        static PyObject *t_SP3Ephemeris_getAvailableDerivatives(t_SP3Ephemeris *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_SP3Ephemeris_getFrame(t_SP3Ephemeris *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_SP3Ephemeris_getId(t_SP3Ephemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_SP3Ephemeris_getInterpolationSamples(t_SP3Ephemeris *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SP3Ephemeris_getMu(t_SP3Ephemeris *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Ephemeris_getSegments(t_SP3Ephemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::sp3::PY_TYPE(SP3Segment));
        }

        static PyObject *t_SP3Ephemeris_getStart(t_SP3Ephemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SP3Ephemeris_getStop(t_SP3Ephemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SP3Ephemeris_get__availableDerivatives(t_SP3Ephemeris *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_SP3Ephemeris_get__frame(t_SP3Ephemeris *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_SP3Ephemeris_get__id(t_SP3Ephemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_SP3Ephemeris_get__interpolationSamples(t_SP3Ephemeris *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SP3Ephemeris_get__mu(t_SP3Ephemeris *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SP3Ephemeris_get__segments(t_SP3Ephemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_SP3Ephemeris_get__start(t_SP3Ephemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SP3Ephemeris_get__stop(t_SP3Ephemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonFieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonFieldPVCoordinatesProvider::class$ = NULL;
      jmethodID *PythonFieldPVCoordinatesProvider::mids$ = NULL;
      bool PythonFieldPVCoordinatesProvider::live$ = false;

      jclass PythonFieldPVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonFieldPVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getPVCoordinates_294c5c99690f2356] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldPVCoordinatesProvider::PythonFieldPVCoordinatesProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonFieldPVCoordinatesProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonFieldPVCoordinatesProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonFieldPVCoordinatesProvider::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_PythonFieldPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldPVCoordinatesProvider_of_(t_PythonFieldPVCoordinatesProvider *self, PyObject *args);
      static int t_PythonFieldPVCoordinatesProvider_init_(t_PythonFieldPVCoordinatesProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldPVCoordinatesProvider_finalize(t_PythonFieldPVCoordinatesProvider *self);
      static PyObject *t_PythonFieldPVCoordinatesProvider_pythonExtension(t_PythonFieldPVCoordinatesProvider *self, PyObject *args);
      static jobject JNICALL t_PythonFieldPVCoordinatesProvider_getPVCoordinates0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonFieldPVCoordinatesProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldPVCoordinatesProvider_get__self(t_PythonFieldPVCoordinatesProvider *self, void *data);
      static PyObject *t_PythonFieldPVCoordinatesProvider_get__parameters_(t_PythonFieldPVCoordinatesProvider *self, void *data);
      static PyGetSetDef t_PythonFieldPVCoordinatesProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldPVCoordinatesProvider, self),
        DECLARE_GET_FIELD(t_PythonFieldPVCoordinatesProvider, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldPVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_PythonFieldPVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldPVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldPVCoordinatesProvider, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldPVCoordinatesProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldPVCoordinatesProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldPVCoordinatesProvider)[] = {
        { Py_tp_methods, t_PythonFieldPVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) t_PythonFieldPVCoordinatesProvider_init_ },
        { Py_tp_getset, t_PythonFieldPVCoordinatesProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldPVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldPVCoordinatesProvider, t_PythonFieldPVCoordinatesProvider, PythonFieldPVCoordinatesProvider);
      PyObject *t_PythonFieldPVCoordinatesProvider::wrap_Object(const PythonFieldPVCoordinatesProvider& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldPVCoordinatesProvider::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldPVCoordinatesProvider *self = (t_PythonFieldPVCoordinatesProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldPVCoordinatesProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldPVCoordinatesProvider::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldPVCoordinatesProvider *self = (t_PythonFieldPVCoordinatesProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldPVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldPVCoordinatesProvider), &PY_TYPE_DEF(PythonFieldPVCoordinatesProvider), module, "PythonFieldPVCoordinatesProvider", 1);
      }

      void t_PythonFieldPVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldPVCoordinatesProvider), "class_", make_descriptor(PythonFieldPVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldPVCoordinatesProvider), "wrapfn_", make_descriptor(t_PythonFieldPVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldPVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldPVCoordinatesProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;", (void *) t_PythonFieldPVCoordinatesProvider_getPVCoordinates0 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldPVCoordinatesProvider_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonFieldPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldPVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_PythonFieldPVCoordinatesProvider::wrap_Object(PythonFieldPVCoordinatesProvider(((t_PythonFieldPVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldPVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldPVCoordinatesProvider_of_(t_PythonFieldPVCoordinatesProvider *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldPVCoordinatesProvider_init_(t_PythonFieldPVCoordinatesProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldPVCoordinatesProvider object((jobject) NULL);

        INT_CALL(object = PythonFieldPVCoordinatesProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldPVCoordinatesProvider_finalize(t_PythonFieldPVCoordinatesProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldPVCoordinatesProvider_pythonExtension(t_PythonFieldPVCoordinatesProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonFieldPVCoordinatesProvider_getPVCoordinates0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPVCoordinatesProvider::mids$[PythonFieldPVCoordinatesProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getPVCoordinates", result);
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

      static void JNICALL t_PythonFieldPVCoordinatesProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPVCoordinatesProvider::mids$[PythonFieldPVCoordinatesProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldPVCoordinatesProvider::mids$[PythonFieldPVCoordinatesProvider::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldPVCoordinatesProvider_get__self(t_PythonFieldPVCoordinatesProvider *self, void *data)
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
      static PyObject *t_PythonFieldPVCoordinatesProvider_get__parameters_(t_PythonFieldPVCoordinatesProvider *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/PythonComparableMeasurement.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ComparableMeasurement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PythonComparableMeasurement::class$ = NULL;
        jmethodID *PythonComparableMeasurement::mids$ = NULL;
        bool PythonComparableMeasurement::live$ = false;

        jclass PythonComparableMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PythonComparableMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_compareTo_6343361fedc17b25] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/estimation/measurements/ComparableMeasurement;)I");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getObservedValue_25e1757a36c4dde2] = env->getMethodID(cls, "getObservedValue", "()[D");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonComparableMeasurement::PythonComparableMeasurement() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonComparableMeasurement::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonComparableMeasurement::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonComparableMeasurement::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
        static PyObject *t_PythonComparableMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonComparableMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonComparableMeasurement_init_(t_PythonComparableMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonComparableMeasurement_finalize(t_PythonComparableMeasurement *self);
        static PyObject *t_PythonComparableMeasurement_pythonExtension(t_PythonComparableMeasurement *self, PyObject *args);
        static jint JNICALL t_PythonComparableMeasurement_compareTo0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonComparableMeasurement_getDate1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonComparableMeasurement_getObservedValue2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonComparableMeasurement_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonComparableMeasurement_get__self(t_PythonComparableMeasurement *self, void *data);
        static PyGetSetDef t_PythonComparableMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_PythonComparableMeasurement, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonComparableMeasurement__methods_[] = {
          DECLARE_METHOD(t_PythonComparableMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonComparableMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonComparableMeasurement, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonComparableMeasurement, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonComparableMeasurement)[] = {
          { Py_tp_methods, t_PythonComparableMeasurement__methods_ },
          { Py_tp_init, (void *) t_PythonComparableMeasurement_init_ },
          { Py_tp_getset, t_PythonComparableMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonComparableMeasurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonComparableMeasurement, t_PythonComparableMeasurement, PythonComparableMeasurement);

        void t_PythonComparableMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonComparableMeasurement), &PY_TYPE_DEF(PythonComparableMeasurement), module, "PythonComparableMeasurement", 1);
        }

        void t_PythonComparableMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonComparableMeasurement), "class_", make_descriptor(PythonComparableMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonComparableMeasurement), "wrapfn_", make_descriptor(t_PythonComparableMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonComparableMeasurement), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonComparableMeasurement::initializeClass);
          JNINativeMethod methods[] = {
            { "compareTo", "(Lorg/orekit/estimation/measurements/ComparableMeasurement;)I", (void *) t_PythonComparableMeasurement_compareTo0 },
            { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonComparableMeasurement_getDate1 },
            { "getObservedValue", "()[D", (void *) t_PythonComparableMeasurement_getObservedValue2 },
            { "pythonDecRef", "()V", (void *) t_PythonComparableMeasurement_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonComparableMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonComparableMeasurement::initializeClass, 1)))
            return NULL;
          return t_PythonComparableMeasurement::wrap_Object(PythonComparableMeasurement(((t_PythonComparableMeasurement *) arg)->object.this$));
        }
        static PyObject *t_PythonComparableMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonComparableMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonComparableMeasurement_init_(t_PythonComparableMeasurement *self, PyObject *args, PyObject *kwds)
        {
          PythonComparableMeasurement object((jobject) NULL);

          INT_CALL(object = PythonComparableMeasurement());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonComparableMeasurement_finalize(t_PythonComparableMeasurement *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonComparableMeasurement_pythonExtension(t_PythonComparableMeasurement *self, PyObject *args)
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

        static jint JNICALL t_PythonComparableMeasurement_compareTo0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonComparableMeasurement::mids$[PythonComparableMeasurement::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *o0 = ::org::orekit::estimation::measurements::t_ComparableMeasurement::wrap_Object(::org::orekit::estimation::measurements::ComparableMeasurement(a0));
          PyObject *result = PyObject_CallMethod(obj, "compareTo", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("compareTo", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonComparableMeasurement_getDate1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonComparableMeasurement::mids$[PythonComparableMeasurement::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getDate", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getDate", result);
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

        static jobject JNICALL t_PythonComparableMeasurement_getObservedValue2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonComparableMeasurement::mids$[PythonComparableMeasurement::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< jdouble > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getObservedValue", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[D", &value))
          {
            throwTypeError("getObservedValue", result);
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

        static void JNICALL t_PythonComparableMeasurement_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonComparableMeasurement::mids$[PythonComparableMeasurement::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonComparableMeasurement::mids$[PythonComparableMeasurement::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonComparableMeasurement_get__self(t_PythonComparableMeasurement *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ParameterObserver.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ParameterObserver::class$ = NULL;
      jmethodID *ParameterObserver::mids$ = NULL;
      bool ParameterObserver::live$ = false;

      jclass ParameterObserver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ParameterObserver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_estimationTypeChanged_caa43046eb7c4bed] = env->getMethodID(cls, "estimationTypeChanged", "(ZLorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_maxValueChanged_babb3527161a946b] = env->getMethodID(cls, "maxValueChanged", "(DLorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_minValueChanged_babb3527161a946b] = env->getMethodID(cls, "minValueChanged", "(DLorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_nameChanged_44e2be0923cad9dd] = env->getMethodID(cls, "nameChanged", "(Ljava/lang/String;Lorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_referenceDateChanged_4d2c7fa440f612ec] = env->getMethodID(cls, "referenceDateChanged", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_referenceValueChanged_babb3527161a946b] = env->getMethodID(cls, "referenceValueChanged", "(DLorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_scaleChanged_babb3527161a946b] = env->getMethodID(cls, "scaleChanged", "(DLorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_selectionChanged_caa43046eb7c4bed] = env->getMethodID(cls, "selectionChanged", "(ZLorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_valueChanged_1213852ac6f6619d] = env->getMethodID(cls, "valueChanged", "(DLorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_valueSpanMapChanged_a1a4c13d6e36518d] = env->getMethodID(cls, "valueSpanMapChanged", "(Lorg/orekit/utils/TimeSpanMap;Lorg/orekit/utils/ParameterDriver;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void ParameterObserver::estimationTypeChanged(jboolean a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_estimationTypeChanged_caa43046eb7c4bed], a0, a1.this$);
      }

      void ParameterObserver::maxValueChanged(jdouble a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_maxValueChanged_babb3527161a946b], a0, a1.this$);
      }

      void ParameterObserver::minValueChanged(jdouble a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_minValueChanged_babb3527161a946b], a0, a1.this$);
      }

      void ParameterObserver::nameChanged(const ::java::lang::String & a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_nameChanged_44e2be0923cad9dd], a0.this$, a1.this$);
      }

      void ParameterObserver::referenceDateChanged(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_referenceDateChanged_4d2c7fa440f612ec], a0.this$, a1.this$);
      }

      void ParameterObserver::referenceValueChanged(jdouble a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_referenceValueChanged_babb3527161a946b], a0, a1.this$);
      }

      void ParameterObserver::scaleChanged(jdouble a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_scaleChanged_babb3527161a946b], a0, a1.this$);
      }

      void ParameterObserver::selectionChanged(jboolean a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_selectionChanged_caa43046eb7c4bed], a0, a1.this$);
      }

      void ParameterObserver::valueChanged(jdouble a0, const ::org::orekit::utils::ParameterDriver & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_valueChanged_1213852ac6f6619d], a0, a1.this$, a2.this$);
      }

      void ParameterObserver::valueSpanMapChanged(const ::org::orekit::utils::TimeSpanMap & a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_valueSpanMapChanged_a1a4c13d6e36518d], a0.this$, a1.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_ParameterObserver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterObserver_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterObserver_estimationTypeChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_maxValueChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_minValueChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_nameChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_referenceDateChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_referenceValueChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_scaleChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_selectionChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_valueChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_valueSpanMapChanged(t_ParameterObserver *self, PyObject *args);

      static PyMethodDef t_ParameterObserver__methods_[] = {
        DECLARE_METHOD(t_ParameterObserver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterObserver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterObserver, estimationTypeChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, maxValueChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, minValueChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, nameChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, referenceDateChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, referenceValueChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, scaleChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, selectionChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, valueChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, valueSpanMapChanged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParameterObserver)[] = {
        { Py_tp_methods, t_ParameterObserver__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParameterObserver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ParameterObserver, t_ParameterObserver, ParameterObserver);

      void t_ParameterObserver::install(PyObject *module)
      {
        installType(&PY_TYPE(ParameterObserver), &PY_TYPE_DEF(ParameterObserver), module, "ParameterObserver", 0);
      }

      void t_ParameterObserver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterObserver), "class_", make_descriptor(ParameterObserver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterObserver), "wrapfn_", make_descriptor(t_ParameterObserver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterObserver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParameterObserver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParameterObserver::initializeClass, 1)))
          return NULL;
        return t_ParameterObserver::wrap_Object(ParameterObserver(((t_ParameterObserver *) arg)->object.this$));
      }
      static PyObject *t_ParameterObserver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParameterObserver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ParameterObserver_estimationTypeChanged(t_ParameterObserver *self, PyObject *args)
      {
        jboolean a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Zk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.estimationTypeChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "estimationTypeChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_maxValueChanged(t_ParameterObserver *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Dk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.maxValueChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "maxValueChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_minValueChanged(t_ParameterObserver *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Dk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.minValueChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "minValueChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_nameChanged(t_ParameterObserver *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "sk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.nameChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "nameChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_referenceDateChanged(t_ParameterObserver *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.referenceDateChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "referenceDateChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_referenceValueChanged(t_ParameterObserver *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Dk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.referenceValueChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "referenceValueChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_scaleChanged(t_ParameterObserver *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Dk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.scaleChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "scaleChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_selectionChanged(t_ParameterObserver *self, PyObject *args)
      {
        jboolean a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Zk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.selectionChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "selectionChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_valueChanged(t_ParameterObserver *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a2((jobject) NULL);

        if (!parseArgs(args, "Dkk", ::org::orekit::utils::ParameterDriver::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.valueChanged(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "valueChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_valueSpanMapChanged(t_ParameterObserver *self, PyObject *args)
      {
        ::org::orekit::utils::TimeSpanMap a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::utils::TimeSpanMap::initializeClass, ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeSpanMap::parameters_, &a1))
        {
          OBJ_CALL(self->object.valueSpanMapChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "valueSpanMapChanged", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinatesHermiteInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedFieldPVCoordinatesHermiteInterpolator::class$ = NULL;
      jmethodID *TimeStampedFieldPVCoordinatesHermiteInterpolator::mids$ = NULL;
      bool TimeStampedFieldPVCoordinatesHermiteInterpolator::live$ = false;

      jclass TimeStampedFieldPVCoordinatesHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedFieldPVCoordinatesHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_a8b3ea4e60fa7cd7] = env->getMethodID(cls, "<init>", "(ILorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_init$_8fa85a69d4d7e806] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_getFilter_63bfdcc4b7a0536c] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_interpolate_1cf87f4a2cf2cd82] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedFieldPVCoordinatesHermiteInterpolator::TimeStampedFieldPVCoordinatesHermiteInterpolator() : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      TimeStampedFieldPVCoordinatesHermiteInterpolator::TimeStampedFieldPVCoordinatesHermiteInterpolator(jint a0) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      TimeStampedFieldPVCoordinatesHermiteInterpolator::TimeStampedFieldPVCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_a8b3ea4e60fa7cd7, a0, a1.this$)) {}

      TimeStampedFieldPVCoordinatesHermiteInterpolator::TimeStampedFieldPVCoordinatesHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_8fa85a69d4d7e806, a0, a1, a2.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter TimeStampedFieldPVCoordinatesHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_63bfdcc4b7a0536c]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_of_(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, PyObject *args);
      static int t_TimeStampedFieldPVCoordinatesHermiteInterpolator_init_(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_getFilter(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self);
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_get__filter(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, void *data);
      static PyGetSetDef t_TimeStampedFieldPVCoordinatesHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedFieldPVCoordinatesHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_TimeStampedFieldPVCoordinatesHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedFieldPVCoordinatesHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinatesHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinatesHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinatesHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinatesHermiteInterpolator, getFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedFieldPVCoordinatesHermiteInterpolator)[] = {
        { Py_tp_methods, t_TimeStampedFieldPVCoordinatesHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_TimeStampedFieldPVCoordinatesHermiteInterpolator_init_ },
        { Py_tp_getset, t_TimeStampedFieldPVCoordinatesHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedFieldPVCoordinatesHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(TimeStampedFieldPVCoordinatesHermiteInterpolator, t_TimeStampedFieldPVCoordinatesHermiteInterpolator, TimeStampedFieldPVCoordinatesHermiteInterpolator);
      PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator::wrap_Object(const TimeStampedFieldPVCoordinatesHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldPVCoordinatesHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self = (t_TimeStampedFieldPVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldPVCoordinatesHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self = (t_TimeStampedFieldPVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedFieldPVCoordinatesHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedFieldPVCoordinatesHermiteInterpolator), &PY_TYPE_DEF(TimeStampedFieldPVCoordinatesHermiteInterpolator), module, "TimeStampedFieldPVCoordinatesHermiteInterpolator", 0);
      }

      void t_TimeStampedFieldPVCoordinatesHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldPVCoordinatesHermiteInterpolator), "class_", make_descriptor(TimeStampedFieldPVCoordinatesHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldPVCoordinatesHermiteInterpolator), "wrapfn_", make_descriptor(t_TimeStampedFieldPVCoordinatesHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldPVCoordinatesHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedFieldPVCoordinatesHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedFieldPVCoordinatesHermiteInterpolator::wrap_Object(TimeStampedFieldPVCoordinatesHermiteInterpolator(((t_TimeStampedFieldPVCoordinatesHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedFieldPVCoordinatesHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_of_(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedFieldPVCoordinatesHermiteInterpolator_init_(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            TimeStampedFieldPVCoordinatesHermiteInterpolator object((jobject) NULL);

            INT_CALL(object = TimeStampedFieldPVCoordinatesHermiteInterpolator());
            self->object = object;
            break;
          }
         case 1:
          {
            jint a0;
            TimeStampedFieldPVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinatesHermiteInterpolator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedFieldPVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinatesHermiteInterpolator(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedFieldPVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDK", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinatesHermiteInterpolator(a0, a1, a2));
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

      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_getFilter(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_get__filter(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Apm.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *ApmWriter::class$ = NULL;
              jmethodID *ApmWriter::mids$ = NULL;
              bool ApmWriter::live$ = false;
              jdouble ApmWriter::CCSDS_APM_VERS = (jdouble) 0;
              jint ApmWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass ApmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/ApmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_751257c373115a80] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_writeSegmentContent_309d7ce7156c8c23] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_APM_VERS = env->getStaticDoubleField(cls, "CCSDS_APM_VERS");
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ApmWriter::ApmWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_751257c373115a80, a0.this$, a1.this$, a2.this$)) {}
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
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {
              static PyObject *t_ApmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmWriter_of_(t_ApmWriter *self, PyObject *args);
              static int t_ApmWriter_init_(t_ApmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_ApmWriter_get__parameters_(t_ApmWriter *self, void *data);
              static PyGetSetDef t_ApmWriter__fields_[] = {
                DECLARE_GET_FIELD(t_ApmWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ApmWriter__methods_[] = {
                DECLARE_METHOD(t_ApmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmWriter, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ApmWriter)[] = {
                { Py_tp_methods, t_ApmWriter__methods_ },
                { Py_tp_init, (void *) t_ApmWriter_init_ },
                { Py_tp_getset, t_ApmWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ApmWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(ApmWriter, t_ApmWriter, ApmWriter);
              PyObject *t_ApmWriter::wrap_Object(const ApmWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_ApmWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ApmWriter *self = (t_ApmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_ApmWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_ApmWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ApmWriter *self = (t_ApmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_ApmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(ApmWriter), &PY_TYPE_DEF(ApmWriter), module, "ApmWriter", 0);
              }

              void t_ApmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmWriter), "class_", make_descriptor(ApmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmWriter), "wrapfn_", make_descriptor(t_ApmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(ApmWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmWriter), "CCSDS_APM_VERS", make_descriptor(ApmWriter::CCSDS_APM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmWriter), "KVN_PADDING_WIDTH", make_descriptor(ApmWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_ApmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ApmWriter::initializeClass, 1)))
                  return NULL;
                return t_ApmWriter::wrap_Object(ApmWriter(((t_ApmWriter *) arg)->object.this$));
              }
              static PyObject *t_ApmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ApmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ApmWriter_of_(t_ApmWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_ApmWriter_init_(t_ApmWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::data::DataContext a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                ApmWriter object((jobject) NULL);

                if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
                {
                  INT_CALL(object = ApmWriter(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::adm::PY_TYPE(AdmHeader);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::adm::apm::PY_TYPE(Apm);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_ApmWriter_get__parameters_(t_ApmWriter *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
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
#include "org/orekit/propagation/conversion/LutherIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *LutherIntegratorBuilder::class$ = NULL;
        jmethodID *LutherIntegratorBuilder::mids$ = NULL;
        bool LutherIntegratorBuilder::live$ = false;

        jclass LutherIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/LutherIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_buildIntegrator_916fa199ca08d656] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LutherIntegratorBuilder::LutherIntegratorBuilder(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        ::org::hipparchus::ode::AbstractIntegrator LutherIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_916fa199ca08d656], a0.this$, a1.this$));
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
      namespace conversion {
        static PyObject *t_LutherIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LutherIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LutherIntegratorBuilder_init_(t_LutherIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LutherIntegratorBuilder_buildIntegrator(t_LutherIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_LutherIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_LutherIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LutherIntegratorBuilder)[] = {
          { Py_tp_methods, t_LutherIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_LutherIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LutherIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LutherIntegratorBuilder, t_LutherIntegratorBuilder, LutherIntegratorBuilder);

        void t_LutherIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(LutherIntegratorBuilder), &PY_TYPE_DEF(LutherIntegratorBuilder), module, "LutherIntegratorBuilder", 0);
        }

        void t_LutherIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherIntegratorBuilder), "class_", make_descriptor(LutherIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherIntegratorBuilder), "wrapfn_", make_descriptor(t_LutherIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LutherIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LutherIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_LutherIntegratorBuilder::wrap_Object(LutherIntegratorBuilder(((t_LutherIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_LutherIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LutherIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LutherIntegratorBuilder_init_(t_LutherIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          LutherIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = LutherIntegratorBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LutherIntegratorBuilder_buildIntegrator(t_LutherIntegratorBuilder *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::OrbitType a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::AbstractIntegrator result((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
            return ::org::hipparchus::ode::t_AbstractIntegrator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/ProperBigFractionFormat.h"
#include "java/text/FieldPosition.h"
#include "java/text/ParsePosition.h"
#include "java/text/NumberFormat.h"
#include "java/lang/StringBuffer.h"
#include "org/hipparchus/fraction/BigFraction.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *ProperBigFractionFormat::class$ = NULL;
      jmethodID *ProperBigFractionFormat::mids$ = NULL;
      bool ProperBigFractionFormat::live$ = false;

      jclass ProperBigFractionFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/ProperBigFractionFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_b7f3d50b51ef7518] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_5e266d97253f08b1] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;Ljava/text/NumberFormat;Ljava/text/NumberFormat;)V");
          mids$[mid_format_face461ae8942182] = env->getMethodID(cls, "format", "(Lorg/hipparchus/fraction/BigFraction;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getWholeFormat_87ffffc449cd25a5] = env->getMethodID(cls, "getWholeFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_parse_9c54536a71758022] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/fraction/BigFraction;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ProperBigFractionFormat::ProperBigFractionFormat() : ::org::hipparchus::fraction::BigFractionFormat(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      ProperBigFractionFormat::ProperBigFractionFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::fraction::BigFractionFormat(env->newObject(initializeClass, &mids$, mid_init$_b7f3d50b51ef7518, a0.this$)) {}

      ProperBigFractionFormat::ProperBigFractionFormat(const ::java::text::NumberFormat & a0, const ::java::text::NumberFormat & a1, const ::java::text::NumberFormat & a2) : ::org::hipparchus::fraction::BigFractionFormat(env->newObject(initializeClass, &mids$, mid_init$_5e266d97253f08b1, a0.this$, a1.this$, a2.this$)) {}

      ::java::lang::StringBuffer ProperBigFractionFormat::format(const ::org::hipparchus::fraction::BigFraction & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_face461ae8942182], a0.this$, a1.this$, a2.this$));
      }

      ::java::text::NumberFormat ProperBigFractionFormat::getWholeFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getWholeFormat_87ffffc449cd25a5]));
      }

      ::org::hipparchus::fraction::BigFraction ProperBigFractionFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::fraction::BigFraction(env->callObjectMethod(this$, mids$[mid_parse_9c54536a71758022], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      static PyObject *t_ProperBigFractionFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ProperBigFractionFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ProperBigFractionFormat_init_(t_ProperBigFractionFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ProperBigFractionFormat_format(t_ProperBigFractionFormat *self, PyObject *args);
      static PyObject *t_ProperBigFractionFormat_getWholeFormat(t_ProperBigFractionFormat *self);
      static PyObject *t_ProperBigFractionFormat_parse(t_ProperBigFractionFormat *self, PyObject *args);
      static PyObject *t_ProperBigFractionFormat_get__wholeFormat(t_ProperBigFractionFormat *self, void *data);
      static PyGetSetDef t_ProperBigFractionFormat__fields_[] = {
        DECLARE_GET_FIELD(t_ProperBigFractionFormat, wholeFormat),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ProperBigFractionFormat__methods_[] = {
        DECLARE_METHOD(t_ProperBigFractionFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ProperBigFractionFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ProperBigFractionFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_ProperBigFractionFormat, getWholeFormat, METH_NOARGS),
        DECLARE_METHOD(t_ProperBigFractionFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ProperBigFractionFormat)[] = {
        { Py_tp_methods, t_ProperBigFractionFormat__methods_ },
        { Py_tp_init, (void *) t_ProperBigFractionFormat_init_ },
        { Py_tp_getset, t_ProperBigFractionFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ProperBigFractionFormat)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fraction::BigFractionFormat),
        NULL
      };

      DEFINE_TYPE(ProperBigFractionFormat, t_ProperBigFractionFormat, ProperBigFractionFormat);

      void t_ProperBigFractionFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(ProperBigFractionFormat), &PY_TYPE_DEF(ProperBigFractionFormat), module, "ProperBigFractionFormat", 0);
      }

      void t_ProperBigFractionFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ProperBigFractionFormat), "class_", make_descriptor(ProperBigFractionFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ProperBigFractionFormat), "wrapfn_", make_descriptor(t_ProperBigFractionFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ProperBigFractionFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ProperBigFractionFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ProperBigFractionFormat::initializeClass, 1)))
          return NULL;
        return t_ProperBigFractionFormat::wrap_Object(ProperBigFractionFormat(((t_ProperBigFractionFormat *) arg)->object.this$));
      }
      static PyObject *t_ProperBigFractionFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ProperBigFractionFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ProperBigFractionFormat_init_(t_ProperBigFractionFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ProperBigFractionFormat object((jobject) NULL);

            INT_CALL(object = ProperBigFractionFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ProperBigFractionFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = ProperBigFractionFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ::java::text::NumberFormat a1((jobject) NULL);
            ::java::text::NumberFormat a2((jobject) NULL);
            ProperBigFractionFormat object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ProperBigFractionFormat(a0, a1, a2));
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

      static PyObject *t_ProperBigFractionFormat_format(t_ProperBigFractionFormat *self, PyObject *args)
      {
        ::org::hipparchus::fraction::BigFraction a0((jobject) NULL);
        ::java::lang::StringBuffer a1((jobject) NULL);
        ::java::text::FieldPosition a2((jobject) NULL);
        ::java::lang::StringBuffer result((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::hipparchus::fraction::BigFraction::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.format(a0, a1, a2));
          return ::java::lang::t_StringBuffer::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ProperBigFractionFormat), (PyObject *) self, "format", args, 2);
      }

      static PyObject *t_ProperBigFractionFormat_getWholeFormat(t_ProperBigFractionFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getWholeFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_ProperBigFractionFormat_parse(t_ProperBigFractionFormat *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::text::ParsePosition a1((jobject) NULL);
        ::org::hipparchus::fraction::BigFraction result((jobject) NULL);

        if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::org::hipparchus::fraction::t_BigFraction::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ProperBigFractionFormat), (PyObject *) self, "parse", args, 2);
      }

      static PyObject *t_ProperBigFractionFormat_get__wholeFormat(t_ProperBigFractionFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getWholeFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }
    }
  }
}
