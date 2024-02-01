#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/OnOff.h"
#include "org/orekit/files/ccsds/definitions/OnOff.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *OnOff::class$ = NULL;
          jmethodID *OnOff::mids$ = NULL;
          bool OnOff::live$ = false;
          OnOff *OnOff::OFF = NULL;
          OnOff *OnOff::ON = NULL;

          jclass OnOff::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/OnOff");

              mids$ = new jmethodID[max_mid];
              mids$[mid_isOn_eee3de00fe971136] = env->getMethodID(cls, "isOn", "()Z");
              mids$[mid_valueOf_980e331610dd5343] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/OnOff;");
              mids$[mid_values_ed0b43e0a564507b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/OnOff;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              OFF = new OnOff(env->getStaticObjectField(cls, "OFF", "Lorg/orekit/files/ccsds/definitions/OnOff;"));
              ON = new OnOff(env->getStaticObjectField(cls, "ON", "Lorg/orekit/files/ccsds/definitions/OnOff;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean OnOff::isOn() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isOn_eee3de00fe971136]);
          }

          OnOff OnOff::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return OnOff(env->callStaticObjectMethod(cls, mids$[mid_valueOf_980e331610dd5343], a0.this$));
          }

          JArray< OnOff > OnOff::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< OnOff >(env->callStaticObjectMethod(cls, mids$[mid_values_ed0b43e0a564507b]));
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
        namespace definitions {
          static PyObject *t_OnOff_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnOff_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnOff_of_(t_OnOff *self, PyObject *args);
          static PyObject *t_OnOff_isOn(t_OnOff *self);
          static PyObject *t_OnOff_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_OnOff_values(PyTypeObject *type);
          static PyObject *t_OnOff_get__on(t_OnOff *self, void *data);
          static PyObject *t_OnOff_get__parameters_(t_OnOff *self, void *data);
          static PyGetSetDef t_OnOff__fields_[] = {
            DECLARE_GET_FIELD(t_OnOff, on),
            DECLARE_GET_FIELD(t_OnOff, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OnOff__methods_[] = {
            DECLARE_METHOD(t_OnOff, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnOff, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnOff, of_, METH_VARARGS),
            DECLARE_METHOD(t_OnOff, isOn, METH_NOARGS),
            DECLARE_METHOD(t_OnOff, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_OnOff, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OnOff)[] = {
            { Py_tp_methods, t_OnOff__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_OnOff__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OnOff)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(OnOff, t_OnOff, OnOff);
          PyObject *t_OnOff::wrap_Object(const OnOff& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OnOff::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OnOff *self = (t_OnOff *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OnOff::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OnOff::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OnOff *self = (t_OnOff *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OnOff::install(PyObject *module)
          {
            installType(&PY_TYPE(OnOff), &PY_TYPE_DEF(OnOff), module, "OnOff", 0);
          }

          void t_OnOff::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnOff), "class_", make_descriptor(OnOff::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnOff), "wrapfn_", make_descriptor(t_OnOff::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnOff), "boxfn_", make_descriptor(boxObject));
            env->getClass(OnOff::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnOff), "OFF", make_descriptor(t_OnOff::wrap_Object(*OnOff::OFF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnOff), "ON", make_descriptor(t_OnOff::wrap_Object(*OnOff::ON)));
          }

          static PyObject *t_OnOff_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OnOff::initializeClass, 1)))
              return NULL;
            return t_OnOff::wrap_Object(OnOff(((t_OnOff *) arg)->object.this$));
          }
          static PyObject *t_OnOff_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OnOff::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OnOff_of_(t_OnOff *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_OnOff_isOn(t_OnOff *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isOn());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_OnOff_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            OnOff result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::OnOff::valueOf(a0));
              return t_OnOff::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_OnOff_values(PyTypeObject *type)
          {
            JArray< OnOff > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::OnOff::values());
            return JArray<jobject>(result.this$).wrap(t_OnOff::wrap_jobject);
          }
          static PyObject *t_OnOff_get__parameters_(t_OnOff *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_OnOff_get__on(t_OnOff *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isOn());
            Py_RETURN_BOOL(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarD.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *CopolarD::class$ = NULL;
          jmethodID *CopolarD::mids$ = NULL;
          bool CopolarD::live$ = false;

          jclass CopolarD::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/CopolarD");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cd_9981f74b2d109da6] = env->getMethodID(cls, "cd", "()D");
              mids$[mid_nd_9981f74b2d109da6] = env->getMethodID(cls, "nd", "()D");
              mids$[mid_sd_9981f74b2d109da6] = env->getMethodID(cls, "sd", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble CopolarD::cd() const
          {
            return env->callDoubleMethod(this$, mids$[mid_cd_9981f74b2d109da6]);
          }

          jdouble CopolarD::nd() const
          {
            return env->callDoubleMethod(this$, mids$[mid_nd_9981f74b2d109da6]);
          }

          jdouble CopolarD::sd() const
          {
            return env->callDoubleMethod(this$, mids$[mid_sd_9981f74b2d109da6]);
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_CopolarD_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarD_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarD_cd(t_CopolarD *self);
          static PyObject *t_CopolarD_nd(t_CopolarD *self);
          static PyObject *t_CopolarD_sd(t_CopolarD *self);

          static PyMethodDef t_CopolarD__methods_[] = {
            DECLARE_METHOD(t_CopolarD, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarD, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarD, cd, METH_NOARGS),
            DECLARE_METHOD(t_CopolarD, nd, METH_NOARGS),
            DECLARE_METHOD(t_CopolarD, sd, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CopolarD)[] = {
            { Py_tp_methods, t_CopolarD__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CopolarD)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CopolarD, t_CopolarD, CopolarD);

          void t_CopolarD::install(PyObject *module)
          {
            installType(&PY_TYPE(CopolarD), &PY_TYPE_DEF(CopolarD), module, "CopolarD", 0);
          }

          void t_CopolarD::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarD), "class_", make_descriptor(CopolarD::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarD), "wrapfn_", make_descriptor(t_CopolarD::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarD), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CopolarD_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CopolarD::initializeClass, 1)))
              return NULL;
            return t_CopolarD::wrap_Object(CopolarD(((t_CopolarD *) arg)->object.this$));
          }
          static PyObject *t_CopolarD_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CopolarD::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CopolarD_cd(t_CopolarD *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.cd());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarD_nd(t_CopolarD *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.nd());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarD_sd(t_CopolarD *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.sd());
            return PyFloat_FromDouble((double) result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *RotationOrder::class$ = NULL;
          jmethodID *RotationOrder::mids$ = NULL;
          bool RotationOrder::live$ = false;
          RotationOrder *RotationOrder::XYX = NULL;
          RotationOrder *RotationOrder::XYZ = NULL;
          RotationOrder *RotationOrder::XZX = NULL;
          RotationOrder *RotationOrder::XZY = NULL;
          RotationOrder *RotationOrder::YXY = NULL;
          RotationOrder *RotationOrder::YXZ = NULL;
          RotationOrder *RotationOrder::YZX = NULL;
          RotationOrder *RotationOrder::YZY = NULL;
          RotationOrder *RotationOrder::ZXY = NULL;
          RotationOrder *RotationOrder::ZXZ = NULL;
          RotationOrder *RotationOrder::ZYX = NULL;
          RotationOrder *RotationOrder::ZYZ = NULL;

          jclass RotationOrder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/RotationOrder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getA1_032312bdeb3f2f93] = env->getMethodID(cls, "getA1", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getA2_032312bdeb3f2f93] = env->getMethodID(cls, "getA2", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getA3_032312bdeb3f2f93] = env->getMethodID(cls, "getA3", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getRotationOrder_0bcd104247064e9d] = env->getStaticMethodID(cls, "getRotationOrder", "(Ljava/lang/String;)Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");
              mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_valueOf_0bcd104247064e9d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");
              mids$[mid_values_194c5c6c115fa067] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              XYX = new RotationOrder(env->getStaticObjectField(cls, "XYX", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              XYZ = new RotationOrder(env->getStaticObjectField(cls, "XYZ", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              XZX = new RotationOrder(env->getStaticObjectField(cls, "XZX", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              XZY = new RotationOrder(env->getStaticObjectField(cls, "XZY", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              YXY = new RotationOrder(env->getStaticObjectField(cls, "YXY", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              YXZ = new RotationOrder(env->getStaticObjectField(cls, "YXZ", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              YZX = new RotationOrder(env->getStaticObjectField(cls, "YZX", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              YZY = new RotationOrder(env->getStaticObjectField(cls, "YZY", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              ZXY = new RotationOrder(env->getStaticObjectField(cls, "ZXY", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              ZXZ = new RotationOrder(env->getStaticObjectField(cls, "ZXZ", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              ZYX = new RotationOrder(env->getStaticObjectField(cls, "ZYX", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              ZYZ = new RotationOrder(env->getStaticObjectField(cls, "ZYZ", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RotationOrder::getA1() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getA1_032312bdeb3f2f93]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RotationOrder::getA2() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getA2_032312bdeb3f2f93]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RotationOrder::getA3() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getA3_032312bdeb3f2f93]));
          }

          RotationOrder RotationOrder::getRotationOrder(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RotationOrder(env->callStaticObjectMethod(cls, mids$[mid_getRotationOrder_0bcd104247064e9d], a0.this$));
          }

          ::java::lang::String RotationOrder::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
          }

          RotationOrder RotationOrder::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RotationOrder(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0bcd104247064e9d], a0.this$));
          }

          JArray< RotationOrder > RotationOrder::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RotationOrder >(env->callStaticObjectMethod(cls, mids$[mid_values_194c5c6c115fa067]));
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
          static PyObject *t_RotationOrder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RotationOrder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RotationOrder_of_(t_RotationOrder *self, PyObject *args);
          static PyObject *t_RotationOrder_getA1(t_RotationOrder *self);
          static PyObject *t_RotationOrder_getA2(t_RotationOrder *self);
          static PyObject *t_RotationOrder_getA3(t_RotationOrder *self);
          static PyObject *t_RotationOrder_getRotationOrder(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RotationOrder_toString(t_RotationOrder *self, PyObject *args);
          static PyObject *t_RotationOrder_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RotationOrder_values(PyTypeObject *type);
          static PyObject *t_RotationOrder_get__a1(t_RotationOrder *self, void *data);
          static PyObject *t_RotationOrder_get__a2(t_RotationOrder *self, void *data);
          static PyObject *t_RotationOrder_get__a3(t_RotationOrder *self, void *data);
          static PyObject *t_RotationOrder_get__parameters_(t_RotationOrder *self, void *data);
          static PyGetSetDef t_RotationOrder__fields_[] = {
            DECLARE_GET_FIELD(t_RotationOrder, a1),
            DECLARE_GET_FIELD(t_RotationOrder, a2),
            DECLARE_GET_FIELD(t_RotationOrder, a3),
            DECLARE_GET_FIELD(t_RotationOrder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RotationOrder__methods_[] = {
            DECLARE_METHOD(t_RotationOrder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RotationOrder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RotationOrder, of_, METH_VARARGS),
            DECLARE_METHOD(t_RotationOrder, getA1, METH_NOARGS),
            DECLARE_METHOD(t_RotationOrder, getA2, METH_NOARGS),
            DECLARE_METHOD(t_RotationOrder, getA3, METH_NOARGS),
            DECLARE_METHOD(t_RotationOrder, getRotationOrder, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RotationOrder, toString, METH_VARARGS),
            DECLARE_METHOD(t_RotationOrder, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RotationOrder, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RotationOrder)[] = {
            { Py_tp_methods, t_RotationOrder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RotationOrder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RotationOrder)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RotationOrder, t_RotationOrder, RotationOrder);
          PyObject *t_RotationOrder::wrap_Object(const RotationOrder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RotationOrder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RotationOrder *self = (t_RotationOrder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RotationOrder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RotationOrder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RotationOrder *self = (t_RotationOrder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RotationOrder::install(PyObject *module)
          {
            installType(&PY_TYPE(RotationOrder), &PY_TYPE_DEF(RotationOrder), module, "RotationOrder", 0);
          }

          void t_RotationOrder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "class_", make_descriptor(RotationOrder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "wrapfn_", make_descriptor(t_RotationOrder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "boxfn_", make_descriptor(boxObject));
            env->getClass(RotationOrder::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "XYX", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::XYX)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "XYZ", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::XYZ)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "XZX", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::XZX)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "XZY", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::XZY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "YXY", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::YXY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "YXZ", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::YXZ)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "YZX", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::YZX)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "YZY", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::YZY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "ZXY", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::ZXY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "ZXZ", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::ZXZ)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "ZYX", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::ZYX)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "ZYZ", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::ZYZ)));
          }

          static PyObject *t_RotationOrder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RotationOrder::initializeClass, 1)))
              return NULL;
            return t_RotationOrder::wrap_Object(RotationOrder(((t_RotationOrder *) arg)->object.this$));
          }
          static PyObject *t_RotationOrder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RotationOrder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RotationOrder_of_(t_RotationOrder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RotationOrder_getA1(t_RotationOrder *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getA1());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RotationOrder_getA2(t_RotationOrder *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getA2());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RotationOrder_getA3(t_RotationOrder *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getA3());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RotationOrder_getRotationOrder(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            RotationOrder result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::RotationOrder::getRotationOrder(a0));
              return t_RotationOrder::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getRotationOrder", arg);
            return NULL;
          }

          static PyObject *t_RotationOrder_toString(t_RotationOrder *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(RotationOrder), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_RotationOrder_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RotationOrder result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::RotationOrder::valueOf(a0));
              return t_RotationOrder::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RotationOrder_values(PyTypeObject *type)
          {
            JArray< RotationOrder > result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::RotationOrder::values());
            return JArray<jobject>(result.this$).wrap(t_RotationOrder::wrap_jobject);
          }
          static PyObject *t_RotationOrder_get__parameters_(t_RotationOrder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_RotationOrder_get__a1(t_RotationOrder *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getA1());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_RotationOrder_get__a2(t_RotationOrder *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getA2());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_RotationOrder_get__a3(t_RotationOrder *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getA3());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/StateTransitionMatrixGenerator$PartialsObserver.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *StateTransitionMatrixGenerator$PartialsObserver::class$ = NULL;
        jmethodID *StateTransitionMatrixGenerator$PartialsObserver::mids$ = NULL;
        bool StateTransitionMatrixGenerator$PartialsObserver::live$ = false;

        jclass StateTransitionMatrixGenerator$PartialsObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/StateTransitionMatrixGenerator$PartialsObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_partialsComputed_c528401cf6a8f557] = env->getMethodID(cls, "partialsComputed", "(Lorg/orekit/propagation/SpacecraftState;[D[D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void StateTransitionMatrixGenerator$PartialsObserver::partialsComputed(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_partialsComputed_c528401cf6a8f557], a0.this$, a1.this$, a2.this$);
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
      namespace numerical {
        static PyObject *t_StateTransitionMatrixGenerator$PartialsObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StateTransitionMatrixGenerator$PartialsObserver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StateTransitionMatrixGenerator$PartialsObserver_partialsComputed(t_StateTransitionMatrixGenerator$PartialsObserver *self, PyObject *args);

        static PyMethodDef t_StateTransitionMatrixGenerator$PartialsObserver__methods_[] = {
          DECLARE_METHOD(t_StateTransitionMatrixGenerator$PartialsObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StateTransitionMatrixGenerator$PartialsObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StateTransitionMatrixGenerator$PartialsObserver, partialsComputed, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StateTransitionMatrixGenerator$PartialsObserver)[] = {
          { Py_tp_methods, t_StateTransitionMatrixGenerator$PartialsObserver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StateTransitionMatrixGenerator$PartialsObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StateTransitionMatrixGenerator$PartialsObserver, t_StateTransitionMatrixGenerator$PartialsObserver, StateTransitionMatrixGenerator$PartialsObserver);

        void t_StateTransitionMatrixGenerator$PartialsObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(StateTransitionMatrixGenerator$PartialsObserver), &PY_TYPE_DEF(StateTransitionMatrixGenerator$PartialsObserver), module, "StateTransitionMatrixGenerator$PartialsObserver", 0);
        }

        void t_StateTransitionMatrixGenerator$PartialsObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StateTransitionMatrixGenerator$PartialsObserver), "class_", make_descriptor(StateTransitionMatrixGenerator$PartialsObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StateTransitionMatrixGenerator$PartialsObserver), "wrapfn_", make_descriptor(t_StateTransitionMatrixGenerator$PartialsObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StateTransitionMatrixGenerator$PartialsObserver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StateTransitionMatrixGenerator$PartialsObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StateTransitionMatrixGenerator$PartialsObserver::initializeClass, 1)))
            return NULL;
          return t_StateTransitionMatrixGenerator$PartialsObserver::wrap_Object(StateTransitionMatrixGenerator$PartialsObserver(((t_StateTransitionMatrixGenerator$PartialsObserver *) arg)->object.this$));
        }
        static PyObject *t_StateTransitionMatrixGenerator$PartialsObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StateTransitionMatrixGenerator$PartialsObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StateTransitionMatrixGenerator$PartialsObserver_partialsComputed(t_StateTransitionMatrixGenerator$PartialsObserver *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);

          if (!parseArgs(args, "k[D[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.partialsComputed(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "partialsComputed", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/utils/parsing/RinexUtils.h"
#include "org/orekit/files/rinex/section/RinexBaseHeader.h"
#include "org/orekit/files/rinex/RinexFile.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *RinexUtils::class$ = NULL;
            jmethodID *RinexUtils::mids$ = NULL;
            bool RinexUtils::live$ = false;
            jint RinexUtils::LABEL_INDEX = (jint) 0;

            jclass RinexUtils::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/rinex/utils/parsing/RinexUtils");

                mids$ = new jmethodID[max_mid];
                mids$[mid_convert2DigitsYear_d938fc64e8c6df2d] = env->getStaticMethodID(cls, "convert2DigitsYear", "(I)I");
                mids$[mid_getLabel_95277969d373e11f] = env->getStaticMethodID(cls, "getLabel", "(Ljava/lang/String;)Ljava/lang/String;");
                mids$[mid_matchesLabel_15b8a96a7eadea1e] = env->getStaticMethodID(cls, "matchesLabel", "(Ljava/lang/String;Ljava/lang/String;)Z");
                mids$[mid_parseComment_d2acac15910ec856] = env->getStaticMethodID(cls, "parseComment", "(ILjava/lang/String;Lorg/orekit/files/rinex/RinexFile;)V");
                mids$[mid_parseDouble_3bd2e0c85dfb4dd7] = env->getStaticMethodID(cls, "parseDouble", "(Ljava/lang/String;II)D");
                mids$[mid_parseInt_91bb179612eb5bbd] = env->getStaticMethodID(cls, "parseInt", "(Ljava/lang/String;II)I");
                mids$[mid_parseProgramRunByDate_86211f1690f65d16] = env->getStaticMethodID(cls, "parseProgramRunByDate", "(Ljava/lang/String;ILjava/lang/String;Lorg/orekit/time/TimeScales;Lorg/orekit/files/rinex/section/RinexBaseHeader;)V");
                mids$[mid_parseString_421dfd0b28b862cd] = env->getStaticMethodID(cls, "parseString", "(Ljava/lang/String;II)Ljava/lang/String;");
                mids$[mid_parseVersionFileTypeSatelliteSystem_9181560cc875b0fe] = env->getStaticMethodID(cls, "parseVersionFileTypeSatelliteSystem", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/files/rinex/section/RinexBaseHeader;[D)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                LABEL_INDEX = env->getStaticIntField(cls, "LABEL_INDEX");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jint RinexUtils::convert2DigitsYear(jint a0)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticIntMethod(cls, mids$[mid_convert2DigitsYear_d938fc64e8c6df2d], a0);
            }

            ::java::lang::String RinexUtils::getLabel(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_getLabel_95277969d373e11f], a0.this$));
            }

            jboolean RinexUtils::matchesLabel(const ::java::lang::String & a0, const ::java::lang::String & a1)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticBooleanMethod(cls, mids$[mid_matchesLabel_15b8a96a7eadea1e], a0.this$, a1.this$);
            }

            void RinexUtils::parseComment(jint a0, const ::java::lang::String & a1, const ::org::orekit::files::rinex::RinexFile & a2)
            {
              jclass cls = env->getClass(initializeClass);
              env->callStaticVoidMethod(cls, mids$[mid_parseComment_d2acac15910ec856], a0, a1.this$, a2.this$);
            }

            jdouble RinexUtils::parseDouble(const ::java::lang::String & a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticDoubleMethod(cls, mids$[mid_parseDouble_3bd2e0c85dfb4dd7], a0.this$, a1, a2);
            }

            jint RinexUtils::parseInt(const ::java::lang::String & a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticIntMethod(cls, mids$[mid_parseInt_91bb179612eb5bbd], a0.this$, a1, a2);
            }

            void RinexUtils::parseProgramRunByDate(const ::java::lang::String & a0, jint a1, const ::java::lang::String & a2, const ::org::orekit::time::TimeScales & a3, const ::org::orekit::files::rinex::section::RinexBaseHeader & a4)
            {
              jclass cls = env->getClass(initializeClass);
              env->callStaticVoidMethod(cls, mids$[mid_parseProgramRunByDate_86211f1690f65d16], a0.this$, a1, a2.this$, a3.this$, a4.this$);
            }

            ::java::lang::String RinexUtils::parseString(const ::java::lang::String & a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_parseString_421dfd0b28b862cd], a0.this$, a1, a2));
            }

            void RinexUtils::parseVersionFileTypeSatelliteSystem(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::files::rinex::section::RinexBaseHeader & a2, const JArray< jdouble > & a3)
            {
              jclass cls = env->getClass(initializeClass);
              env->callStaticVoidMethod(cls, mids$[mid_parseVersionFileTypeSatelliteSystem_9181560cc875b0fe], a0.this$, a1.this$, a2.this$, a3.this$);
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
      namespace rinex {
        namespace utils {
          namespace parsing {
            static PyObject *t_RinexUtils_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RinexUtils_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RinexUtils_convert2DigitsYear(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RinexUtils_getLabel(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RinexUtils_matchesLabel(PyTypeObject *type, PyObject *args);
            static PyObject *t_RinexUtils_parseComment(PyTypeObject *type, PyObject *args);
            static PyObject *t_RinexUtils_parseDouble(PyTypeObject *type, PyObject *args);
            static PyObject *t_RinexUtils_parseInt(PyTypeObject *type, PyObject *args);
            static PyObject *t_RinexUtils_parseProgramRunByDate(PyTypeObject *type, PyObject *args);
            static PyObject *t_RinexUtils_parseString(PyTypeObject *type, PyObject *args);
            static PyObject *t_RinexUtils_parseVersionFileTypeSatelliteSystem(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_RinexUtils__methods_[] = {
              DECLARE_METHOD(t_RinexUtils, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, convert2DigitsYear, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, getLabel, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, matchesLabel, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, parseComment, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, parseDouble, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, parseInt, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, parseProgramRunByDate, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, parseString, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, parseVersionFileTypeSatelliteSystem, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RinexUtils)[] = {
              { Py_tp_methods, t_RinexUtils__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RinexUtils)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(RinexUtils, t_RinexUtils, RinexUtils);

            void t_RinexUtils::install(PyObject *module)
            {
              installType(&PY_TYPE(RinexUtils), &PY_TYPE_DEF(RinexUtils), module, "RinexUtils", 0);
            }

            void t_RinexUtils::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RinexUtils), "class_", make_descriptor(RinexUtils::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RinexUtils), "wrapfn_", make_descriptor(t_RinexUtils::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RinexUtils), "boxfn_", make_descriptor(boxObject));
              env->getClass(RinexUtils::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(RinexUtils), "LABEL_INDEX", make_descriptor(RinexUtils::LABEL_INDEX));
            }

            static PyObject *t_RinexUtils_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RinexUtils::initializeClass, 1)))
                return NULL;
              return t_RinexUtils::wrap_Object(RinexUtils(((t_RinexUtils *) arg)->object.this$));
            }
            static PyObject *t_RinexUtils_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RinexUtils::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_RinexUtils_convert2DigitsYear(PyTypeObject *type, PyObject *arg)
            {
              jint a0;
              jint result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::rinex::utils::parsing::RinexUtils::convert2DigitsYear(a0));
                return PyLong_FromLong((long) result);
              }

              PyErr_SetArgsError(type, "convert2DigitsYear", arg);
              return NULL;
            }

            static PyObject *t_RinexUtils_getLabel(PyTypeObject *type, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::rinex::utils::parsing::RinexUtils::getLabel(a0));
                return j2p(result);
              }

              PyErr_SetArgsError(type, "getLabel", arg);
              return NULL;
            }

            static PyObject *t_RinexUtils_matchesLabel(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "ss", &a0, &a1))
              {
                OBJ_CALL(result = ::org::orekit::files::rinex::utils::parsing::RinexUtils::matchesLabel(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError(type, "matchesLabel", args);
              return NULL;
            }

            static PyObject *t_RinexUtils_parseComment(PyTypeObject *type, PyObject *args)
            {
              jint a0;
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::files::rinex::RinexFile a2((jobject) NULL);
              PyTypeObject **p2;

              if (!parseArgs(args, "IsK", ::org::orekit::files::rinex::RinexFile::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::files::rinex::t_RinexFile::parameters_))
              {
                OBJ_CALL(::org::orekit::files::rinex::utils::parsing::RinexUtils::parseComment(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError(type, "parseComment", args);
              return NULL;
            }

            static PyObject *t_RinexUtils_parseDouble(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "sII", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::orekit::files::rinex::utils::parsing::RinexUtils::parseDouble(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError(type, "parseDouble", args);
              return NULL;
            }

            static PyObject *t_RinexUtils_parseInt(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              jint a1;
              jint a2;
              jint result;

              if (!parseArgs(args, "sII", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::orekit::files::rinex::utils::parsing::RinexUtils::parseInt(a0, a1, a2));
                return PyLong_FromLong((long) result);
              }

              PyErr_SetArgsError(type, "parseInt", args);
              return NULL;
            }

            static PyObject *t_RinexUtils_parseProgramRunByDate(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              jint a1;
              ::java::lang::String a2((jobject) NULL);
              ::org::orekit::time::TimeScales a3((jobject) NULL);
              ::org::orekit::files::rinex::section::RinexBaseHeader a4((jobject) NULL);

              if (!parseArgs(args, "sIskk", ::org::orekit::time::TimeScales::initializeClass, ::org::orekit::files::rinex::section::RinexBaseHeader::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(::org::orekit::files::rinex::utils::parsing::RinexUtils::parseProgramRunByDate(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError(type, "parseProgramRunByDate", args);
              return NULL;
            }

            static PyObject *t_RinexUtils_parseString(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              jint a1;
              jint a2;
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, "sII", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::orekit::files::rinex::utils::parsing::RinexUtils::parseString(a0, a1, a2));
                return j2p(result);
              }

              PyErr_SetArgsError(type, "parseString", args);
              return NULL;
            }

            static PyObject *t_RinexUtils_parseVersionFileTypeSatelliteSystem(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::files::rinex::section::RinexBaseHeader a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);

              if (!parseArgs(args, "ssk[D", ::org::orekit::files::rinex::section::RinexBaseHeader::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(::org::orekit::files::rinex::utils::parsing::RinexUtils::parseVersionFileTypeSatelliteSystem(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError(type, "parseVersionFileTypeSatelliteSystem", args);
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
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDerivative1::class$ = NULL;
        jmethodID *UnivariateDerivative1::mids$ = NULL;
        bool UnivariateDerivative1::live$ = false;
        UnivariateDerivative1 *UnivariateDerivative1::PI = NULL;

        jclass UnivariateDerivative1::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDerivative1");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4e382a6827bb5ab6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)V");
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_abs_9b106317a0967986] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_acos_9b106317a0967986] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_acosh_9b106317a0967986] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_add_45ab1e1f986e69d9] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_add_747e02cc0ca73930] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_asin_9b106317a0967986] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_asinh_9b106317a0967986] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_atan_9b106317a0967986] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_atan2_45ab1e1f986e69d9] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_atanh_9b106317a0967986] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_cbrt_9b106317a0967986] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_ceil_9b106317a0967986] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_compareTo_8d3ffe8b2b58ad67] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)I");
            mids$[mid_compose_2d194165e5e34f51] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_copySign_45ab1e1f986e69d9] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_copySign_747e02cc0ca73930] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_cos_9b106317a0967986] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_cosh_9b106317a0967986] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_divide_45ab1e1f986e69d9] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_divide_747e02cc0ca73930] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_9b106317a0967986] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_expm1_9b106317a0967986] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_floor_9b106317a0967986] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_getDerivative_ce4c02d583456bc9] = env->getMethodID(cls, "getDerivative", "(I)D");
            mids$[mid_getExponent_d6ab429752e7c267] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getField_573405a3d98142e3] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1Field;");
            mids$[mid_getFirstDerivative_9981f74b2d109da6] = env->getMethodID(cls, "getFirstDerivative", "()D");
            mids$[mid_getOrder_d6ab429752e7c267] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPi_9b106317a0967986] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_getReal_9981f74b2d109da6] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_9981f74b2d109da6] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_45ab1e1f986e69d9] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_73617a58f1a6656e] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_827c1009b70112ae] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;[Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_d87e2a24c3ffe913] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_200373eff5d81ed4] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_dcd7a61a816ed4ff] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_e198831b23fe3744] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_355b8c2c1a5431d9] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_aff30d523bc1b65b] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_log_9b106317a0967986] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_log10_9b106317a0967986] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_log1p_9b106317a0967986] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_multiply_45ab1e1f986e69d9] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_multiply_747e02cc0ca73930] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_multiply_f5ed3d2c94b11608] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_negate_9b106317a0967986] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_newInstance_747e02cc0ca73930] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_pow_45ab1e1f986e69d9] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_pow_747e02cc0ca73930] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_pow_f5ed3d2c94b11608] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_pow_04ef795127c83697] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_reciprocal_9b106317a0967986] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_remainder_45ab1e1f986e69d9] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_remainder_747e02cc0ca73930] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_rint_9b106317a0967986] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_rootN_f5ed3d2c94b11608] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_scalb_f5ed3d2c94b11608] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_sign_9b106317a0967986] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_sin_9b106317a0967986] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_sinCos_31b7b02b4932da60] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_9b106317a0967986] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_sinhCosh_b24d5962ea451135] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_9b106317a0967986] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_subtract_45ab1e1f986e69d9] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_subtract_747e02cc0ca73930] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_tan_9b106317a0967986] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_tanh_9b106317a0967986] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_taylor_bf28ed64d6e8576b] = env->getMethodID(cls, "taylor", "(D)D");
            mids$[mid_toDegrees_9b106317a0967986] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_toDerivativeStructure_ce114c5dd035d753] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_toRadians_9b106317a0967986] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_ulp_9b106317a0967986] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            PI = new UnivariateDerivative1(env->getStaticObjectField(cls, "PI", "Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariateDerivative1::UnivariateDerivative1(const ::org::hipparchus::analysis::differentiation::DerivativeStructure & a0) : ::org::hipparchus::analysis::differentiation::UnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_4e382a6827bb5ab6, a0.this$)) {}

        UnivariateDerivative1::UnivariateDerivative1(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::differentiation::UnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        UnivariateDerivative1 UnivariateDerivative1::abs() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_abs_9b106317a0967986]));
        }

        UnivariateDerivative1 UnivariateDerivative1::acos() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_acos_9b106317a0967986]));
        }

        UnivariateDerivative1 UnivariateDerivative1::acosh() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_acosh_9b106317a0967986]));
        }

        UnivariateDerivative1 UnivariateDerivative1::add(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_add_45ab1e1f986e69d9], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::add(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_add_747e02cc0ca73930], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::asin() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_asin_9b106317a0967986]));
        }

        UnivariateDerivative1 UnivariateDerivative1::asinh() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_asinh_9b106317a0967986]));
        }

        UnivariateDerivative1 UnivariateDerivative1::atan() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_atan_9b106317a0967986]));
        }

        UnivariateDerivative1 UnivariateDerivative1::atan2(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_atan2_45ab1e1f986e69d9], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::atanh() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_atanh_9b106317a0967986]));
        }

        UnivariateDerivative1 UnivariateDerivative1::cbrt() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_cbrt_9b106317a0967986]));
        }

        UnivariateDerivative1 UnivariateDerivative1::ceil() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_ceil_9b106317a0967986]));
        }

        jint UnivariateDerivative1::compareTo(const UnivariateDerivative1 & a0) const
        {
          return env->callIntMethod(this$, mids$[mid_compareTo_8d3ffe8b2b58ad67], a0.this$);
        }

        UnivariateDerivative1 UnivariateDerivative1::compose(const JArray< jdouble > & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_compose_2d194165e5e34f51], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::copySign(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_copySign_45ab1e1f986e69d9], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::copySign(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_copySign_747e02cc0ca73930], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::cos() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_cos_9b106317a0967986]));
        }

        UnivariateDerivative1 UnivariateDerivative1::cosh() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_cosh_9b106317a0967986]));
        }

        UnivariateDerivative1 UnivariateDerivative1::divide(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_divide_45ab1e1f986e69d9], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::divide(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_divide_747e02cc0ca73930], a0));
        }

        jboolean UnivariateDerivative1::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
        }

        UnivariateDerivative1 UnivariateDerivative1::exp() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_exp_9b106317a0967986]));
        }

        UnivariateDerivative1 UnivariateDerivative1::expm1() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_expm1_9b106317a0967986]));
        }

        UnivariateDerivative1 UnivariateDerivative1::floor() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_floor_9b106317a0967986]));
        }

        jdouble UnivariateDerivative1::getDerivative(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDerivative_ce4c02d583456bc9], a0);
        }

        jint UnivariateDerivative1::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_d6ab429752e7c267]);
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDerivative1Field UnivariateDerivative1::getField() const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDerivative1Field(env->callObjectMethod(this$, mids$[mid_getField_573405a3d98142e3]));
        }

        jdouble UnivariateDerivative1::getFirstDerivative() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFirstDerivative_9981f74b2d109da6]);
        }

        jint UnivariateDerivative1::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_d6ab429752e7c267]);
        }

        UnivariateDerivative1 UnivariateDerivative1::getPi() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_getPi_9b106317a0967986]));
        }

        jdouble UnivariateDerivative1::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_9981f74b2d109da6]);
        }

        jdouble UnivariateDerivative1::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_9981f74b2d109da6]);
        }

        jint UnivariateDerivative1::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
        }

        UnivariateDerivative1 UnivariateDerivative1::hypot(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_hypot_45ab1e1f986e69d9], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(const JArray< jdouble > & a0, const JArray< UnivariateDerivative1 > & a1) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_73617a58f1a6656e], a0.this$, a1.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(const JArray< UnivariateDerivative1 > & a0, const JArray< UnivariateDerivative1 > & a1) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_827c1009b70112ae], a0.this$, a1.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(const UnivariateDerivative1 & a0, const UnivariateDerivative1 & a1, const UnivariateDerivative1 & a2, const UnivariateDerivative1 & a3) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_d87e2a24c3ffe913], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(jdouble a0, const UnivariateDerivative1 & a1, jdouble a2, const UnivariateDerivative1 & a3) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_200373eff5d81ed4], a0, a1.this$, a2, a3.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(const UnivariateDerivative1 & a0, const UnivariateDerivative1 & a1, const UnivariateDerivative1 & a2, const UnivariateDerivative1 & a3, const UnivariateDerivative1 & a4, const UnivariateDerivative1 & a5) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_dcd7a61a816ed4ff], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(jdouble a0, const UnivariateDerivative1 & a1, jdouble a2, const UnivariateDerivative1 & a3, jdouble a4, const UnivariateDerivative1 & a5) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_e198831b23fe3744], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(const UnivariateDerivative1 & a0, const UnivariateDerivative1 & a1, const UnivariateDerivative1 & a2, const UnivariateDerivative1 & a3, const UnivariateDerivative1 & a4, const UnivariateDerivative1 & a5, const UnivariateDerivative1 & a6, const UnivariateDerivative1 & a7) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_355b8c2c1a5431d9], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(jdouble a0, const UnivariateDerivative1 & a1, jdouble a2, const UnivariateDerivative1 & a3, jdouble a4, const UnivariateDerivative1 & a5, jdouble a6, const UnivariateDerivative1 & a7) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_aff30d523bc1b65b], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::log() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_log_9b106317a0967986]));
        }

        UnivariateDerivative1 UnivariateDerivative1::log10() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_log10_9b106317a0967986]));
        }

        UnivariateDerivative1 UnivariateDerivative1::log1p() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_log1p_9b106317a0967986]));
        }

        UnivariateDerivative1 UnivariateDerivative1::multiply(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_45ab1e1f986e69d9], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::multiply(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_747e02cc0ca73930], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::multiply(jint a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_f5ed3d2c94b11608], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::negate() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_negate_9b106317a0967986]));
        }

        UnivariateDerivative1 UnivariateDerivative1::newInstance(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_newInstance_747e02cc0ca73930], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::pow(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_pow_45ab1e1f986e69d9], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::pow(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_pow_747e02cc0ca73930], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::pow(jint a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_pow_f5ed3d2c94b11608], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::pow(jdouble a0, const UnivariateDerivative1 & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return UnivariateDerivative1(env->callStaticObjectMethod(cls, mids$[mid_pow_04ef795127c83697], a0, a1.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::reciprocal() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_reciprocal_9b106317a0967986]));
        }

        UnivariateDerivative1 UnivariateDerivative1::remainder(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_remainder_45ab1e1f986e69d9], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::remainder(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_remainder_747e02cc0ca73930], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::rint() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_rint_9b106317a0967986]));
        }

        UnivariateDerivative1 UnivariateDerivative1::rootN(jint a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_rootN_f5ed3d2c94b11608], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::scalb(jint a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_scalb_f5ed3d2c94b11608], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::sign() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sign_9b106317a0967986]));
        }

        UnivariateDerivative1 UnivariateDerivative1::sin() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sin_9b106317a0967986]));
        }

        ::org::hipparchus::util::FieldSinCos UnivariateDerivative1::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_31b7b02b4932da60]));
        }

        UnivariateDerivative1 UnivariateDerivative1::sinh() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sinh_9b106317a0967986]));
        }

        ::org::hipparchus::util::FieldSinhCosh UnivariateDerivative1::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_b24d5962ea451135]));
        }

        UnivariateDerivative1 UnivariateDerivative1::sqrt() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sqrt_9b106317a0967986]));
        }

        UnivariateDerivative1 UnivariateDerivative1::subtract(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_subtract_45ab1e1f986e69d9], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::subtract(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_subtract_747e02cc0ca73930], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::tan() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_tan_9b106317a0967986]));
        }

        UnivariateDerivative1 UnivariateDerivative1::tanh() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_tanh_9b106317a0967986]));
        }

        jdouble UnivariateDerivative1::taylor(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_taylor_bf28ed64d6e8576b], a0);
        }

        UnivariateDerivative1 UnivariateDerivative1::toDegrees() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_toDegrees_9b106317a0967986]));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure UnivariateDerivative1::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_ce114c5dd035d753]));
        }

        UnivariateDerivative1 UnivariateDerivative1::toRadians() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_toRadians_9b106317a0967986]));
        }

        UnivariateDerivative1 UnivariateDerivative1::ulp() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_ulp_9b106317a0967986]));
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
        static PyObject *t_UnivariateDerivative1_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative1_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative1_of_(t_UnivariateDerivative1 *self, PyObject *args);
        static int t_UnivariateDerivative1_init_(t_UnivariateDerivative1 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnivariateDerivative1_abs(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_acos(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_acosh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_add(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_asin(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_asinh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_atan(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_atan2(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_atanh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_cbrt(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_ceil(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_compareTo(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_compose(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_copySign(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_cos(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_cosh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_divide(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_equals(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_exp(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_expm1(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_floor(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getDerivative(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getExponent(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getField(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getFirstDerivative(t_UnivariateDerivative1 *self);
        static PyObject *t_UnivariateDerivative1_getOrder(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getPi(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getReal(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getValue(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_hashCode(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_hypot(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_linearCombination(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_log(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_log10(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_log1p(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_multiply(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_negate(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_newInstance(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_pow(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateDerivative1_reciprocal(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_remainder(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_rint(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_rootN(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_scalb(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_sign(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_sin(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_sinCos(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_sinh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_sinhCosh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_sqrt(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_subtract(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_tan(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_tanh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_taylor(t_UnivariateDerivative1 *self, PyObject *arg);
        static PyObject *t_UnivariateDerivative1_toDegrees(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_toDerivativeStructure(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_toRadians(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_ulp(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_get__exponent(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__field(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__firstDerivative(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__order(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__pi(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__real(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__value(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__parameters_(t_UnivariateDerivative1 *self, void *data);
        static PyGetSetDef t_UnivariateDerivative1__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateDerivative1, exponent),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, field),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, firstDerivative),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, order),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, pi),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, real),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, value),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateDerivative1__methods_[] = {
          DECLARE_METHOD(t_UnivariateDerivative1, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative1, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative1, of_, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, abs, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, acos, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, acosh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, add, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, asin, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, asinh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, atan, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, atan2, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, atanh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, cbrt, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, ceil, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, compareTo, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, compose, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, copySign, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, cos, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, cosh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, divide, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, equals, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, exp, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, expm1, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, floor, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getDerivative, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getExponent, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getField, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getFirstDerivative, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getOrder, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getPi, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getReal, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getValue, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, hypot, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, log, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, log10, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, log1p, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, multiply, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, negate, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, newInstance, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, pow, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative1, reciprocal, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, remainder, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, rint, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, rootN, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, scalb, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, sign, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, sin, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, sinCos, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, sinh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, sinhCosh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, sqrt, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, subtract, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, tan, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, tanh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, taylor, METH_O),
          DECLARE_METHOD(t_UnivariateDerivative1, toDegrees, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, toDerivativeStructure, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, toRadians, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, ulp, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDerivative1)[] = {
          { Py_tp_methods, t_UnivariateDerivative1__methods_ },
          { Py_tp_init, (void *) t_UnivariateDerivative1_init_ },
          { Py_tp_getset, t_UnivariateDerivative1__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDerivative1)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::differentiation::UnivariateDerivative),
          NULL
        };

        DEFINE_TYPE(UnivariateDerivative1, t_UnivariateDerivative1, UnivariateDerivative1);
        PyObject *t_UnivariateDerivative1::wrap_Object(const UnivariateDerivative1& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateDerivative1::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateDerivative1 *self = (t_UnivariateDerivative1 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_UnivariateDerivative1::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateDerivative1::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateDerivative1 *self = (t_UnivariateDerivative1 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_UnivariateDerivative1::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDerivative1), &PY_TYPE_DEF(UnivariateDerivative1), module, "UnivariateDerivative1", 0);
        }

        void t_UnivariateDerivative1::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1), "class_", make_descriptor(UnivariateDerivative1::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1), "wrapfn_", make_descriptor(t_UnivariateDerivative1::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1), "boxfn_", make_descriptor(boxObject));
          env->getClass(UnivariateDerivative1::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1), "PI", make_descriptor(t_UnivariateDerivative1::wrap_Object(*UnivariateDerivative1::PI)));
        }

        static PyObject *t_UnivariateDerivative1_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDerivative1::initializeClass, 1)))
            return NULL;
          return t_UnivariateDerivative1::wrap_Object(UnivariateDerivative1(((t_UnivariateDerivative1 *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDerivative1_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDerivative1::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDerivative1_of_(t_UnivariateDerivative1 *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_UnivariateDerivative1_init_(t_UnivariateDerivative1 *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::analysis::differentiation::DerivativeStructure a0((jobject) NULL);
              UnivariateDerivative1 object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::analysis::differentiation::DerivativeStructure::initializeClass, &a0))
              {
                INT_CALL(object = UnivariateDerivative1(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              UnivariateDerivative1 object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = UnivariateDerivative1(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1);
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

        static PyObject *t_UnivariateDerivative1_abs(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.abs());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "abs", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_acos(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acos());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "acos", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_acosh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acosh());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "acosh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_add(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "add", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_asin(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asin());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "asin", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_asinh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asinh());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "asinh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_atan(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atan());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "atan", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_atan2(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 a0((jobject) NULL);
          PyTypeObject **p0;
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "atan2", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_atanh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atanh());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "atanh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_cbrt(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cbrt());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "cbrt", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_ceil(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ceil());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "ceil", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_compareTo(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 a0((jobject) NULL);
          PyTypeObject **p0;
          jint result;

          if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
          {
            OBJ_CALL(result = self->object.compareTo(a0));
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "compareTo", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_compose(t_UnivariateDerivative1 *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "compose", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_copySign(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "copySign", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_cos(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cos());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "cos", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_cosh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cosh());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "cosh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_divide(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "divide", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_equals(t_UnivariateDerivative1 *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_exp(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.exp());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "exp", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_expm1(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.expm1());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "expm1", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_floor(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.floor());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "floor", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getDerivative(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.getDerivative(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getDerivative", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getExponent(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getExponent());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getExponent", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getField(t_UnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1Field result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getField());
            return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative1Field::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getField", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getFirstDerivative(t_UnivariateDerivative1 *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFirstDerivative());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateDerivative1_getOrder(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getOrder", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getPi(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getPi());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getPi", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getReal(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getReal());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getReal", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getValue(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getValue());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getValue", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_hashCode(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_hypot(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 a0((jobject) NULL);
          PyTypeObject **p0;
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "hypot", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_linearCombination(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< UnivariateDerivative1 > a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "[D[K", UnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              JArray< UnivariateDerivative1 > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< UnivariateDerivative1 > a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "[K[K", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_, &a1, &p1, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative1 a2((jobject) NULL);
              PyTypeObject **p2;
              UnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "KKKK", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_, &a1, &p1, t_UnivariateDerivative1::parameters_, &a2, &p2, t_UnivariateDerivative1::parameters_, &a3, &p3, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              UnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "DKDK", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative1::parameters_, &a2, &a3, &p3, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative1 a2((jobject) NULL);
              PyTypeObject **p2;
              UnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              UnivariateDerivative1 a4((jobject) NULL);
              PyTypeObject **p4;
              UnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_, &a1, &p1, t_UnivariateDerivative1::parameters_, &a2, &p2, t_UnivariateDerivative1::parameters_, &a3, &p3, t_UnivariateDerivative1::parameters_, &a4, &p4, t_UnivariateDerivative1::parameters_, &a5, &p5, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              UnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              UnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDK", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative1::parameters_, &a2, &a3, &p3, t_UnivariateDerivative1::parameters_, &a4, &a5, &p5, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            break;
           case 8:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative1 a2((jobject) NULL);
              PyTypeObject **p2;
              UnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              UnivariateDerivative1 a4((jobject) NULL);
              PyTypeObject **p4;
              UnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              UnivariateDerivative1 a6((jobject) NULL);
              PyTypeObject **p6;
              UnivariateDerivative1 a7((jobject) NULL);
              PyTypeObject **p7;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKKK", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_, &a1, &p1, t_UnivariateDerivative1::parameters_, &a2, &p2, t_UnivariateDerivative1::parameters_, &a3, &p3, t_UnivariateDerivative1::parameters_, &a4, &p4, t_UnivariateDerivative1::parameters_, &a5, &p5, t_UnivariateDerivative1::parameters_, &a6, &p6, t_UnivariateDerivative1::parameters_, &a7, &p7, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              UnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              UnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              UnivariateDerivative1 a7((jobject) NULL);
              PyTypeObject **p7;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDKDK", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative1::parameters_, &a2, &a3, &p3, t_UnivariateDerivative1::parameters_, &a4, &a5, &p5, t_UnivariateDerivative1::parameters_, &a6, &a7, &p7, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "linearCombination", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_log(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "log", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_log10(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log10());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "log10", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_log1p(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log1p());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "log1p", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_multiply(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jint a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "multiply", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_negate(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.negate());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "negate", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_newInstance(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jdouble a0;
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "newInstance", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_pow(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jint a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "pow", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          UnivariateDerivative1 a1((jobject) NULL);
          PyTypeObject **p1;
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "DK", UnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative1::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::UnivariateDerivative1::pow(a0, a1));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_UnivariateDerivative1_reciprocal(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.reciprocal());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "reciprocal", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_remainder(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "remainder", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_rint(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.rint());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "rint", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_rootN(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jint a0;
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "rootN", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_scalb(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jint a0;
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "scalb", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_sign(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sign());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "sign", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_sin(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sin());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "sin", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_sinCos(t_UnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinCos());
            return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1));
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "sinCos", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_sinh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinh());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "sinh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_sinhCosh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinhCosh());
            return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1));
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "sinhCosh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_sqrt(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sqrt());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "sqrt", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_subtract(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "subtract", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_tan(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tan());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "tan", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_tanh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tanh());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "tanh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_taylor(t_UnivariateDerivative1 *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.taylor(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", arg);
          return NULL;
        }

        static PyObject *t_UnivariateDerivative1_toDegrees(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDegrees());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "toDegrees", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_toDerivativeStructure(t_UnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDerivativeStructure());
            return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "toDerivativeStructure", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_toRadians(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toRadians());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "toRadians", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_ulp(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ulp());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "ulp", args, 2);
        }
        static PyObject *t_UnivariateDerivative1_get__parameters_(t_UnivariateDerivative1 *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_UnivariateDerivative1_get__exponent(t_UnivariateDerivative1 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateDerivative1_get__field(t_UnivariateDerivative1 *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative1Field::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative1_get__firstDerivative(t_UnivariateDerivative1 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFirstDerivative());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateDerivative1_get__order(t_UnivariateDerivative1 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateDerivative1_get__pi(t_UnivariateDerivative1 *self, void *data)
        {
          UnivariateDerivative1 value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_UnivariateDerivative1::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative1_get__real(t_UnivariateDerivative1 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateDerivative1_get__value(t_UnivariateDerivative1 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CharConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$CharConsumer::class$ = NULL;
            jmethodID *ParseToken$CharConsumer::mids$ = NULL;
            bool ParseToken$CharConsumer::live$ = false;

            jclass ParseToken$CharConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$CharConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_e8d07df586815a42] = env->getMethodID(cls, "accept", "(C)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$CharConsumer::accept(jchar a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_e8d07df586815a42], a0);
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
            static PyObject *t_ParseToken$CharConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$CharConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$CharConsumer_accept(t_ParseToken$CharConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$CharConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$CharConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$CharConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$CharConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$CharConsumer)[] = {
              { Py_tp_methods, t_ParseToken$CharConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$CharConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$CharConsumer, t_ParseToken$CharConsumer, ParseToken$CharConsumer);

            void t_ParseToken$CharConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$CharConsumer), &PY_TYPE_DEF(ParseToken$CharConsumer), module, "ParseToken$CharConsumer", 0);
            }

            void t_ParseToken$CharConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CharConsumer), "class_", make_descriptor(ParseToken$CharConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CharConsumer), "wrapfn_", make_descriptor(t_ParseToken$CharConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CharConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$CharConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$CharConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$CharConsumer::wrap_Object(ParseToken$CharConsumer(((t_ParseToken$CharConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$CharConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$CharConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$CharConsumer_accept(t_ParseToken$CharConsumer *self, PyObject *arg)
            {
              jchar a0;

              if (!parseArg(arg, "C", &a0))
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
#include "org/orekit/propagation/numerical/GLONASSNumericalPropagatorBuilder.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/data/DataContext.h"
#include "org/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "org/orekit/propagation/numerical/GLONASSNumericalPropagatorBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/numerical/GLONASSNumericalPropagator.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *GLONASSNumericalPropagatorBuilder::class$ = NULL;
        jmethodID *GLONASSNumericalPropagatorBuilder::mids$ = NULL;
        bool GLONASSNumericalPropagatorBuilder::live$ = false;

        jclass GLONASSNumericalPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/GLONASSNumericalPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_75da73f0971cc4a6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator;Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;Z)V");
            mids$[mid_init$_e9757e5aff4f1f6e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator;Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;ZLorg/orekit/data/DataContext;)V");
            mids$[mid_attitudeProvider_29c6ffdc65243d6c] = env->getMethodID(cls, "attitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/numerical/GLONASSNumericalPropagatorBuilder;");
            mids$[mid_build_4bd4f7fe02baade0] = env->getMethodID(cls, "build", "()Lorg/orekit/propagation/numerical/GLONASSNumericalPropagator;");
            mids$[mid_eci_852109cd40e9a8a0] = env->getMethodID(cls, "eci", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/numerical/GLONASSNumericalPropagatorBuilder;");
            mids$[mid_mass_c4720e5a35c44b17] = env->getMethodID(cls, "mass", "(D)Lorg/orekit/propagation/numerical/GLONASSNumericalPropagatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GLONASSNumericalPropagatorBuilder::GLONASSNumericalPropagatorBuilder(const ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator & a0, const ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_75da73f0971cc4a6, a0.this$, a1.this$, a2)) {}

        GLONASSNumericalPropagatorBuilder::GLONASSNumericalPropagatorBuilder(const ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator & a0, const ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements & a1, jboolean a2, const ::org::orekit::data::DataContext & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e9757e5aff4f1f6e, a0.this$, a1.this$, a2, a3.this$)) {}

        GLONASSNumericalPropagatorBuilder GLONASSNumericalPropagatorBuilder::attitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          return GLONASSNumericalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_attitudeProvider_29c6ffdc65243d6c], a0.this$));
        }

        ::org::orekit::propagation::numerical::GLONASSNumericalPropagator GLONASSNumericalPropagatorBuilder::build() const
        {
          return ::org::orekit::propagation::numerical::GLONASSNumericalPropagator(env->callObjectMethod(this$, mids$[mid_build_4bd4f7fe02baade0]));
        }

        GLONASSNumericalPropagatorBuilder GLONASSNumericalPropagatorBuilder::eci(const ::org::orekit::frames::Frame & a0) const
        {
          return GLONASSNumericalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_eci_852109cd40e9a8a0], a0.this$));
        }

        GLONASSNumericalPropagatorBuilder GLONASSNumericalPropagatorBuilder::mass(jdouble a0) const
        {
          return GLONASSNumericalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_mass_c4720e5a35c44b17], a0));
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
      namespace numerical {
        static PyObject *t_GLONASSNumericalPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GLONASSNumericalPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GLONASSNumericalPropagatorBuilder_init_(t_GLONASSNumericalPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GLONASSNumericalPropagatorBuilder_attitudeProvider(t_GLONASSNumericalPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_GLONASSNumericalPropagatorBuilder_build(t_GLONASSNumericalPropagatorBuilder *self);
        static PyObject *t_GLONASSNumericalPropagatorBuilder_eci(t_GLONASSNumericalPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_GLONASSNumericalPropagatorBuilder_mass(t_GLONASSNumericalPropagatorBuilder *self, PyObject *arg);

        static PyMethodDef t_GLONASSNumericalPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_GLONASSNumericalPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GLONASSNumericalPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GLONASSNumericalPropagatorBuilder, attitudeProvider, METH_O),
          DECLARE_METHOD(t_GLONASSNumericalPropagatorBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_GLONASSNumericalPropagatorBuilder, eci, METH_O),
          DECLARE_METHOD(t_GLONASSNumericalPropagatorBuilder, mass, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GLONASSNumericalPropagatorBuilder)[] = {
          { Py_tp_methods, t_GLONASSNumericalPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_GLONASSNumericalPropagatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GLONASSNumericalPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GLONASSNumericalPropagatorBuilder, t_GLONASSNumericalPropagatorBuilder, GLONASSNumericalPropagatorBuilder);

        void t_GLONASSNumericalPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(GLONASSNumericalPropagatorBuilder), &PY_TYPE_DEF(GLONASSNumericalPropagatorBuilder), module, "GLONASSNumericalPropagatorBuilder", 0);
        }

        void t_GLONASSNumericalPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNumericalPropagatorBuilder), "class_", make_descriptor(GLONASSNumericalPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNumericalPropagatorBuilder), "wrapfn_", make_descriptor(t_GLONASSNumericalPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNumericalPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GLONASSNumericalPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GLONASSNumericalPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_GLONASSNumericalPropagatorBuilder::wrap_Object(GLONASSNumericalPropagatorBuilder(((t_GLONASSNumericalPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_GLONASSNumericalPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GLONASSNumericalPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GLONASSNumericalPropagatorBuilder_init_(t_GLONASSNumericalPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator a0((jobject) NULL);
              ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements a1((jobject) NULL);
              jboolean a2;
              GLONASSNumericalPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkZ", ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator::initializeClass, ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = GLONASSNumericalPropagatorBuilder(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator a0((jobject) NULL);
              ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements a1((jobject) NULL);
              jboolean a2;
              ::org::orekit::data::DataContext a3((jobject) NULL);
              GLONASSNumericalPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkZk", ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator::initializeClass, ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = GLONASSNumericalPropagatorBuilder(a0, a1, a2, a3));
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

        static PyObject *t_GLONASSNumericalPropagatorBuilder_attitudeProvider(t_GLONASSNumericalPropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
          GLONASSNumericalPropagatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.attitudeProvider(a0));
            return t_GLONASSNumericalPropagatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
          return NULL;
        }

        static PyObject *t_GLONASSNumericalPropagatorBuilder_build(t_GLONASSNumericalPropagatorBuilder *self)
        {
          ::org::orekit::propagation::numerical::GLONASSNumericalPropagator result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::propagation::numerical::t_GLONASSNumericalPropagator::wrap_Object(result);
        }

        static PyObject *t_GLONASSNumericalPropagatorBuilder_eci(t_GLONASSNumericalPropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          GLONASSNumericalPropagatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.eci(a0));
            return t_GLONASSNumericalPropagatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "eci", arg);
          return NULL;
        }

        static PyObject *t_GLONASSNumericalPropagatorBuilder_mass(t_GLONASSNumericalPropagatorBuilder *self, PyObject *arg)
        {
          jdouble a0;
          GLONASSNumericalPropagatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.mass(a0));
            return t_GLONASSNumericalPropagatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "mass", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/linesensor/SensorMeanPlaneCrossing$CrossingResult.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        ::java::lang::Class *SensorMeanPlaneCrossing$CrossingResult::class$ = NULL;
        jmethodID *SensorMeanPlaneCrossing$CrossingResult::mids$ = NULL;
        bool SensorMeanPlaneCrossing$CrossingResult::live$ = false;

        jclass SensorMeanPlaneCrossing$CrossingResult::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/linesensor/SensorMeanPlaneCrossing$CrossingResult");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2ce5994878568479] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getLine_9981f74b2d109da6] = env->getMethodID(cls, "getLine", "()D");
            mids$[mid_getTarget_032312bdeb3f2f93] = env->getMethodID(cls, "getTarget", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getTargetDirection_032312bdeb3f2f93] = env->getMethodID(cls, "getTargetDirection", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getTargetDirectionDerivative_032312bdeb3f2f93] = env->getMethodID(cls, "getTargetDirectionDerivative", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SensorMeanPlaneCrossing$CrossingResult::SensorMeanPlaneCrossing$CrossingResult(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2ce5994878568479, a0.this$, a1, a2.this$, a3.this$, a4.this$)) {}

        ::org::orekit::time::AbsoluteDate SensorMeanPlaneCrossing$CrossingResult::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
        }

        jdouble SensorMeanPlaneCrossing$CrossingResult::getLine() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLine_9981f74b2d109da6]);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SensorMeanPlaneCrossing$CrossingResult::getTarget() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTarget_032312bdeb3f2f93]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SensorMeanPlaneCrossing$CrossingResult::getTargetDirection() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTargetDirection_032312bdeb3f2f93]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SensorMeanPlaneCrossing$CrossingResult::getTargetDirectionDerivative() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTargetDirectionDerivative_032312bdeb3f2f93]));
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
      namespace linesensor {
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SensorMeanPlaneCrossing$CrossingResult_init_(t_SensorMeanPlaneCrossing$CrossingResult *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getDate(t_SensorMeanPlaneCrossing$CrossingResult *self);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getLine(t_SensorMeanPlaneCrossing$CrossingResult *self);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getTarget(t_SensorMeanPlaneCrossing$CrossingResult *self);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getTargetDirection(t_SensorMeanPlaneCrossing$CrossingResult *self);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getTargetDirectionDerivative(t_SensorMeanPlaneCrossing$CrossingResult *self);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__date(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__line(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__target(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__targetDirection(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__targetDirectionDerivative(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data);
        static PyGetSetDef t_SensorMeanPlaneCrossing$CrossingResult__fields_[] = {
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing$CrossingResult, date),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing$CrossingResult, line),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing$CrossingResult, target),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing$CrossingResult, targetDirection),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing$CrossingResult, targetDirectionDerivative),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SensorMeanPlaneCrossing$CrossingResult__methods_[] = {
          DECLARE_METHOD(t_SensorMeanPlaneCrossing$CrossingResult, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing$CrossingResult, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing$CrossingResult, getDate, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing$CrossingResult, getLine, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing$CrossingResult, getTarget, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing$CrossingResult, getTargetDirection, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing$CrossingResult, getTargetDirectionDerivative, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SensorMeanPlaneCrossing$CrossingResult)[] = {
          { Py_tp_methods, t_SensorMeanPlaneCrossing$CrossingResult__methods_ },
          { Py_tp_init, (void *) t_SensorMeanPlaneCrossing$CrossingResult_init_ },
          { Py_tp_getset, t_SensorMeanPlaneCrossing$CrossingResult__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SensorMeanPlaneCrossing$CrossingResult)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SensorMeanPlaneCrossing$CrossingResult, t_SensorMeanPlaneCrossing$CrossingResult, SensorMeanPlaneCrossing$CrossingResult);

        void t_SensorMeanPlaneCrossing$CrossingResult::install(PyObject *module)
        {
          installType(&PY_TYPE(SensorMeanPlaneCrossing$CrossingResult), &PY_TYPE_DEF(SensorMeanPlaneCrossing$CrossingResult), module, "SensorMeanPlaneCrossing$CrossingResult", 0);
        }

        void t_SensorMeanPlaneCrossing$CrossingResult::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMeanPlaneCrossing$CrossingResult), "class_", make_descriptor(SensorMeanPlaneCrossing$CrossingResult::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMeanPlaneCrossing$CrossingResult), "wrapfn_", make_descriptor(t_SensorMeanPlaneCrossing$CrossingResult::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMeanPlaneCrossing$CrossingResult), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SensorMeanPlaneCrossing$CrossingResult::initializeClass, 1)))
            return NULL;
          return t_SensorMeanPlaneCrossing$CrossingResult::wrap_Object(SensorMeanPlaneCrossing$CrossingResult(((t_SensorMeanPlaneCrossing$CrossingResult *) arg)->object.this$));
        }
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SensorMeanPlaneCrossing$CrossingResult::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SensorMeanPlaneCrossing$CrossingResult_init_(t_SensorMeanPlaneCrossing$CrossingResult *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble a1;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
          SensorMeanPlaneCrossing$CrossingResult object((jobject) NULL);

          if (!parseArgs(args, "kDkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = SensorMeanPlaneCrossing$CrossingResult(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getDate(t_SensorMeanPlaneCrossing$CrossingResult *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getLine(t_SensorMeanPlaneCrossing$CrossingResult *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLine());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getTarget(t_SensorMeanPlaneCrossing$CrossingResult *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getTarget());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getTargetDirection(t_SensorMeanPlaneCrossing$CrossingResult *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getTargetDirection());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getTargetDirectionDerivative(t_SensorMeanPlaneCrossing$CrossingResult *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getTargetDirectionDerivative());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__date(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__line(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLine());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__target(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getTarget());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__targetDirection(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getTargetDirection());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__targetDirectionDerivative(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getTargetDirectionDerivative());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmParser.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeader.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmParser.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmParser::class$ = NULL;
            jmethodID *CdmParser::mids$ = NULL;
            bool CdmParser::live$ = false;

            jclass CdmParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_fb68cbdeda9bf4e9] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/cdm/Cdm;");
                mids$[mid_finalizeData_eee3de00fe971136] = env->getMethodID(cls, "finalizeData", "()Z");
                mids$[mid_finalizeHeader_eee3de00fe971136] = env->getMethodID(cls, "finalizeHeader", "()Z");
                mids$[mid_finalizeMetadata_eee3de00fe971136] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                mids$[mid_getHeader_dace32bd4a9ab243] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmHeader;");
                mids$[mid_inData_eee3de00fe971136] = env->getMethodID(cls, "inData", "()Z");
                mids$[mid_inHeader_eee3de00fe971136] = env->getMethodID(cls, "inHeader", "()Z");
                mids$[mid_inMetadata_eee3de00fe971136] = env->getMethodID(cls, "inMetadata", "()Z");
                mids$[mid_prepareData_eee3de00fe971136] = env->getMethodID(cls, "prepareData", "()Z");
                mids$[mid_prepareHeader_eee3de00fe971136] = env->getMethodID(cls, "prepareHeader", "()Z");
                mids$[mid_prepareMetadata_eee3de00fe971136] = env->getMethodID(cls, "prepareMetadata", "()Z");
                mids$[mid_reset_a23f5f7531d9b583] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::files::ccsds::ndm::cdm::Cdm CdmParser::build() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::Cdm(env->callObjectMethod(this$, mids$[mid_build_fb68cbdeda9bf4e9]));
            }

            jboolean CdmParser::finalizeData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeData_eee3de00fe971136]);
            }

            jboolean CdmParser::finalizeHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_eee3de00fe971136]);
            }

            jboolean CdmParser::finalizeMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_eee3de00fe971136]);
            }

            ::org::orekit::files::ccsds::ndm::cdm::CdmHeader CdmParser::getHeader() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_dace32bd4a9ab243]));
            }

            jboolean CdmParser::inData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inData_eee3de00fe971136]);
            }

            jboolean CdmParser::inHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inHeader_eee3de00fe971136]);
            }

            jboolean CdmParser::inMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inMetadata_eee3de00fe971136]);
            }

            jboolean CdmParser::prepareData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareData_eee3de00fe971136]);
            }

            jboolean CdmParser::prepareHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareHeader_eee3de00fe971136]);
            }

            jboolean CdmParser::prepareMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_eee3de00fe971136]);
            }

            void CdmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_reset_a23f5f7531d9b583], a0.this$);
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
            static PyObject *t_CdmParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmParser_of_(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_build(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_finalizeData(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_finalizeHeader(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_finalizeMetadata(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_getHeader(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_inData(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_inHeader(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_inMetadata(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_prepareData(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_prepareHeader(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_prepareMetadata(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_reset(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_get__header(t_CdmParser *self, void *data);
            static PyObject *t_CdmParser_get__parameters_(t_CdmParser *self, void *data);
            static PyGetSetDef t_CdmParser__fields_[] = {
              DECLARE_GET_FIELD(t_CdmParser, header),
              DECLARE_GET_FIELD(t_CdmParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmParser__methods_[] = {
              DECLARE_METHOD(t_CdmParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, build, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, finalizeData, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, finalizeHeader, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, finalizeMetadata, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, getHeader, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, inData, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, inHeader, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, inMetadata, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, prepareData, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, prepareHeader, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, prepareMetadata, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, reset, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmParser)[] = {
              { Py_tp_methods, t_CdmParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CdmParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser),
              NULL
            };

            DEFINE_TYPE(CdmParser, t_CdmParser, CdmParser);
            PyObject *t_CdmParser::wrap_Object(const CdmParser& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_CdmParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmParser *self = (t_CdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_CdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_CdmParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmParser *self = (t_CdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_CdmParser::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmParser), &PY_TYPE_DEF(CdmParser), module, "CdmParser", 0);
            }

            void t_CdmParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmParser), "class_", make_descriptor(CdmParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmParser), "wrapfn_", make_descriptor(t_CdmParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmParser::initializeClass, 1)))
                return NULL;
              return t_CdmParser::wrap_Object(CdmParser(((t_CdmParser *) arg)->object.this$));
            }
            static PyObject *t_CdmParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CdmParser_of_(t_CdmParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CdmParser_build(t_CdmParser *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::cdm::Cdm result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.build());
                return ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::wrap_Object(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "build", args, 2);
            }

            static PyObject *t_CdmParser_finalizeData(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.finalizeData());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "finalizeData", args, 2);
            }

            static PyObject *t_CdmParser_finalizeHeader(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.finalizeHeader());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "finalizeHeader", args, 2);
            }

            static PyObject *t_CdmParser_finalizeMetadata(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.finalizeMetadata());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "finalizeMetadata", args, 2);
            }

            static PyObject *t_CdmParser_getHeader(t_CdmParser *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmHeader result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::cdm::t_CdmHeader::wrap_Object(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "getHeader", args, 2);
            }

            static PyObject *t_CdmParser_inData(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.inData());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "inData", args, 2);
            }

            static PyObject *t_CdmParser_inHeader(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.inHeader());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "inHeader", args, 2);
            }

            static PyObject *t_CdmParser_inMetadata(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.inMetadata());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "inMetadata", args, 2);
            }

            static PyObject *t_CdmParser_prepareData(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.prepareData());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "prepareData", args, 2);
            }

            static PyObject *t_CdmParser_prepareHeader(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.prepareHeader());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "prepareHeader", args, 2);
            }

            static PyObject *t_CdmParser_prepareMetadata(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.prepareMetadata());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "prepareMetadata", args, 2);
            }

            static PyObject *t_CdmParser_reset(t_CdmParser *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
              {
                OBJ_CALL(self->object.reset(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "reset", args, 2);
            }
            static PyObject *t_CdmParser_get__parameters_(t_CdmParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_CdmParser_get__header(t_CdmParser *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmHeader value((jobject) NULL);
              OBJ_CALL(value = self->object.getHeader());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmHeader::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/MannWhitneyUTest.h"
#include "org/hipparchus/stat/ranking/TiesStrategy.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *MannWhitneyUTest::class$ = NULL;
        jmethodID *MannWhitneyUTest::mids$ = NULL;
        bool MannWhitneyUTest::live$ = false;

        jclass MannWhitneyUTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/MannWhitneyUTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_49a3c82f9e34fc75] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/NaNStrategy;Lorg/hipparchus/stat/ranking/TiesStrategy;)V");
            mids$[mid_mannWhitneyU_b01af8a77d4df96f] = env->getMethodID(cls, "mannWhitneyU", "([D[D)D");
            mids$[mid_mannWhitneyUTest_b01af8a77d4df96f] = env->getMethodID(cls, "mannWhitneyUTest", "([D[D)D");
            mids$[mid_mannWhitneyUTest_2cf76703ce30b165] = env->getMethodID(cls, "mannWhitneyUTest", "([D[DZ)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MannWhitneyUTest::MannWhitneyUTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        MannWhitneyUTest::MannWhitneyUTest(const ::org::hipparchus::stat::ranking::NaNStrategy & a0, const ::org::hipparchus::stat::ranking::TiesStrategy & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_49a3c82f9e34fc75, a0.this$, a1.this$)) {}

        jdouble MannWhitneyUTest::mannWhitneyU(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_mannWhitneyU_b01af8a77d4df96f], a0.this$, a1.this$);
        }

        jdouble MannWhitneyUTest::mannWhitneyUTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_mannWhitneyUTest_b01af8a77d4df96f], a0.this$, a1.this$);
        }

        jdouble MannWhitneyUTest::mannWhitneyUTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_mannWhitneyUTest_2cf76703ce30b165], a0.this$, a1.this$, a2);
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
    namespace stat {
      namespace inference {
        static PyObject *t_MannWhitneyUTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MannWhitneyUTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MannWhitneyUTest_init_(t_MannWhitneyUTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MannWhitneyUTest_mannWhitneyU(t_MannWhitneyUTest *self, PyObject *args);
        static PyObject *t_MannWhitneyUTest_mannWhitneyUTest(t_MannWhitneyUTest *self, PyObject *args);

        static PyMethodDef t_MannWhitneyUTest__methods_[] = {
          DECLARE_METHOD(t_MannWhitneyUTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MannWhitneyUTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MannWhitneyUTest, mannWhitneyU, METH_VARARGS),
          DECLARE_METHOD(t_MannWhitneyUTest, mannWhitneyUTest, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MannWhitneyUTest)[] = {
          { Py_tp_methods, t_MannWhitneyUTest__methods_ },
          { Py_tp_init, (void *) t_MannWhitneyUTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MannWhitneyUTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MannWhitneyUTest, t_MannWhitneyUTest, MannWhitneyUTest);

        void t_MannWhitneyUTest::install(PyObject *module)
        {
          installType(&PY_TYPE(MannWhitneyUTest), &PY_TYPE_DEF(MannWhitneyUTest), module, "MannWhitneyUTest", 0);
        }

        void t_MannWhitneyUTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MannWhitneyUTest), "class_", make_descriptor(MannWhitneyUTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MannWhitneyUTest), "wrapfn_", make_descriptor(t_MannWhitneyUTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MannWhitneyUTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MannWhitneyUTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MannWhitneyUTest::initializeClass, 1)))
            return NULL;
          return t_MannWhitneyUTest::wrap_Object(MannWhitneyUTest(((t_MannWhitneyUTest *) arg)->object.this$));
        }
        static PyObject *t_MannWhitneyUTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MannWhitneyUTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MannWhitneyUTest_init_(t_MannWhitneyUTest *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              MannWhitneyUTest object((jobject) NULL);

              INT_CALL(object = MannWhitneyUTest());
              self->object = object;
              break;
            }
           case 2:
            {
              ::org::hipparchus::stat::ranking::NaNStrategy a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::stat::ranking::TiesStrategy a1((jobject) NULL);
              PyTypeObject **p1;
              MannWhitneyUTest object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::stat::ranking::NaNStrategy::initializeClass, ::org::hipparchus::stat::ranking::TiesStrategy::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_NaNStrategy::parameters_, &a1, &p1, ::org::hipparchus::stat::ranking::t_TiesStrategy::parameters_))
              {
                INT_CALL(object = MannWhitneyUTest(a0, a1));
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

        static PyObject *t_MannWhitneyUTest_mannWhitneyU(t_MannWhitneyUTest *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.mannWhitneyU(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "mannWhitneyU", args);
          return NULL;
        }

        static PyObject *t_MannWhitneyUTest_mannWhitneyUTest(t_MannWhitneyUTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.mannWhitneyUTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.mannWhitneyUTest(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "mannWhitneyUTest", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/RtcmData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {

            ::java::lang::Class *RtcmData::class$ = NULL;
            jmethodID *RtcmData::mids$ = NULL;
            bool RtcmData::live$ = false;

            jclass RtcmData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/RtcmData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RtcmData::RtcmData() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}
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
            static PyObject *t_RtcmData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RtcmData_instance_(PyTypeObject *type, PyObject *arg);
            static int t_RtcmData_init_(t_RtcmData *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_RtcmData__methods_[] = {
              DECLARE_METHOD(t_RtcmData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RtcmData, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RtcmData)[] = {
              { Py_tp_methods, t_RtcmData__methods_ },
              { Py_tp_init, (void *) t_RtcmData_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RtcmData)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(RtcmData, t_RtcmData, RtcmData);

            void t_RtcmData::install(PyObject *module)
            {
              installType(&PY_TYPE(RtcmData), &PY_TYPE_DEF(RtcmData), module, "RtcmData", 0);
            }

            void t_RtcmData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmData), "class_", make_descriptor(RtcmData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmData), "wrapfn_", make_descriptor(t_RtcmData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmData), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RtcmData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RtcmData::initializeClass, 1)))
                return NULL;
              return t_RtcmData::wrap_Object(RtcmData(((t_RtcmData *) arg)->object.this$));
            }
            static PyObject *t_RtcmData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RtcmData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_RtcmData_init_(t_RtcmData *self, PyObject *args, PyObject *kwds)
            {
              RtcmData object((jobject) NULL);

              INT_CALL(object = RtcmData());
              self->object = object;

              return 0;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeVectorFunction.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeVectorFunction::class$ = NULL;
      jmethodID *TimeVectorFunction::mids$ = NULL;
      bool TimeVectorFunction::live$ = false;

      jclass TimeVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_9b63d19c31941c0f] = env->getMethodID(cls, "value", "(Lorg/orekit/time/AbsoluteDate;)[D");
          mids$[mid_value_977531d905f4ab3f] = env->getMethodID(cls, "value", "(Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > TimeVectorFunction::value(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_9b63d19c31941c0f], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > TimeVectorFunction::value(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_977531d905f4ab3f], a0.this$));
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
      static PyObject *t_TimeVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeVectorFunction_value(t_TimeVectorFunction *self, PyObject *args);

      static PyMethodDef t_TimeVectorFunction__methods_[] = {
        DECLARE_METHOD(t_TimeVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeVectorFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeVectorFunction)[] = {
        { Py_tp_methods, t_TimeVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeVectorFunction, t_TimeVectorFunction, TimeVectorFunction);

      void t_TimeVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeVectorFunction), &PY_TYPE_DEF(TimeVectorFunction), module, "TimeVectorFunction", 0);
      }

      void t_TimeVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeVectorFunction), "class_", make_descriptor(TimeVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeVectorFunction), "wrapfn_", make_descriptor(t_TimeVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeVectorFunction::initializeClass, 1)))
          return NULL;
        return t_TimeVectorFunction::wrap_Object(TimeVectorFunction(((t_TimeVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_TimeVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeVectorFunction_value(t_TimeVectorFunction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.value(a0));
              return result.wrap();
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.value(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/UnivariateMatrixFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *UnivariateMatrixFunction::class$ = NULL;
      jmethodID *UnivariateMatrixFunction::mids$ = NULL;
      bool UnivariateMatrixFunction::live$ = false;

      jclass UnivariateMatrixFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/UnivariateMatrixFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_c62f25b3978e0d21] = env->getMethodID(cls, "value", "(D)[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< JArray< jdouble > > UnivariateMatrixFunction::value(jdouble a0) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_value_c62f25b3978e0d21], a0));
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
      static PyObject *t_UnivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnivariateMatrixFunction_value(t_UnivariateMatrixFunction *self, PyObject *arg);

      static PyMethodDef t_UnivariateMatrixFunction__methods_[] = {
        DECLARE_METHOD(t_UnivariateMatrixFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnivariateMatrixFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnivariateMatrixFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UnivariateMatrixFunction)[] = {
        { Py_tp_methods, t_UnivariateMatrixFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UnivariateMatrixFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UnivariateMatrixFunction, t_UnivariateMatrixFunction, UnivariateMatrixFunction);

      void t_UnivariateMatrixFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(UnivariateMatrixFunction), &PY_TYPE_DEF(UnivariateMatrixFunction), module, "UnivariateMatrixFunction", 0);
      }

      void t_UnivariateMatrixFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateMatrixFunction), "class_", make_descriptor(UnivariateMatrixFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateMatrixFunction), "wrapfn_", make_descriptor(t_UnivariateMatrixFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateMatrixFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UnivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UnivariateMatrixFunction::initializeClass, 1)))
          return NULL;
        return t_UnivariateMatrixFunction::wrap_Object(UnivariateMatrixFunction(((t_UnivariateMatrixFunction *) arg)->object.this$));
      }
      static PyObject *t_UnivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UnivariateMatrixFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UnivariateMatrixFunction_value(t_UnivariateMatrixFunction *self, PyObject *arg)
      {
        jdouble a0;
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/BOBYQAOptimizer.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *BOBYQAOptimizer::class$ = NULL;
            jmethodID *BOBYQAOptimizer::mids$ = NULL;
            bool BOBYQAOptimizer::live$ = false;
            jdouble BOBYQAOptimizer::DEFAULT_INITIAL_RADIUS = (jdouble) 0;
            jdouble BOBYQAOptimizer::DEFAULT_STOPPING_RADIUS = (jdouble) 0;
            jint BOBYQAOptimizer::MINIMUM_PROBLEM_DIMENSION = (jint) 0;

            jclass BOBYQAOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/BOBYQAOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_init$_aaed259e1b5f1153] = env->getMethodID(cls, "<init>", "(IDD)V");
                mids$[mid_doOptimize_a812a1ba2cf9f7b4] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/PointValuePair;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_INITIAL_RADIUS = env->getStaticDoubleField(cls, "DEFAULT_INITIAL_RADIUS");
                DEFAULT_STOPPING_RADIUS = env->getStaticDoubleField(cls, "DEFAULT_STOPPING_RADIUS");
                MINIMUM_PROBLEM_DIMENSION = env->getStaticIntField(cls, "MINIMUM_PROBLEM_DIMENSION");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            BOBYQAOptimizer::BOBYQAOptimizer(jint a0) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

            BOBYQAOptimizer::BOBYQAOptimizer(jint a0, jdouble a1, jdouble a2) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_aaed259e1b5f1153, a0, a1, a2)) {}
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
            static PyObject *t_BOBYQAOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BOBYQAOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BOBYQAOptimizer_of_(t_BOBYQAOptimizer *self, PyObject *args);
            static int t_BOBYQAOptimizer_init_(t_BOBYQAOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_BOBYQAOptimizer_get__parameters_(t_BOBYQAOptimizer *self, void *data);
            static PyGetSetDef t_BOBYQAOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_BOBYQAOptimizer, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_BOBYQAOptimizer__methods_[] = {
              DECLARE_METHOD(t_BOBYQAOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BOBYQAOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BOBYQAOptimizer, of_, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(BOBYQAOptimizer)[] = {
              { Py_tp_methods, t_BOBYQAOptimizer__methods_ },
              { Py_tp_init, (void *) t_BOBYQAOptimizer_init_ },
              { Py_tp_getset, t_BOBYQAOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(BOBYQAOptimizer)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer),
              NULL
            };

            DEFINE_TYPE(BOBYQAOptimizer, t_BOBYQAOptimizer, BOBYQAOptimizer);
            PyObject *t_BOBYQAOptimizer::wrap_Object(const BOBYQAOptimizer& object, PyTypeObject *p0)
            {
              PyObject *obj = t_BOBYQAOptimizer::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_BOBYQAOptimizer *self = (t_BOBYQAOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_BOBYQAOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_BOBYQAOptimizer::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_BOBYQAOptimizer *self = (t_BOBYQAOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_BOBYQAOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(BOBYQAOptimizer), &PY_TYPE_DEF(BOBYQAOptimizer), module, "BOBYQAOptimizer", 0);
            }

            void t_BOBYQAOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(BOBYQAOptimizer), "class_", make_descriptor(BOBYQAOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BOBYQAOptimizer), "wrapfn_", make_descriptor(t_BOBYQAOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BOBYQAOptimizer), "boxfn_", make_descriptor(boxObject));
              env->getClass(BOBYQAOptimizer::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(BOBYQAOptimizer), "DEFAULT_INITIAL_RADIUS", make_descriptor(BOBYQAOptimizer::DEFAULT_INITIAL_RADIUS));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BOBYQAOptimizer), "DEFAULT_STOPPING_RADIUS", make_descriptor(BOBYQAOptimizer::DEFAULT_STOPPING_RADIUS));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BOBYQAOptimizer), "MINIMUM_PROBLEM_DIMENSION", make_descriptor(BOBYQAOptimizer::MINIMUM_PROBLEM_DIMENSION));
            }

            static PyObject *t_BOBYQAOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, BOBYQAOptimizer::initializeClass, 1)))
                return NULL;
              return t_BOBYQAOptimizer::wrap_Object(BOBYQAOptimizer(((t_BOBYQAOptimizer *) arg)->object.this$));
            }
            static PyObject *t_BOBYQAOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, BOBYQAOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_BOBYQAOptimizer_of_(t_BOBYQAOptimizer *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_BOBYQAOptimizer_init_(t_BOBYQAOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  jint a0;
                  BOBYQAOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "I", &a0))
                  {
                    INT_CALL(object = BOBYQAOptimizer(a0));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  jint a0;
                  jdouble a1;
                  jdouble a2;
                  BOBYQAOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "IDD", &a0, &a1, &a2))
                  {
                    INT_CALL(object = BOBYQAOptimizer(a0, a1, a2));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
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
            static PyObject *t_BOBYQAOptimizer_get__parameters_(t_BOBYQAOptimizer *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/numerical/TimeDerivativesEquations.h"
#include "org/orekit/propagation/events/EventDetectorsProvider.h"
#include "org/orekit/propagation/numerical/FieldTimeDerivativesEquations.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {

      ::java::lang::Class *ForceModel::class$ = NULL;
      jmethodID *ForceModel::mids$ = NULL;
      bool ForceModel::live$ = false;

      jclass ForceModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/forces/ForceModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_acceleration_5e147f44c28a35c9] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_acceleration_9816b8f76e94356a] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_addContribution_05bb906f491bab6b] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/numerical/FieldTimeDerivativesEquations;)V");
          mids$[mid_addContribution_2fcaaed225365615] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/numerical/TimeDerivativesEquations;)V");
          mids$[mid_dependsOnPositionOnly_eee3de00fe971136] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
          mids$[mid_getEventDetectors_11e4ca8182c1933d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
          mids$[mid_getFieldEventDetectors_d3db121d9deb0312] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
          mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_init_357211ab77703f3f] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D ForceModel::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_5e147f44c28a35c9], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ForceModel::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_9816b8f76e94356a], a0.this$, a1.this$));
      }

      void ForceModel::addContribution(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addContribution_05bb906f491bab6b], a0.this$, a1.this$);
      }

      void ForceModel::addContribution(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::numerical::TimeDerivativesEquations & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addContribution_2fcaaed225365615], a0.this$, a1.this$);
      }

      jboolean ForceModel::dependsOnPositionOnly() const
      {
        return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_eee3de00fe971136]);
      }

      ::java::util::stream::Stream ForceModel::getEventDetectors() const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_11e4ca8182c1933d]));
      }

      ::java::util::stream::Stream ForceModel::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_d3db121d9deb0312], a0.this$));
      }

      void ForceModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
      }

      void ForceModel::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_357211ab77703f3f], a0.this$, a1.this$);
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
      static PyObject *t_ForceModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ForceModel_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ForceModel_acceleration(t_ForceModel *self, PyObject *args);
      static PyObject *t_ForceModel_addContribution(t_ForceModel *self, PyObject *args);
      static PyObject *t_ForceModel_dependsOnPositionOnly(t_ForceModel *self);
      static PyObject *t_ForceModel_getEventDetectors(t_ForceModel *self);
      static PyObject *t_ForceModel_getFieldEventDetectors(t_ForceModel *self, PyObject *arg);
      static PyObject *t_ForceModel_init(t_ForceModel *self, PyObject *args);
      static PyObject *t_ForceModel_get__eventDetectors(t_ForceModel *self, void *data);
      static PyGetSetDef t_ForceModel__fields_[] = {
        DECLARE_GET_FIELD(t_ForceModel, eventDetectors),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ForceModel__methods_[] = {
        DECLARE_METHOD(t_ForceModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ForceModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ForceModel, acceleration, METH_VARARGS),
        DECLARE_METHOD(t_ForceModel, addContribution, METH_VARARGS),
        DECLARE_METHOD(t_ForceModel, dependsOnPositionOnly, METH_NOARGS),
        DECLARE_METHOD(t_ForceModel, getEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_ForceModel, getFieldEventDetectors, METH_O),
        DECLARE_METHOD(t_ForceModel, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ForceModel)[] = {
        { Py_tp_methods, t_ForceModel__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ForceModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ForceModel)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
        NULL
      };

      DEFINE_TYPE(ForceModel, t_ForceModel, ForceModel);

      void t_ForceModel::install(PyObject *module)
      {
        installType(&PY_TYPE(ForceModel), &PY_TYPE_DEF(ForceModel), module, "ForceModel", 0);
      }

      void t_ForceModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ForceModel), "class_", make_descriptor(ForceModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ForceModel), "wrapfn_", make_descriptor(t_ForceModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ForceModel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ForceModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ForceModel::initializeClass, 1)))
          return NULL;
        return t_ForceModel::wrap_Object(ForceModel(((t_ForceModel *) arg)->object.this$));
      }
      static PyObject *t_ForceModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ForceModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ForceModel_acceleration(t_ForceModel *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.acceleration(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.acceleration(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "acceleration", args);
        return NULL;
      }

      static PyObject *t_ForceModel_addContribution(t_ForceModel *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::numerical::t_FieldTimeDerivativesEquations::parameters_))
            {
              OBJ_CALL(self->object.addContribution(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::numerical::TimeDerivativesEquations a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::numerical::TimeDerivativesEquations::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.addContribution(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "addContribution", args);
        return NULL;
      }

      static PyObject *t_ForceModel_dependsOnPositionOnly(t_ForceModel *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.dependsOnPositionOnly());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ForceModel_getEventDetectors(t_ForceModel *self)
      {
        ::java::util::stream::Stream result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventDetectors());
        return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
      }

      static PyObject *t_ForceModel_getFieldEventDetectors(t_ForceModel *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
          return ::java::util::stream::t_Stream::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getFieldEventDetectors", arg);
        return NULL;
      }

      static PyObject *t_ForceModel_init(t_ForceModel *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_ForceModel_get__eventDetectors(t_ForceModel *self, void *data)
      {
        ::java::util::stream::Stream value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventDetectors());
        return ::java::util::stream::t_Stream::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/PythonEventHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *PythonEventHandler::class$ = NULL;
          jmethodID *PythonEventHandler::mids$ = NULL;
          bool PythonEventHandler::live$ = false;

          jclass PythonEventHandler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/PythonEventHandler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_66898681536e4202] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_init_381d97cc333bc994] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/propagation/events/EventDetector;)V");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_resetState_556ad75a8c47fba2] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonEventHandler::PythonEventHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonEventHandler::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonEventHandler::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonEventHandler::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
      namespace events {
        namespace handlers {
          static PyObject *t_PythonEventHandler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonEventHandler_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonEventHandler_init_(t_PythonEventHandler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonEventHandler_finalize(t_PythonEventHandler *self);
          static PyObject *t_PythonEventHandler_pythonExtension(t_PythonEventHandler *self, PyObject *args);
          static jobject JNICALL t_PythonEventHandler_eventOccurred0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2);
          static void JNICALL t_PythonEventHandler_init1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonEventHandler_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonEventHandler_resetState3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static PyObject *t_PythonEventHandler_get__self(t_PythonEventHandler *self, void *data);
          static PyGetSetDef t_PythonEventHandler__fields_[] = {
            DECLARE_GET_FIELD(t_PythonEventHandler, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonEventHandler__methods_[] = {
            DECLARE_METHOD(t_PythonEventHandler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonEventHandler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonEventHandler, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonEventHandler, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonEventHandler)[] = {
            { Py_tp_methods, t_PythonEventHandler__methods_ },
            { Py_tp_init, (void *) t_PythonEventHandler_init_ },
            { Py_tp_getset, t_PythonEventHandler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonEventHandler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonEventHandler, t_PythonEventHandler, PythonEventHandler);

          void t_PythonEventHandler::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonEventHandler), &PY_TYPE_DEF(PythonEventHandler), module, "PythonEventHandler", 1);
          }

          void t_PythonEventHandler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventHandler), "class_", make_descriptor(PythonEventHandler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventHandler), "wrapfn_", make_descriptor(t_PythonEventHandler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventHandler), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonEventHandler::initializeClass);
            JNINativeMethod methods[] = {
              { "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;", (void *) t_PythonEventHandler_eventOccurred0 },
              { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/propagation/events/EventDetector;)V", (void *) t_PythonEventHandler_init1 },
              { "pythonDecRef", "()V", (void *) t_PythonEventHandler_pythonDecRef2 },
              { "resetState", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonEventHandler_resetState3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonEventHandler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonEventHandler::initializeClass, 1)))
              return NULL;
            return t_PythonEventHandler::wrap_Object(PythonEventHandler(((t_PythonEventHandler *) arg)->object.this$));
          }
          static PyObject *t_PythonEventHandler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonEventHandler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonEventHandler_init_(t_PythonEventHandler *self, PyObject *args, PyObject *kwds)
          {
            PythonEventHandler object((jobject) NULL);

            INT_CALL(object = PythonEventHandler());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonEventHandler_finalize(t_PythonEventHandler *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonEventHandler_pythonExtension(t_PythonEventHandler *self, PyObject *args)
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

          static jobject JNICALL t_PythonEventHandler_eventOccurred0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonEventHandler::mids$[PythonEventHandler::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::ode::events::Action value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = ::org::orekit::propagation::events::t_EventDetector::wrap_Object(::org::orekit::propagation::events::EventDetector(a1));
            PyObject *o2 = (a2 ? Py_True : Py_False);
            PyObject *result = PyObject_CallMethod(obj, "eventOccurred", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::ode::events::Action::initializeClass, &value))
            {
              throwTypeError("eventOccurred", result);
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

          static void JNICALL t_PythonEventHandler_init1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonEventHandler::mids$[PythonEventHandler::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *o2 = ::org::orekit::propagation::events::t_EventDetector::wrap_Object(::org::orekit::propagation::events::EventDetector(a2));
            PyObject *result = PyObject_CallMethod(obj, "init", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonEventHandler_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonEventHandler::mids$[PythonEventHandler::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonEventHandler::mids$[PythonEventHandler::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static jobject JNICALL t_PythonEventHandler_resetState3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonEventHandler::mids$[PythonEventHandler::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::events::t_EventDetector::wrap_Object(::org::orekit::propagation::events::EventDetector(a0));
            PyObject *o1 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a1));
            PyObject *result = PyObject_CallMethod(obj, "resetState", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
            {
              throwTypeError("resetState", result);
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

          static PyObject *t_PythonEventHandler_get__self(t_PythonEventHandler *self, void *data)
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
#include "org/orekit/propagation/conversion/AbstractPropagatorConverter.h"
#include "java/util/List.h"
#include "org/orekit/propagation/conversion/PropagatorConverter.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AbstractPropagatorConverter::class$ = NULL;
        jmethodID *AbstractPropagatorConverter::mids$ = NULL;
        bool AbstractPropagatorConverter::live$ = false;

        jclass AbstractPropagatorConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AbstractPropagatorConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_convert_1713a56b457259e7] = env->getMethodID(cls, "convert", "(Ljava/util/List;Z[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_94ab750de1114aab] = env->getMethodID(cls, "convert", "(Ljava/util/List;ZLjava/util/List;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_ed6ecec71abaa7e7] = env->getMethodID(cls, "convert", "(Lorg/orekit/propagation/Propagator;DI[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_f1a727d7b3be4da6] = env->getMethodID(cls, "convert", "(Lorg/orekit/propagation/Propagator;DILjava/util/List;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_getAdaptedPropagator_605fbba6f75c4d5a] = env->getMethodID(cls, "getAdaptedPropagator", "()Lorg/orekit/propagation/Propagator;");
            mids$[mid_getEvaluations_d6ab429752e7c267] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getRMS_9981f74b2d109da6] = env->getMethodID(cls, "getRMS", "()D");
            mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getObjectiveFunction_0a4097997512db0b] = env->getMethodID(cls, "getObjectiveFunction", "()Lorg/hipparchus/analysis/MultivariateVectorFunction;");
            mids$[mid_getModel_b9638c47db64ddc7] = env->getMethodID(cls, "getModel", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");
            mids$[mid_getSample_d751c1a57012b438] = env->getMethodID(cls, "getSample", "()Ljava/util/List;");
            mids$[mid_isOnlyPosition_eee3de00fe971136] = env->getMethodID(cls, "isOnlyPosition", "()Z");
            mids$[mid_getTargetSize_d6ab429752e7c267] = env->getMethodID(cls, "getTargetSize", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::Propagator AbstractPropagatorConverter::convert(const ::java::util::List & a0, jboolean a1, const JArray< ::java::lang::String > & a2) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_1713a56b457259e7], a0.this$, a1, a2.this$));
        }

        ::org::orekit::propagation::Propagator AbstractPropagatorConverter::convert(const ::java::util::List & a0, jboolean a1, const ::java::util::List & a2) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_94ab750de1114aab], a0.this$, a1, a2.this$));
        }

        ::org::orekit::propagation::Propagator AbstractPropagatorConverter::convert(const ::org::orekit::propagation::Propagator & a0, jdouble a1, jint a2, const JArray< ::java::lang::String > & a3) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_ed6ecec71abaa7e7], a0.this$, a1, a2, a3.this$));
        }

        ::org::orekit::propagation::Propagator AbstractPropagatorConverter::convert(const ::org::orekit::propagation::Propagator & a0, jdouble a1, jint a2, const ::java::util::List & a3) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_f1a727d7b3be4da6], a0.this$, a1, a2, a3.this$));
        }

        ::org::orekit::propagation::Propagator AbstractPropagatorConverter::getAdaptedPropagator() const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_getAdaptedPropagator_605fbba6f75c4d5a]));
        }

        jint AbstractPropagatorConverter::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_d6ab429752e7c267]);
        }

        jdouble AbstractPropagatorConverter::getRMS() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRMS_9981f74b2d109da6]);
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
        static PyObject *t_AbstractPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractPropagatorConverter_convert(t_AbstractPropagatorConverter *self, PyObject *args);
        static PyObject *t_AbstractPropagatorConverter_getAdaptedPropagator(t_AbstractPropagatorConverter *self);
        static PyObject *t_AbstractPropagatorConverter_getEvaluations(t_AbstractPropagatorConverter *self);
        static PyObject *t_AbstractPropagatorConverter_getRMS(t_AbstractPropagatorConverter *self);
        static PyObject *t_AbstractPropagatorConverter_get__adaptedPropagator(t_AbstractPropagatorConverter *self, void *data);
        static PyObject *t_AbstractPropagatorConverter_get__evaluations(t_AbstractPropagatorConverter *self, void *data);
        static PyObject *t_AbstractPropagatorConverter_get__rMS(t_AbstractPropagatorConverter *self, void *data);
        static PyGetSetDef t_AbstractPropagatorConverter__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractPropagatorConverter, adaptedPropagator),
          DECLARE_GET_FIELD(t_AbstractPropagatorConverter, evaluations),
          DECLARE_GET_FIELD(t_AbstractPropagatorConverter, rMS),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractPropagatorConverter__methods_[] = {
          DECLARE_METHOD(t_AbstractPropagatorConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractPropagatorConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractPropagatorConverter, convert, METH_VARARGS),
          DECLARE_METHOD(t_AbstractPropagatorConverter, getAdaptedPropagator, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorConverter, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorConverter, getRMS, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractPropagatorConverter)[] = {
          { Py_tp_methods, t_AbstractPropagatorConverter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractPropagatorConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractPropagatorConverter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractPropagatorConverter, t_AbstractPropagatorConverter, AbstractPropagatorConverter);

        void t_AbstractPropagatorConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractPropagatorConverter), &PY_TYPE_DEF(AbstractPropagatorConverter), module, "AbstractPropagatorConverter", 0);
        }

        void t_AbstractPropagatorConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagatorConverter), "class_", make_descriptor(AbstractPropagatorConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagatorConverter), "wrapfn_", make_descriptor(t_AbstractPropagatorConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagatorConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractPropagatorConverter::initializeClass, 1)))
            return NULL;
          return t_AbstractPropagatorConverter::wrap_Object(AbstractPropagatorConverter(((t_AbstractPropagatorConverter *) arg)->object.this$));
        }
        static PyObject *t_AbstractPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractPropagatorConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractPropagatorConverter_convert(t_AbstractPropagatorConverter *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean a1;
              JArray< ::java::lang::String > a2((jobject) NULL);
              ::org::orekit::propagation::Propagator result((jobject) NULL);

              if (!parseArgs(args, "KZ[s", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
              {
                OBJ_CALL(result = self->object.convert(a0, a1, a2));
                return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
              }
            }
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean a1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::propagation::Propagator result((jobject) NULL);

              if (!parseArgs(args, "KZK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.convert(a0, a1, a2));
                return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              ::org::orekit::propagation::Propagator a0((jobject) NULL);
              jdouble a1;
              jint a2;
              JArray< ::java::lang::String > a3((jobject) NULL);
              ::org::orekit::propagation::Propagator result((jobject) NULL);

              if (!parseArgs(args, "kDI[s", ::org::orekit::propagation::Propagator::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.convert(a0, a1, a2, a3));
                return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::Propagator a0((jobject) NULL);
              jdouble a1;
              jint a2;
              ::java::util::List a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::Propagator result((jobject) NULL);

              if (!parseArgs(args, "kDIK", ::org::orekit::propagation::Propagator::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.convert(a0, a1, a2, a3));
                return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "convert", args);
          return NULL;
        }

        static PyObject *t_AbstractPropagatorConverter_getAdaptedPropagator(t_AbstractPropagatorConverter *self)
        {
          ::org::orekit::propagation::Propagator result((jobject) NULL);
          OBJ_CALL(result = self->object.getAdaptedPropagator());
          return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorConverter_getEvaluations(t_AbstractPropagatorConverter *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractPropagatorConverter_getRMS(t_AbstractPropagatorConverter *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRMS());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractPropagatorConverter_get__adaptedPropagator(t_AbstractPropagatorConverter *self, void *data)
        {
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getAdaptedPropagator());
          return ::org::orekit::propagation::t_Propagator::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorConverter_get__evaluations(t_AbstractPropagatorConverter *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractPropagatorConverter_get__rMS(t_AbstractPropagatorConverter *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRMS());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityData.h"
#include "org/orekit/utils/GenericTimeStampedCache.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/atmosphere/DTM2000InputParameters.h"
#include "java/lang/String.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00InputParameters.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *AbstractSolarActivityData::class$ = NULL;
            jmethodID *AbstractSolarActivityData::mids$ = NULL;
            bool AbstractSolarActivityData::live$ = false;

            jclass AbstractSolarActivityData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/AbstractSolarActivityData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_58a8f548b6ce5749] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader;Lorg/orekit/time/TimeScale;IDDD)V");
                mids$[mid_getCache_439a7de7b88c4031] = env->getMethodID(cls, "getCache", "()Lorg/orekit/utils/GenericTimeStampedCache;");
                mids$[mid_getMaxDate_80e11148db499dda] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getMinDate_80e11148db499dda] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getSupportedNames_d2c8eb4129821f0e] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
                mids$[mid_getUTC_5e2cac12ab8da943] = env->getMethodID(cls, "getUTC", "()Lorg/orekit/time/TimeScale;");
                mids$[mid_getLinearInterpolation_4a1a7410b0d113c9] = env->getMethodID(cls, "getLinearInterpolation", "(Lorg/orekit/models/earth/atmosphere/data/AbstractSolarActivityData$LocalSolarActivity;Ljava/util/function/Function;)D");
                mids$[mid_getLinearInterpolation_4c84cc0f5081f95d] = env->getMethodID(cls, "getLinearInterpolation", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/function/Function;)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractSolarActivityData::AbstractSolarActivityData(const ::org::orekit::data::DataSource & a0, const ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader & a1, const ::org::orekit::time::TimeScale & a2, jint a3, jdouble a4, jdouble a5, jdouble a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_58a8f548b6ce5749, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6)) {}

            ::org::orekit::utils::GenericTimeStampedCache AbstractSolarActivityData::getCache() const
            {
              return ::org::orekit::utils::GenericTimeStampedCache(env->callObjectMethod(this$, mids$[mid_getCache_439a7de7b88c4031]));
            }

            ::org::orekit::time::AbsoluteDate AbstractSolarActivityData::getMaxDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_80e11148db499dda]));
            }

            ::org::orekit::time::AbsoluteDate AbstractSolarActivityData::getMinDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_80e11148db499dda]));
            }

            ::java::lang::String AbstractSolarActivityData::getSupportedNames() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_d2c8eb4129821f0e]));
            }

            ::org::orekit::time::TimeScale AbstractSolarActivityData::getUTC() const
            {
              return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getUTC_5e2cac12ab8da943]));
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            static PyObject *t_AbstractSolarActivityData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSolarActivityData_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSolarActivityData_of_(t_AbstractSolarActivityData *self, PyObject *args);
            static int t_AbstractSolarActivityData_init_(t_AbstractSolarActivityData *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractSolarActivityData_getCache(t_AbstractSolarActivityData *self);
            static PyObject *t_AbstractSolarActivityData_getMaxDate(t_AbstractSolarActivityData *self);
            static PyObject *t_AbstractSolarActivityData_getMinDate(t_AbstractSolarActivityData *self);
            static PyObject *t_AbstractSolarActivityData_getSupportedNames(t_AbstractSolarActivityData *self);
            static PyObject *t_AbstractSolarActivityData_getUTC(t_AbstractSolarActivityData *self);
            static PyObject *t_AbstractSolarActivityData_get__cache(t_AbstractSolarActivityData *self, void *data);
            static PyObject *t_AbstractSolarActivityData_get__maxDate(t_AbstractSolarActivityData *self, void *data);
            static PyObject *t_AbstractSolarActivityData_get__minDate(t_AbstractSolarActivityData *self, void *data);
            static PyObject *t_AbstractSolarActivityData_get__supportedNames(t_AbstractSolarActivityData *self, void *data);
            static PyObject *t_AbstractSolarActivityData_get__uTC(t_AbstractSolarActivityData *self, void *data);
            static PyObject *t_AbstractSolarActivityData_get__parameters_(t_AbstractSolarActivityData *self, void *data);
            static PyGetSetDef t_AbstractSolarActivityData__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractSolarActivityData, cache),
              DECLARE_GET_FIELD(t_AbstractSolarActivityData, maxDate),
              DECLARE_GET_FIELD(t_AbstractSolarActivityData, minDate),
              DECLARE_GET_FIELD(t_AbstractSolarActivityData, supportedNames),
              DECLARE_GET_FIELD(t_AbstractSolarActivityData, uTC),
              DECLARE_GET_FIELD(t_AbstractSolarActivityData, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractSolarActivityData__methods_[] = {
              DECLARE_METHOD(t_AbstractSolarActivityData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSolarActivityData, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSolarActivityData, of_, METH_VARARGS),
              DECLARE_METHOD(t_AbstractSolarActivityData, getCache, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityData, getMaxDate, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityData, getMinDate, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityData, getSupportedNames, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityData, getUTC, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractSolarActivityData)[] = {
              { Py_tp_methods, t_AbstractSolarActivityData__methods_ },
              { Py_tp_init, (void *) t_AbstractSolarActivityData_init_ },
              { Py_tp_getset, t_AbstractSolarActivityData__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractSolarActivityData)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractSolarActivityData, t_AbstractSolarActivityData, AbstractSolarActivityData);
            PyObject *t_AbstractSolarActivityData::wrap_Object(const AbstractSolarActivityData& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_AbstractSolarActivityData::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractSolarActivityData *self = (t_AbstractSolarActivityData *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_AbstractSolarActivityData::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_AbstractSolarActivityData::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractSolarActivityData *self = (t_AbstractSolarActivityData *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_AbstractSolarActivityData::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractSolarActivityData), &PY_TYPE_DEF(AbstractSolarActivityData), module, "AbstractSolarActivityData", 0);
            }

            void t_AbstractSolarActivityData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityData), "class_", make_descriptor(AbstractSolarActivityData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityData), "wrapfn_", make_descriptor(t_AbstractSolarActivityData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityData), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractSolarActivityData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractSolarActivityData::initializeClass, 1)))
                return NULL;
              return t_AbstractSolarActivityData::wrap_Object(AbstractSolarActivityData(((t_AbstractSolarActivityData *) arg)->object.this$));
            }
            static PyObject *t_AbstractSolarActivityData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractSolarActivityData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractSolarActivityData_of_(t_AbstractSolarActivityData *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_AbstractSolarActivityData_init_(t_AbstractSolarActivityData *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::TimeScale a2((jobject) NULL);
              jint a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              AbstractSolarActivityData object((jobject) NULL);

              if (!parseArgs(args, "kKkIDDD", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_AbstractSolarActivityDataLoader::parameters_, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = AbstractSolarActivityData(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AbstractSolarActivityData_getCache(t_AbstractSolarActivityData *self)
            {
              ::org::orekit::utils::GenericTimeStampedCache result((jobject) NULL);
              OBJ_CALL(result = self->object.getCache());
              return ::org::orekit::utils::t_GenericTimeStampedCache::wrap_Object(result, self->parameters[0]);
            }

            static PyObject *t_AbstractSolarActivityData_getMaxDate(t_AbstractSolarActivityData *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractSolarActivityData_getMinDate(t_AbstractSolarActivityData *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractSolarActivityData_getSupportedNames(t_AbstractSolarActivityData *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getSupportedNames());
              return j2p(result);
            }

            static PyObject *t_AbstractSolarActivityData_getUTC(t_AbstractSolarActivityData *self)
            {
              ::org::orekit::time::TimeScale result((jobject) NULL);
              OBJ_CALL(result = self->object.getUTC());
              return ::org::orekit::time::t_TimeScale::wrap_Object(result);
            }
            static PyObject *t_AbstractSolarActivityData_get__parameters_(t_AbstractSolarActivityData *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AbstractSolarActivityData_get__cache(t_AbstractSolarActivityData *self, void *data)
            {
              ::org::orekit::utils::GenericTimeStampedCache value((jobject) NULL);
              OBJ_CALL(value = self->object.getCache());
              return ::org::orekit::utils::t_GenericTimeStampedCache::wrap_Object(value);
            }

            static PyObject *t_AbstractSolarActivityData_get__maxDate(t_AbstractSolarActivityData *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_AbstractSolarActivityData_get__minDate(t_AbstractSolarActivityData *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_AbstractSolarActivityData_get__supportedNames(t_AbstractSolarActivityData *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getSupportedNames());
              return j2p(value);
            }

            static PyObject *t_AbstractSolarActivityData_get__uTC(t_AbstractSolarActivityData *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/tdm/TimetagReference.h"
#include "org/orekit/files/ccsds/ndm/tdm/TimetagReference.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TimetagReference::class$ = NULL;
            jmethodID *TimetagReference::mids$ = NULL;
            bool TimetagReference::live$ = false;
            TimetagReference *TimetagReference::RECEIVE = NULL;
            TimetagReference *TimetagReference::TRANSMIT = NULL;

            jclass TimetagReference::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TimetagReference");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_1cefec88124fec5b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/TimetagReference;");
                mids$[mid_values_46350af090dd2d8f] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/TimetagReference;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                RECEIVE = new TimetagReference(env->getStaticObjectField(cls, "RECEIVE", "Lorg/orekit/files/ccsds/ndm/tdm/TimetagReference;"));
                TRANSMIT = new TimetagReference(env->getStaticObjectField(cls, "TRANSMIT", "Lorg/orekit/files/ccsds/ndm/tdm/TimetagReference;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            TimetagReference TimetagReference::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return TimetagReference(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1cefec88124fec5b], a0.this$));
            }

            JArray< TimetagReference > TimetagReference::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< TimetagReference >(env->callStaticObjectMethod(cls, mids$[mid_values_46350af090dd2d8f]));
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
          namespace tdm {
            static PyObject *t_TimetagReference_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TimetagReference_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TimetagReference_of_(t_TimetagReference *self, PyObject *args);
            static PyObject *t_TimetagReference_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_TimetagReference_values(PyTypeObject *type);
            static PyObject *t_TimetagReference_get__parameters_(t_TimetagReference *self, void *data);
            static PyGetSetDef t_TimetagReference__fields_[] = {
              DECLARE_GET_FIELD(t_TimetagReference, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TimetagReference__methods_[] = {
              DECLARE_METHOD(t_TimetagReference, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TimetagReference, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TimetagReference, of_, METH_VARARGS),
              DECLARE_METHOD(t_TimetagReference, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_TimetagReference, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TimetagReference)[] = {
              { Py_tp_methods, t_TimetagReference__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_TimetagReference__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TimetagReference)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(TimetagReference, t_TimetagReference, TimetagReference);
            PyObject *t_TimetagReference::wrap_Object(const TimetagReference& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TimetagReference::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TimetagReference *self = (t_TimetagReference *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_TimetagReference::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TimetagReference::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TimetagReference *self = (t_TimetagReference *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_TimetagReference::install(PyObject *module)
            {
              installType(&PY_TYPE(TimetagReference), &PY_TYPE_DEF(TimetagReference), module, "TimetagReference", 0);
            }

            void t_TimetagReference::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TimetagReference), "class_", make_descriptor(TimetagReference::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TimetagReference), "wrapfn_", make_descriptor(t_TimetagReference::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TimetagReference), "boxfn_", make_descriptor(boxObject));
              env->getClass(TimetagReference::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(TimetagReference), "RECEIVE", make_descriptor(t_TimetagReference::wrap_Object(*TimetagReference::RECEIVE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TimetagReference), "TRANSMIT", make_descriptor(t_TimetagReference::wrap_Object(*TimetagReference::TRANSMIT)));
            }

            static PyObject *t_TimetagReference_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TimetagReference::initializeClass, 1)))
                return NULL;
              return t_TimetagReference::wrap_Object(TimetagReference(((t_TimetagReference *) arg)->object.this$));
            }
            static PyObject *t_TimetagReference_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TimetagReference::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TimetagReference_of_(t_TimetagReference *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_TimetagReference_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              TimetagReference result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TimetagReference::valueOf(a0));
                return t_TimetagReference::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_TimetagReference_values(PyTypeObject *type)
            {
              JArray< TimetagReference > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TimetagReference::values());
              return JArray<jobject>(result.this$).wrap(t_TimetagReference::wrap_jobject);
            }
            static PyObject *t_TimetagReference_get__parameters_(t_TimetagReference *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouSatelliteType.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouSatelliteType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *BeidouSatelliteType::class$ = NULL;
            jmethodID *BeidouSatelliteType::mids$ = NULL;
            bool BeidouSatelliteType::live$ = false;
            BeidouSatelliteType *BeidouSatelliteType::GEO = NULL;
            BeidouSatelliteType *BeidouSatelliteType::IGSO = NULL;
            BeidouSatelliteType *BeidouSatelliteType::MEO = NULL;
            BeidouSatelliteType *BeidouSatelliteType::RESERVED = NULL;

            jclass BeidouSatelliteType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/BeidouSatelliteType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_91dfb4d49573d203] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;");
                mids$[mid_values_9bf97d332c4b5b16] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                GEO = new BeidouSatelliteType(env->getStaticObjectField(cls, "GEO", "Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;"));
                IGSO = new BeidouSatelliteType(env->getStaticObjectField(cls, "IGSO", "Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;"));
                MEO = new BeidouSatelliteType(env->getStaticObjectField(cls, "MEO", "Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;"));
                RESERVED = new BeidouSatelliteType(env->getStaticObjectField(cls, "RESERVED", "Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            BeidouSatelliteType BeidouSatelliteType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return BeidouSatelliteType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_91dfb4d49573d203], a0.this$));
            }

            JArray< BeidouSatelliteType > BeidouSatelliteType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< BeidouSatelliteType >(env->callStaticObjectMethod(cls, mids$[mid_values_9bf97d332c4b5b16]));
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
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_BeidouSatelliteType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BeidouSatelliteType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BeidouSatelliteType_of_(t_BeidouSatelliteType *self, PyObject *args);
            static PyObject *t_BeidouSatelliteType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_BeidouSatelliteType_values(PyTypeObject *type);
            static PyObject *t_BeidouSatelliteType_get__parameters_(t_BeidouSatelliteType *self, void *data);
            static PyGetSetDef t_BeidouSatelliteType__fields_[] = {
              DECLARE_GET_FIELD(t_BeidouSatelliteType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_BeidouSatelliteType__methods_[] = {
              DECLARE_METHOD(t_BeidouSatelliteType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouSatelliteType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouSatelliteType, of_, METH_VARARGS),
              DECLARE_METHOD(t_BeidouSatelliteType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_BeidouSatelliteType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(BeidouSatelliteType)[] = {
              { Py_tp_methods, t_BeidouSatelliteType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_BeidouSatelliteType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(BeidouSatelliteType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(BeidouSatelliteType, t_BeidouSatelliteType, BeidouSatelliteType);
            PyObject *t_BeidouSatelliteType::wrap_Object(const BeidouSatelliteType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_BeidouSatelliteType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_BeidouSatelliteType *self = (t_BeidouSatelliteType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_BeidouSatelliteType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_BeidouSatelliteType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_BeidouSatelliteType *self = (t_BeidouSatelliteType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_BeidouSatelliteType::install(PyObject *module)
            {
              installType(&PY_TYPE(BeidouSatelliteType), &PY_TYPE_DEF(BeidouSatelliteType), module, "BeidouSatelliteType", 0);
            }

            void t_BeidouSatelliteType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "class_", make_descriptor(BeidouSatelliteType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "wrapfn_", make_descriptor(t_BeidouSatelliteType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "boxfn_", make_descriptor(boxObject));
              env->getClass(BeidouSatelliteType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "GEO", make_descriptor(t_BeidouSatelliteType::wrap_Object(*BeidouSatelliteType::GEO)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "IGSO", make_descriptor(t_BeidouSatelliteType::wrap_Object(*BeidouSatelliteType::IGSO)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "MEO", make_descriptor(t_BeidouSatelliteType::wrap_Object(*BeidouSatelliteType::MEO)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "RESERVED", make_descriptor(t_BeidouSatelliteType::wrap_Object(*BeidouSatelliteType::RESERVED)));
            }

            static PyObject *t_BeidouSatelliteType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, BeidouSatelliteType::initializeClass, 1)))
                return NULL;
              return t_BeidouSatelliteType::wrap_Object(BeidouSatelliteType(((t_BeidouSatelliteType *) arg)->object.this$));
            }
            static PyObject *t_BeidouSatelliteType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, BeidouSatelliteType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_BeidouSatelliteType_of_(t_BeidouSatelliteType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_BeidouSatelliteType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              BeidouSatelliteType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType::valueOf(a0));
                return t_BeidouSatelliteType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_BeidouSatelliteType_values(PyTypeObject *type)
            {
              JArray< BeidouSatelliteType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType::values());
              return JArray<jobject>(result.this$).wrap(t_BeidouSatelliteType::wrap_jobject);
            }
            static PyObject *t_BeidouSatelliteType_get__parameters_(t_BeidouSatelliteType *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmParser.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmParser.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/tdm/Tdm.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmHeader.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TdmParser::class$ = NULL;
            jmethodID *TdmParser::mids$ = NULL;
            bool TdmParser::live$ = false;

            jclass TdmParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TdmParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_d36752ff95a8a459] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/tdm/Tdm;");
                mids$[mid_finalizeData_eee3de00fe971136] = env->getMethodID(cls, "finalizeData", "()Z");
                mids$[mid_finalizeHeader_eee3de00fe971136] = env->getMethodID(cls, "finalizeHeader", "()Z");
                mids$[mid_finalizeMetadata_eee3de00fe971136] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                mids$[mid_getHeader_d6fe92edb6cf381f] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/tdm/TdmHeader;");
                mids$[mid_inData_eee3de00fe971136] = env->getMethodID(cls, "inData", "()Z");
                mids$[mid_inHeader_eee3de00fe971136] = env->getMethodID(cls, "inHeader", "()Z");
                mids$[mid_inMetadata_eee3de00fe971136] = env->getMethodID(cls, "inMetadata", "()Z");
                mids$[mid_prepareData_eee3de00fe971136] = env->getMethodID(cls, "prepareData", "()Z");
                mids$[mid_prepareHeader_eee3de00fe971136] = env->getMethodID(cls, "prepareHeader", "()Z");
                mids$[mid_prepareMetadata_eee3de00fe971136] = env->getMethodID(cls, "prepareMetadata", "()Z");
                mids$[mid_reset_a23f5f7531d9b583] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::files::ccsds::ndm::tdm::Tdm TdmParser::build() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::Tdm(env->callObjectMethod(this$, mids$[mid_build_d36752ff95a8a459]));
            }

            jboolean TdmParser::finalizeData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeData_eee3de00fe971136]);
            }

            jboolean TdmParser::finalizeHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_eee3de00fe971136]);
            }

            jboolean TdmParser::finalizeMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_eee3de00fe971136]);
            }

            ::org::orekit::files::ccsds::ndm::tdm::TdmHeader TdmParser::getHeader() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::TdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_d6fe92edb6cf381f]));
            }

            jboolean TdmParser::inData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inData_eee3de00fe971136]);
            }

            jboolean TdmParser::inHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inHeader_eee3de00fe971136]);
            }

            jboolean TdmParser::inMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inMetadata_eee3de00fe971136]);
            }

            jboolean TdmParser::prepareData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareData_eee3de00fe971136]);
            }

            jboolean TdmParser::prepareHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareHeader_eee3de00fe971136]);
            }

            jboolean TdmParser::prepareMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_eee3de00fe971136]);
            }

            void TdmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_reset_a23f5f7531d9b583], a0.this$);
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
          namespace tdm {
            static PyObject *t_TdmParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmParser_of_(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_build(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_finalizeData(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_finalizeHeader(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_finalizeMetadata(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_getHeader(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_inData(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_inHeader(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_inMetadata(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_prepareData(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_prepareHeader(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_prepareMetadata(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_reset(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_get__header(t_TdmParser *self, void *data);
            static PyObject *t_TdmParser_get__parameters_(t_TdmParser *self, void *data);
            static PyGetSetDef t_TdmParser__fields_[] = {
              DECLARE_GET_FIELD(t_TdmParser, header),
              DECLARE_GET_FIELD(t_TdmParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TdmParser__methods_[] = {
              DECLARE_METHOD(t_TdmParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, build, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, finalizeData, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, finalizeHeader, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, finalizeMetadata, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, getHeader, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, inData, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, inHeader, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, inMetadata, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, prepareData, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, prepareHeader, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, prepareMetadata, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, reset, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TdmParser)[] = {
              { Py_tp_methods, t_TdmParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_TdmParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TdmParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser),
              NULL
            };

            DEFINE_TYPE(TdmParser, t_TdmParser, TdmParser);
            PyObject *t_TdmParser::wrap_Object(const TdmParser& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_TdmParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmParser *self = (t_TdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_TdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_TdmParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmParser *self = (t_TdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_TdmParser::install(PyObject *module)
            {
              installType(&PY_TYPE(TdmParser), &PY_TYPE_DEF(TdmParser), module, "TdmParser", 0);
            }

            void t_TdmParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmParser), "class_", make_descriptor(TdmParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmParser), "wrapfn_", make_descriptor(t_TdmParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_TdmParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TdmParser::initializeClass, 1)))
                return NULL;
              return t_TdmParser::wrap_Object(TdmParser(((t_TdmParser *) arg)->object.this$));
            }
            static PyObject *t_TdmParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TdmParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TdmParser_of_(t_TdmParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_TdmParser_build(t_TdmParser *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::Tdm result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.build());
                return ::org::orekit::files::ccsds::ndm::tdm::t_Tdm::wrap_Object(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "build", args, 2);
            }

            static PyObject *t_TdmParser_finalizeData(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.finalizeData());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "finalizeData", args, 2);
            }

            static PyObject *t_TdmParser_finalizeHeader(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.finalizeHeader());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "finalizeHeader", args, 2);
            }

            static PyObject *t_TdmParser_finalizeMetadata(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.finalizeMetadata());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "finalizeMetadata", args, 2);
            }

            static PyObject *t_TdmParser_getHeader(t_TdmParser *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmHeader result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::tdm::t_TdmHeader::wrap_Object(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "getHeader", args, 2);
            }

            static PyObject *t_TdmParser_inData(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.inData());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "inData", args, 2);
            }

            static PyObject *t_TdmParser_inHeader(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.inHeader());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "inHeader", args, 2);
            }

            static PyObject *t_TdmParser_inMetadata(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.inMetadata());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "inMetadata", args, 2);
            }

            static PyObject *t_TdmParser_prepareData(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.prepareData());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "prepareData", args, 2);
            }

            static PyObject *t_TdmParser_prepareHeader(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.prepareHeader());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "prepareHeader", args, 2);
            }

            static PyObject *t_TdmParser_prepareMetadata(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.prepareMetadata());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "prepareMetadata", args, 2);
            }

            static PyObject *t_TdmParser_reset(t_TdmParser *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
              {
                OBJ_CALL(self->object.reset(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "reset", args, 2);
            }
            static PyObject *t_TdmParser_get__parameters_(t_TdmParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_TdmParser_get__header(t_TdmParser *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmHeader value((jobject) NULL);
              OBJ_CALL(value = self->object.getHeader());
              return ::org::orekit::files::ccsds::ndm::tdm::t_TdmHeader::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/OpenMapRealMatrix.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/linear/OpenMapRealMatrix.h"
#include "org/hipparchus/linear/SparseRealMatrix.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *OpenMapRealMatrix::class$ = NULL;
      jmethodID *OpenMapRealMatrix::mids$ = NULL;
      bool OpenMapRealMatrix::live$ = false;

      jclass OpenMapRealMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/OpenMapRealMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b5d23e6c0858e8ed] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_add_6d4f58a47876c3d5] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/OpenMapRealMatrix;)Lorg/hipparchus/linear/OpenMapRealMatrix;");
          mids$[mid_addToEntry_e98d7b3e971b6087] = env->getMethodID(cls, "addToEntry", "(IID)V");
          mids$[mid_copy_c31160760f4aa535] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/OpenMapRealMatrix;");
          mids$[mid_createMatrix_7347dc2e57416f13] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/OpenMapRealMatrix;");
          mids$[mid_getColumnDimension_d6ab429752e7c267] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getEntry_6d920aab27f0a3d2] = env->getMethodID(cls, "getEntry", "(II)D");
          mids$[mid_getRowDimension_d6ab429752e7c267] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_multiply_6d4f58a47876c3d5] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/OpenMapRealMatrix;)Lorg/hipparchus/linear/OpenMapRealMatrix;");
          mids$[mid_multiply_5a8a8185eb309db7] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiplyEntry_e98d7b3e971b6087] = env->getMethodID(cls, "multiplyEntry", "(IID)V");
          mids$[mid_multiplyTransposed_5a8a8185eb309db7] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_setEntry_e98d7b3e971b6087] = env->getMethodID(cls, "setEntry", "(IID)V");
          mids$[mid_subtract_6d4f58a47876c3d5] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/OpenMapRealMatrix;)Lorg/hipparchus/linear/OpenMapRealMatrix;");
          mids$[mid_subtract_ef7a830267ee3f64] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/OpenMapRealMatrix;");
          mids$[mid_transposeMultiply_5a8a8185eb309db7] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OpenMapRealMatrix::OpenMapRealMatrix(jint a0, jint a1) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_b5d23e6c0858e8ed, a0, a1)) {}

      OpenMapRealMatrix OpenMapRealMatrix::add(const OpenMapRealMatrix & a0) const
      {
        return OpenMapRealMatrix(env->callObjectMethod(this$, mids$[mid_add_6d4f58a47876c3d5], a0.this$));
      }

      void OpenMapRealMatrix::addToEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_e98d7b3e971b6087], a0, a1, a2);
      }

      OpenMapRealMatrix OpenMapRealMatrix::copy() const
      {
        return OpenMapRealMatrix(env->callObjectMethod(this$, mids$[mid_copy_c31160760f4aa535]));
      }

      OpenMapRealMatrix OpenMapRealMatrix::createMatrix(jint a0, jint a1) const
      {
        return OpenMapRealMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_7347dc2e57416f13], a0, a1));
      }

      jint OpenMapRealMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_d6ab429752e7c267]);
      }

      jdouble OpenMapRealMatrix::getEntry(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_6d920aab27f0a3d2], a0, a1);
      }

      jint OpenMapRealMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_d6ab429752e7c267]);
      }

      OpenMapRealMatrix OpenMapRealMatrix::multiply(const OpenMapRealMatrix & a0) const
      {
        return OpenMapRealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_6d4f58a47876c3d5], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix OpenMapRealMatrix::multiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_5a8a8185eb309db7], a0.this$));
      }

      void OpenMapRealMatrix::multiplyEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_e98d7b3e971b6087], a0, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix OpenMapRealMatrix::multiplyTransposed(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_5a8a8185eb309db7], a0.this$));
      }

      void OpenMapRealMatrix::setEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_e98d7b3e971b6087], a0, a1, a2);
      }

      OpenMapRealMatrix OpenMapRealMatrix::subtract(const OpenMapRealMatrix & a0) const
      {
        return OpenMapRealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_6d4f58a47876c3d5], a0.this$));
      }

      OpenMapRealMatrix OpenMapRealMatrix::subtract(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return OpenMapRealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_ef7a830267ee3f64], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix OpenMapRealMatrix::transposeMultiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_5a8a8185eb309db7], a0.this$));
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
      static PyObject *t_OpenMapRealMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenMapRealMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OpenMapRealMatrix_init_(t_OpenMapRealMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OpenMapRealMatrix_add(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_addToEntry(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_copy(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_createMatrix(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_getColumnDimension(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_getEntry(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_getRowDimension(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_multiply(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_multiplyEntry(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_multiplyTransposed(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_setEntry(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_subtract(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_transposeMultiply(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_get__columnDimension(t_OpenMapRealMatrix *self, void *data);
      static PyObject *t_OpenMapRealMatrix_get__rowDimension(t_OpenMapRealMatrix *self, void *data);
      static PyGetSetDef t_OpenMapRealMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_OpenMapRealMatrix, columnDimension),
        DECLARE_GET_FIELD(t_OpenMapRealMatrix, rowDimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OpenMapRealMatrix__methods_[] = {
        DECLARE_METHOD(t_OpenMapRealMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenMapRealMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenMapRealMatrix, add, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, multiply, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, subtract, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, transposeMultiply, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OpenMapRealMatrix)[] = {
        { Py_tp_methods, t_OpenMapRealMatrix__methods_ },
        { Py_tp_init, (void *) t_OpenMapRealMatrix_init_ },
        { Py_tp_getset, t_OpenMapRealMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OpenMapRealMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractRealMatrix),
        NULL
      };

      DEFINE_TYPE(OpenMapRealMatrix, t_OpenMapRealMatrix, OpenMapRealMatrix);

      void t_OpenMapRealMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(OpenMapRealMatrix), &PY_TYPE_DEF(OpenMapRealMatrix), module, "OpenMapRealMatrix", 0);
      }

      void t_OpenMapRealMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenMapRealMatrix), "class_", make_descriptor(OpenMapRealMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenMapRealMatrix), "wrapfn_", make_descriptor(t_OpenMapRealMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenMapRealMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OpenMapRealMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OpenMapRealMatrix::initializeClass, 1)))
          return NULL;
        return t_OpenMapRealMatrix::wrap_Object(OpenMapRealMatrix(((t_OpenMapRealMatrix *) arg)->object.this$));
      }
      static PyObject *t_OpenMapRealMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OpenMapRealMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OpenMapRealMatrix_init_(t_OpenMapRealMatrix *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jint a1;
        OpenMapRealMatrix object((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          INT_CALL(object = OpenMapRealMatrix(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OpenMapRealMatrix_add(t_OpenMapRealMatrix *self, PyObject *args)
      {
        OpenMapRealMatrix a0((jobject) NULL);
        OpenMapRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", OpenMapRealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_OpenMapRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_addToEntry(t_OpenMapRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_copy(t_OpenMapRealMatrix *self, PyObject *args)
      {
        OpenMapRealMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return t_OpenMapRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_createMatrix(t_OpenMapRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        OpenMapRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return t_OpenMapRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_getColumnDimension(t_OpenMapRealMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_getEntry(t_OpenMapRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_getRowDimension(t_OpenMapRealMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_multiply(t_OpenMapRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            OpenMapRealMatrix a0((jobject) NULL);
            OpenMapRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", OpenMapRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_OpenMapRealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "multiply", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_multiplyEntry(t_OpenMapRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_multiplyTransposed(t_OpenMapRealMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.multiplyTransposed(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_setEntry(t_OpenMapRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_subtract(t_OpenMapRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            OpenMapRealMatrix a0((jobject) NULL);
            OpenMapRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", OpenMapRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_OpenMapRealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            OpenMapRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_OpenMapRealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_transposeMultiply(t_OpenMapRealMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.transposeMultiply(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_get__columnDimension(t_OpenMapRealMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_OpenMapRealMatrix_get__rowDimension(t_OpenMapRealMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/FDOA.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/FDOA.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *FDOA::class$ = NULL;
        jmethodID *FDOA::mids$ = NULL;
        bool FDOA::live$ = false;
        ::java::lang::String *FDOA::MEASUREMENT_TYPE = NULL;

        jclass FDOA::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/FDOA");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_875b69f97a83cce2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;DLorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getPrimeStation_f8d3ef5d49da0d87] = env->getMethodID(cls, "getPrimeStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_getSecondStation_f8d3ef5d49da0d87] = env->getMethodID(cls, "getSecondStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_59954f62fc64aef2] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_eda25b8c88791d9a] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FDOA::FDOA(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, jdouble a2, const ::org::orekit::time::AbsoluteDate & a3, jdouble a4, jdouble a5, jdouble a6, const ::org::orekit::estimation::measurements::ObservableSatellite & a7) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_875b69f97a83cce2, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6, a7.this$)) {}

        ::org::orekit::estimation::measurements::GroundStation FDOA::getPrimeStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getPrimeStation_f8d3ef5d49da0d87]));
        }

        ::org::orekit::estimation::measurements::GroundStation FDOA::getSecondStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getSecondStation_f8d3ef5d49da0d87]));
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
        static PyObject *t_FDOA_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDOA_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDOA_of_(t_FDOA *self, PyObject *args);
        static int t_FDOA_init_(t_FDOA *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FDOA_getPrimeStation(t_FDOA *self);
        static PyObject *t_FDOA_getSecondStation(t_FDOA *self);
        static PyObject *t_FDOA_get__primeStation(t_FDOA *self, void *data);
        static PyObject *t_FDOA_get__secondStation(t_FDOA *self, void *data);
        static PyObject *t_FDOA_get__parameters_(t_FDOA *self, void *data);
        static PyGetSetDef t_FDOA__fields_[] = {
          DECLARE_GET_FIELD(t_FDOA, primeStation),
          DECLARE_GET_FIELD(t_FDOA, secondStation),
          DECLARE_GET_FIELD(t_FDOA, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FDOA__methods_[] = {
          DECLARE_METHOD(t_FDOA, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDOA, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDOA, of_, METH_VARARGS),
          DECLARE_METHOD(t_FDOA, getPrimeStation, METH_NOARGS),
          DECLARE_METHOD(t_FDOA, getSecondStation, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FDOA)[] = {
          { Py_tp_methods, t_FDOA__methods_ },
          { Py_tp_init, (void *) t_FDOA_init_ },
          { Py_tp_getset, t_FDOA__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FDOA)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(FDOA, t_FDOA, FDOA);
        PyObject *t_FDOA::wrap_Object(const FDOA& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FDOA::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FDOA *self = (t_FDOA *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FDOA::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FDOA::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FDOA *self = (t_FDOA *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FDOA::install(PyObject *module)
        {
          installType(&PY_TYPE(FDOA), &PY_TYPE_DEF(FDOA), module, "FDOA", 0);
        }

        void t_FDOA::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDOA), "class_", make_descriptor(FDOA::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDOA), "wrapfn_", make_descriptor(t_FDOA::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDOA), "boxfn_", make_descriptor(boxObject));
          env->getClass(FDOA::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDOA), "MEASUREMENT_TYPE", make_descriptor(j2p(*FDOA::MEASUREMENT_TYPE)));
        }

        static PyObject *t_FDOA_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FDOA::initializeClass, 1)))
            return NULL;
          return t_FDOA::wrap_Object(FDOA(((t_FDOA *) arg)->object.this$));
        }
        static PyObject *t_FDOA_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FDOA::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FDOA_of_(t_FDOA *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FDOA_init_(t_FDOA *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
          jdouble a2;
          ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
          jdouble a4;
          jdouble a5;
          jdouble a6;
          ::org::orekit::estimation::measurements::ObservableSatellite a7((jobject) NULL);
          FDOA object((jobject) NULL);

          if (!parseArgs(args, "kkDkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            INT_CALL(object = FDOA(a0, a1, a2, a3, a4, a5, a6, a7));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(FDOA);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FDOA_getPrimeStation(t_FDOA *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimeStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }

        static PyObject *t_FDOA_getSecondStation(t_FDOA *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }
        static PyObject *t_FDOA_get__parameters_(t_FDOA *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FDOA_get__primeStation(t_FDOA *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimeStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }

        static PyObject *t_FDOA_get__secondStation(t_FDOA *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadata.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AdmMetadataKey::class$ = NULL;
            jmethodID *AdmMetadataKey::mids$ = NULL;
            bool AdmMetadataKey::live$ = false;
            AdmMetadataKey *AdmMetadataKey::CENTER_NAME = NULL;
            AdmMetadataKey *AdmMetadataKey::OBJECT_NAME = NULL;

            jclass AdmMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AdmMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_f4d574d3ad330d8c] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/AdmMetadata;)Z");
                mids$[mid_valueOf_c8088b8b34807ec2] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/AdmMetadataKey;");
                mids$[mid_values_b24ce319e3b2ab76] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/AdmMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CENTER_NAME = new AdmMetadataKey(env->getStaticObjectField(cls, "CENTER_NAME", "Lorg/orekit/files/ccsds/ndm/adm/AdmMetadataKey;"));
                OBJECT_NAME = new AdmMetadataKey(env->getStaticObjectField(cls, "OBJECT_NAME", "Lorg/orekit/files/ccsds/ndm/adm/AdmMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean AdmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::AdmMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_f4d574d3ad330d8c], a0.this$, a1.this$, a2.this$);
            }

            AdmMetadataKey AdmMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AdmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c8088b8b34807ec2], a0.this$));
            }

            JArray< AdmMetadataKey > AdmMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AdmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_b24ce319e3b2ab76]));
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
            static PyObject *t_AdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmMetadataKey_of_(t_AdmMetadataKey *self, PyObject *args);
            static PyObject *t_AdmMetadataKey_process(t_AdmMetadataKey *self, PyObject *args);
            static PyObject *t_AdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AdmMetadataKey_values(PyTypeObject *type);
            static PyObject *t_AdmMetadataKey_get__parameters_(t_AdmMetadataKey *self, void *data);
            static PyGetSetDef t_AdmMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_AdmMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdmMetadataKey__methods_[] = {
              DECLARE_METHOD(t_AdmMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_AdmMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_AdmMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AdmMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdmMetadataKey)[] = {
              { Py_tp_methods, t_AdmMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AdmMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdmMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AdmMetadataKey, t_AdmMetadataKey, AdmMetadataKey);
            PyObject *t_AdmMetadataKey::wrap_Object(const AdmMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdmMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdmMetadataKey *self = (t_AdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AdmMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdmMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdmMetadataKey *self = (t_AdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AdmMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(AdmMetadataKey), &PY_TYPE_DEF(AdmMetadataKey), module, "AdmMetadataKey", 0);
            }

            void t_AdmMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadataKey), "class_", make_descriptor(AdmMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadataKey), "wrapfn_", make_descriptor(t_AdmMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(AdmMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadataKey), "CENTER_NAME", make_descriptor(t_AdmMetadataKey::wrap_Object(*AdmMetadataKey::CENTER_NAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadataKey), "OBJECT_NAME", make_descriptor(t_AdmMetadataKey::wrap_Object(*AdmMetadataKey::OBJECT_NAME)));
            }

            static PyObject *t_AdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdmMetadataKey::initializeClass, 1)))
                return NULL;
              return t_AdmMetadataKey::wrap_Object(AdmMetadataKey(((t_AdmMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_AdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdmMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AdmMetadataKey_of_(t_AdmMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AdmMetadataKey_process(t_AdmMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::adm::AdmMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::AdmMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_AdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AdmMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::AdmMetadataKey::valueOf(a0));
                return t_AdmMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AdmMetadataKey_values(PyTypeObject *type)
            {
              JArray< AdmMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::AdmMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_AdmMetadataKey::wrap_jobject);
            }
            static PyObject *t_AdmMetadataKey_get__parameters_(t_AdmMetadataKey *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Sinc.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Sinc::class$ = NULL;
        jmethodID *Sinc::mids$ = NULL;
        bool Sinc::live$ = false;

        jclass Sinc::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Sinc");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_b35db77cae58639e] = env->getMethodID(cls, "<init>", "(Z)V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Sinc::Sinc() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        Sinc::Sinc(jboolean a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b35db77cae58639e, a0)) {}

        jdouble Sinc::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Sinc::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_ba85b555c6f0b809], a0.this$));
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
        static PyObject *t_Sinc_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Sinc_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Sinc_init_(t_Sinc *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Sinc_value(t_Sinc *self, PyObject *args);

        static PyMethodDef t_Sinc__methods_[] = {
          DECLARE_METHOD(t_Sinc, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sinc, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sinc, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Sinc)[] = {
          { Py_tp_methods, t_Sinc__methods_ },
          { Py_tp_init, (void *) t_Sinc_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Sinc)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Sinc, t_Sinc, Sinc);

        void t_Sinc::install(PyObject *module)
        {
          installType(&PY_TYPE(Sinc), &PY_TYPE_DEF(Sinc), module, "Sinc", 0);
        }

        void t_Sinc::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sinc), "class_", make_descriptor(Sinc::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sinc), "wrapfn_", make_descriptor(t_Sinc::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sinc), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Sinc_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Sinc::initializeClass, 1)))
            return NULL;
          return t_Sinc::wrap_Object(Sinc(((t_Sinc *) arg)->object.this$));
        }
        static PyObject *t_Sinc_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Sinc::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Sinc_init_(t_Sinc *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              Sinc object((jobject) NULL);

              INT_CALL(object = Sinc());
              self->object = object;
              break;
            }
           case 1:
            {
              jboolean a0;
              Sinc object((jobject) NULL);

              if (!parseArgs(args, "Z", &a0))
              {
                INT_CALL(object = Sinc(a0));
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

        static PyObject *t_Sinc_value(t_Sinc *self, PyObject *args)
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
#include "org/hipparchus/analysis/function/Constant.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Constant::class$ = NULL;
        jmethodID *Constant::mids$ = NULL;
        bool Constant::live$ = false;

        jclass Constant::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Constant");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Constant::Constant(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        jdouble Constant::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Constant::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_ba85b555c6f0b809], a0.this$));
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
        static PyObject *t_Constant_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Constant_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Constant_init_(t_Constant *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Constant_value(t_Constant *self, PyObject *args);

        static PyMethodDef t_Constant__methods_[] = {
          DECLARE_METHOD(t_Constant, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Constant, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Constant, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Constant)[] = {
          { Py_tp_methods, t_Constant__methods_ },
          { Py_tp_init, (void *) t_Constant_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Constant)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Constant, t_Constant, Constant);

        void t_Constant::install(PyObject *module)
        {
          installType(&PY_TYPE(Constant), &PY_TYPE_DEF(Constant), module, "Constant", 0);
        }

        void t_Constant::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Constant), "class_", make_descriptor(Constant::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Constant), "wrapfn_", make_descriptor(t_Constant::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Constant), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Constant_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Constant::initializeClass, 1)))
            return NULL;
          return t_Constant::wrap_Object(Constant(((t_Constant *) arg)->object.this$));
        }
        static PyObject *t_Constant_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Constant::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Constant_init_(t_Constant *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          Constant object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = Constant(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Constant_value(t_Constant *self, PyObject *args)
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
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnits.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnits.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *RangeUnits::class$ = NULL;
            jmethodID *RangeUnits::mids$ = NULL;
            bool RangeUnits::live$ = false;
            RangeUnits *RangeUnits::RU = NULL;
            RangeUnits *RangeUnits::km = NULL;
            RangeUnits *RangeUnits::s = NULL;

            jclass RangeUnits::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/RangeUnits");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_19be86383733bb92] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;");
                mids$[mid_values_b82ff3e40f12f89a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                RU = new RangeUnits(env->getStaticObjectField(cls, "RU", "Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;"));
                km = new RangeUnits(env->getStaticObjectField(cls, "km", "Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;"));
                s = new RangeUnits(env->getStaticObjectField(cls, "s", "Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RangeUnits RangeUnits::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return RangeUnits(env->callStaticObjectMethod(cls, mids$[mid_valueOf_19be86383733bb92], a0.this$));
            }

            JArray< RangeUnits > RangeUnits::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< RangeUnits >(env->callStaticObjectMethod(cls, mids$[mid_values_b82ff3e40f12f89a]));
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
          namespace tdm {
            static PyObject *t_RangeUnits_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RangeUnits_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RangeUnits_of_(t_RangeUnits *self, PyObject *args);
            static PyObject *t_RangeUnits_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_RangeUnits_values(PyTypeObject *type);
            static PyObject *t_RangeUnits_get__parameters_(t_RangeUnits *self, void *data);
            static PyGetSetDef t_RangeUnits__fields_[] = {
              DECLARE_GET_FIELD(t_RangeUnits, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_RangeUnits__methods_[] = {
              DECLARE_METHOD(t_RangeUnits, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RangeUnits, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RangeUnits, of_, METH_VARARGS),
              DECLARE_METHOD(t_RangeUnits, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RangeUnits, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RangeUnits)[] = {
              { Py_tp_methods, t_RangeUnits__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_RangeUnits__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RangeUnits)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(RangeUnits, t_RangeUnits, RangeUnits);
            PyObject *t_RangeUnits::wrap_Object(const RangeUnits& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RangeUnits::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RangeUnits *self = (t_RangeUnits *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_RangeUnits::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RangeUnits::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RangeUnits *self = (t_RangeUnits *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_RangeUnits::install(PyObject *module)
            {
              installType(&PY_TYPE(RangeUnits), &PY_TYPE_DEF(RangeUnits), module, "RangeUnits", 0);
            }

            void t_RangeUnits::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnits), "class_", make_descriptor(RangeUnits::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnits), "wrapfn_", make_descriptor(t_RangeUnits::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnits), "boxfn_", make_descriptor(boxObject));
              env->getClass(RangeUnits::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnits), "RU", make_descriptor(t_RangeUnits::wrap_Object(*RangeUnits::RU)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnits), "km", make_descriptor(t_RangeUnits::wrap_Object(*RangeUnits::km)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnits), "s", make_descriptor(t_RangeUnits::wrap_Object(*RangeUnits::s)));
            }

            static PyObject *t_RangeUnits_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RangeUnits::initializeClass, 1)))
                return NULL;
              return t_RangeUnits::wrap_Object(RangeUnits(((t_RangeUnits *) arg)->object.this$));
            }
            static PyObject *t_RangeUnits_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RangeUnits::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_RangeUnits_of_(t_RangeUnits *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_RangeUnits_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              RangeUnits result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::RangeUnits::valueOf(a0));
                return t_RangeUnits::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_RangeUnits_values(PyTypeObject *type)
            {
              JArray< RangeUnits > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::RangeUnits::values());
              return JArray<jobject>(result.this$).wrap(t_RangeUnits::wrap_jobject);
            }
            static PyObject *t_RangeUnits_get__parameters_(t_RangeUnits *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/AklToussaintHeuristic.h"
#include "java/util/Collection.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {

            ::java::lang::Class *AklToussaintHeuristic::class$ = NULL;
            jmethodID *AklToussaintHeuristic::mids$ = NULL;
            bool AklToussaintHeuristic::live$ = false;

            jclass AklToussaintHeuristic::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/hull/AklToussaintHeuristic");

                mids$ = new jmethodID[max_mid];
                mids$[mid_reducePoints_ca6e223ef3eef34f] = env->getStaticMethodID(cls, "reducePoints", "(Ljava/util/Collection;)Ljava/util/Collection;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::util::Collection AklToussaintHeuristic::reducePoints(const ::java::util::Collection & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ::java::util::Collection(env->callStaticObjectMethod(cls, mids$[mid_reducePoints_ca6e223ef3eef34f], a0.this$));
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
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {
            static PyObject *t_AklToussaintHeuristic_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AklToussaintHeuristic_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AklToussaintHeuristic_reducePoints(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_AklToussaintHeuristic__methods_[] = {
              DECLARE_METHOD(t_AklToussaintHeuristic, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AklToussaintHeuristic, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AklToussaintHeuristic, reducePoints, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AklToussaintHeuristic)[] = {
              { Py_tp_methods, t_AklToussaintHeuristic__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AklToussaintHeuristic)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AklToussaintHeuristic, t_AklToussaintHeuristic, AklToussaintHeuristic);

            void t_AklToussaintHeuristic::install(PyObject *module)
            {
              installType(&PY_TYPE(AklToussaintHeuristic), &PY_TYPE_DEF(AklToussaintHeuristic), module, "AklToussaintHeuristic", 0);
            }

            void t_AklToussaintHeuristic::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AklToussaintHeuristic), "class_", make_descriptor(AklToussaintHeuristic::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AklToussaintHeuristic), "wrapfn_", make_descriptor(t_AklToussaintHeuristic::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AklToussaintHeuristic), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AklToussaintHeuristic_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AklToussaintHeuristic::initializeClass, 1)))
                return NULL;
              return t_AklToussaintHeuristic::wrap_Object(AklToussaintHeuristic(((t_AklToussaintHeuristic *) arg)->object.this$));
            }
            static PyObject *t_AklToussaintHeuristic_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AklToussaintHeuristic::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AklToussaintHeuristic_reducePoints(PyTypeObject *type, PyObject *arg)
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::Collection result((jobject) NULL);

              if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::hull::AklToussaintHeuristic::reducePoints(a0));
                return ::java::util::t_Collection::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D));
              }

              PyErr_SetArgsError(type, "reducePoints", arg);
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
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
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
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::differentiation::Derivative UnivariateDifferentiableFunction::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_ba85b555c6f0b809], a0.this$));
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
#include "org/orekit/orbits/EquinoctialOrbit.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/EquinoctialOrbit.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *EquinoctialOrbit::class$ = NULL;
      jmethodID *EquinoctialOrbit::mids$ = NULL;
      bool EquinoctialOrbit::live$ = false;

      jclass EquinoctialOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/EquinoctialOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_17534ef58ef3aaef] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_a8e6ee721e0d6799] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;D)V");
          mids$[mid_init$_78122b2ba50ff4ac] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_b2d612c221d7654c] = env->getMethodID(cls, "<init>", "(DDDDDDLorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_5192e636016a7ffa] = env->getMethodID(cls, "<init>", "(DDDDDDDDDDDDLorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_addKeplerContribution_3ef35668c0b1580f] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V");
          mids$[mid_eccentricToMean_db06d8c3fc3d9670] = env->getStaticMethodID(cls, "eccentricToMean", "(DDD)D");
          mids$[mid_eccentricToTrue_db06d8c3fc3d9670] = env->getStaticMethodID(cls, "eccentricToTrue", "(DDD)D");
          mids$[mid_getA_9981f74b2d109da6] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getADot_9981f74b2d109da6] = env->getMethodID(cls, "getADot", "()D");
          mids$[mid_getCachedPositionAngleType_a6db4e6edefda4be] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getE_9981f74b2d109da6] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEDot_9981f74b2d109da6] = env->getMethodID(cls, "getEDot", "()D");
          mids$[mid_getEquinoctialEx_9981f74b2d109da6] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialExDot_9981f74b2d109da6] = env->getMethodID(cls, "getEquinoctialExDot", "()D");
          mids$[mid_getEquinoctialEy_9981f74b2d109da6] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getEquinoctialEyDot_9981f74b2d109da6] = env->getMethodID(cls, "getEquinoctialEyDot", "()D");
          mids$[mid_getHx_9981f74b2d109da6] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHxDot_9981f74b2d109da6] = env->getMethodID(cls, "getHxDot", "()D");
          mids$[mid_getHy_9981f74b2d109da6] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getHyDot_9981f74b2d109da6] = env->getMethodID(cls, "getHyDot", "()D");
          mids$[mid_getI_9981f74b2d109da6] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getIDot_9981f74b2d109da6] = env->getMethodID(cls, "getIDot", "()D");
          mids$[mid_getL_d70fe653db6c6bd3] = env->getMethodID(cls, "getL", "(Lorg/orekit/orbits/PositionAngleType;)D");
          mids$[mid_getLDot_d70fe653db6c6bd3] = env->getMethodID(cls, "getLDot", "(Lorg/orekit/orbits/PositionAngleType;)D");
          mids$[mid_getLE_9981f74b2d109da6] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_9981f74b2d109da6] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLM_9981f74b2d109da6] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLMDot_9981f74b2d109da6] = env->getMethodID(cls, "getLMDot", "()D");
          mids$[mid_getLv_9981f74b2d109da6] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getLvDot_9981f74b2d109da6] = env->getMethodID(cls, "getLvDot", "()D");
          mids$[mid_getType_495f818d3570b7f5] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasRates_eee3de00fe971136] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_meanToEccentric_db06d8c3fc3d9670] = env->getStaticMethodID(cls, "meanToEccentric", "(DDD)D");
          mids$[mid_removeRates_1d03f68d0241dac0] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/EquinoctialOrbit;");
          mids$[mid_shiftedBy_deb69461719629e0] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/EquinoctialOrbit;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_trueToEccentric_db06d8c3fc3d9670] = env->getStaticMethodID(cls, "trueToEccentric", "(DDD)D");
          mids$[mid_initPosition_032312bdeb3f2f93] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_initPVCoordinates_674031698a428ce8] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_computeJacobianMeanWrtCartesian_eda3f19b8225f78f] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[D");
          mids$[mid_computeJacobianEccentricWrtCartesian_eda3f19b8225f78f] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[D");
          mids$[mid_computeJacobianTrueWrtCartesian_eda3f19b8225f78f] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EquinoctialOrbit::EquinoctialOrbit(const ::org::orekit::orbits::Orbit & a0) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_17534ef58ef3aaef, a0.this$)) {}

      EquinoctialOrbit::EquinoctialOrbit(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, jdouble a2) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_a8e6ee721e0d6799, a0.this$, a1.this$, a2)) {}

      EquinoctialOrbit::EquinoctialOrbit(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_78122b2ba50ff4ac, a0.this$, a1.this$, a2.this$, a3)) {}

      EquinoctialOrbit::EquinoctialOrbit(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::orbits::PositionAngleType & a6, const ::org::orekit::frames::Frame & a7, const ::org::orekit::time::AbsoluteDate & a8, jdouble a9) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_b2d612c221d7654c, a0, a1, a2, a3, a4, a5, a6.this$, a7.this$, a8.this$, a9)) {}

      EquinoctialOrbit::EquinoctialOrbit(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, const ::org::orekit::orbits::PositionAngleType & a12, const ::org::orekit::frames::Frame & a13, const ::org::orekit::time::AbsoluteDate & a14, jdouble a15) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_5192e636016a7ffa, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12.this$, a13.this$, a14.this$, a15)) {}

      void EquinoctialOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, jdouble a1, const JArray< jdouble > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_3ef35668c0b1580f], a0.this$, a1, a2.this$);
      }

      jdouble EquinoctialOrbit::eccentricToMean(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_eccentricToMean_db06d8c3fc3d9670], a0, a1, a2);
      }

      jdouble EquinoctialOrbit::eccentricToTrue(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_eccentricToTrue_db06d8c3fc3d9670], a0, a1, a2);
      }

      jdouble EquinoctialOrbit::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_9981f74b2d109da6]);
      }

      jdouble EquinoctialOrbit::getADot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getADot_9981f74b2d109da6]);
      }

      ::org::orekit::orbits::PositionAngleType EquinoctialOrbit::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_a6db4e6edefda4be]));
      }

      jdouble EquinoctialOrbit::getE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getE_9981f74b2d109da6]);
      }

      jdouble EquinoctialOrbit::getEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEDot_9981f74b2d109da6]);
      }

      jdouble EquinoctialOrbit::getEquinoctialEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEx_9981f74b2d109da6]);
      }

      jdouble EquinoctialOrbit::getEquinoctialExDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialExDot_9981f74b2d109da6]);
      }

      jdouble EquinoctialOrbit::getEquinoctialEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEy_9981f74b2d109da6]);
      }

      jdouble EquinoctialOrbit::getEquinoctialEyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEyDot_9981f74b2d109da6]);
      }

      jdouble EquinoctialOrbit::getHx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHx_9981f74b2d109da6]);
      }

      jdouble EquinoctialOrbit::getHxDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHxDot_9981f74b2d109da6]);
      }

      jdouble EquinoctialOrbit::getHy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHy_9981f74b2d109da6]);
      }

      jdouble EquinoctialOrbit::getHyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHyDot_9981f74b2d109da6]);
      }

      jdouble EquinoctialOrbit::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_9981f74b2d109da6]);
      }

      jdouble EquinoctialOrbit::getIDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getIDot_9981f74b2d109da6]);
      }

      jdouble EquinoctialOrbit::getL(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL_d70fe653db6c6bd3], a0.this$);
      }

      jdouble EquinoctialOrbit::getLDot(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLDot_d70fe653db6c6bd3], a0.this$);
      }

      jdouble EquinoctialOrbit::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_9981f74b2d109da6]);
      }

      jdouble EquinoctialOrbit::getLEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLEDot_9981f74b2d109da6]);
      }

      jdouble EquinoctialOrbit::getLM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLM_9981f74b2d109da6]);
      }

      jdouble EquinoctialOrbit::getLMDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMDot_9981f74b2d109da6]);
      }

      jdouble EquinoctialOrbit::getLv() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLv_9981f74b2d109da6]);
      }

      jdouble EquinoctialOrbit::getLvDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLvDot_9981f74b2d109da6]);
      }

      ::org::orekit::orbits::OrbitType EquinoctialOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_495f818d3570b7f5]));
      }

      jboolean EquinoctialOrbit::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_eee3de00fe971136]);
      }

      jdouble EquinoctialOrbit::meanToEccentric(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_meanToEccentric_db06d8c3fc3d9670], a0, a1, a2);
      }

      EquinoctialOrbit EquinoctialOrbit::removeRates() const
      {
        return EquinoctialOrbit(env->callObjectMethod(this$, mids$[mid_removeRates_1d03f68d0241dac0]));
      }

      EquinoctialOrbit EquinoctialOrbit::shiftedBy(jdouble a0) const
      {
        return EquinoctialOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_deb69461719629e0], a0));
      }

      ::java::lang::String EquinoctialOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
      }

      jdouble EquinoctialOrbit::trueToEccentric(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_trueToEccentric_db06d8c3fc3d9670], a0, a1, a2);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_EquinoctialOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EquinoctialOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EquinoctialOrbit_init_(t_EquinoctialOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EquinoctialOrbit_addKeplerContribution(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_eccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_EquinoctialOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getA(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getADot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getCachedPositionAngleType(t_EquinoctialOrbit *self);
      static PyObject *t_EquinoctialOrbit_getE(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getEDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getEquinoctialEx(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getEquinoctialExDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getEquinoctialEy(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getEquinoctialEyDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getHx(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getHxDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getHy(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getHyDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getI(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getIDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getL(t_EquinoctialOrbit *self, PyObject *arg);
      static PyObject *t_EquinoctialOrbit_getLDot(t_EquinoctialOrbit *self, PyObject *arg);
      static PyObject *t_EquinoctialOrbit_getLE(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getLEDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getLM(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getLMDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getLv(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getLvDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getType(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_hasRates(t_EquinoctialOrbit *self);
      static PyObject *t_EquinoctialOrbit_meanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_EquinoctialOrbit_removeRates(t_EquinoctialOrbit *self);
      static PyObject *t_EquinoctialOrbit_shiftedBy(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_toString(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_trueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_EquinoctialOrbit_get__a(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__aDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__cachedPositionAngleType(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__e(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__eDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__equinoctialEx(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__equinoctialExDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__equinoctialEy(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__equinoctialEyDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__hx(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__hxDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__hy(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__hyDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__i(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__iDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__lE(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__lEDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__lM(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__lMDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__lv(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__lvDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__type(t_EquinoctialOrbit *self, void *data);
      static PyGetSetDef t_EquinoctialOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_EquinoctialOrbit, a),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, aDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, cachedPositionAngleType),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, e),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, eDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, hx),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, hxDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, hy),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, hyDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, i),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, iDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, lE),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, lEDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, lM),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, lMDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, lv),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, lvDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, type),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EquinoctialOrbit__methods_[] = {
        DECLARE_METHOD(t_EquinoctialOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EquinoctialOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EquinoctialOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, eccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_EquinoctialOrbit, eccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_EquinoctialOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getL, METH_O),
        DECLARE_METHOD(t_EquinoctialOrbit, getLDot, METH_O),
        DECLARE_METHOD(t_EquinoctialOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, meanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_EquinoctialOrbit, removeRates, METH_NOARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, toString, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, trueToEccentric, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EquinoctialOrbit)[] = {
        { Py_tp_methods, t_EquinoctialOrbit__methods_ },
        { Py_tp_init, (void *) t_EquinoctialOrbit_init_ },
        { Py_tp_getset, t_EquinoctialOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EquinoctialOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::Orbit),
        NULL
      };

      DEFINE_TYPE(EquinoctialOrbit, t_EquinoctialOrbit, EquinoctialOrbit);

      void t_EquinoctialOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(EquinoctialOrbit), &PY_TYPE_DEF(EquinoctialOrbit), module, "EquinoctialOrbit", 0);
      }

      void t_EquinoctialOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EquinoctialOrbit), "class_", make_descriptor(EquinoctialOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EquinoctialOrbit), "wrapfn_", make_descriptor(t_EquinoctialOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EquinoctialOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EquinoctialOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EquinoctialOrbit::initializeClass, 1)))
          return NULL;
        return t_EquinoctialOrbit::wrap_Object(EquinoctialOrbit(((t_EquinoctialOrbit *) arg)->object.this$));
      }
      static PyObject *t_EquinoctialOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EquinoctialOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EquinoctialOrbit_init_(t_EquinoctialOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            EquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
            {
              INT_CALL(object = EquinoctialOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            jdouble a2;
            EquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = EquinoctialOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            EquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkkD", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = EquinoctialOrbit(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 10:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            ::org::orekit::orbits::PositionAngleType a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::orekit::frames::Frame a7((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a8((jobject) NULL);
            jdouble a9;
            EquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "DDDDDDKkkD", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a7, &a8, &a9))
            {
              INT_CALL(object = EquinoctialOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
              self->object = object;
              break;
            }
          }
          goto err;
         case 16:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;
            jdouble a7;
            jdouble a8;
            jdouble a9;
            jdouble a10;
            jdouble a11;
            ::org::orekit::orbits::PositionAngleType a12((jobject) NULL);
            PyTypeObject **p12;
            ::org::orekit::frames::Frame a13((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a14((jobject) NULL);
            jdouble a15;
            EquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "DDDDDDDDDDDDKkkD", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &p12, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a13, &a14, &a15))
            {
              INT_CALL(object = EquinoctialOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
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

      static PyObject *t_EquinoctialOrbit_addKeplerContribution(t_EquinoctialOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble a1;
        JArray< jdouble > a2((jobject) NULL);

        if (!parseArgs(args, "KD[D", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &a2))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_eccentricToMean(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::EquinoctialOrbit::eccentricToMean(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "eccentricToMean", args);
        return NULL;
      }

      static PyObject *t_EquinoctialOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::EquinoctialOrbit::eccentricToTrue(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "eccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_EquinoctialOrbit_getA(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getADot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getCachedPositionAngleType(t_EquinoctialOrbit *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_EquinoctialOrbit_getE(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getEDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getEquinoctialEx(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getEquinoctialExDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getEquinoctialEy(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getEquinoctialEyDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getHx(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getHxDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getHy(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getHyDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getI(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getIDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getL(t_EquinoctialOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getL(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getL", arg);
        return NULL;
      }

      static PyObject *t_EquinoctialOrbit_getLDot(t_EquinoctialOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getLDot(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLDot", arg);
        return NULL;
      }

      static PyObject *t_EquinoctialOrbit_getLE(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getLEDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getLM(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getLMDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getLv(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getLvDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getType(t_EquinoctialOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_hasRates(t_EquinoctialOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_EquinoctialOrbit_meanToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::EquinoctialOrbit::meanToEccentric(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "meanToEccentric", args);
        return NULL;
      }

      static PyObject *t_EquinoctialOrbit_removeRates(t_EquinoctialOrbit *self)
      {
        EquinoctialOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_EquinoctialOrbit::wrap_Object(result);
      }

      static PyObject *t_EquinoctialOrbit_shiftedBy(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble a0;
        EquinoctialOrbit result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_EquinoctialOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_toString(t_EquinoctialOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_trueToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::EquinoctialOrbit::trueToEccentric(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "trueToEccentric", args);
        return NULL;
      }

      static PyObject *t_EquinoctialOrbit_get__a(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__aDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getADot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__cachedPositionAngleType(t_EquinoctialOrbit *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }

      static PyObject *t_EquinoctialOrbit_get__e(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__eDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__equinoctialEx(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__equinoctialExDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__equinoctialEy(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__equinoctialEyDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__hx(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__hxDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHxDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__hy(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__hyDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__i(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__iDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getIDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__lE(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__lEDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__lM(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__lMDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__lv(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLv());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__lvDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLvDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__type(t_EquinoctialOrbit *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/FieldTimeStampedPair.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FieldTimeStampedPair::class$ = NULL;
      jmethodID *FieldTimeStampedPair::mids$ = NULL;
      bool FieldTimeStampedPair::live$ = false;
      jdouble FieldTimeStampedPair::DEFAULT_DATE_EQUALITY_THRESHOLD = (jdouble) 0;

      jclass FieldTimeStampedPair::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FieldTimeStampedPair");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_65d93d1f7b00905c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldTimeStamped;Lorg/orekit/time/FieldTimeStamped;)V");
          mids$[mid_init$_bb097c8d86136d24] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldTimeStamped;Lorg/orekit/time/FieldTimeStamped;D)V");
          mids$[mid_getDate_1fea28374011eef5] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getFirst_eb7a4124bb25f40f] = env->getMethodID(cls, "getFirst", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getSecond_eb7a4124bb25f40f] = env->getMethodID(cls, "getSecond", "()Lorg/orekit/time/FieldTimeStamped;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_DATE_EQUALITY_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_DATE_EQUALITY_THRESHOLD");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTimeStampedPair::FieldTimeStampedPair(const ::org::orekit::time::FieldTimeStamped & a0, const ::org::orekit::time::FieldTimeStamped & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_65d93d1f7b00905c, a0.this$, a1.this$)) {}

      FieldTimeStampedPair::FieldTimeStampedPair(const ::org::orekit::time::FieldTimeStamped & a0, const ::org::orekit::time::FieldTimeStamped & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bb097c8d86136d24, a0.this$, a1.this$, a2)) {}

      ::org::orekit::time::FieldAbsoluteDate FieldTimeStampedPair::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_1fea28374011eef5]));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeStampedPair::getFirst() const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_getFirst_eb7a4124bb25f40f]));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeStampedPair::getSecond() const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_getSecond_eb7a4124bb25f40f]));
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
      static PyObject *t_FieldTimeStampedPair_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeStampedPair_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeStampedPair_of_(t_FieldTimeStampedPair *self, PyObject *args);
      static int t_FieldTimeStampedPair_init_(t_FieldTimeStampedPair *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldTimeStampedPair_getDate(t_FieldTimeStampedPair *self);
      static PyObject *t_FieldTimeStampedPair_getFirst(t_FieldTimeStampedPair *self);
      static PyObject *t_FieldTimeStampedPair_getSecond(t_FieldTimeStampedPair *self);
      static PyObject *t_FieldTimeStampedPair_get__date(t_FieldTimeStampedPair *self, void *data);
      static PyObject *t_FieldTimeStampedPair_get__first(t_FieldTimeStampedPair *self, void *data);
      static PyObject *t_FieldTimeStampedPair_get__second(t_FieldTimeStampedPair *self, void *data);
      static PyObject *t_FieldTimeStampedPair_get__parameters_(t_FieldTimeStampedPair *self, void *data);
      static PyGetSetDef t_FieldTimeStampedPair__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeStampedPair, date),
        DECLARE_GET_FIELD(t_FieldTimeStampedPair, first),
        DECLARE_GET_FIELD(t_FieldTimeStampedPair, second),
        DECLARE_GET_FIELD(t_FieldTimeStampedPair, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeStampedPair__methods_[] = {
        DECLARE_METHOD(t_FieldTimeStampedPair, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeStampedPair, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeStampedPair, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeStampedPair, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeStampedPair, getFirst, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeStampedPair, getSecond, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeStampedPair)[] = {
        { Py_tp_methods, t_FieldTimeStampedPair__methods_ },
        { Py_tp_init, (void *) t_FieldTimeStampedPair_init_ },
        { Py_tp_getset, t_FieldTimeStampedPair__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeStampedPair)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTimeStampedPair, t_FieldTimeStampedPair, FieldTimeStampedPair);
      PyObject *t_FieldTimeStampedPair::wrap_Object(const FieldTimeStampedPair& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
      {
        PyObject *obj = t_FieldTimeStampedPair::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeStampedPair *self = (t_FieldTimeStampedPair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
          self->parameters[2] = p2;
        }
        return obj;
      }

      PyObject *t_FieldTimeStampedPair::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
      {
        PyObject *obj = t_FieldTimeStampedPair::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeStampedPair *self = (t_FieldTimeStampedPair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
          self->parameters[2] = p2;
        }
        return obj;
      }

      void t_FieldTimeStampedPair::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeStampedPair), &PY_TYPE_DEF(FieldTimeStampedPair), module, "FieldTimeStampedPair", 0);
      }

      void t_FieldTimeStampedPair::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedPair), "class_", make_descriptor(FieldTimeStampedPair::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedPair), "wrapfn_", make_descriptor(t_FieldTimeStampedPair::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedPair), "boxfn_", make_descriptor(boxObject));
        env->getClass(FieldTimeStampedPair::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedPair), "DEFAULT_DATE_EQUALITY_THRESHOLD", make_descriptor(FieldTimeStampedPair::DEFAULT_DATE_EQUALITY_THRESHOLD));
      }

      static PyObject *t_FieldTimeStampedPair_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeStampedPair::initializeClass, 1)))
          return NULL;
        return t_FieldTimeStampedPair::wrap_Object(FieldTimeStampedPair(((t_FieldTimeStampedPair *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeStampedPair_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeStampedPair::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeStampedPair_of_(t_FieldTimeStampedPair *self, PyObject *args)
      {
        if (!parseArg(args, "T", 3, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldTimeStampedPair_init_(t_FieldTimeStampedPair *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldTimeStamped a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTimeStampedPair object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldTimeStamped::initializeClass, ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a1, &p1, ::org::orekit::time::t_FieldTimeStamped::parameters_))
            {
              INT_CALL(object = FieldTimeStampedPair(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldTimeStamped a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldTimeStampedPair object((jobject) NULL);

            if (!parseArgs(args, "KKD", ::org::orekit::time::FieldTimeStamped::initializeClass, ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a1, &p1, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a2))
            {
              INT_CALL(object = FieldTimeStampedPair(a0, a1, a2));
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

      static PyObject *t_FieldTimeStampedPair_getDate(t_FieldTimeStampedPair *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[2]);
      }

      static PyObject *t_FieldTimeStampedPair_getFirst(t_FieldTimeStampedPair *self)
      {
        ::org::orekit::time::FieldTimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getFirst());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
      }

      static PyObject *t_FieldTimeStampedPair_getSecond(t_FieldTimeStampedPair *self)
      {
        ::org::orekit::time::FieldTimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getSecond());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
      }
      static PyObject *t_FieldTimeStampedPair_get__parameters_(t_FieldTimeStampedPair *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTimeStampedPair_get__date(t_FieldTimeStampedPair *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldTimeStampedPair_get__first(t_FieldTimeStampedPair *self, void *data)
      {
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getFirst());
        return ::org::orekit::time::t_FieldTimeStamped::wrap_Object(value);
      }

      static PyObject *t_FieldTimeStampedPair_get__second(t_FieldTimeStampedPair *self, void *data)
      {
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getSecond());
        return ::org::orekit::time::t_FieldTimeStamped::wrap_Object(value);
      }
    }
  }
}
