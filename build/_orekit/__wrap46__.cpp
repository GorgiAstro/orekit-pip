#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/IAUPole.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *IAUPole::class$ = NULL;
      jmethodID *IAUPole::mids$ = NULL;
      bool IAUPole::live$ = false;

      jclass IAUPole::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/IAUPole");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getNode_082e6346b274f880] = env->getMethodID(cls, "getNode", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getNode_362941be972fb4b5] = env->getMethodID(cls, "getNode", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPole_082e6346b274f880] = env->getMethodID(cls, "getPole", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getPole_362941be972fb4b5] = env->getMethodID(cls, "getPole", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPrimeMeridianAngle_fd347811007a6ba3] = env->getMethodID(cls, "getPrimeMeridianAngle", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getPrimeMeridianAngle_140b8964300ddedf] = env->getMethodID(cls, "getPrimeMeridianAngle", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D IAUPole::getNode(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNode_082e6346b274f880], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D IAUPole::getNode(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNode_362941be972fb4b5], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D IAUPole::getPole(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPole_082e6346b274f880], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D IAUPole::getPole(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPole_362941be972fb4b5], a0.this$));
      }

      jdouble IAUPole::getPrimeMeridianAngle(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPrimeMeridianAngle_fd347811007a6ba3], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement IAUPole::getPrimeMeridianAngle(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPrimeMeridianAngle_140b8964300ddedf], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_IAUPole_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IAUPole_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IAUPole_getNode(t_IAUPole *self, PyObject *args);
      static PyObject *t_IAUPole_getPole(t_IAUPole *self, PyObject *args);
      static PyObject *t_IAUPole_getPrimeMeridianAngle(t_IAUPole *self, PyObject *args);

      static PyMethodDef t_IAUPole__methods_[] = {
        DECLARE_METHOD(t_IAUPole, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IAUPole, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IAUPole, getNode, METH_VARARGS),
        DECLARE_METHOD(t_IAUPole, getPole, METH_VARARGS),
        DECLARE_METHOD(t_IAUPole, getPrimeMeridianAngle, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IAUPole)[] = {
        { Py_tp_methods, t_IAUPole__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IAUPole)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(IAUPole, t_IAUPole, IAUPole);

      void t_IAUPole::install(PyObject *module)
      {
        installType(&PY_TYPE(IAUPole), &PY_TYPE_DEF(IAUPole), module, "IAUPole", 0);
      }

      void t_IAUPole::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IAUPole), "class_", make_descriptor(IAUPole::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IAUPole), "wrapfn_", make_descriptor(t_IAUPole::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IAUPole), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IAUPole_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IAUPole::initializeClass, 1)))
          return NULL;
        return t_IAUPole::wrap_Object(IAUPole(((t_IAUPole *) arg)->object.this$));
      }
      static PyObject *t_IAUPole_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IAUPole::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IAUPole_getNode(t_IAUPole *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNode(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getNode(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNode", args);
        return NULL;
      }

      static PyObject *t_IAUPole_getPole(t_IAUPole *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPole(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getPole(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPole", args);
        return NULL;
      }

      static PyObject *t_IAUPole_getPrimeMeridianAngle(t_IAUPole *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPrimeMeridianAngle(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getPrimeMeridianAngle(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPrimeMeridianAngle", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/BesselJ$BesselJResult.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {

      ::java::lang::Class *BesselJ$BesselJResult::class$ = NULL;
      jmethodID *BesselJ$BesselJResult::mids$ = NULL;
      bool BesselJ$BesselJResult::live$ = false;

      jclass BesselJ$BesselJResult::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/special/BesselJ$BesselJResult");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d15a39e204aa8e61] = env->getMethodID(cls, "<init>", "([DI)V");
          mids$[mid_getVals_25e1757a36c4dde2] = env->getMethodID(cls, "getVals", "()[D");
          mids$[mid_getnVals_55546ef6a647f39b] = env->getMethodID(cls, "getnVals", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BesselJ$BesselJResult::BesselJ$BesselJResult(const JArray< jdouble > & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d15a39e204aa8e61, a0.this$, a1)) {}

      JArray< jdouble > BesselJ$BesselJResult::getVals() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getVals_25e1757a36c4dde2]));
      }

      jint BesselJ$BesselJResult::getnVals() const
      {
        return env->callIntMethod(this$, mids$[mid_getnVals_55546ef6a647f39b]);
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
      static PyObject *t_BesselJ$BesselJResult_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BesselJ$BesselJResult_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BesselJ$BesselJResult_init_(t_BesselJ$BesselJResult *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BesselJ$BesselJResult_getVals(t_BesselJ$BesselJResult *self);
      static PyObject *t_BesselJ$BesselJResult_getnVals(t_BesselJ$BesselJResult *self);
      static PyObject *t_BesselJ$BesselJResult_get__nVals(t_BesselJ$BesselJResult *self, void *data);
      static PyObject *t_BesselJ$BesselJResult_get__vals(t_BesselJ$BesselJResult *self, void *data);
      static PyGetSetDef t_BesselJ$BesselJResult__fields_[] = {
        DECLARE_GET_FIELD(t_BesselJ$BesselJResult, nVals),
        DECLARE_GET_FIELD(t_BesselJ$BesselJResult, vals),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BesselJ$BesselJResult__methods_[] = {
        DECLARE_METHOD(t_BesselJ$BesselJResult, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BesselJ$BesselJResult, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BesselJ$BesselJResult, getVals, METH_NOARGS),
        DECLARE_METHOD(t_BesselJ$BesselJResult, getnVals, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BesselJ$BesselJResult)[] = {
        { Py_tp_methods, t_BesselJ$BesselJResult__methods_ },
        { Py_tp_init, (void *) t_BesselJ$BesselJResult_init_ },
        { Py_tp_getset, t_BesselJ$BesselJResult__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BesselJ$BesselJResult)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BesselJ$BesselJResult, t_BesselJ$BesselJResult, BesselJ$BesselJResult);

      void t_BesselJ$BesselJResult::install(PyObject *module)
      {
        installType(&PY_TYPE(BesselJ$BesselJResult), &PY_TYPE_DEF(BesselJ$BesselJResult), module, "BesselJ$BesselJResult", 0);
      }

      void t_BesselJ$BesselJResult::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ$BesselJResult), "class_", make_descriptor(BesselJ$BesselJResult::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ$BesselJResult), "wrapfn_", make_descriptor(t_BesselJ$BesselJResult::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ$BesselJResult), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BesselJ$BesselJResult_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BesselJ$BesselJResult::initializeClass, 1)))
          return NULL;
        return t_BesselJ$BesselJResult::wrap_Object(BesselJ$BesselJResult(((t_BesselJ$BesselJResult *) arg)->object.this$));
      }
      static PyObject *t_BesselJ$BesselJResult_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BesselJ$BesselJResult::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BesselJ$BesselJResult_init_(t_BesselJ$BesselJResult *self, PyObject *args, PyObject *kwds)
      {
        JArray< jdouble > a0((jobject) NULL);
        jint a1;
        BesselJ$BesselJResult object((jobject) NULL);

        if (!parseArgs(args, "[DI", &a0, &a1))
        {
          INT_CALL(object = BesselJ$BesselJResult(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_BesselJ$BesselJResult_getVals(t_BesselJ$BesselJResult *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getVals());
        return result.wrap();
      }

      static PyObject *t_BesselJ$BesselJResult_getnVals(t_BesselJ$BesselJResult *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getnVals());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BesselJ$BesselJResult_get__nVals(t_BesselJ$BesselJResult *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getnVals());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BesselJ$BesselJResult_get__vals(t_BesselJ$BesselJResult *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getVals());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "java/util/Locale.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "org/orekit/errors/LocalizedException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitIllegalArgumentException::class$ = NULL;
      jmethodID *OrekitIllegalArgumentException::mids$ = NULL;
      bool OrekitIllegalArgumentException::live$ = false;

      jclass OrekitIllegalArgumentException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitIllegalArgumentException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9b3ada3301b0db8c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_getLocalizedMessage_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_26070c28e6ea354d] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_24e2edd6319f4c5a] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_d8f5056e4f45c9a6] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitIllegalArgumentException::OrekitIllegalArgumentException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::lang::IllegalArgumentException(env->newObject(initializeClass, &mids$, mid_init$_9b3ada3301b0db8c, a0.this$, a1.this$)) {}

      ::java::lang::String OrekitIllegalArgumentException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String OrekitIllegalArgumentException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String OrekitIllegalArgumentException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_26070c28e6ea354d], a0.this$));
      }

      JArray< ::java::lang::Object > OrekitIllegalArgumentException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_24e2edd6319f4c5a]));
      }

      ::org::hipparchus::exception::Localizable OrekitIllegalArgumentException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_d8f5056e4f45c9a6]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_OrekitIllegalArgumentException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitIllegalArgumentException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrekitIllegalArgumentException_init_(t_OrekitIllegalArgumentException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitIllegalArgumentException_getLocalizedMessage(t_OrekitIllegalArgumentException *self, PyObject *args);
      static PyObject *t_OrekitIllegalArgumentException_getMessage(t_OrekitIllegalArgumentException *self, PyObject *args);
      static PyObject *t_OrekitIllegalArgumentException_getParts(t_OrekitIllegalArgumentException *self);
      static PyObject *t_OrekitIllegalArgumentException_getSpecifier(t_OrekitIllegalArgumentException *self);
      static PyObject *t_OrekitIllegalArgumentException_get__localizedMessage(t_OrekitIllegalArgumentException *self, void *data);
      static PyObject *t_OrekitIllegalArgumentException_get__message(t_OrekitIllegalArgumentException *self, void *data);
      static PyObject *t_OrekitIllegalArgumentException_get__parts(t_OrekitIllegalArgumentException *self, void *data);
      static PyObject *t_OrekitIllegalArgumentException_get__specifier(t_OrekitIllegalArgumentException *self, void *data);
      static PyGetSetDef t_OrekitIllegalArgumentException__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitIllegalArgumentException, localizedMessage),
        DECLARE_GET_FIELD(t_OrekitIllegalArgumentException, message),
        DECLARE_GET_FIELD(t_OrekitIllegalArgumentException, parts),
        DECLARE_GET_FIELD(t_OrekitIllegalArgumentException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitIllegalArgumentException__methods_[] = {
        DECLARE_METHOD(t_OrekitIllegalArgumentException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitIllegalArgumentException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitIllegalArgumentException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitIllegalArgumentException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitIllegalArgumentException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_OrekitIllegalArgumentException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitIllegalArgumentException)[] = {
        { Py_tp_methods, t_OrekitIllegalArgumentException__methods_ },
        { Py_tp_init, (void *) t_OrekitIllegalArgumentException_init_ },
        { Py_tp_getset, t_OrekitIllegalArgumentException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitIllegalArgumentException)[] = {
        &PY_TYPE_DEF(::java::lang::IllegalArgumentException),
        NULL
      };

      DEFINE_TYPE(OrekitIllegalArgumentException, t_OrekitIllegalArgumentException, OrekitIllegalArgumentException);

      void t_OrekitIllegalArgumentException::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitIllegalArgumentException), &PY_TYPE_DEF(OrekitIllegalArgumentException), module, "OrekitIllegalArgumentException", 0);
      }

      void t_OrekitIllegalArgumentException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIllegalArgumentException), "class_", make_descriptor(OrekitIllegalArgumentException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIllegalArgumentException), "wrapfn_", make_descriptor(t_OrekitIllegalArgumentException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIllegalArgumentException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitIllegalArgumentException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitIllegalArgumentException::initializeClass, 1)))
          return NULL;
        return t_OrekitIllegalArgumentException::wrap_Object(OrekitIllegalArgumentException(((t_OrekitIllegalArgumentException *) arg)->object.this$));
      }
      static PyObject *t_OrekitIllegalArgumentException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitIllegalArgumentException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrekitIllegalArgumentException_init_(t_OrekitIllegalArgumentException *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::exception::Localizable a0((jobject) NULL);
        JArray< ::java::lang::Object > a1((jobject) NULL);
        OrekitIllegalArgumentException object((jobject) NULL);

        if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
        {
          INT_CALL(object = OrekitIllegalArgumentException(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OrekitIllegalArgumentException_getLocalizedMessage(t_OrekitIllegalArgumentException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(OrekitIllegalArgumentException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_OrekitIllegalArgumentException_getMessage(t_OrekitIllegalArgumentException *self, PyObject *args)
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

        return callSuper(PY_TYPE(OrekitIllegalArgumentException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_OrekitIllegalArgumentException_getParts(t_OrekitIllegalArgumentException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitIllegalArgumentException_getSpecifier(t_OrekitIllegalArgumentException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_OrekitIllegalArgumentException_get__localizedMessage(t_OrekitIllegalArgumentException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitIllegalArgumentException_get__message(t_OrekitIllegalArgumentException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitIllegalArgumentException_get__parts(t_OrekitIllegalArgumentException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitIllegalArgumentException_get__specifier(t_OrekitIllegalArgumentException *self, void *data)
      {
        ::org::hipparchus::exception::Localizable value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/PythonEarthShape.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/models/earth/EarthShape.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/ReferenceEllipsoid.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *PythonEarthShape::class$ = NULL;
        jmethodID *PythonEarthShape::mids$ = NULL;
        bool PythonEarthShape::live$ = false;

        jclass PythonEarthShape::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/PythonEarthShape");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getBodyFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getEllipsoid_aa643af2699b886e] = env->getMethodID(cls, "getEllipsoid", "()Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getIntersectionPoint_66b39d6d84447197] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
            mids$[mid_getIntersectionPoint_f1db6d4c78519d48] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_projectToGround_3cbe213b2c291f18] = env->getMethodID(cls, "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_projectToGround_feded476b8bdfcfc] = env->getMethodID(cls, "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_transform_6aa36b82e3b80b58] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_transform_a840d9913a98925f] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transform_f67fa82bac3192f0] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_transform_93de77ed9854e321] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEarthShape::PythonEarthShape() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonEarthShape::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonEarthShape::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonEarthShape::pythonExtension(jlong a0) const
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
    namespace models {
      namespace earth {
        static PyObject *t_PythonEarthShape_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEarthShape_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEarthShape_init_(t_PythonEarthShape *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEarthShape_finalize(t_PythonEarthShape *self);
        static PyObject *t_PythonEarthShape_pythonExtension(t_PythonEarthShape *self, PyObject *args);
        static jobject JNICALL t_PythonEarthShape_getBodyFrame0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEarthShape_getEllipsoid1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEarthShape_getIntersectionPoint2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static jobject JNICALL t_PythonEarthShape_getIntersectionPoint3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static jobject JNICALL t_PythonEarthShape_projectToGround4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonEarthShape_projectToGround5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonEarthShape_pythonDecRef6(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEarthShape_transform7(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonEarthShape_transform8(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonEarthShape_transform9(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static jobject JNICALL t_PythonEarthShape_transform10(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static PyObject *t_PythonEarthShape_get__self(t_PythonEarthShape *self, void *data);
        static PyGetSetDef t_PythonEarthShape__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEarthShape, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEarthShape__methods_[] = {
          DECLARE_METHOD(t_PythonEarthShape, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEarthShape, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEarthShape, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEarthShape, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEarthShape)[] = {
          { Py_tp_methods, t_PythonEarthShape__methods_ },
          { Py_tp_init, (void *) t_PythonEarthShape_init_ },
          { Py_tp_getset, t_PythonEarthShape__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEarthShape)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEarthShape, t_PythonEarthShape, PythonEarthShape);

        void t_PythonEarthShape::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEarthShape), &PY_TYPE_DEF(PythonEarthShape), module, "PythonEarthShape", 1);
        }

        void t_PythonEarthShape::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEarthShape), "class_", make_descriptor(PythonEarthShape::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEarthShape), "wrapfn_", make_descriptor(t_PythonEarthShape::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEarthShape), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEarthShape::initializeClass);
          JNINativeMethod methods[] = {
            { "getBodyFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonEarthShape_getBodyFrame0 },
            { "getEllipsoid", "()Lorg/orekit/models/earth/ReferenceEllipsoid;", (void *) t_PythonEarthShape_getEllipsoid1 },
            { "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;", (void *) t_PythonEarthShape_getIntersectionPoint2 },
            { "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;", (void *) t_PythonEarthShape_getIntersectionPoint3 },
            { "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonEarthShape_projectToGround4 },
            { "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonEarthShape_projectToGround5 },
            { "pythonDecRef", "()V", (void *) t_PythonEarthShape_pythonDecRef6 },
            { "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonEarthShape_transform7 },
            { "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonEarthShape_transform8 },
            { "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;", (void *) t_PythonEarthShape_transform9 },
            { "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;", (void *) t_PythonEarthShape_transform10 },
          };
          env->registerNatives(cls, methods, 11);
        }

        static PyObject *t_PythonEarthShape_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEarthShape::initializeClass, 1)))
            return NULL;
          return t_PythonEarthShape::wrap_Object(PythonEarthShape(((t_PythonEarthShape *) arg)->object.this$));
        }
        static PyObject *t_PythonEarthShape_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEarthShape::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEarthShape_init_(t_PythonEarthShape *self, PyObject *args, PyObject *kwds)
        {
          PythonEarthShape object((jobject) NULL);

          INT_CALL(object = PythonEarthShape());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEarthShape_finalize(t_PythonEarthShape *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEarthShape_pythonExtension(t_PythonEarthShape *self, PyObject *args)
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

        static jobject JNICALL t_PythonEarthShape_getBodyFrame0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::frames::Frame value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getBodyFrame", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
          {
            throwTypeError("getBodyFrame", result);
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

        static jobject JNICALL t_PythonEarthShape_getEllipsoid1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::models::earth::ReferenceEllipsoid value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getEllipsoid", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::models::earth::ReferenceEllipsoid::initializeClass, &value))
          {
            throwTypeError("getEllipsoid", result);
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

        static jobject JNICALL t_PythonEarthShape_getIntersectionPoint2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Line::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Line(a0));
          PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a1));
          PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
          PyObject *o3 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a3));
          PyObject *result = PyObject_CallMethod(obj, "getIntersectionPoint", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &value))
          {
            throwTypeError("getIntersectionPoint", result);
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

        static jobject JNICALL t_PythonEarthShape_getIntersectionPoint3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::bodies::FieldGeodeticPoint value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldLine(a0));
          PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a1));
          PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
          PyObject *o3 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a3));
          PyObject *result = PyObject_CallMethod(obj, "getIntersectionPoint", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &value))
          {
            throwTypeError("getIntersectionPoint", result);
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

        static jobject JNICALL t_PythonEarthShape_projectToGround4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
          PyObject *o0 = ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(::org::orekit::utils::TimeStampedPVCoordinates(a0));
          PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
          PyObject *result = PyObject_CallMethod(obj, "projectToGround", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
          {
            throwTypeError("projectToGround", result);
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

        static jobject JNICALL t_PythonEarthShape_projectToGround5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
          PyObject *result = PyObject_CallMethod(obj, "projectToGround", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("projectToGround", result);
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

        static void JNICALL t_PythonEarthShape_pythonDecRef6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonEarthShape_transform7(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(::org::orekit::bodies::FieldGeodeticPoint(a0));
          PyObject *result = PyObject_CallMethod(obj, "transform", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
          {
            throwTypeError("transform", result);
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

        static jobject JNICALL t_PythonEarthShape_transform8(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(::org::orekit::bodies::GeodeticPoint(a0));
          PyObject *result = PyObject_CallMethod(obj, "transform", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("transform", result);
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

        static jobject JNICALL t_PythonEarthShape_transform9(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::bodies::FieldGeodeticPoint value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a0));
          PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
          PyObject *o2 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a2));
          PyObject *result = PyObject_CallMethod(obj, "transform", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &value))
          {
            throwTypeError("transform", result);
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

        static jobject JNICALL t_PythonEarthShape_transform10(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
          PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
          PyObject *result = PyObject_CallMethod(obj, "transform", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &value))
          {
            throwTypeError("transform", result);
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

        static PyObject *t_PythonEarthShape_get__self(t_PythonEarthShape *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$EnumConsumer.h"
#include "java/lang/Class.h"
#include "java/lang/Enum.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$EnumConsumer::class$ = NULL;
            jmethodID *ParseToken$EnumConsumer::mids$ = NULL;
            bool ParseToken$EnumConsumer::live$ = false;

            jclass ParseToken$EnumConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$EnumConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_c9ba34a1f8e71b43] = env->getMethodID(cls, "accept", "(Ljava/lang/Enum;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$EnumConsumer::accept(const ::java::lang::Enum & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_c9ba34a1f8e71b43], a0.this$);
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
            static PyObject *t_ParseToken$EnumConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$EnumConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$EnumConsumer_of_(t_ParseToken$EnumConsumer *self, PyObject *args);
            static PyObject *t_ParseToken$EnumConsumer_accept(t_ParseToken$EnumConsumer *self, PyObject *arg);
            static PyObject *t_ParseToken$EnumConsumer_get__parameters_(t_ParseToken$EnumConsumer *self, void *data);
            static PyGetSetDef t_ParseToken$EnumConsumer__fields_[] = {
              DECLARE_GET_FIELD(t_ParseToken$EnumConsumer, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ParseToken$EnumConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$EnumConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$EnumConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$EnumConsumer, of_, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken$EnumConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$EnumConsumer)[] = {
              { Py_tp_methods, t_ParseToken$EnumConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ParseToken$EnumConsumer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$EnumConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$EnumConsumer, t_ParseToken$EnumConsumer, ParseToken$EnumConsumer);
            PyObject *t_ParseToken$EnumConsumer::wrap_Object(const ParseToken$EnumConsumer& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ParseToken$EnumConsumer::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ParseToken$EnumConsumer *self = (t_ParseToken$EnumConsumer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ParseToken$EnumConsumer::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ParseToken$EnumConsumer::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ParseToken$EnumConsumer *self = (t_ParseToken$EnumConsumer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ParseToken$EnumConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$EnumConsumer), &PY_TYPE_DEF(ParseToken$EnumConsumer), module, "ParseToken$EnumConsumer", 0);
            }

            void t_ParseToken$EnumConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$EnumConsumer), "class_", make_descriptor(ParseToken$EnumConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$EnumConsumer), "wrapfn_", make_descriptor(t_ParseToken$EnumConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$EnumConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$EnumConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$EnumConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$EnumConsumer::wrap_Object(ParseToken$EnumConsumer(((t_ParseToken$EnumConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$EnumConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$EnumConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$EnumConsumer_of_(t_ParseToken$EnumConsumer *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ParseToken$EnumConsumer_accept(t_ParseToken$EnumConsumer *self, PyObject *arg)
            {
              ::java::lang::Enum a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::lang::Enum::initializeClass, &a0, &p0, ::java::lang::t_Enum::parameters_))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
              return NULL;
            }
            static PyObject *t_ParseToken$EnumConsumer_get__parameters_(t_ParseToken$EnumConsumer *self, void *data)
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
#include "org/hipparchus/analysis/solvers/IllinoisSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *IllinoisSolver::class$ = NULL;
        jmethodID *IllinoisSolver::mids$ = NULL;
        bool IllinoisSolver::live$ = false;

        jclass IllinoisSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/IllinoisSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IllinoisSolver::IllinoisSolver() : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        IllinoisSolver::IllinoisSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        IllinoisSolver::IllinoisSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        IllinoisSolver::IllinoisSolver(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}
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
      namespace solvers {
        static PyObject *t_IllinoisSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IllinoisSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IllinoisSolver_of_(t_IllinoisSolver *self, PyObject *args);
        static int t_IllinoisSolver_init_(t_IllinoisSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IllinoisSolver_get__parameters_(t_IllinoisSolver *self, void *data);
        static PyGetSetDef t_IllinoisSolver__fields_[] = {
          DECLARE_GET_FIELD(t_IllinoisSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IllinoisSolver__methods_[] = {
          DECLARE_METHOD(t_IllinoisSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IllinoisSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IllinoisSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IllinoisSolver)[] = {
          { Py_tp_methods, t_IllinoisSolver__methods_ },
          { Py_tp_init, (void *) t_IllinoisSolver_init_ },
          { Py_tp_getset, t_IllinoisSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IllinoisSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseSecantSolver),
          NULL
        };

        DEFINE_TYPE(IllinoisSolver, t_IllinoisSolver, IllinoisSolver);
        PyObject *t_IllinoisSolver::wrap_Object(const IllinoisSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_IllinoisSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_IllinoisSolver *self = (t_IllinoisSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_IllinoisSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_IllinoisSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_IllinoisSolver *self = (t_IllinoisSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_IllinoisSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(IllinoisSolver), &PY_TYPE_DEF(IllinoisSolver), module, "IllinoisSolver", 0);
        }

        void t_IllinoisSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IllinoisSolver), "class_", make_descriptor(IllinoisSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IllinoisSolver), "wrapfn_", make_descriptor(t_IllinoisSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IllinoisSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IllinoisSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IllinoisSolver::initializeClass, 1)))
            return NULL;
          return t_IllinoisSolver::wrap_Object(IllinoisSolver(((t_IllinoisSolver *) arg)->object.this$));
        }
        static PyObject *t_IllinoisSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IllinoisSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_IllinoisSolver_of_(t_IllinoisSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_IllinoisSolver_init_(t_IllinoisSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              IllinoisSolver object((jobject) NULL);

              INT_CALL(object = IllinoisSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              IllinoisSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = IllinoisSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              IllinoisSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = IllinoisSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              IllinoisSolver object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = IllinoisSolver(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
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
        static PyObject *t_IllinoisSolver_get__parameters_(t_IllinoisSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *FieldGeodeticPoint::class$ = NULL;
      jmethodID *FieldGeodeticPoint::mids$ = NULL;
      bool FieldGeodeticPoint::live$ = false;

      jclass FieldGeodeticPoint::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/FieldGeodeticPoint");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_baa1ed35ace5d036] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getAltitude_81520b552cb3fa26] = env->getMethodID(cls, "getAltitude", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEast_ff5ac73a7b43eddd] = env->getMethodID(cls, "getEast", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getLatitude_81520b552cb3fa26] = env->getMethodID(cls, "getLatitude", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLongitude_81520b552cb3fa26] = env->getMethodID(cls, "getLongitude", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getNadir_ff5ac73a7b43eddd] = env->getMethodID(cls, "getNadir", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getNorth_ff5ac73a7b43eddd] = env->getMethodID(cls, "getNorth", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getSouth_ff5ac73a7b43eddd] = env->getMethodID(cls, "getSouth", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getWest_ff5ac73a7b43eddd] = env->getMethodID(cls, "getWest", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getZenith_ff5ac73a7b43eddd] = env->getMethodID(cls, "getZenith", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldGeodeticPoint::FieldGeodeticPoint(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_baa1ed35ace5d036, a0.this$, a1.this$, a2.this$)) {}

      jboolean FieldGeodeticPoint::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldGeodeticPoint::getAltitude() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAltitude_81520b552cb3fa26]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldGeodeticPoint::getEast() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getEast_ff5ac73a7b43eddd]));
      }

      ::org::hipparchus::CalculusFieldElement FieldGeodeticPoint::getLatitude() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLatitude_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldGeodeticPoint::getLongitude() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLongitude_81520b552cb3fa26]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldGeodeticPoint::getNadir() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNadir_ff5ac73a7b43eddd]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldGeodeticPoint::getNorth() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNorth_ff5ac73a7b43eddd]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldGeodeticPoint::getSouth() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getSouth_ff5ac73a7b43eddd]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldGeodeticPoint::getWest() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getWest_ff5ac73a7b43eddd]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldGeodeticPoint::getZenith() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getZenith_ff5ac73a7b43eddd]));
      }

      jint FieldGeodeticPoint::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
      }

      ::java::lang::String FieldGeodeticPoint::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_FieldGeodeticPoint_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldGeodeticPoint_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldGeodeticPoint_of_(t_FieldGeodeticPoint *self, PyObject *args);
      static int t_FieldGeodeticPoint_init_(t_FieldGeodeticPoint *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldGeodeticPoint_equals(t_FieldGeodeticPoint *self, PyObject *args);
      static PyObject *t_FieldGeodeticPoint_getAltitude(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getEast(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getLatitude(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getLongitude(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getNadir(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getNorth(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getSouth(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getWest(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getZenith(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_hashCode(t_FieldGeodeticPoint *self, PyObject *args);
      static PyObject *t_FieldGeodeticPoint_toString(t_FieldGeodeticPoint *self, PyObject *args);
      static PyObject *t_FieldGeodeticPoint_get__altitude(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__east(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__latitude(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__longitude(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__nadir(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__north(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__south(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__west(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__zenith(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__parameters_(t_FieldGeodeticPoint *self, void *data);
      static PyGetSetDef t_FieldGeodeticPoint__fields_[] = {
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, altitude),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, east),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, latitude),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, longitude),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, nadir),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, north),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, south),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, west),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, zenith),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldGeodeticPoint__methods_[] = {
        DECLARE_METHOD(t_FieldGeodeticPoint, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldGeodeticPoint, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldGeodeticPoint, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, equals, METH_VARARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getAltitude, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getEast, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getLatitude, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getLongitude, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getNadir, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getNorth, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getSouth, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getWest, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getZenith, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldGeodeticPoint)[] = {
        { Py_tp_methods, t_FieldGeodeticPoint__methods_ },
        { Py_tp_init, (void *) t_FieldGeodeticPoint_init_ },
        { Py_tp_getset, t_FieldGeodeticPoint__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldGeodeticPoint)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldGeodeticPoint, t_FieldGeodeticPoint, FieldGeodeticPoint);
      PyObject *t_FieldGeodeticPoint::wrap_Object(const FieldGeodeticPoint& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldGeodeticPoint::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldGeodeticPoint *self = (t_FieldGeodeticPoint *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldGeodeticPoint::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldGeodeticPoint::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldGeodeticPoint *self = (t_FieldGeodeticPoint *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldGeodeticPoint::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldGeodeticPoint), &PY_TYPE_DEF(FieldGeodeticPoint), module, "FieldGeodeticPoint", 0);
      }

      void t_FieldGeodeticPoint::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGeodeticPoint), "class_", make_descriptor(FieldGeodeticPoint::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGeodeticPoint), "wrapfn_", make_descriptor(t_FieldGeodeticPoint::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGeodeticPoint), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldGeodeticPoint_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldGeodeticPoint::initializeClass, 1)))
          return NULL;
        return t_FieldGeodeticPoint::wrap_Object(FieldGeodeticPoint(((t_FieldGeodeticPoint *) arg)->object.this$));
      }
      static PyObject *t_FieldGeodeticPoint_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldGeodeticPoint::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldGeodeticPoint_of_(t_FieldGeodeticPoint *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldGeodeticPoint_init_(t_FieldGeodeticPoint *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        FieldGeodeticPoint object((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldGeodeticPoint(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldGeodeticPoint_equals(t_FieldGeodeticPoint *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldGeodeticPoint), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_FieldGeodeticPoint_getAltitude(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAltitude());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldGeodeticPoint_getEast(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getEast());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldGeodeticPoint_getLatitude(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLatitude());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldGeodeticPoint_getLongitude(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLongitude());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldGeodeticPoint_getNadir(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getNadir());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldGeodeticPoint_getNorth(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getNorth());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldGeodeticPoint_getSouth(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getSouth());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldGeodeticPoint_getWest(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getWest());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldGeodeticPoint_getZenith(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getZenith());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldGeodeticPoint_hashCode(t_FieldGeodeticPoint *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(FieldGeodeticPoint), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_FieldGeodeticPoint_toString(t_FieldGeodeticPoint *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldGeodeticPoint), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_FieldGeodeticPoint_get__parameters_(t_FieldGeodeticPoint *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldGeodeticPoint_get__altitude(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAltitude());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__east(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getEast());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__latitude(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLatitude());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__longitude(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLongitude());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__nadir(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getNadir());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__north(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getNorth());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__south(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getSouth());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__west(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getWest());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__zenith(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getZenith());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/AdapterPropagator.h"
#include "org/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect.h"
#include "java/util/List.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *AdapterPropagator::class$ = NULL;
        jmethodID *AdapterPropagator::mids$ = NULL;
        bool AdapterPropagator::live$ = false;

        jclass AdapterPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/AdapterPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7077d4247ef1c4a5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/Propagator;)V");
            mids$[mid_addEffect_c6b40735d6c87d8a] = env->getMethodID(cls, "addEffect", "(Lorg/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect;)V");
            mids$[mid_getEffects_e62d3bb06d56d7e3] = env->getMethodID(cls, "getEffects", "()Ljava/util/List;");
            mids$[mid_getInitialState_9d155cc8314c99cf] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getPropagator_75ab23d3f479a59b] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/Propagator;");
            mids$[mid_resetInitialState_280c3390961e0a50] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_getMass_fd347811007a6ba3] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_basicPropagate_4f0008999861ca31] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_resetIntermediateState_1c47c97cdbc7e206] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
            mids$[mid_propagateOrbit_5df6dcb5c4123339] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdapterPropagator::AdapterPropagator(const ::org::orekit::propagation::Propagator & a0) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_7077d4247ef1c4a5, a0.this$)) {}

        void AdapterPropagator::addEffect(const ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEffect_c6b40735d6c87d8a], a0.this$);
        }

        ::java::util::List AdapterPropagator::getEffects() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEffects_e62d3bb06d56d7e3]));
        }

        ::org::orekit::propagation::SpacecraftState AdapterPropagator::getInitialState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_9d155cc8314c99cf]));
        }

        ::org::orekit::propagation::Propagator AdapterPropagator::getPropagator() const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_getPropagator_75ab23d3f479a59b]));
        }

        void AdapterPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_280c3390961e0a50], a0.this$);
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
        static PyObject *t_AdapterPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdapterPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdapterPropagator_init_(t_AdapterPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdapterPropagator_addEffect(t_AdapterPropagator *self, PyObject *arg);
        static PyObject *t_AdapterPropagator_getEffects(t_AdapterPropagator *self);
        static PyObject *t_AdapterPropagator_getInitialState(t_AdapterPropagator *self, PyObject *args);
        static PyObject *t_AdapterPropagator_getPropagator(t_AdapterPropagator *self);
        static PyObject *t_AdapterPropagator_resetInitialState(t_AdapterPropagator *self, PyObject *args);
        static PyObject *t_AdapterPropagator_get__effects(t_AdapterPropagator *self, void *data);
        static PyObject *t_AdapterPropagator_get__initialState(t_AdapterPropagator *self, void *data);
        static PyObject *t_AdapterPropagator_get__propagator(t_AdapterPropagator *self, void *data);
        static PyGetSetDef t_AdapterPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_AdapterPropagator, effects),
          DECLARE_GET_FIELD(t_AdapterPropagator, initialState),
          DECLARE_GET_FIELD(t_AdapterPropagator, propagator),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdapterPropagator__methods_[] = {
          DECLARE_METHOD(t_AdapterPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdapterPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdapterPropagator, addEffect, METH_O),
          DECLARE_METHOD(t_AdapterPropagator, getEffects, METH_NOARGS),
          DECLARE_METHOD(t_AdapterPropagator, getInitialState, METH_VARARGS),
          DECLARE_METHOD(t_AdapterPropagator, getPropagator, METH_NOARGS),
          DECLARE_METHOD(t_AdapterPropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdapterPropagator)[] = {
          { Py_tp_methods, t_AdapterPropagator__methods_ },
          { Py_tp_init, (void *) t_AdapterPropagator_init_ },
          { Py_tp_getset, t_AdapterPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdapterPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(AdapterPropagator, t_AdapterPropagator, AdapterPropagator);

        void t_AdapterPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdapterPropagator), &PY_TYPE_DEF(AdapterPropagator), module, "AdapterPropagator", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator), "DifferentialEffect", make_descriptor(&PY_TYPE_DEF(AdapterPropagator$DifferentialEffect)));
        }

        void t_AdapterPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator), "class_", make_descriptor(AdapterPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator), "wrapfn_", make_descriptor(t_AdapterPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdapterPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdapterPropagator::initializeClass, 1)))
            return NULL;
          return t_AdapterPropagator::wrap_Object(AdapterPropagator(((t_AdapterPropagator *) arg)->object.this$));
        }
        static PyObject *t_AdapterPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdapterPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdapterPropagator_init_(t_AdapterPropagator *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::Propagator a0((jobject) NULL);
          AdapterPropagator object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::Propagator::initializeClass, &a0))
          {
            INT_CALL(object = AdapterPropagator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdapterPropagator_addEffect(t_AdapterPropagator *self, PyObject *arg)
        {
          ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addEffect(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addEffect", arg);
          return NULL;
        }

        static PyObject *t_AdapterPropagator_getEffects(t_AdapterPropagator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getEffects());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::PY_TYPE(AdapterPropagator$DifferentialEffect));
        }

        static PyObject *t_AdapterPropagator_getInitialState(t_AdapterPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getInitialState());
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AdapterPropagator), (PyObject *) self, "getInitialState", args, 2);
        }

        static PyObject *t_AdapterPropagator_getPropagator(t_AdapterPropagator *self)
        {
          ::org::orekit::propagation::Propagator result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagator());
          return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
        }

        static PyObject *t_AdapterPropagator_resetInitialState(t_AdapterPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AdapterPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_AdapterPropagator_get__effects(t_AdapterPropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getEffects());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AdapterPropagator_get__initialState(t_AdapterPropagator *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_AdapterPropagator_get__propagator(t_AdapterPropagator *self, void *data)
        {
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagator());
          return ::org::orekit::propagation::t_Propagator::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PythonFieldODEIntegratorBuilder.h"
#include "java/lang/Throwable.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/conversion/FieldODEIntegratorBuilder.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PythonFieldODEIntegratorBuilder::class$ = NULL;
        jmethodID *PythonFieldODEIntegratorBuilder::mids$ = NULL;
        bool PythonFieldODEIntegratorBuilder::live$ = false;

        jclass PythonFieldODEIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PythonFieldODEIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_buildIntegrator_95fca721ff63137c] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");
            mids$[mid_buildIntegrator_ce58c6ef4cfb23c4] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldODEIntegratorBuilder::PythonFieldODEIntegratorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonFieldODEIntegratorBuilder::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonFieldODEIntegratorBuilder::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonFieldODEIntegratorBuilder::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace conversion {
        static PyObject *t_PythonFieldODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldODEIntegratorBuilder_of_(t_PythonFieldODEIntegratorBuilder *self, PyObject *args);
        static int t_PythonFieldODEIntegratorBuilder_init_(t_PythonFieldODEIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldODEIntegratorBuilder_finalize(t_PythonFieldODEIntegratorBuilder *self);
        static PyObject *t_PythonFieldODEIntegratorBuilder_pythonExtension(t_PythonFieldODEIntegratorBuilder *self, PyObject *args);
        static jobject JNICALL t_PythonFieldODEIntegratorBuilder_buildIntegrator0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonFieldODEIntegratorBuilder_buildIntegrator1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonFieldODEIntegratorBuilder_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldODEIntegratorBuilder_get__self(t_PythonFieldODEIntegratorBuilder *self, void *data);
        static PyObject *t_PythonFieldODEIntegratorBuilder_get__parameters_(t_PythonFieldODEIntegratorBuilder *self, void *data);
        static PyGetSetDef t_PythonFieldODEIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldODEIntegratorBuilder, self),
          DECLARE_GET_FIELD(t_PythonFieldODEIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldODEIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_PythonFieldODEIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldODEIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldODEIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldODEIntegratorBuilder, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldODEIntegratorBuilder, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldODEIntegratorBuilder)[] = {
          { Py_tp_methods, t_PythonFieldODEIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_PythonFieldODEIntegratorBuilder_init_ },
          { Py_tp_getset, t_PythonFieldODEIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldODEIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldODEIntegratorBuilder, t_PythonFieldODEIntegratorBuilder, PythonFieldODEIntegratorBuilder);
        PyObject *t_PythonFieldODEIntegratorBuilder::wrap_Object(const PythonFieldODEIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldODEIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldODEIntegratorBuilder *self = (t_PythonFieldODEIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldODEIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldODEIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldODEIntegratorBuilder *self = (t_PythonFieldODEIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldODEIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldODEIntegratorBuilder), &PY_TYPE_DEF(PythonFieldODEIntegratorBuilder), module, "PythonFieldODEIntegratorBuilder", 1);
        }

        void t_PythonFieldODEIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldODEIntegratorBuilder), "class_", make_descriptor(PythonFieldODEIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldODEIntegratorBuilder), "wrapfn_", make_descriptor(t_PythonFieldODEIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldODEIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldODEIntegratorBuilder::initializeClass);
          JNINativeMethod methods[] = {
            { "buildIntegrator", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;", (void *) t_PythonFieldODEIntegratorBuilder_buildIntegrator0 },
            { "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;", (void *) t_PythonFieldODEIntegratorBuilder_buildIntegrator1 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldODEIntegratorBuilder_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonFieldODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldODEIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_PythonFieldODEIntegratorBuilder::wrap_Object(PythonFieldODEIntegratorBuilder(((t_PythonFieldODEIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldODEIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldODEIntegratorBuilder_of_(t_PythonFieldODEIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldODEIntegratorBuilder_init_(t_PythonFieldODEIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldODEIntegratorBuilder object((jobject) NULL);

          INT_CALL(object = PythonFieldODEIntegratorBuilder());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldODEIntegratorBuilder_finalize(t_PythonFieldODEIntegratorBuilder *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldODEIntegratorBuilder_pythonExtension(t_PythonFieldODEIntegratorBuilder *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldODEIntegratorBuilder_buildIntegrator0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldODEIntegratorBuilder::mids$[PythonFieldODEIntegratorBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::ode::AbstractFieldIntegrator value((jobject) NULL);
          PyObject *o0 = ::org::orekit::orbits::t_FieldOrbit::wrap_Object(::org::orekit::orbits::FieldOrbit(a0));
          PyObject *o1 = ::org::orekit::orbits::t_OrbitType::wrap_Object(::org::orekit::orbits::OrbitType(a1));
          PyObject *result = PyObject_CallMethod(obj, "buildIntegrator", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::ode::AbstractFieldIntegrator::initializeClass, &value))
          {
            throwTypeError("buildIntegrator", result);
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

        static jobject JNICALL t_PythonFieldODEIntegratorBuilder_buildIntegrator1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldODEIntegratorBuilder::mids$[PythonFieldODEIntegratorBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::ode::AbstractFieldIntegrator value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
          PyObject *o1 = ::org::orekit::orbits::t_Orbit::wrap_Object(::org::orekit::orbits::Orbit(a1));
          PyObject *o2 = ::org::orekit::orbits::t_OrbitType::wrap_Object(::org::orekit::orbits::OrbitType(a2));
          PyObject *result = PyObject_CallMethod(obj, "buildIntegrator", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::ode::AbstractFieldIntegrator::initializeClass, &value))
          {
            throwTypeError("buildIntegrator", result);
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

        static void JNICALL t_PythonFieldODEIntegratorBuilder_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldODEIntegratorBuilder::mids$[PythonFieldODEIntegratorBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldODEIntegratorBuilder::mids$[PythonFieldODEIntegratorBuilder::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldODEIntegratorBuilder_get__self(t_PythonFieldODEIntegratorBuilder *self, void *data)
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
        static PyObject *t_PythonFieldODEIntegratorBuilder_get__parameters_(t_PythonFieldODEIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/drag/PythonAbstractDragForceModel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        ::java::lang::Class *PythonAbstractDragForceModel::class$ = NULL;
        jmethodID *PythonAbstractDragForceModel::mids$ = NULL;
        bool PythonAbstractDragForceModel::live$ = false;

        jclass PythonAbstractDragForceModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/drag/PythonAbstractDragForceModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_741ee7df46ce2068] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/Atmosphere;)V");
            mids$[mid_acceleration_20bded0292328743] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_0ce449c67b5ffd9c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractDragForceModel::PythonAbstractDragForceModel(const ::org::orekit::models::earth::atmosphere::Atmosphere & a0) : ::org::orekit::forces::drag::AbstractDragForceModel(env->newObject(initializeClass, &mids$, mid_init$_741ee7df46ce2068, a0.this$)) {}

        void PythonAbstractDragForceModel::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonAbstractDragForceModel::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonAbstractDragForceModel::pythonExtension(jlong a0) const
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
    namespace forces {
      namespace drag {
        static PyObject *t_PythonAbstractDragForceModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractDragForceModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractDragForceModel_init_(t_PythonAbstractDragForceModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractDragForceModel_finalize(t_PythonAbstractDragForceModel *self);
        static PyObject *t_PythonAbstractDragForceModel_pythonExtension(t_PythonAbstractDragForceModel *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractDragForceModel_acceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonAbstractDragForceModel_acceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonAbstractDragForceModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractDragForceModel_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractDragForceModel_get__self(t_PythonAbstractDragForceModel *self, void *data);
        static PyGetSetDef t_PythonAbstractDragForceModel__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractDragForceModel, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractDragForceModel__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractDragForceModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractDragForceModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractDragForceModel, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractDragForceModel, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractDragForceModel)[] = {
          { Py_tp_methods, t_PythonAbstractDragForceModel__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractDragForceModel_init_ },
          { Py_tp_getset, t_PythonAbstractDragForceModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractDragForceModel)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::drag::AbstractDragForceModel),
          NULL
        };

        DEFINE_TYPE(PythonAbstractDragForceModel, t_PythonAbstractDragForceModel, PythonAbstractDragForceModel);

        void t_PythonAbstractDragForceModel::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractDragForceModel), &PY_TYPE_DEF(PythonAbstractDragForceModel), module, "PythonAbstractDragForceModel", 1);
        }

        void t_PythonAbstractDragForceModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDragForceModel), "class_", make_descriptor(PythonAbstractDragForceModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDragForceModel), "wrapfn_", make_descriptor(t_PythonAbstractDragForceModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDragForceModel), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractDragForceModel::initializeClass);
          JNINativeMethod methods[] = {
            { "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonAbstractDragForceModel_acceleration0 },
            { "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAbstractDragForceModel_acceleration1 },
            { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonAbstractDragForceModel_getParametersDrivers2 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractDragForceModel_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonAbstractDragForceModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractDragForceModel::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractDragForceModel::wrap_Object(PythonAbstractDragForceModel(((t_PythonAbstractDragForceModel *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractDragForceModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractDragForceModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractDragForceModel_init_(t_PythonAbstractDragForceModel *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::models::earth::atmosphere::Atmosphere a0((jobject) NULL);
          PythonAbstractDragForceModel object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::models::earth::atmosphere::Atmosphere::initializeClass, &a0))
          {
            INT_CALL(object = PythonAbstractDragForceModel(a0));
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

        static PyObject *t_PythonAbstractDragForceModel_finalize(t_PythonAbstractDragForceModel *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractDragForceModel_pythonExtension(t_PythonAbstractDragForceModel *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractDragForceModel_acceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDragForceModel::mids$[PythonAbstractDragForceModel::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "acceleration", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
          {
            throwTypeError("acceleration", result);
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

        static jobject JNICALL t_PythonAbstractDragForceModel_acceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDragForceModel::mids$[PythonAbstractDragForceModel::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = JArray<jdouble>(a1).wrap();
          PyObject *result = PyObject_CallMethod(obj, "acceleration", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("acceleration", result);
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

        static jobject JNICALL t_PythonAbstractDragForceModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDragForceModel::mids$[PythonAbstractDragForceModel::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getParametersDrivers", result);
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

        static void JNICALL t_PythonAbstractDragForceModel_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDragForceModel::mids$[PythonAbstractDragForceModel::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractDragForceModel::mids$[PythonAbstractDragForceModel::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractDragForceModel_get__self(t_PythonAbstractDragForceModel *self, void *data)
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
#include "org/orekit/estimation/sequential/PythonAbstractCovarianceMatrixProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *PythonAbstractCovarianceMatrixProvider::class$ = NULL;
        jmethodID *PythonAbstractCovarianceMatrixProvider::mids$ = NULL;
        bool PythonAbstractCovarianceMatrixProvider::live$ = false;

        jclass PythonAbstractCovarianceMatrixProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/PythonAbstractCovarianceMatrixProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_84bd15e0995d0c79] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getProcessNoiseMatrix_18b28191c1378912] = env->getMethodID(cls, "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractCovarianceMatrixProvider::PythonAbstractCovarianceMatrixProvider(const ::org::hipparchus::linear::RealMatrix & a0) : ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider(env->newObject(initializeClass, &mids$, mid_init$_84bd15e0995d0c79, a0.this$)) {}

        void PythonAbstractCovarianceMatrixProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonAbstractCovarianceMatrixProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonAbstractCovarianceMatrixProvider::pythonExtension(jlong a0) const
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
      namespace sequential {
        static PyObject *t_PythonAbstractCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractCovarianceMatrixProvider_init_(t_PythonAbstractCovarianceMatrixProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractCovarianceMatrixProvider_finalize(t_PythonAbstractCovarianceMatrixProvider *self);
        static PyObject *t_PythonAbstractCovarianceMatrixProvider_pythonExtension(t_PythonAbstractCovarianceMatrixProvider *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractCovarianceMatrixProvider_getProcessNoiseMatrix0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonAbstractCovarianceMatrixProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractCovarianceMatrixProvider_get__self(t_PythonAbstractCovarianceMatrixProvider *self, void *data);
        static PyGetSetDef t_PythonAbstractCovarianceMatrixProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractCovarianceMatrixProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractCovarianceMatrixProvider__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractCovarianceMatrixProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractCovarianceMatrixProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractCovarianceMatrixProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractCovarianceMatrixProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractCovarianceMatrixProvider)[] = {
          { Py_tp_methods, t_PythonAbstractCovarianceMatrixProvider__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractCovarianceMatrixProvider_init_ },
          { Py_tp_getset, t_PythonAbstractCovarianceMatrixProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractCovarianceMatrixProvider)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider),
          NULL
        };

        DEFINE_TYPE(PythonAbstractCovarianceMatrixProvider, t_PythonAbstractCovarianceMatrixProvider, PythonAbstractCovarianceMatrixProvider);

        void t_PythonAbstractCovarianceMatrixProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractCovarianceMatrixProvider), &PY_TYPE_DEF(PythonAbstractCovarianceMatrixProvider), module, "PythonAbstractCovarianceMatrixProvider", 1);
        }

        void t_PythonAbstractCovarianceMatrixProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractCovarianceMatrixProvider), "class_", make_descriptor(PythonAbstractCovarianceMatrixProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractCovarianceMatrixProvider), "wrapfn_", make_descriptor(t_PythonAbstractCovarianceMatrixProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractCovarianceMatrixProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractCovarianceMatrixProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonAbstractCovarianceMatrixProvider_getProcessNoiseMatrix0 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractCovarianceMatrixProvider_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonAbstractCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractCovarianceMatrixProvider::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractCovarianceMatrixProvider::wrap_Object(PythonAbstractCovarianceMatrixProvider(((t_PythonAbstractCovarianceMatrixProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractCovarianceMatrixProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractCovarianceMatrixProvider_init_(t_PythonAbstractCovarianceMatrixProvider *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          PythonAbstractCovarianceMatrixProvider object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
          {
            INT_CALL(object = PythonAbstractCovarianceMatrixProvider(a0));
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

        static PyObject *t_PythonAbstractCovarianceMatrixProvider_finalize(t_PythonAbstractCovarianceMatrixProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractCovarianceMatrixProvider_pythonExtension(t_PythonAbstractCovarianceMatrixProvider *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractCovarianceMatrixProvider_getProcessNoiseMatrix0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractCovarianceMatrixProvider::mids$[PythonAbstractCovarianceMatrixProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a1));
          PyObject *result = PyObject_CallMethod(obj, "getProcessNoiseMatrix", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getProcessNoiseMatrix", result);
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

        static void JNICALL t_PythonAbstractCovarianceMatrixProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractCovarianceMatrixProvider::mids$[PythonAbstractCovarianceMatrixProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractCovarianceMatrixProvider::mids$[PythonAbstractCovarianceMatrixProvider::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractCovarianceMatrixProvider_get__self(t_PythonAbstractCovarianceMatrixProvider *self, void *data)
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
#include "org/orekit/forces/maneuvers/trigger/StartStopEventsTrigger.h"
#include "org/orekit/propagation/events/AbstractDetector.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *StartStopEventsTrigger::class$ = NULL;
          jmethodID *StartStopEventsTrigger::mids$ = NULL;
          bool StartStopEventsTrigger::live$ = false;

          jclass StartStopEventsTrigger::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/StartStopEventsTrigger");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getEventDetectors_14e21bf777ff0ccf] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
              mids$[mid_getFieldEventDetectors_283ad33581c047a0] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
              mids$[mid_getStartDetector_e060948c985b754b] = env->getMethodID(cls, "getStartDetector", "()Lorg/orekit/propagation/events/AbstractDetector;");
              mids$[mid_getStopDetector_e060948c985b754b] = env->getMethodID(cls, "getStopDetector", "()Lorg/orekit/propagation/events/AbstractDetector;");
              mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_isFiringOnInitialState_4ef3ef34329e6316] = env->getMethodID(cls, "isFiringOnInitialState", "(Lorg/orekit/propagation/SpacecraftState;Z)Z");
              mids$[mid_convertStartDetector_323adeb6f2939c8a] = env->getMethodID(cls, "convertStartDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
              mids$[mid_convertStopDetector_323adeb6f2939c8a] = env->getMethodID(cls, "convertStopDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::stream::Stream StartStopEventsTrigger::getEventDetectors() const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_14e21bf777ff0ccf]));
          }

          ::java::util::stream::Stream StartStopEventsTrigger::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_283ad33581c047a0], a0.this$));
          }

          ::org::orekit::propagation::events::AbstractDetector StartStopEventsTrigger::getStartDetector() const
          {
            return ::org::orekit::propagation::events::AbstractDetector(env->callObjectMethod(this$, mids$[mid_getStartDetector_e060948c985b754b]));
          }

          ::org::orekit::propagation::events::AbstractDetector StartStopEventsTrigger::getStopDetector() const
          {
            return ::org::orekit::propagation::events::AbstractDetector(env->callObjectMethod(this$, mids$[mid_getStopDetector_e060948c985b754b]));
          }

          void StartStopEventsTrigger::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
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
        namespace trigger {
          static PyObject *t_StartStopEventsTrigger_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StartStopEventsTrigger_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StartStopEventsTrigger_of_(t_StartStopEventsTrigger *self, PyObject *args);
          static PyObject *t_StartStopEventsTrigger_getEventDetectors(t_StartStopEventsTrigger *self, PyObject *args);
          static PyObject *t_StartStopEventsTrigger_getFieldEventDetectors(t_StartStopEventsTrigger *self, PyObject *args);
          static PyObject *t_StartStopEventsTrigger_getStartDetector(t_StartStopEventsTrigger *self);
          static PyObject *t_StartStopEventsTrigger_getStopDetector(t_StartStopEventsTrigger *self);
          static PyObject *t_StartStopEventsTrigger_init(t_StartStopEventsTrigger *self, PyObject *args);
          static PyObject *t_StartStopEventsTrigger_get__eventDetectors(t_StartStopEventsTrigger *self, void *data);
          static PyObject *t_StartStopEventsTrigger_get__startDetector(t_StartStopEventsTrigger *self, void *data);
          static PyObject *t_StartStopEventsTrigger_get__stopDetector(t_StartStopEventsTrigger *self, void *data);
          static PyObject *t_StartStopEventsTrigger_get__parameters_(t_StartStopEventsTrigger *self, void *data);
          static PyGetSetDef t_StartStopEventsTrigger__fields_[] = {
            DECLARE_GET_FIELD(t_StartStopEventsTrigger, eventDetectors),
            DECLARE_GET_FIELD(t_StartStopEventsTrigger, startDetector),
            DECLARE_GET_FIELD(t_StartStopEventsTrigger, stopDetector),
            DECLARE_GET_FIELD(t_StartStopEventsTrigger, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_StartStopEventsTrigger__methods_[] = {
            DECLARE_METHOD(t_StartStopEventsTrigger, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StartStopEventsTrigger, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StartStopEventsTrigger, of_, METH_VARARGS),
            DECLARE_METHOD(t_StartStopEventsTrigger, getEventDetectors, METH_VARARGS),
            DECLARE_METHOD(t_StartStopEventsTrigger, getFieldEventDetectors, METH_VARARGS),
            DECLARE_METHOD(t_StartStopEventsTrigger, getStartDetector, METH_NOARGS),
            DECLARE_METHOD(t_StartStopEventsTrigger, getStopDetector, METH_NOARGS),
            DECLARE_METHOD(t_StartStopEventsTrigger, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StartStopEventsTrigger)[] = {
            { Py_tp_methods, t_StartStopEventsTrigger__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_StartStopEventsTrigger__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StartStopEventsTrigger)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers),
            NULL
          };

          DEFINE_TYPE(StartStopEventsTrigger, t_StartStopEventsTrigger, StartStopEventsTrigger);
          PyObject *t_StartStopEventsTrigger::wrap_Object(const StartStopEventsTrigger& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_StartStopEventsTrigger::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_StartStopEventsTrigger *self = (t_StartStopEventsTrigger *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_StartStopEventsTrigger::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_StartStopEventsTrigger::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_StartStopEventsTrigger *self = (t_StartStopEventsTrigger *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_StartStopEventsTrigger::install(PyObject *module)
          {
            installType(&PY_TYPE(StartStopEventsTrigger), &PY_TYPE_DEF(StartStopEventsTrigger), module, "StartStopEventsTrigger", 0);
          }

          void t_StartStopEventsTrigger::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StartStopEventsTrigger), "class_", make_descriptor(StartStopEventsTrigger::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StartStopEventsTrigger), "wrapfn_", make_descriptor(t_StartStopEventsTrigger::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StartStopEventsTrigger), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StartStopEventsTrigger_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StartStopEventsTrigger::initializeClass, 1)))
              return NULL;
            return t_StartStopEventsTrigger::wrap_Object(StartStopEventsTrigger(((t_StartStopEventsTrigger *) arg)->object.this$));
          }
          static PyObject *t_StartStopEventsTrigger_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StartStopEventsTrigger::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_StartStopEventsTrigger_of_(t_StartStopEventsTrigger *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_StartStopEventsTrigger_getEventDetectors(t_StartStopEventsTrigger *self, PyObject *args)
          {
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getEventDetectors());
              return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
            }

            return callSuper(PY_TYPE(StartStopEventsTrigger), (PyObject *) self, "getEventDetectors", args, 2);
          }

          static PyObject *t_StartStopEventsTrigger_getFieldEventDetectors(t_StartStopEventsTrigger *self, PyObject *args)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
              return ::java::util::stream::t_Stream::wrap_Object(result);
            }

            return callSuper(PY_TYPE(StartStopEventsTrigger), (PyObject *) self, "getFieldEventDetectors", args, 2);
          }

          static PyObject *t_StartStopEventsTrigger_getStartDetector(t_StartStopEventsTrigger *self)
          {
            ::org::orekit::propagation::events::AbstractDetector result((jobject) NULL);
            OBJ_CALL(result = self->object.getStartDetector());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(result);
          }

          static PyObject *t_StartStopEventsTrigger_getStopDetector(t_StartStopEventsTrigger *self)
          {
            ::org::orekit::propagation::events::AbstractDetector result((jobject) NULL);
            OBJ_CALL(result = self->object.getStopDetector());
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(result);
          }

          static PyObject *t_StartStopEventsTrigger_init(t_StartStopEventsTrigger *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(StartStopEventsTrigger), (PyObject *) self, "init", args, 2);
          }
          static PyObject *t_StartStopEventsTrigger_get__parameters_(t_StartStopEventsTrigger *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_StartStopEventsTrigger_get__eventDetectors(t_StartStopEventsTrigger *self, void *data)
          {
            ::java::util::stream::Stream value((jobject) NULL);
            OBJ_CALL(value = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(value);
          }

          static PyObject *t_StartStopEventsTrigger_get__startDetector(t_StartStopEventsTrigger *self, void *data)
          {
            ::org::orekit::propagation::events::AbstractDetector value((jobject) NULL);
            OBJ_CALL(value = self->object.getStartDetector());
            return ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(value);
          }

          static PyObject *t_StartStopEventsTrigger_get__stopDetector(t_StartStopEventsTrigger *self, void *data)
          {
            ::org::orekit::propagation::events::AbstractDetector value((jobject) NULL);
            OBJ_CALL(value = self->object.getStopDetector());
            return ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/TriangularDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *TriangularDistribution::class$ = NULL;
        jmethodID *TriangularDistribution::mids$ = NULL;
        bool TriangularDistribution::live$ = false;

        jclass TriangularDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/TriangularDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_04fd0666b613d2ab] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getMode_b74f83833fdad017] = env->getMethodID(cls, "getMode", "()D");
            mids$[mid_getNumericalMean_b74f83833fdad017] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_b74f83833fdad017] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_9ab94ac1dc23b105] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TriangularDistribution::TriangularDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

        jdouble TriangularDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_04fd0666b613d2ab], a0);
        }

        jdouble TriangularDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_04fd0666b613d2ab], a0);
        }

        jdouble TriangularDistribution::getMode() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMode_b74f83833fdad017]);
        }

        jdouble TriangularDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_b74f83833fdad017]);
        }

        jdouble TriangularDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_b74f83833fdad017]);
        }

        jdouble TriangularDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_b74f83833fdad017]);
        }

        jdouble TriangularDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_b74f83833fdad017]);
        }

        jdouble TriangularDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_04fd0666b613d2ab], a0);
        }

        jboolean TriangularDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_9ab94ac1dc23b105]);
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
    namespace distribution {
      namespace continuous {
        static PyObject *t_TriangularDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TriangularDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TriangularDistribution_init_(t_TriangularDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TriangularDistribution_cumulativeProbability(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_density(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_getMode(t_TriangularDistribution *self);
        static PyObject *t_TriangularDistribution_getNumericalMean(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_getNumericalVariance(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_getSupportLowerBound(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_getSupportUpperBound(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_inverseCumulativeProbability(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_isSupportConnected(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_get__mode(t_TriangularDistribution *self, void *data);
        static PyObject *t_TriangularDistribution_get__numericalMean(t_TriangularDistribution *self, void *data);
        static PyObject *t_TriangularDistribution_get__numericalVariance(t_TriangularDistribution *self, void *data);
        static PyObject *t_TriangularDistribution_get__supportConnected(t_TriangularDistribution *self, void *data);
        static PyObject *t_TriangularDistribution_get__supportLowerBound(t_TriangularDistribution *self, void *data);
        static PyObject *t_TriangularDistribution_get__supportUpperBound(t_TriangularDistribution *self, void *data);
        static PyGetSetDef t_TriangularDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_TriangularDistribution, mode),
          DECLARE_GET_FIELD(t_TriangularDistribution, numericalMean),
          DECLARE_GET_FIELD(t_TriangularDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_TriangularDistribution, supportConnected),
          DECLARE_GET_FIELD(t_TriangularDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_TriangularDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TriangularDistribution__methods_[] = {
          DECLARE_METHOD(t_TriangularDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TriangularDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TriangularDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, getMode, METH_NOARGS),
          DECLARE_METHOD(t_TriangularDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TriangularDistribution)[] = {
          { Py_tp_methods, t_TriangularDistribution__methods_ },
          { Py_tp_init, (void *) t_TriangularDistribution_init_ },
          { Py_tp_getset, t_TriangularDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TriangularDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(TriangularDistribution, t_TriangularDistribution, TriangularDistribution);

        void t_TriangularDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(TriangularDistribution), &PY_TYPE_DEF(TriangularDistribution), module, "TriangularDistribution", 0);
        }

        void t_TriangularDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TriangularDistribution), "class_", make_descriptor(TriangularDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TriangularDistribution), "wrapfn_", make_descriptor(t_TriangularDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TriangularDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TriangularDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TriangularDistribution::initializeClass, 1)))
            return NULL;
          return t_TriangularDistribution::wrap_Object(TriangularDistribution(((t_TriangularDistribution *) arg)->object.this$));
        }
        static PyObject *t_TriangularDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TriangularDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TriangularDistribution_init_(t_TriangularDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          TriangularDistribution object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = TriangularDistribution(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_TriangularDistribution_cumulativeProbability(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_TriangularDistribution_density(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_TriangularDistribution_getMode(t_TriangularDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMode());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_TriangularDistribution_getNumericalMean(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_TriangularDistribution_getNumericalVariance(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_TriangularDistribution_getSupportLowerBound(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_TriangularDistribution_getSupportUpperBound(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_TriangularDistribution_inverseCumulativeProbability(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_TriangularDistribution_isSupportConnected(t_TriangularDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_TriangularDistribution_get__mode(t_TriangularDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMode());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TriangularDistribution_get__numericalMean(t_TriangularDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TriangularDistribution_get__numericalVariance(t_TriangularDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TriangularDistribution_get__supportConnected(t_TriangularDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_TriangularDistribution_get__supportLowerBound(t_TriangularDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TriangularDistribution_get__supportUpperBound(t_TriangularDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/RealMatrixChangingVisitor.h"
#include "org/hipparchus/linear/RealMatrixPreservingVisitor.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Blendable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealMatrix::class$ = NULL;
      jmethodID *RealMatrix::mids$ = NULL;
      bool RealMatrix::live$ = false;

      jclass RealMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_be124f4006dc9f69] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_addToEntry_94fe8d9ffeb50676] = env->getMethodID(cls, "addToEntry", "(IID)V");
          mids$[mid_blendArithmeticallyWith_514e92b8dbd002ec] = env->getMethodID(cls, "blendArithmeticallyWith", "(Lorg/hipparchus/linear/RealMatrix;D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_copy_f77d745f2128c391] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_copySubMatrix_c11e3fd762bd0fee] = env->getMethodID(cls, "copySubMatrix", "([I[I[[D)V");
          mids$[mid_copySubMatrix_ac682e6a44042af2] = env->getMethodID(cls, "copySubMatrix", "(IIII[[D)V");
          mids$[mid_createMatrix_28a444e31666746c] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getColumn_bb2a44a76ad252f7] = env->getMethodID(cls, "getColumn", "(I)[D");
          mids$[mid_getColumnMatrix_2a3e0c79a1b41fe4] = env->getMethodID(cls, "getColumnMatrix", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getColumnVector_b50dc3915c68ddbc] = env->getMethodID(cls, "getColumnVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getData_3b7b373db8e7887f] = env->getMethodID(cls, "getData", "()[[D");
          mids$[mid_getEntry_cad98089d00f8a5b] = env->getMethodID(cls, "getEntry", "(II)D");
          mids$[mid_getFrobeniusNorm_b74f83833fdad017] = env->getMethodID(cls, "getFrobeniusNorm", "()D");
          mids$[mid_getNorm1_b74f83833fdad017] = env->getMethodID(cls, "getNorm1", "()D");
          mids$[mid_getNormInfty_b74f83833fdad017] = env->getMethodID(cls, "getNormInfty", "()D");
          mids$[mid_getRow_bb2a44a76ad252f7] = env->getMethodID(cls, "getRow", "(I)[D");
          mids$[mid_getRowMatrix_2a3e0c79a1b41fe4] = env->getMethodID(cls, "getRowMatrix", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getRowVector_b50dc3915c68ddbc] = env->getMethodID(cls, "getRowVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getSubMatrix_c330dd232db3f25c] = env->getMethodID(cls, "getSubMatrix", "([I[I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getSubMatrix_f6333def4d085867] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getTrace_b74f83833fdad017] = env->getMethodID(cls, "getTrace", "()D");
          mids$[mid_map_9b393edf928ccf8a] = env->getMethodID(cls, "map", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_mapToSelf_9b393edf928ccf8a] = env->getMethodID(cls, "mapToSelf", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiply_be124f4006dc9f69] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiplyEntry_94fe8d9ffeb50676] = env->getMethodID(cls, "multiplyEntry", "(IID)V");
          mids$[mid_multiplyTransposed_be124f4006dc9f69] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_operate_14dee4cb8cc3e959] = env->getMethodID(cls, "operate", "([D)[D");
          mids$[mid_operate_d5f1d017fd25113b] = env->getMethodID(cls, "operate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_power_2a3e0c79a1b41fe4] = env->getMethodID(cls, "power", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_preMultiply_14dee4cb8cc3e959] = env->getMethodID(cls, "preMultiply", "([D)[D");
          mids$[mid_preMultiply_d5f1d017fd25113b] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_preMultiply_be124f4006dc9f69] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_scalarAdd_f5dd9d6021dc9dae] = env->getMethodID(cls, "scalarAdd", "(D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_scalarMultiply_f5dd9d6021dc9dae] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_setColumn_75061e5f5bbace93] = env->getMethodID(cls, "setColumn", "(I[D)V");
          mids$[mid_setColumnMatrix_74dda270996520c8] = env->getMethodID(cls, "setColumnMatrix", "(ILorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_setColumnVector_9fe1e9c5bee9d07c] = env->getMethodID(cls, "setColumnVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_setEntry_94fe8d9ffeb50676] = env->getMethodID(cls, "setEntry", "(IID)V");
          mids$[mid_setRow_75061e5f5bbace93] = env->getMethodID(cls, "setRow", "(I[D)V");
          mids$[mid_setRowMatrix_74dda270996520c8] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_setRowVector_9fe1e9c5bee9d07c] = env->getMethodID(cls, "setRowVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_setSubMatrix_f12104c26dcf5b23] = env->getMethodID(cls, "setSubMatrix", "([[DII)V");
          mids$[mid_subtract_be124f4006dc9f69] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_transpose_f77d745f2128c391] = env->getMethodID(cls, "transpose", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_transposeMultiply_be124f4006dc9f69] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_walkInColumnOrder_e9eacc024b91638e] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInColumnOrder_8c777cbbebb3f320] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInColumnOrder_7a8f404d3cc13545] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInColumnOrder_0efcec2037689a79] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");
          mids$[mid_walkInOptimizedOrder_e9eacc024b91638e] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_8c777cbbebb3f320] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_7a8f404d3cc13545] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInOptimizedOrder_0efcec2037689a79] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_e9eacc024b91638e] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInRowOrder_8c777cbbebb3f320] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInRowOrder_7a8f404d3cc13545] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_0efcec2037689a79] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RealMatrix RealMatrix::add(const RealMatrix & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_add_be124f4006dc9f69], a0.this$));
      }

      void RealMatrix::addToEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_94fe8d9ffeb50676], a0, a1, a2);
      }

      RealMatrix RealMatrix::blendArithmeticallyWith(const RealMatrix & a0, jdouble a1) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_514e92b8dbd002ec], a0.this$, a1));
      }

      RealMatrix RealMatrix::copy() const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_copy_f77d745f2128c391]));
      }

      void RealMatrix::copySubMatrix(const JArray< jint > & a0, const JArray< jint > & a1, const JArray< JArray< jdouble > > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_c11e3fd762bd0fee], a0.this$, a1.this$, a2.this$);
      }

      void RealMatrix::copySubMatrix(jint a0, jint a1, jint a2, jint a3, const JArray< JArray< jdouble > > & a4) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_ac682e6a44042af2], a0, a1, a2, a3, a4.this$);
      }

      RealMatrix RealMatrix::createMatrix(jint a0, jint a1) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_28a444e31666746c], a0, a1));
      }

      JArray< jdouble > RealMatrix::getColumn(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getColumn_bb2a44a76ad252f7], a0));
      }

      RealMatrix RealMatrix::getColumnMatrix(jint a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_getColumnMatrix_2a3e0c79a1b41fe4], a0));
      }

      ::org::hipparchus::linear::RealVector RealMatrix::getColumnVector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getColumnVector_b50dc3915c68ddbc], a0));
      }

      JArray< JArray< jdouble > > RealMatrix::getData() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getData_3b7b373db8e7887f]));
      }

      jdouble RealMatrix::getEntry(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_cad98089d00f8a5b], a0, a1);
      }

      jdouble RealMatrix::getFrobeniusNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getFrobeniusNorm_b74f83833fdad017]);
      }

      jdouble RealMatrix::getNorm1() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm1_b74f83833fdad017]);
      }

      jdouble RealMatrix::getNormInfty() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormInfty_b74f83833fdad017]);
      }

      JArray< jdouble > RealMatrix::getRow(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getRow_bb2a44a76ad252f7], a0));
      }

      RealMatrix RealMatrix::getRowMatrix(jint a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_getRowMatrix_2a3e0c79a1b41fe4], a0));
      }

      ::org::hipparchus::linear::RealVector RealMatrix::getRowVector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getRowVector_b50dc3915c68ddbc], a0));
      }

      RealMatrix RealMatrix::getSubMatrix(const JArray< jint > & a0, const JArray< jint > & a1) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_c330dd232db3f25c], a0.this$, a1.this$));
      }

      RealMatrix RealMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_f6333def4d085867], a0, a1, a2, a3));
      }

      jdouble RealMatrix::getTrace() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTrace_b74f83833fdad017]);
      }

      RealMatrix RealMatrix::map(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_map_9b393edf928ccf8a], a0.this$));
      }

      RealMatrix RealMatrix::mapToSelf(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_mapToSelf_9b393edf928ccf8a], a0.this$));
      }

      RealMatrix RealMatrix::multiply(const RealMatrix & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_be124f4006dc9f69], a0.this$));
      }

      void RealMatrix::multiplyEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_94fe8d9ffeb50676], a0, a1, a2);
      }

      RealMatrix RealMatrix::multiplyTransposed(const RealMatrix & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_be124f4006dc9f69], a0.this$));
      }

      JArray< jdouble > RealMatrix::operate(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_operate_14dee4cb8cc3e959], a0.this$));
      }

      ::org::hipparchus::linear::RealVector RealMatrix::operate(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_operate_d5f1d017fd25113b], a0.this$));
      }

      RealMatrix RealMatrix::power(jint a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_power_2a3e0c79a1b41fe4], a0));
      }

      JArray< jdouble > RealMatrix::preMultiply(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_preMultiply_14dee4cb8cc3e959], a0.this$));
      }

      ::org::hipparchus::linear::RealVector RealMatrix::preMultiply(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_preMultiply_d5f1d017fd25113b], a0.this$));
      }

      RealMatrix RealMatrix::preMultiply(const RealMatrix & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_preMultiply_be124f4006dc9f69], a0.this$));
      }

      RealMatrix RealMatrix::scalarAdd(jdouble a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_scalarAdd_f5dd9d6021dc9dae], a0));
      }

      RealMatrix RealMatrix::scalarMultiply(jdouble a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_scalarMultiply_f5dd9d6021dc9dae], a0));
      }

      void RealMatrix::setColumn(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumn_75061e5f5bbace93], a0, a1.this$);
      }

      void RealMatrix::setColumnMatrix(jint a0, const RealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnMatrix_74dda270996520c8], a0, a1.this$);
      }

      void RealMatrix::setColumnVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnVector_9fe1e9c5bee9d07c], a0, a1.this$);
      }

      void RealMatrix::setEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_94fe8d9ffeb50676], a0, a1, a2);
      }

      void RealMatrix::setRow(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_75061e5f5bbace93], a0, a1.this$);
      }

      void RealMatrix::setRowMatrix(jint a0, const RealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_74dda270996520c8], a0, a1.this$);
      }

      void RealMatrix::setRowVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowVector_9fe1e9c5bee9d07c], a0, a1.this$);
      }

      void RealMatrix::setSubMatrix(const JArray< JArray< jdouble > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_f12104c26dcf5b23], a0.this$, a1, a2);
      }

      RealMatrix RealMatrix::subtract(const RealMatrix & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_be124f4006dc9f69], a0.this$));
      }

      RealMatrix RealMatrix::transpose() const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_transpose_f77d745f2128c391]));
      }

      RealMatrix RealMatrix::transposeMultiply(const RealMatrix & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_be124f4006dc9f69], a0.this$));
      }

      jdouble RealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_e9eacc024b91638e], a0.this$);
      }

      jdouble RealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_8c777cbbebb3f320], a0.this$);
      }

      jdouble RealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_7a8f404d3cc13545], a0.this$, a1, a2, a3, a4);
      }

      jdouble RealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_0efcec2037689a79], a0.this$, a1, a2, a3, a4);
      }

      jdouble RealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_e9eacc024b91638e], a0.this$);
      }

      jdouble RealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_8c777cbbebb3f320], a0.this$);
      }

      jdouble RealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_7a8f404d3cc13545], a0.this$, a1, a2, a3, a4);
      }

      jdouble RealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_0efcec2037689a79], a0.this$, a1, a2, a3, a4);
      }

      jdouble RealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_e9eacc024b91638e], a0.this$);
      }

      jdouble RealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_8c777cbbebb3f320], a0.this$);
      }

      jdouble RealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_7a8f404d3cc13545], a0.this$, a1, a2, a3, a4);
      }

      jdouble RealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_0efcec2037689a79], a0.this$, a1, a2, a3, a4);
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
      static PyObject *t_RealMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrix_add(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_addToEntry(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_blendArithmeticallyWith(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_copy(t_RealMatrix *self);
      static PyObject *t_RealMatrix_copySubMatrix(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_createMatrix(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_getColumn(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_getColumnMatrix(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_getColumnVector(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_getData(t_RealMatrix *self);
      static PyObject *t_RealMatrix_getEntry(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_getFrobeniusNorm(t_RealMatrix *self);
      static PyObject *t_RealMatrix_getNorm1(t_RealMatrix *self);
      static PyObject *t_RealMatrix_getNormInfty(t_RealMatrix *self);
      static PyObject *t_RealMatrix_getRow(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_getRowMatrix(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_getRowVector(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_getSubMatrix(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_getTrace(t_RealMatrix *self);
      static PyObject *t_RealMatrix_map(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_mapToSelf(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_multiply(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_multiplyEntry(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_multiplyTransposed(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_operate(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_power(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_preMultiply(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_scalarAdd(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_scalarMultiply(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_setColumn(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setColumnMatrix(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setColumnVector(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setEntry(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setRow(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setRowMatrix(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setRowVector(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setSubMatrix(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_subtract(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_transpose(t_RealMatrix *self);
      static PyObject *t_RealMatrix_transposeMultiply(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_walkInColumnOrder(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_walkInOptimizedOrder(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_walkInRowOrder(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_get__data(t_RealMatrix *self, void *data);
      static PyObject *t_RealMatrix_get__frobeniusNorm(t_RealMatrix *self, void *data);
      static PyObject *t_RealMatrix_get__norm1(t_RealMatrix *self, void *data);
      static PyObject *t_RealMatrix_get__normInfty(t_RealMatrix *self, void *data);
      static PyObject *t_RealMatrix_get__trace(t_RealMatrix *self, void *data);
      static PyGetSetDef t_RealMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_RealMatrix, data),
        DECLARE_GET_FIELD(t_RealMatrix, frobeniusNorm),
        DECLARE_GET_FIELD(t_RealMatrix, norm1),
        DECLARE_GET_FIELD(t_RealMatrix, normInfty),
        DECLARE_GET_FIELD(t_RealMatrix, trace),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealMatrix__methods_[] = {
        DECLARE_METHOD(t_RealMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrix, add, METH_O),
        DECLARE_METHOD(t_RealMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, blendArithmeticallyWith, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, copy, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, copySubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, getColumn, METH_O),
        DECLARE_METHOD(t_RealMatrix, getColumnMatrix, METH_O),
        DECLARE_METHOD(t_RealMatrix, getColumnVector, METH_O),
        DECLARE_METHOD(t_RealMatrix, getData, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, getFrobeniusNorm, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, getNorm1, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, getNormInfty, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, getRow, METH_O),
        DECLARE_METHOD(t_RealMatrix, getRowMatrix, METH_O),
        DECLARE_METHOD(t_RealMatrix, getRowVector, METH_O),
        DECLARE_METHOD(t_RealMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, getTrace, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, map, METH_O),
        DECLARE_METHOD(t_RealMatrix, mapToSelf, METH_O),
        DECLARE_METHOD(t_RealMatrix, multiply, METH_O),
        DECLARE_METHOD(t_RealMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, multiplyTransposed, METH_O),
        DECLARE_METHOD(t_RealMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, power, METH_O),
        DECLARE_METHOD(t_RealMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, scalarAdd, METH_O),
        DECLARE_METHOD(t_RealMatrix, scalarMultiply, METH_O),
        DECLARE_METHOD(t_RealMatrix, setColumn, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setRowVector, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, subtract, METH_O),
        DECLARE_METHOD(t_RealMatrix, transpose, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, transposeMultiply, METH_O),
        DECLARE_METHOD(t_RealMatrix, walkInColumnOrder, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, walkInOptimizedOrder, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealMatrix)[] = {
        { Py_tp_methods, t_RealMatrix__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_RealMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AnyMatrix),
        NULL
      };

      DEFINE_TYPE(RealMatrix, t_RealMatrix, RealMatrix);

      void t_RealMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(RealMatrix), &PY_TYPE_DEF(RealMatrix), module, "RealMatrix", 0);
      }

      void t_RealMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrix), "class_", make_descriptor(RealMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrix), "wrapfn_", make_descriptor(t_RealMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealMatrix::initializeClass, 1)))
          return NULL;
        return t_RealMatrix::wrap_Object(RealMatrix(((t_RealMatrix *) arg)->object.this$));
      }
      static PyObject *t_RealMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealMatrix_add(t_RealMatrix *self, PyObject *arg)
      {
        RealMatrix a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_addToEntry(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addToEntry", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_blendArithmeticallyWith(t_RealMatrix *self, PyObject *args)
      {
        RealMatrix a0((jobject) NULL);
        jdouble a1;
        RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "kD", RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_copy(t_RealMatrix *self)
      {
        RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RealMatrix_copySubMatrix(t_RealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            JArray< JArray< jdouble > > a2((jobject) NULL);

            if (!parseArgs(args, "[I[I[[D", &a0, &a1, &a2))
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
            JArray< JArray< jdouble > > a4((jobject) NULL);

            if (!parseArgs(args, "IIII[[D", &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(self->object.copySubMatrix(a0, a1, a2, a3, a4));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySubMatrix", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_createMatrix(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "createMatrix", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_getColumn(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumn(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getColumn", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_getColumnMatrix(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnMatrix(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnMatrix", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_getColumnVector(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnVector(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnVector", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_getData(t_RealMatrix *self)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getData());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_RealMatrix_getEntry(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_getFrobeniusNorm(t_RealMatrix *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getFrobeniusNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealMatrix_getNorm1(t_RealMatrix *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNorm1());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealMatrix_getNormInfty(t_RealMatrix *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNormInfty());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealMatrix_getRow(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getRow", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_getRowMatrix(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowMatrix(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowMatrix", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_getRowVector(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowVector(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowVector", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_getSubMatrix(t_RealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1));
              return t_RealMatrix::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
              return t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getSubMatrix", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_getTrace(t_RealMatrix *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTrace());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealMatrix_map(t_RealMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.map(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "map", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_mapToSelf(t_RealMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.mapToSelf(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapToSelf", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_multiply(t_RealMatrix *self, PyObject *arg)
      {
        RealMatrix a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.multiply(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_multiplyEntry(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "multiplyEntry", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_multiplyTransposed(t_RealMatrix *self, PyObject *arg)
      {
        RealMatrix a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.multiplyTransposed(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "multiplyTransposed", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_operate(t_RealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = self->object.operate(a0));
              return result.wrap();
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.operate(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "operate", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_power(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.power(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "power", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_preMultiply(t_RealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return result.wrap();
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            RealMatrix a0((jobject) NULL);
            RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "preMultiply", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_scalarAdd(t_RealMatrix *self, PyObject *arg)
      {
        jdouble a0;
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarAdd(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarAdd", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_scalarMultiply(t_RealMatrix *self, PyObject *arg)
      {
        jdouble a0;
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_setColumn(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setColumn(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumn", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setColumnMatrix(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        RealMatrix a1((jobject) NULL);

        if (!parseArgs(args, "Ik", RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setColumnMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnMatrix", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setColumnVector(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setColumnVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnVector", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setEntry(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEntry", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setRow(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRow", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setRowMatrix(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        RealMatrix a1((jobject) NULL);

        if (!parseArgs(args, "Ik", RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setRowMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowMatrix", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setRowVector(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setRowVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowVector", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setSubMatrix(t_RealMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        jint a1;
        jint a2;

        if (!parseArgs(args, "[[DII", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setSubMatrix(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubMatrix", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_subtract(t_RealMatrix *self, PyObject *arg)
      {
        RealMatrix a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_transpose(t_RealMatrix *self)
      {
        RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.transpose());
        return t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RealMatrix_transposeMultiply(t_RealMatrix *self, PyObject *arg)
      {
        RealMatrix a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.transposeMultiply(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "transposeMultiply", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_walkInColumnOrder(t_RealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInColumnOrder", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_walkInOptimizedOrder(t_RealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInOptimizedOrder", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_walkInRowOrder(t_RealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInRowOrder", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_get__data(t_RealMatrix *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_RealMatrix_get__frobeniusNorm(t_RealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getFrobeniusNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealMatrix_get__norm1(t_RealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm1());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealMatrix_get__normInfty(t_RealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormInfty());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealMatrix_get__trace(t_RealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTrace());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/RegionCode.h"
#include "org/orekit/files/rinex/navigation/RegionCode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *RegionCode::class$ = NULL;
          jmethodID *RegionCode::mids$ = NULL;
          bool RegionCode::live$ = false;
          RegionCode *RegionCode::JAPAN = NULL;
          RegionCode *RegionCode::WIDE_AREA = NULL;

          jclass RegionCode::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/RegionCode");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_d837002753842c6c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/navigation/RegionCode;");
              mids$[mid_values_16c795d26a64915a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/navigation/RegionCode;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              JAPAN = new RegionCode(env->getStaticObjectField(cls, "JAPAN", "Lorg/orekit/files/rinex/navigation/RegionCode;"));
              WIDE_AREA = new RegionCode(env->getStaticObjectField(cls, "WIDE_AREA", "Lorg/orekit/files/rinex/navigation/RegionCode;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RegionCode RegionCode::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RegionCode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d837002753842c6c], a0.this$));
          }

          JArray< RegionCode > RegionCode::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RegionCode >(env->callStaticObjectMethod(cls, mids$[mid_values_16c795d26a64915a]));
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
        namespace navigation {
          static PyObject *t_RegionCode_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RegionCode_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RegionCode_of_(t_RegionCode *self, PyObject *args);
          static PyObject *t_RegionCode_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RegionCode_values(PyTypeObject *type);
          static PyObject *t_RegionCode_get__parameters_(t_RegionCode *self, void *data);
          static PyGetSetDef t_RegionCode__fields_[] = {
            DECLARE_GET_FIELD(t_RegionCode, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RegionCode__methods_[] = {
            DECLARE_METHOD(t_RegionCode, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RegionCode, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RegionCode, of_, METH_VARARGS),
            DECLARE_METHOD(t_RegionCode, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RegionCode, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RegionCode)[] = {
            { Py_tp_methods, t_RegionCode__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RegionCode__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RegionCode)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RegionCode, t_RegionCode, RegionCode);
          PyObject *t_RegionCode::wrap_Object(const RegionCode& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RegionCode::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RegionCode *self = (t_RegionCode *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RegionCode::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RegionCode::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RegionCode *self = (t_RegionCode *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RegionCode::install(PyObject *module)
          {
            installType(&PY_TYPE(RegionCode), &PY_TYPE_DEF(RegionCode), module, "RegionCode", 0);
          }

          void t_RegionCode::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RegionCode), "class_", make_descriptor(RegionCode::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RegionCode), "wrapfn_", make_descriptor(t_RegionCode::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RegionCode), "boxfn_", make_descriptor(boxObject));
            env->getClass(RegionCode::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RegionCode), "JAPAN", make_descriptor(t_RegionCode::wrap_Object(*RegionCode::JAPAN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RegionCode), "WIDE_AREA", make_descriptor(t_RegionCode::wrap_Object(*RegionCode::WIDE_AREA)));
          }

          static PyObject *t_RegionCode_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RegionCode::initializeClass, 1)))
              return NULL;
            return t_RegionCode::wrap_Object(RegionCode(((t_RegionCode *) arg)->object.this$));
          }
          static PyObject *t_RegionCode_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RegionCode::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RegionCode_of_(t_RegionCode *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RegionCode_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RegionCode result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::navigation::RegionCode::valueOf(a0));
              return t_RegionCode::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RegionCode_values(PyTypeObject *type)
          {
            JArray< RegionCode > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::navigation::RegionCode::values());
            return JArray<jobject>(result.this$).wrap(t_RegionCode::wrap_jobject);
          }
          static PyObject *t_RegionCode_get__parameters_(t_RegionCode *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/oem/EphemerisOemWriter.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/io/IOException.h"
#include "org/orekit/files/general/EphemerisFileWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "java/lang/Appendable.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadata.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *EphemerisOemWriter::class$ = NULL;
              jmethodID *EphemerisOemWriter::mids$ = NULL;
              bool EphemerisOemWriter::live$ = false;

              jclass EphemerisOemWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/EphemerisOemWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_50b72ffa74cd56d4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/oem/OemWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadata;Lorg/orekit/files/ccsds/utils/FileFormat;Ljava/lang/String;DI)V");
                  mids$[mid_write_b257e3ad1002b2a9] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/EphemerisFile;)V");
                  mids$[mid_writeSegment_4c1c226593ef2df7] = env->getMethodID(cls, "writeSegment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/general/EphemerisFile$EphemerisSegment;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              EphemerisOemWriter::EphemerisOemWriter(const ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter & a0, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a1, const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata & a2, const ::org::orekit::files::ccsds::utils::FileFormat & a3, const ::java::lang::String & a4, jdouble a5, jint a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_50b72ffa74cd56d4, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6)) {}

              void EphemerisOemWriter::write(const ::java::lang::Appendable & a0, const ::org::orekit::files::general::EphemerisFile & a1) const
              {
                env->callVoidMethod(this$, mids$[mid_write_b257e3ad1002b2a9], a0.this$, a1.this$);
              }

              void EphemerisOemWriter::writeSegment(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::general::EphemerisFile$EphemerisSegment & a1) const
              {
                env->callVoidMethod(this$, mids$[mid_writeSegment_4c1c226593ef2df7], a0.this$, a1.this$);
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
            namespace oem {
              static PyObject *t_EphemerisOemWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_EphemerisOemWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_EphemerisOemWriter_init_(t_EphemerisOemWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_EphemerisOemWriter_write(t_EphemerisOemWriter *self, PyObject *args);
              static PyObject *t_EphemerisOemWriter_writeSegment(t_EphemerisOemWriter *self, PyObject *args);

              static PyMethodDef t_EphemerisOemWriter__methods_[] = {
                DECLARE_METHOD(t_EphemerisOemWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_EphemerisOemWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_EphemerisOemWriter, write, METH_VARARGS),
                DECLARE_METHOD(t_EphemerisOemWriter, writeSegment, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(EphemerisOemWriter)[] = {
                { Py_tp_methods, t_EphemerisOemWriter__methods_ },
                { Py_tp_init, (void *) t_EphemerisOemWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(EphemerisOemWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(EphemerisOemWriter, t_EphemerisOemWriter, EphemerisOemWriter);

              void t_EphemerisOemWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(EphemerisOemWriter), &PY_TYPE_DEF(EphemerisOemWriter), module, "EphemerisOemWriter", 0);
              }

              void t_EphemerisOemWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisOemWriter), "class_", make_descriptor(EphemerisOemWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisOemWriter), "wrapfn_", make_descriptor(t_EphemerisOemWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisOemWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_EphemerisOemWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, EphemerisOemWriter::initializeClass, 1)))
                  return NULL;
                return t_EphemerisOemWriter::wrap_Object(EphemerisOemWriter(((t_EphemerisOemWriter *) arg)->object.this$));
              }
              static PyObject *t_EphemerisOemWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, EphemerisOemWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_EphemerisOemWriter_init_(t_EphemerisOemWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata a2((jobject) NULL);
                ::org::orekit::files::ccsds::utils::FileFormat a3((jobject) NULL);
                PyTypeObject **p3;
                ::java::lang::String a4((jobject) NULL);
                jdouble a5;
                jint a6;
                EphemerisOemWriter object((jobject) NULL);

                if (!parseArgs(args, "KkkKsDI", ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata::initializeClass, ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::oem::t_OemWriter::parameters_, &a1, &a2, &a3, &p3, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_, &a4, &a5, &a6))
                {
                  INT_CALL(object = EphemerisOemWriter(a0, a1, a2, a3, a4, a5, a6));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_EphemerisOemWriter_write(t_EphemerisOemWriter *self, PyObject *args)
              {
                ::java::lang::Appendable a0((jobject) NULL);
                ::org::orekit::files::general::EphemerisFile a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "kK", ::java::lang::Appendable::initializeClass, ::org::orekit::files::general::EphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_EphemerisFile::parameters_))
                {
                  OBJ_CALL(self->object.write(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "write", args);
                return NULL;
              }

              static PyObject *t_EphemerisOemWriter_writeSegment(t_EphemerisOemWriter *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                ::org::orekit::files::general::EphemerisFile$EphemerisSegment a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::general::EphemerisFile$EphemerisSegment::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_EphemerisFile$EphemerisSegment::parameters_))
                {
                  OBJ_CALL(self->object.writeSegment(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "writeSegment", args);
                return NULL;
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
#include "org/orekit/propagation/conversion/HighamHall54IntegratorBuilder.h"
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

        ::java::lang::Class *HighamHall54IntegratorBuilder::class$ = NULL;
        jmethodID *HighamHall54IntegratorBuilder::mids$ = NULL;
        bool HighamHall54IntegratorBuilder::live$ = false;

        jclass HighamHall54IntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/HighamHall54IntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_916fa199ca08d656] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HighamHall54IntegratorBuilder::HighamHall54IntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractIntegrator HighamHall54IntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
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
        static PyObject *t_HighamHall54IntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HighamHall54IntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HighamHall54IntegratorBuilder_init_(t_HighamHall54IntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HighamHall54IntegratorBuilder_buildIntegrator(t_HighamHall54IntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_HighamHall54IntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_HighamHall54IntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54IntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54IntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HighamHall54IntegratorBuilder)[] = {
          { Py_tp_methods, t_HighamHall54IntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_HighamHall54IntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HighamHall54IntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HighamHall54IntegratorBuilder, t_HighamHall54IntegratorBuilder, HighamHall54IntegratorBuilder);

        void t_HighamHall54IntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(HighamHall54IntegratorBuilder), &PY_TYPE_DEF(HighamHall54IntegratorBuilder), module, "HighamHall54IntegratorBuilder", 0);
        }

        void t_HighamHall54IntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54IntegratorBuilder), "class_", make_descriptor(HighamHall54IntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54IntegratorBuilder), "wrapfn_", make_descriptor(t_HighamHall54IntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54IntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HighamHall54IntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HighamHall54IntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_HighamHall54IntegratorBuilder::wrap_Object(HighamHall54IntegratorBuilder(((t_HighamHall54IntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_HighamHall54IntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HighamHall54IntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HighamHall54IntegratorBuilder_init_(t_HighamHall54IntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          HighamHall54IntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = HighamHall54IntegratorBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HighamHall54IntegratorBuilder_buildIntegrator(t_HighamHall54IntegratorBuilder *self, PyObject *args)
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
#include "org/orekit/geometry/fov/DoubleDihedraFieldOfView.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *DoubleDihedraFieldOfView::class$ = NULL;
        jmethodID *DoubleDihedraFieldOfView::mids$ = NULL;
        bool DoubleDihedraFieldOfView::live$ = false;

        jclass DoubleDihedraFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/DoubleDihedraFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fb2b6a92621f27cc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DoubleDihedraFieldOfView::DoubleDihedraFieldOfView(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, jdouble a4, jdouble a5) : ::org::orekit::geometry::fov::PolygonalFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_fb2b6a92621f27cc, a0.this$, a1.this$, a2, a3.this$, a4, a5)) {}
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {
        static PyObject *t_DoubleDihedraFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DoubleDihedraFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DoubleDihedraFieldOfView_init_(t_DoubleDihedraFieldOfView *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_DoubleDihedraFieldOfView__methods_[] = {
          DECLARE_METHOD(t_DoubleDihedraFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DoubleDihedraFieldOfView, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DoubleDihedraFieldOfView)[] = {
          { Py_tp_methods, t_DoubleDihedraFieldOfView__methods_ },
          { Py_tp_init, (void *) t_DoubleDihedraFieldOfView_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DoubleDihedraFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::PolygonalFieldOfView),
          NULL
        };

        DEFINE_TYPE(DoubleDihedraFieldOfView, t_DoubleDihedraFieldOfView, DoubleDihedraFieldOfView);

        void t_DoubleDihedraFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(DoubleDihedraFieldOfView), &PY_TYPE_DEF(DoubleDihedraFieldOfView), module, "DoubleDihedraFieldOfView", 0);
        }

        void t_DoubleDihedraFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleDihedraFieldOfView), "class_", make_descriptor(DoubleDihedraFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleDihedraFieldOfView), "wrapfn_", make_descriptor(t_DoubleDihedraFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleDihedraFieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DoubleDihedraFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DoubleDihedraFieldOfView::initializeClass, 1)))
            return NULL;
          return t_DoubleDihedraFieldOfView::wrap_Object(DoubleDihedraFieldOfView(((t_DoubleDihedraFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_DoubleDihedraFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DoubleDihedraFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DoubleDihedraFieldOfView_init_(t_DoubleDihedraFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
          jdouble a4;
          jdouble a5;
          DoubleDihedraFieldOfView object((jobject) NULL);

          if (!parseArgs(args, "kkDkDD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = DoubleDihedraFieldOfView(a0, a1, a2, a3, a4, a5));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/time/Month.h"
#include "java/util/TimeZone.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/util/Date.h"
#include "java/lang/Comparable.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FieldAbsoluteDate::class$ = NULL;
      jmethodID *FieldAbsoluteDate::mids$ = NULL;
      bool FieldAbsoluteDate::live$ = false;

      jclass FieldAbsoluteDate::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FieldAbsoluteDate");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_02ab84aa7626616d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_4387b1dbdd267914] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;D)V");
          mids$[mid_init$_a7ddb1c79d43628c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_ebdc6a53d32afca8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_init$_71061615675bed5f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_762e7e9d1497d452] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/util/Date;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_3b93232fc57844bb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;DLorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_49dac8ebd492be19] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_df07c37818eb8e54] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_a47e9ffa5826f166] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/time/DateTimeComponents;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_538f64338eae55aa] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_5f264378b55625da] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;ILorg/orekit/time/Month;ILorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_e87a89da6e84ddfb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IIILorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_2ffdfd9497155057] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;ILorg/orekit/time/Month;IIIDLorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_e18844f95d8168e8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IIIIIDLorg/orekit/time/TimeScale;)V");
          mids$[mid_compareTo_e6b8e60343f2c829] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/time/FieldAbsoluteDate;)I");
          mids$[mid_createBesselianEpoch_22e288de5d0d08a6] = env->getStaticMethodID(cls, "createBesselianEpoch", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createBesselianEpoch_e2c3e63dd8fc0e7e] = env->getStaticMethodID(cls, "createBesselianEpoch", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/TimeScales;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createGPSDate_db50e946f5c21b02] = env->getStaticMethodID(cls, "createGPSDate", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createGPSDate_717894900b01f676] = env->getStaticMethodID(cls, "createGPSDate", "(ILorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createJDDate_717894900b01f676] = env->getStaticMethodID(cls, "createJDDate", "(ILorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createJulianEpoch_22e288de5d0d08a6] = env->getStaticMethodID(cls, "createJulianEpoch", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createJulianEpoch_e2c3e63dd8fc0e7e] = env->getStaticMethodID(cls, "createJulianEpoch", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/TimeScales;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createMJDDate_717894900b01f676] = env->getStaticMethodID(cls, "createMJDDate", "(ILorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_durationFrom_e518044671da9d06] = env->getMethodID(cls, "durationFrom", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_durationFrom_140b8964300ddedf] = env->getMethodID(cls, "durationFrom", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getArbitraryEpoch_0f155bddbb3a3b37] = env->getStaticMethodID(cls, "getArbitraryEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getCCSDSEpoch_0f155bddbb3a3b37] = env->getStaticMethodID(cls, "getCCSDSEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getComponents_f1755ec8736bd41a] = env->getMethodID(cls, "getComponents", "(Ljava/util/TimeZone;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_d9c22a5ed8c1b9d3] = env->getMethodID(cls, "getComponents", "(I)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_cddbcc31a262c398] = env->getMethodID(cls, "getComponents", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_bcf6d80061968f64] = env->getMethodID(cls, "getComponents", "(Ljava/util/TimeZone;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_55a0c967e6b1dc4d] = env->getMethodID(cls, "getComponents", "(ILorg/orekit/time/TimeScale;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getDate_fa23a4301b9c83e7] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getField_04d1f63e17d5c5d4] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getFiftiesEpoch_0f155bddbb3a3b37] = env->getStaticMethodID(cls, "getFiftiesEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getFutureInfinity_0f155bddbb3a3b37] = env->getStaticMethodID(cls, "getFutureInfinity", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getGPSEpoch_0f155bddbb3a3b37] = env->getStaticMethodID(cls, "getGPSEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getGalileoEpoch_0f155bddbb3a3b37] = env->getStaticMethodID(cls, "getGalileoEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getJ2000Epoch_0f155bddbb3a3b37] = env->getStaticMethodID(cls, "getJ2000Epoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getJavaEpoch_0f155bddbb3a3b37] = env->getStaticMethodID(cls, "getJavaEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getJulianEpoch_0f155bddbb3a3b37] = env->getStaticMethodID(cls, "getJulianEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getModifiedJulianEpoch_0f155bddbb3a3b37] = env->getStaticMethodID(cls, "getModifiedJulianEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getPastInfinity_0f155bddbb3a3b37] = env->getStaticMethodID(cls, "getPastInfinity", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_hasZeroField_9ab94ac1dc23b105] = env->getMethodID(cls, "hasZeroField", "()Z");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isAfter_42c48eacdacc9e40] = env->getMethodID(cls, "isAfter", "(Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_isAfterOrEqualTo_42c48eacdacc9e40] = env->getMethodID(cls, "isAfterOrEqualTo", "(Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_isBefore_42c48eacdacc9e40] = env->getMethodID(cls, "isBefore", "(Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_isBeforeOrEqualTo_42c48eacdacc9e40] = env->getMethodID(cls, "isBeforeOrEqualTo", "(Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_isBetween_68c500bf0ead12d2] = env->getMethodID(cls, "isBetween", "(Lorg/orekit/time/FieldTimeStamped;Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_isBetweenOrEqualTo_68c500bf0ead12d2] = env->getMethodID(cls, "isBetweenOrEqualTo", "(Lorg/orekit/time/FieldTimeStamped;Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_isCloseTo_7ce159eac22f1c27] = env->getMethodID(cls, "isCloseTo", "(Lorg/orekit/time/FieldTimeStamped;D)Z");
          mids$[mid_isEqualTo_42c48eacdacc9e40] = env->getMethodID(cls, "isEqualTo", "(Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_offsetFrom_b495c108ce0c2388] = env->getMethodID(cls, "offsetFrom", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/TimeScale;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_parseCCSDSCalendarSegmentedTimeCode_8191b07e49496366] = env->getMethodID(cls, "parseCCSDSCalendarSegmentedTimeCode", "(B[B)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_parseCCSDSCalendarSegmentedTimeCode_1cc8d2c297ef1b3e] = env->getMethodID(cls, "parseCCSDSCalendarSegmentedTimeCode", "(B[BLorg/orekit/time/TimeScale;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_parseCCSDSDaySegmentedTimeCode_2adbe32ae75d9374] = env->getStaticMethodID(cls, "parseCCSDSDaySegmentedTimeCode", "(Lorg/hipparchus/Field;B[BLorg/orekit/time/DateComponents;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_parseCCSDSDaySegmentedTimeCode_d607d28a616a2875] = env->getStaticMethodID(cls, "parseCCSDSDaySegmentedTimeCode", "(Lorg/hipparchus/Field;B[BLorg/orekit/time/DateComponents;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_parseCCSDSUnsegmentedTimeCode_3d850b7fd971ba79] = env->getStaticMethodID(cls, "parseCCSDSUnsegmentedTimeCode", "(Lorg/hipparchus/Field;BB[BLorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_parseCCSDSUnsegmentedTimeCode_20e7c5fe6631c280] = env->getStaticMethodID(cls, "parseCCSDSUnsegmentedTimeCode", "(Lorg/hipparchus/Field;BB[BLorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_shiftedBy_1aa39642325a21d5] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_shiftedBy_22e288de5d0d08a6] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_timeScalesOffset_1fbf0d3b375287ff] = env->getMethodID(cls, "timeScalesOffset", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScale;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toAbsoluteDate_c325492395d89b24] = env->getMethodID(cls, "toAbsoluteDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_toDate_d9f82c938588e1de] = env->getMethodID(cls, "toDate", "(Lorg/orekit/time/TimeScale;)Ljava/util/Date;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toString_50f849f33c9b8343] = env->getMethodID(cls, "toString", "(Ljava/util/TimeZone;)Ljava/lang/String;");
          mids$[mid_toString_2a9bffd3d5397f7c] = env->getMethodID(cls, "toString", "(I)Ljava/lang/String;");
          mids$[mid_toString_2ee13d9bd10373d0] = env->getMethodID(cls, "toString", "(Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toString_53541367a5869def] = env->getMethodID(cls, "toString", "(Ljava/util/TimeZone;Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toString_23096d7934eceeb9] = env->getMethodID(cls, "toString", "(ILorg/orekit/time/TimeScale;)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_02ab84aa7626616d, a0.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const FieldAbsoluteDate & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4387b1dbdd267914, a0.this$, a1)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a7ddb1c79d43628c, a0.this$, a1.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, const ::org::orekit::time::AbsoluteDate & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ebdc6a53d32afca8, a0.this$, a1.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_71061615675bed5f, a0.this$, a1.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, const ::java::util::Date & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_762e7e9d1497d452, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const FieldAbsoluteDate & a0, jdouble a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3b93232fc57844bb, a0.this$, a1, a2.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_49dac8ebd492be19, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, const ::org::orekit::time::DateComponents & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_df07c37818eb8e54, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, const ::org::orekit::time::DateTimeComponents & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a47e9ffa5826f166, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, const ::org::orekit::time::DateComponents & a1, const ::org::orekit::time::TimeComponents & a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_538f64338eae55aa, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, jint a1, const ::org::orekit::time::Month & a2, jint a3, const ::org::orekit::time::TimeScale & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5f264378b55625da, a0.this$, a1, a2.this$, a3, a4.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, jint a1, jint a2, jint a3, const ::org::orekit::time::TimeScale & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e87a89da6e84ddfb, a0.this$, a1, a2, a3, a4.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, jint a1, const ::org::orekit::time::Month & a2, jint a3, jint a4, jint a5, jdouble a6, const ::org::orekit::time::TimeScale & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2ffdfd9497155057, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, jint a1, jint a2, jint a3, jint a4, jint a5, jdouble a6, const ::org::orekit::time::TimeScale & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e18844f95d8168e8, a0.this$, a1, a2, a3, a4, a5, a6, a7.this$)) {}

      jint FieldAbsoluteDate::compareTo(const FieldAbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_e6b8e60343f2c829], a0.this$);
      }

      FieldAbsoluteDate FieldAbsoluteDate::createBesselianEpoch(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createBesselianEpoch_22e288de5d0d08a6], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createBesselianEpoch(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::time::TimeScales & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createBesselianEpoch_e2c3e63dd8fc0e7e], a0.this$, a1.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createGPSDate(jint a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createGPSDate_db50e946f5c21b02], a0, a1.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createGPSDate(jint a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createGPSDate_717894900b01f676], a0, a1.this$, a2.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createJDDate(jint a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createJDDate_717894900b01f676], a0, a1.this$, a2.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createJulianEpoch(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createJulianEpoch_22e288de5d0d08a6], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createJulianEpoch(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::time::TimeScales & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createJulianEpoch_e2c3e63dd8fc0e7e], a0.this$, a1.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createMJDDate(jint a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createMJDDate_717894900b01f676], a0, a1.this$, a2.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldAbsoluteDate::durationFrom(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_durationFrom_e518044671da9d06], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldAbsoluteDate::durationFrom(const FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_durationFrom_140b8964300ddedf], a0.this$));
      }

      jboolean FieldAbsoluteDate::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      FieldAbsoluteDate FieldAbsoluteDate::getArbitraryEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getArbitraryEpoch_0f155bddbb3a3b37], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getCCSDSEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getCCSDSEpoch_0f155bddbb3a3b37], a0.this$));
      }

      ::org::orekit::time::DateTimeComponents FieldAbsoluteDate::getComponents(const ::java::util::TimeZone & a0) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_f1755ec8736bd41a], a0.this$));
      }

      ::org::orekit::time::DateTimeComponents FieldAbsoluteDate::getComponents(jint a0) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_d9c22a5ed8c1b9d3], a0));
      }

      ::org::orekit::time::DateTimeComponents FieldAbsoluteDate::getComponents(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_cddbcc31a262c398], a0.this$));
      }

      ::org::orekit::time::DateTimeComponents FieldAbsoluteDate::getComponents(const ::java::util::TimeZone & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_bcf6d80061968f64], a0.this$, a1.this$));
      }

      ::org::orekit::time::DateTimeComponents FieldAbsoluteDate::getComponents(jint a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_55a0c967e6b1dc4d], a0, a1.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getDate() const
      {
        return FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_fa23a4301b9c83e7]));
      }

      ::org::hipparchus::Field FieldAbsoluteDate::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_04d1f63e17d5c5d4]));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getFiftiesEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getFiftiesEpoch_0f155bddbb3a3b37], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getFutureInfinity(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getFutureInfinity_0f155bddbb3a3b37], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getGPSEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getGPSEpoch_0f155bddbb3a3b37], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getGalileoEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getGalileoEpoch_0f155bddbb3a3b37], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getJ2000Epoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getJ2000Epoch_0f155bddbb3a3b37], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getJavaEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getJavaEpoch_0f155bddbb3a3b37], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getJulianEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getJulianEpoch_0f155bddbb3a3b37], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getModifiedJulianEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getModifiedJulianEpoch_0f155bddbb3a3b37], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getPastInfinity(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getPastInfinity_0f155bddbb3a3b37], a0.this$));
      }

      jboolean FieldAbsoluteDate::hasZeroField() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasZeroField_9ab94ac1dc23b105]);
      }

      jint FieldAbsoluteDate::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
      }

      jboolean FieldAbsoluteDate::isAfter(const ::org::orekit::time::FieldTimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAfter_42c48eacdacc9e40], a0.this$);
      }

      jboolean FieldAbsoluteDate::isAfterOrEqualTo(const ::org::orekit::time::FieldTimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAfterOrEqualTo_42c48eacdacc9e40], a0.this$);
      }

      jboolean FieldAbsoluteDate::isBefore(const ::org::orekit::time::FieldTimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBefore_42c48eacdacc9e40], a0.this$);
      }

      jboolean FieldAbsoluteDate::isBeforeOrEqualTo(const ::org::orekit::time::FieldTimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBeforeOrEqualTo_42c48eacdacc9e40], a0.this$);
      }

      jboolean FieldAbsoluteDate::isBetween(const ::org::orekit::time::FieldTimeStamped & a0, const ::org::orekit::time::FieldTimeStamped & a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBetween_68c500bf0ead12d2], a0.this$, a1.this$);
      }

      jboolean FieldAbsoluteDate::isBetweenOrEqualTo(const ::org::orekit::time::FieldTimeStamped & a0, const ::org::orekit::time::FieldTimeStamped & a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBetweenOrEqualTo_68c500bf0ead12d2], a0.this$, a1.this$);
      }

      jboolean FieldAbsoluteDate::isCloseTo(const ::org::orekit::time::FieldTimeStamped & a0, jdouble a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isCloseTo_7ce159eac22f1c27], a0.this$, a1);
      }

      jboolean FieldAbsoluteDate::isEqualTo(const ::org::orekit::time::FieldTimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isEqualTo_42c48eacdacc9e40], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldAbsoluteDate::offsetFrom(const FieldAbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFrom_b495c108ce0c2388], a0.this$, a1.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::parseCCSDSCalendarSegmentedTimeCode(jbyte a0, const JArray< jbyte > & a1) const
      {
        return FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_parseCCSDSCalendarSegmentedTimeCode_8191b07e49496366], a0, a1.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::parseCCSDSCalendarSegmentedTimeCode(jbyte a0, const JArray< jbyte > & a1, const ::org::orekit::time::TimeScale & a2) const
      {
        return FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_parseCCSDSCalendarSegmentedTimeCode_1cc8d2c297ef1b3e], a0, a1.this$, a2.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::parseCCSDSDaySegmentedTimeCode(const ::org::hipparchus::Field & a0, jbyte a1, const JArray< jbyte > & a2, const ::org::orekit::time::DateComponents & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSDaySegmentedTimeCode_2adbe32ae75d9374], a0.this$, a1, a2.this$, a3.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::parseCCSDSDaySegmentedTimeCode(const ::org::hipparchus::Field & a0, jbyte a1, const JArray< jbyte > & a2, const ::org::orekit::time::DateComponents & a3, const ::org::orekit::time::TimeScale & a4)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSDaySegmentedTimeCode_d607d28a616a2875], a0.this$, a1, a2.this$, a3.this$, a4.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::parseCCSDSUnsegmentedTimeCode(const ::org::hipparchus::Field & a0, jbyte a1, jbyte a2, const JArray< jbyte > & a3, const FieldAbsoluteDate & a4)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSUnsegmentedTimeCode_3d850b7fd971ba79], a0.this$, a1, a2, a3.this$, a4.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::parseCCSDSUnsegmentedTimeCode(const ::org::hipparchus::Field & a0, jbyte a1, jbyte a2, const JArray< jbyte > & a3, const FieldAbsoluteDate & a4, const FieldAbsoluteDate & a5)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSUnsegmentedTimeCode_20e7c5fe6631c280], a0.this$, a1, a2, a3.this$, a4.this$, a5.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::shiftedBy(jdouble a0) const
      {
        return FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_shiftedBy_1aa39642325a21d5], a0));
      }

      FieldAbsoluteDate FieldAbsoluteDate::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_shiftedBy_22e288de5d0d08a6], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldAbsoluteDate::timeScalesOffset(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_timeScalesOffset_1fbf0d3b375287ff], a0.this$, a1.this$));
      }

      ::org::orekit::time::AbsoluteDate FieldAbsoluteDate::toAbsoluteDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_toAbsoluteDate_c325492395d89b24]));
      }

      ::java::util::Date FieldAbsoluteDate::toDate(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::util::Date(env->callObjectMethod(this$, mids$[mid_toDate_d9f82c938588e1de], a0.this$));
      }

      ::java::lang::String FieldAbsoluteDate::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String FieldAbsoluteDate::toString(const ::java::util::TimeZone & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_50f849f33c9b8343], a0.this$));
      }

      ::java::lang::String FieldAbsoluteDate::toString(jint a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_2a9bffd3d5397f7c], a0));
      }

      ::java::lang::String FieldAbsoluteDate::toString(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_2ee13d9bd10373d0], a0.this$));
      }

      ::java::lang::String FieldAbsoluteDate::toString(const ::java::util::TimeZone & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_53541367a5869def], a0.this$, a1.this$));
      }

      ::java::lang::String FieldAbsoluteDate::toString(jint a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_23096d7934eceeb9], a0, a1.this$));
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
      static PyObject *t_FieldAbsoluteDate_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_of_(t_FieldAbsoluteDate *self, PyObject *args);
      static int t_FieldAbsoluteDate_init_(t_FieldAbsoluteDate *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldAbsoluteDate_compareTo(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_createBesselianEpoch(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_createGPSDate(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_createJDDate(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_createJulianEpoch(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_createMJDDate(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_durationFrom(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_equals(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_getArbitraryEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getCCSDSEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getComponents(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_getDate(t_FieldAbsoluteDate *self);
      static PyObject *t_FieldAbsoluteDate_getField(t_FieldAbsoluteDate *self);
      static PyObject *t_FieldAbsoluteDate_getFiftiesEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getFutureInfinity(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getGPSEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getGalileoEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getJ2000Epoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getJavaEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getJulianEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getModifiedJulianEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getPastInfinity(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_hasZeroField(t_FieldAbsoluteDate *self);
      static PyObject *t_FieldAbsoluteDate_hashCode(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_isAfter(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_isAfterOrEqualTo(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_isBefore(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_isBeforeOrEqualTo(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_isBetween(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_isBetweenOrEqualTo(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_isCloseTo(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_isEqualTo(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_offsetFrom(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_parseCCSDSCalendarSegmentedTimeCode(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_parseCCSDSDaySegmentedTimeCode(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_parseCCSDSUnsegmentedTimeCode(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_shiftedBy(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_timeScalesOffset(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_toAbsoluteDate(t_FieldAbsoluteDate *self);
      static PyObject *t_FieldAbsoluteDate_toDate(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_toString(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_get__date(t_FieldAbsoluteDate *self, void *data);
      static PyObject *t_FieldAbsoluteDate_get__field(t_FieldAbsoluteDate *self, void *data);
      static PyObject *t_FieldAbsoluteDate_get__parameters_(t_FieldAbsoluteDate *self, void *data);
      static PyGetSetDef t_FieldAbsoluteDate__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAbsoluteDate, date),
        DECLARE_GET_FIELD(t_FieldAbsoluteDate, field),
        DECLARE_GET_FIELD(t_FieldAbsoluteDate, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAbsoluteDate__methods_[] = {
        DECLARE_METHOD(t_FieldAbsoluteDate, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, compareTo, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, createBesselianEpoch, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, createGPSDate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, createJDDate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, createJulianEpoch, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, createMJDDate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, durationFrom, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, equals, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getArbitraryEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getCCSDSEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getComponents, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getField, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getFiftiesEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getFutureInfinity, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getGPSEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getGalileoEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getJ2000Epoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getJavaEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getJulianEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getModifiedJulianEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getPastInfinity, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, hasZeroField, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, isAfter, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, isAfterOrEqualTo, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, isBefore, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, isBeforeOrEqualTo, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, isBetween, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, isBetweenOrEqualTo, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, isCloseTo, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, isEqualTo, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, offsetFrom, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, parseCCSDSCalendarSegmentedTimeCode, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, parseCCSDSDaySegmentedTimeCode, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, parseCCSDSUnsegmentedTimeCode, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, timeScalesOffset, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, toAbsoluteDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, toDate, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAbsoluteDate)[] = {
        { Py_tp_methods, t_FieldAbsoluteDate__methods_ },
        { Py_tp_init, (void *) t_FieldAbsoluteDate_init_ },
        { Py_tp_getset, t_FieldAbsoluteDate__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAbsoluteDate)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldAbsoluteDate, t_FieldAbsoluteDate, FieldAbsoluteDate);
      PyObject *t_FieldAbsoluteDate::wrap_Object(const FieldAbsoluteDate& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbsoluteDate::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbsoluteDate *self = (t_FieldAbsoluteDate *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAbsoluteDate::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbsoluteDate::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbsoluteDate *self = (t_FieldAbsoluteDate *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAbsoluteDate::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAbsoluteDate), &PY_TYPE_DEF(FieldAbsoluteDate), module, "FieldAbsoluteDate", 0);
      }

      void t_FieldAbsoluteDate::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsoluteDate), "class_", make_descriptor(FieldAbsoluteDate::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsoluteDate), "wrapfn_", make_descriptor(t_FieldAbsoluteDate::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsoluteDate), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAbsoluteDate_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAbsoluteDate::initializeClass, 1)))
          return NULL;
        return t_FieldAbsoluteDate::wrap_Object(FieldAbsoluteDate(((t_FieldAbsoluteDate *) arg)->object.this$));
      }
      static PyObject *t_FieldAbsoluteDate_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAbsoluteDate::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAbsoluteDate_of_(t_FieldAbsoluteDate *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldAbsoluteDate_init_(t_FieldAbsoluteDate *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldAbsoluteDate(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KD", FieldAbsoluteDate::initializeClass, &a0, &p0, t_FieldAbsoluteDate::parameters_, &a1))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KK", FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::Date a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::hipparchus::Field::initializeClass, ::java::util::Date::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KDk", FieldAbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, t_FieldAbsoluteDate::parameters_, &a1, &a2))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::String a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "Ksk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::DateComponents a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::DateTimeComponents a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::DateTimeComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::DateComponents a1((jobject) NULL);
            ::org::orekit::time::TimeComponents a2((jobject) NULL);
            ::org::orekit::time::TimeScale a3((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "Kkkk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::orekit::time::Month a2((jobject) NULL);
            PyTypeObject **p2;
            jint a3;
            ::org::orekit::time::TimeScale a4((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KIKIk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::Month::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_Month::parameters_, &a3, &a4))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            ::org::orekit::time::TimeScale a4((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KIIIk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 8:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::orekit::time::Month a2((jobject) NULL);
            PyTypeObject **p2;
            jint a3;
            jint a4;
            jint a5;
            jdouble a6;
            ::org::orekit::time::TimeScale a7((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KIKIIIDk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::Month::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_Month::parameters_, &a3, &a4, &a5, &a6, &a7))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2, a3, a4, a5, a6, a7));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jint a5;
            jdouble a6;
            ::org::orekit::time::TimeScale a7((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KIIIIIDk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2, a3, a4, a5, a6, a7));
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

      static PyObject *t_FieldAbsoluteDate_compareTo(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        jint result;

        if (!parseArg(arg, "K", FieldAbsoluteDate::initializeClass, &a0, &p0, t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_createBesselianEpoch(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createBesselianEpoch(a0));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createBesselianEpoch(a0, a1));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createBesselianEpoch", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_createGPSDate(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createGPSDate(a0, a1));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            jint a0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "IKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createGPSDate(a0, a1, a2));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createGPSDate", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_createJDDate(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::time::TimeScale a2((jobject) NULL);
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArgs(args, "IKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createJDDate(a0, a1, a2));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createJDDate", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_createJulianEpoch(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createJulianEpoch(a0));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createJulianEpoch(a0, a1));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createJulianEpoch", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_createMJDDate(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::time::TimeScale a2((jobject) NULL);
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArgs(args, "IKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createMJDDate(a0, a1, a2));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createMJDDate", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_durationFrom(t_FieldAbsoluteDate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.durationFrom(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", FieldAbsoluteDate::initializeClass, &a0, &p0, t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.durationFrom(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "durationFrom", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_equals(t_FieldAbsoluteDate *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldAbsoluteDate), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_FieldAbsoluteDate_getArbitraryEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getArbitraryEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getArbitraryEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getCCSDSEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getCCSDSEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getCCSDSEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getComponents(t_FieldAbsoluteDate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::TimeZone::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getComponents(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.getComponents(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getComponents(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::util::TimeZone::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getComponents(a0, a1));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getComponents(a0, a1));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getComponents", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getDate(t_FieldAbsoluteDate *self)
      {
        FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAbsoluteDate_getField(t_FieldAbsoluteDate *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAbsoluteDate_getFiftiesEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getFiftiesEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getFiftiesEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getFutureInfinity(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getFutureInfinity(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getFutureInfinity", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getGPSEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getGPSEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getGPSEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getGalileoEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getGalileoEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getGalileoEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getJ2000Epoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getJ2000Epoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getJ2000Epoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getJavaEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getJavaEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getJavaEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getJulianEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getJulianEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getJulianEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getModifiedJulianEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getModifiedJulianEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getModifiedJulianEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getPastInfinity(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getPastInfinity(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getPastInfinity", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_hasZeroField(t_FieldAbsoluteDate *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasZeroField());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldAbsoluteDate_hashCode(t_FieldAbsoluteDate *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(FieldAbsoluteDate), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_FieldAbsoluteDate_isAfter(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean result;

        if (!parseArg(arg, "K", ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isAfter(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAfter", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isAfterOrEqualTo(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean result;

        if (!parseArg(arg, "K", ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isAfterOrEqualTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAfterOrEqualTo", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isBefore(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean result;

        if (!parseArg(arg, "K", ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isBefore(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBefore", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isBeforeOrEqualTo(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean result;

        if (!parseArg(arg, "K", ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isBeforeOrEqualTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBeforeOrEqualTo", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isBetween(t_FieldAbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::time::FieldTimeStamped a1((jobject) NULL);
        PyTypeObject **p1;
        jboolean result;

        if (!parseArgs(args, "KK", ::org::orekit::time::FieldTimeStamped::initializeClass, ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a1, &p1, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isBetween(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBetween", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isBetweenOrEqualTo(t_FieldAbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::time::FieldTimeStamped a1((jobject) NULL);
        PyTypeObject **p1;
        jboolean result;

        if (!parseArgs(args, "KK", ::org::orekit::time::FieldTimeStamped::initializeClass, ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a1, &p1, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isBetweenOrEqualTo(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBetweenOrEqualTo", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isCloseTo(t_FieldAbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble a1;
        jboolean result;

        if (!parseArgs(args, "KD", ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.isCloseTo(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isCloseTo", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isEqualTo(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean result;

        if (!parseArg(arg, "K", ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isEqualTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isEqualTo", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_offsetFrom(t_FieldAbsoluteDate *self, PyObject *args)
      {
        FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "Kk", FieldAbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, t_FieldAbsoluteDate::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.offsetFrom(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFrom", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_parseCCSDSCalendarSegmentedTimeCode(t_FieldAbsoluteDate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jbyte a0;
            JArray< jbyte > a1((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "B[B", &a0, &a1))
            {
              OBJ_CALL(result = self->object.parseCCSDSCalendarSegmentedTimeCode(a0, a1));
              return t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 3:
          {
            jbyte a0;
            JArray< jbyte > a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "B[Bk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.parseCCSDSCalendarSegmentedTimeCode(a0, a1, a2));
              return t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "parseCCSDSCalendarSegmentedTimeCode", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_parseCCSDSDaySegmentedTimeCode(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jbyte a1;
            JArray< jbyte > a2((jobject) NULL);
            ::org::orekit::time::DateComponents a3((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "KB[Bk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::DateComponents::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::parseCCSDSDaySegmentedTimeCode(a0, a1, a2, a3));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jbyte a1;
            JArray< jbyte > a2((jobject) NULL);
            ::org::orekit::time::DateComponents a3((jobject) NULL);
            ::org::orekit::time::TimeScale a4((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "KB[Bkk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::parseCCSDSDaySegmentedTimeCode(a0, a1, a2, a3, a4));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "parseCCSDSDaySegmentedTimeCode", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_parseCCSDSUnsegmentedTimeCode(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 5:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jbyte a1;
            jbyte a2;
            JArray< jbyte > a3((jobject) NULL);
            FieldAbsoluteDate a4((jobject) NULL);
            PyTypeObject **p4;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "KBB[BK", ::org::hipparchus::Field::initializeClass, FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &p4, t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::parseCCSDSUnsegmentedTimeCode(a0, a1, a2, a3, a4));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 6:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jbyte a1;
            jbyte a2;
            JArray< jbyte > a3((jobject) NULL);
            FieldAbsoluteDate a4((jobject) NULL);
            PyTypeObject **p4;
            FieldAbsoluteDate a5((jobject) NULL);
            PyTypeObject **p5;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "KBB[BKK", ::org::hipparchus::Field::initializeClass, FieldAbsoluteDate::initializeClass, FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &p4, t_FieldAbsoluteDate::parameters_, &a5, &p5, t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::parseCCSDSUnsegmentedTimeCode(a0, a1, a2, a3, a4, a5));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "parseCCSDSUnsegmentedTimeCode", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_shiftedBy(t_FieldAbsoluteDate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_timeScalesOffset(t_FieldAbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::TimeScale a0((jobject) NULL);
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.timeScalesOffset(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "timeScalesOffset", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_toAbsoluteDate(t_FieldAbsoluteDate *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.toAbsoluteDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_FieldAbsoluteDate_toDate(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeScale a0((jobject) NULL);
        ::java::util::Date result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toDate(a0));
          return ::java::util::t_Date::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toDate", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_toString(t_FieldAbsoluteDate *self, PyObject *args)
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
            ::java::util::TimeZone a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::TimeZone::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          {
            jint a0;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          break;
         case 2:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::util::TimeZone::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.toString(a0, a1));
              return j2p(result);
            }
          }
          {
            jint a0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.toString(a0, a1));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(FieldAbsoluteDate), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_FieldAbsoluteDate_get__parameters_(t_FieldAbsoluteDate *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAbsoluteDate_get__date(t_FieldAbsoluteDate *self, void *data)
      {
        FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldAbsoluteDate_get__field(t_FieldAbsoluteDate *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1044.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1044Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1044::class$ = NULL;
              jmethodID *Rtcm1044::mids$ = NULL;
              bool Rtcm1044::live$ = false;

              jclass Rtcm1044::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1044");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_1252886574498b6a] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1044Data;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1044::Rtcm1044(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1044Data & a1) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_1252886574498b6a, a0, a1.this$)) {}
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
              static PyObject *t_Rtcm1044_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1044_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1044_of_(t_Rtcm1044 *self, PyObject *args);
              static int t_Rtcm1044_init_(t_Rtcm1044 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1044_get__parameters_(t_Rtcm1044 *self, void *data);
              static PyGetSetDef t_Rtcm1044__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1044, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1044__methods_[] = {
                DECLARE_METHOD(t_Rtcm1044, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1044, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1044, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1044)[] = {
                { Py_tp_methods, t_Rtcm1044__methods_ },
                { Py_tp_init, (void *) t_Rtcm1044_init_ },
                { Py_tp_getset, t_Rtcm1044__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1044)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1044, t_Rtcm1044, Rtcm1044);
              PyObject *t_Rtcm1044::wrap_Object(const Rtcm1044& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1044::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1044 *self = (t_Rtcm1044 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_Rtcm1044::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1044::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1044 *self = (t_Rtcm1044 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_Rtcm1044::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1044), &PY_TYPE_DEF(Rtcm1044), module, "Rtcm1044", 0);
              }

              void t_Rtcm1044::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1044), "class_", make_descriptor(Rtcm1044::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1044), "wrapfn_", make_descriptor(t_Rtcm1044::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1044), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1044_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1044::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1044::wrap_Object(Rtcm1044(((t_Rtcm1044 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1044_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1044::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1044_of_(t_Rtcm1044 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1044_init_(t_Rtcm1044 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1044Data a1((jobject) NULL);
                Rtcm1044 object((jobject) NULL);

                if (!parseArgs(args, "Ik", ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1044Data::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Rtcm1044(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::ephemeris::PY_TYPE(Rtcm1044Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1044_get__parameters_(t_Rtcm1044 *self, void *data)
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
#include "org/orekit/files/ilrs/CRD$RangeSupplement.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$RangeSupplement::class$ = NULL;
        jmethodID *CRD$RangeSupplement::mids$ = NULL;
        bool CRD$RangeSupplement::live$ = false;

        jclass CRD$RangeSupplement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$RangeSupplement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0ced6a60f4ea3cf0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Ljava/lang/String;DDDDD)V");
            mids$[mid_getCenterOfMassCorrection_b74f83833fdad017] = env->getMethodID(cls, "getCenterOfMassCorrection", "()D");
            mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getNdFilterValue_b74f83833fdad017] = env->getMethodID(cls, "getNdFilterValue", "()D");
            mids$[mid_getRangeRate_b74f83833fdad017] = env->getMethodID(cls, "getRangeRate", "()D");
            mids$[mid_getSystemConfigurationId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSystemConfigurationId", "()Ljava/lang/String;");
            mids$[mid_getTimeBiasApplied_b74f83833fdad017] = env->getMethodID(cls, "getTimeBiasApplied", "()D");
            mids$[mid_getTroposphericRefractionCorrection_b74f83833fdad017] = env->getMethodID(cls, "getTroposphericRefractionCorrection", "()D");
            mids$[mid_toCrdString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$RangeSupplement::CRD$RangeSupplement(const ::org::orekit::time::AbsoluteDate & a0, const ::java::lang::String & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0ced6a60f4ea3cf0, a0.this$, a1.this$, a2, a3, a4, a5, a6)) {}

        jdouble CRD$RangeSupplement::getCenterOfMassCorrection() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getCenterOfMassCorrection_b74f83833fdad017]);
        }

        ::org::orekit::time::AbsoluteDate CRD$RangeSupplement::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
        }

        jdouble CRD$RangeSupplement::getNdFilterValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNdFilterValue_b74f83833fdad017]);
        }

        jdouble CRD$RangeSupplement::getRangeRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRangeRate_b74f83833fdad017]);
        }

        ::java::lang::String CRD$RangeSupplement::getSystemConfigurationId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSystemConfigurationId_1c1fa1e935d6cdcf]));
        }

        jdouble CRD$RangeSupplement::getTimeBiasApplied() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTimeBiasApplied_b74f83833fdad017]);
        }

        jdouble CRD$RangeSupplement::getTroposphericRefractionCorrection() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTroposphericRefractionCorrection_b74f83833fdad017]);
        }

        ::java::lang::String CRD$RangeSupplement::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRD$RangeSupplement::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
        static PyObject *t_CRD$RangeSupplement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$RangeSupplement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$RangeSupplement_init_(t_CRD$RangeSupplement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$RangeSupplement_getCenterOfMassCorrection(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_getDate(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_getNdFilterValue(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_getRangeRate(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_getSystemConfigurationId(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_getTimeBiasApplied(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_getTroposphericRefractionCorrection(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_toCrdString(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_toString(t_CRD$RangeSupplement *self, PyObject *args);
        static PyObject *t_CRD$RangeSupplement_get__centerOfMassCorrection(t_CRD$RangeSupplement *self, void *data);
        static PyObject *t_CRD$RangeSupplement_get__date(t_CRD$RangeSupplement *self, void *data);
        static PyObject *t_CRD$RangeSupplement_get__ndFilterValue(t_CRD$RangeSupplement *self, void *data);
        static PyObject *t_CRD$RangeSupplement_get__rangeRate(t_CRD$RangeSupplement *self, void *data);
        static PyObject *t_CRD$RangeSupplement_get__systemConfigurationId(t_CRD$RangeSupplement *self, void *data);
        static PyObject *t_CRD$RangeSupplement_get__timeBiasApplied(t_CRD$RangeSupplement *self, void *data);
        static PyObject *t_CRD$RangeSupplement_get__troposphericRefractionCorrection(t_CRD$RangeSupplement *self, void *data);
        static PyGetSetDef t_CRD$RangeSupplement__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, centerOfMassCorrection),
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, date),
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, ndFilterValue),
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, rangeRate),
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, systemConfigurationId),
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, timeBiasApplied),
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, troposphericRefractionCorrection),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$RangeSupplement__methods_[] = {
          DECLARE_METHOD(t_CRD$RangeSupplement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$RangeSupplement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getCenterOfMassCorrection, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getDate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getNdFilterValue, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getRangeRate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getSystemConfigurationId, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getTimeBiasApplied, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getTroposphericRefractionCorrection, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, toCrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$RangeSupplement)[] = {
          { Py_tp_methods, t_CRD$RangeSupplement__methods_ },
          { Py_tp_init, (void *) t_CRD$RangeSupplement_init_ },
          { Py_tp_getset, t_CRD$RangeSupplement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$RangeSupplement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$RangeSupplement, t_CRD$RangeSupplement, CRD$RangeSupplement);

        void t_CRD$RangeSupplement::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$RangeSupplement), &PY_TYPE_DEF(CRD$RangeSupplement), module, "CRD$RangeSupplement", 0);
        }

        void t_CRD$RangeSupplement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$RangeSupplement), "class_", make_descriptor(CRD$RangeSupplement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$RangeSupplement), "wrapfn_", make_descriptor(t_CRD$RangeSupplement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$RangeSupplement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$RangeSupplement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$RangeSupplement::initializeClass, 1)))
            return NULL;
          return t_CRD$RangeSupplement::wrap_Object(CRD$RangeSupplement(((t_CRD$RangeSupplement *) arg)->object.this$));
        }
        static PyObject *t_CRD$RangeSupplement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$RangeSupplement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$RangeSupplement_init_(t_CRD$RangeSupplement *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble a4;
          jdouble a5;
          jdouble a6;
          CRD$RangeSupplement object((jobject) NULL);

          if (!parseArgs(args, "ksDDDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = CRD$RangeSupplement(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$RangeSupplement_getCenterOfMassCorrection(t_CRD$RangeSupplement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getCenterOfMassCorrection());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeSupplement_getDate(t_CRD$RangeSupplement *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_CRD$RangeSupplement_getNdFilterValue(t_CRD$RangeSupplement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNdFilterValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeSupplement_getRangeRate(t_CRD$RangeSupplement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRangeRate());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeSupplement_getSystemConfigurationId(t_CRD$RangeSupplement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemConfigurationId());
          return j2p(result);
        }

        static PyObject *t_CRD$RangeSupplement_getTimeBiasApplied(t_CRD$RangeSupplement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTimeBiasApplied());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeSupplement_getTroposphericRefractionCorrection(t_CRD$RangeSupplement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTroposphericRefractionCorrection());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeSupplement_toCrdString(t_CRD$RangeSupplement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRD$RangeSupplement_toString(t_CRD$RangeSupplement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$RangeSupplement), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$RangeSupplement_get__centerOfMassCorrection(t_CRD$RangeSupplement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getCenterOfMassCorrection());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$RangeSupplement_get__date(t_CRD$RangeSupplement *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_CRD$RangeSupplement_get__ndFilterValue(t_CRD$RangeSupplement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNdFilterValue());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$RangeSupplement_get__rangeRate(t_CRD$RangeSupplement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRangeRate());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$RangeSupplement_get__systemConfigurationId(t_CRD$RangeSupplement *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemConfigurationId());
          return j2p(value);
        }

        static PyObject *t_CRD$RangeSupplement_get__timeBiasApplied(t_CRD$RangeSupplement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTimeBiasApplied());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$RangeSupplement_get__troposphericRefractionCorrection(t_CRD$RangeSupplement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTroposphericRefractionCorrection());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdamsIntegrator.h"
#include "org/hipparchus/linear/Array2DRowRealMatrix.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/ODEState.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsIntegrator::class$ = NULL;
        jmethodID *AdamsIntegrator::mids$ = NULL;
        bool AdamsIntegrator::live$ = false;

        jclass AdamsIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_134c07106b4f374f] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;IIDD[D[D)V");
            mids$[mid_init$_b596f7b71fee7a1d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;IIDDDD)V");
            mids$[mid_integrate_8cb4bf2a0c64fd92] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_updateHighOrderDerivativesPhase1_f7e2a664bf09ba0b] = env->getMethodID(cls, "updateHighOrderDerivativesPhase1", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
            mids$[mid_updateHighOrderDerivativesPhase2_6416fb10fa003d60] = env->getMethodID(cls, "updateHighOrderDerivativesPhase2", "([D[DLorg/hipparchus/linear/Array2DRowRealMatrix;)V");
            mids$[mid_errorEstimation_68d979ce0da3570a] = env->getMethodID(cls, "errorEstimation", "([DD[D[DLorg/hipparchus/linear/RealMatrix;)D");
            mids$[mid_finalizeStep_a753e4b9b86b52dc] = env->getMethodID(cls, "finalizeStep", "(D[D[DLorg/hipparchus/linear/Array2DRowRealMatrix;ZLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/AdamsStateInterpolator;");
            mids$[mid_initializeHighOrderDerivatives_0830b1db869546c8] = env->getMethodID(cls, "initializeHighOrderDerivatives", "(D[D[[D[[D)Lorg/hipparchus/linear/Array2DRowRealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsIntegrator::AdamsIntegrator(const ::java::lang::String & a0, jint a1, jint a2, jdouble a3, jdouble a4, const JArray< jdouble > & a5, const JArray< jdouble > & a6) : ::org::hipparchus::ode::MultistepIntegrator(env->newObject(initializeClass, &mids$, mid_init$_134c07106b4f374f, a0.this$, a1, a2, a3, a4, a5.this$, a6.this$)) {}

        AdamsIntegrator::AdamsIntegrator(const ::java::lang::String & a0, jint a1, jint a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::org::hipparchus::ode::MultistepIntegrator(env->newObject(initializeClass, &mids$, mid_init$_b596f7b71fee7a1d, a0.this$, a1, a2, a3, a4, a5, a6)) {}

        ::org::hipparchus::ode::ODEStateAndDerivative AdamsIntegrator::integrate(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_8cb4bf2a0c64fd92], a0.this$, a1.this$, a2));
        }

        ::org::hipparchus::linear::Array2DRowRealMatrix AdamsIntegrator::updateHighOrderDerivativesPhase1(const ::org::hipparchus::linear::Array2DRowRealMatrix & a0) const
        {
          return ::org::hipparchus::linear::Array2DRowRealMatrix(env->callObjectMethod(this$, mids$[mid_updateHighOrderDerivativesPhase1_f7e2a664bf09ba0b], a0.this$));
        }

        void AdamsIntegrator::updateHighOrderDerivativesPhase2(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::hipparchus::linear::Array2DRowRealMatrix & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_updateHighOrderDerivativesPhase2_6416fb10fa003d60], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_AdamsIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdamsIntegrator_init_(t_AdamsIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsIntegrator_integrate(t_AdamsIntegrator *self, PyObject *args);
        static PyObject *t_AdamsIntegrator_updateHighOrderDerivativesPhase1(t_AdamsIntegrator *self, PyObject *arg);
        static PyObject *t_AdamsIntegrator_updateHighOrderDerivativesPhase2(t_AdamsIntegrator *self, PyObject *args);

        static PyMethodDef t_AdamsIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdamsIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_AdamsIntegrator, updateHighOrderDerivativesPhase1, METH_O),
          DECLARE_METHOD(t_AdamsIntegrator, updateHighOrderDerivativesPhase2, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsIntegrator)[] = {
          { Py_tp_methods, t_AdamsIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdamsIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::MultistepIntegrator),
          NULL
        };

        DEFINE_TYPE(AdamsIntegrator, t_AdamsIntegrator, AdamsIntegrator);

        void t_AdamsIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsIntegrator), &PY_TYPE_DEF(AdamsIntegrator), module, "AdamsIntegrator", 0);
        }

        void t_AdamsIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsIntegrator), "class_", make_descriptor(AdamsIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsIntegrator), "wrapfn_", make_descriptor(t_AdamsIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdamsIntegrator::wrap_Object(AdamsIntegrator(((t_AdamsIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdamsIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdamsIntegrator_init_(t_AdamsIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 7:
            {
              ::java::lang::String a0((jobject) NULL);
              jint a1;
              jint a2;
              jdouble a3;
              jdouble a4;
              JArray< jdouble > a5((jobject) NULL);
              JArray< jdouble > a6((jobject) NULL);
              AdamsIntegrator object((jobject) NULL);

              if (!parseArgs(args, "sIIDD[D[D", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = AdamsIntegrator(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                break;
              }
            }
            {
              ::java::lang::String a0((jobject) NULL);
              jint a1;
              jint a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              AdamsIntegrator object((jobject) NULL);

              if (!parseArgs(args, "sIIDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = AdamsIntegrator(a0, a1, a2, a3, a4, a5, a6));
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

        static PyObject *t_AdamsIntegrator_integrate(t_AdamsIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::ExpandableODE a0((jobject) NULL);
          ::org::hipparchus::ode::ODEState a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::ode::ExpandableODE::initializeClass, ::org::hipparchus::ode::ODEState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2));
            return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AdamsIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_AdamsIntegrator_updateHighOrderDerivativesPhase1(t_AdamsIntegrator *self, PyObject *arg)
        {
          ::org::hipparchus::linear::Array2DRowRealMatrix a0((jobject) NULL);
          ::org::hipparchus::linear::Array2DRowRealMatrix result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::Array2DRowRealMatrix::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.updateHighOrderDerivativesPhase1(a0));
            return ::org::hipparchus::linear::t_Array2DRowRealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase1", arg);
          return NULL;
        }

        static PyObject *t_AdamsIntegrator_updateHighOrderDerivativesPhase2(t_AdamsIntegrator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::linear::Array2DRowRealMatrix a2((jobject) NULL);

          if (!parseArgs(args, "[D[Dk", ::org::hipparchus::linear::Array2DRowRealMatrix::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.updateHighOrderDerivativesPhase2(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase2", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$LabeledDoubleConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$LabeledDoubleConsumer::class$ = NULL;
            jmethodID *ParseToken$LabeledDoubleConsumer::mids$ = NULL;
            bool ParseToken$LabeledDoubleConsumer::live$ = false;

            jclass ParseToken$LabeledDoubleConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$LabeledDoubleConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_aff7cdf8651ba042] = env->getMethodID(cls, "accept", "(CD)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$LabeledDoubleConsumer::accept(jchar a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_aff7cdf8651ba042], a0, a1);
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
            static PyObject *t_ParseToken$LabeledDoubleConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$LabeledDoubleConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$LabeledDoubleConsumer_accept(t_ParseToken$LabeledDoubleConsumer *self, PyObject *args);

            static PyMethodDef t_ParseToken$LabeledDoubleConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$LabeledDoubleConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$LabeledDoubleConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$LabeledDoubleConsumer, accept, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$LabeledDoubleConsumer)[] = {
              { Py_tp_methods, t_ParseToken$LabeledDoubleConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$LabeledDoubleConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$LabeledDoubleConsumer, t_ParseToken$LabeledDoubleConsumer, ParseToken$LabeledDoubleConsumer);

            void t_ParseToken$LabeledDoubleConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$LabeledDoubleConsumer), &PY_TYPE_DEF(ParseToken$LabeledDoubleConsumer), module, "ParseToken$LabeledDoubleConsumer", 0);
            }

            void t_ParseToken$LabeledDoubleConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$LabeledDoubleConsumer), "class_", make_descriptor(ParseToken$LabeledDoubleConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$LabeledDoubleConsumer), "wrapfn_", make_descriptor(t_ParseToken$LabeledDoubleConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$LabeledDoubleConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$LabeledDoubleConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$LabeledDoubleConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$LabeledDoubleConsumer::wrap_Object(ParseToken$LabeledDoubleConsumer(((t_ParseToken$LabeledDoubleConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$LabeledDoubleConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$LabeledDoubleConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$LabeledDoubleConsumer_accept(t_ParseToken$LabeledDoubleConsumer *self, PyObject *args)
            {
              jchar a0;
              jdouble a1;

              if (!parseArgs(args, "CD", &a0, &a1))
              {
                OBJ_CALL(self->object.accept(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", args);
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
#include "org/orekit/propagation/events/handlers/RecordAndContinue.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/orekit/propagation/events/handlers/RecordAndContinue$Event.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *RecordAndContinue::class$ = NULL;
          jmethodID *RecordAndContinue::mids$ = NULL;
          bool RecordAndContinue::live$ = false;

          jclass RecordAndContinue::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/RecordAndContinue");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_0e7c3032c7c93ed3] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
              mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_eventOccurred_ae9b0131fefe6c67] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_getEvents_e62d3bb06d56d7e3] = env->getMethodID(cls, "getEvents", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RecordAndContinue::RecordAndContinue() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          RecordAndContinue::RecordAndContinue(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0e7c3032c7c93ed3, a0.this$)) {}

          void RecordAndContinue::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
          }

          ::org::hipparchus::ode::events::Action RecordAndContinue::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_ae9b0131fefe6c67], a0.this$, a1.this$, a2));
          }

          ::java::util::List RecordAndContinue::getEvents() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEvents_e62d3bb06d56d7e3]));
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
          static PyObject *t_RecordAndContinue_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RecordAndContinue_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RecordAndContinue_init_(t_RecordAndContinue *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RecordAndContinue_clear(t_RecordAndContinue *self);
          static PyObject *t_RecordAndContinue_eventOccurred(t_RecordAndContinue *self, PyObject *args);
          static PyObject *t_RecordAndContinue_getEvents(t_RecordAndContinue *self);
          static PyObject *t_RecordAndContinue_get__events(t_RecordAndContinue *self, void *data);
          static PyGetSetDef t_RecordAndContinue__fields_[] = {
            DECLARE_GET_FIELD(t_RecordAndContinue, events),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RecordAndContinue__methods_[] = {
            DECLARE_METHOD(t_RecordAndContinue, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RecordAndContinue, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RecordAndContinue, clear, METH_NOARGS),
            DECLARE_METHOD(t_RecordAndContinue, eventOccurred, METH_VARARGS),
            DECLARE_METHOD(t_RecordAndContinue, getEvents, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RecordAndContinue)[] = {
            { Py_tp_methods, t_RecordAndContinue__methods_ },
            { Py_tp_init, (void *) t_RecordAndContinue_init_ },
            { Py_tp_getset, t_RecordAndContinue__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RecordAndContinue)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RecordAndContinue, t_RecordAndContinue, RecordAndContinue);

          void t_RecordAndContinue::install(PyObject *module)
          {
            installType(&PY_TYPE(RecordAndContinue), &PY_TYPE_DEF(RecordAndContinue), module, "RecordAndContinue", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue), "Event", make_descriptor(&PY_TYPE_DEF(RecordAndContinue$Event)));
          }

          void t_RecordAndContinue::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue), "class_", make_descriptor(RecordAndContinue::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue), "wrapfn_", make_descriptor(t_RecordAndContinue::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RecordAndContinue_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RecordAndContinue::initializeClass, 1)))
              return NULL;
            return t_RecordAndContinue::wrap_Object(RecordAndContinue(((t_RecordAndContinue *) arg)->object.this$));
          }
          static PyObject *t_RecordAndContinue_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RecordAndContinue::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RecordAndContinue_init_(t_RecordAndContinue *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                RecordAndContinue object((jobject) NULL);

                INT_CALL(object = RecordAndContinue());
                self->object = object;
                break;
              }
             case 1:
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;
                RecordAndContinue object((jobject) NULL);

                if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = RecordAndContinue(a0));
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

          static PyObject *t_RecordAndContinue_clear(t_RecordAndContinue *self)
          {
            OBJ_CALL(self->object.clear());
            Py_RETURN_NONE;
          }

          static PyObject *t_RecordAndContinue_eventOccurred(t_RecordAndContinue *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::events::EventDetector a1((jobject) NULL);
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "kkZ", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }

          static PyObject *t_RecordAndContinue_getEvents(t_RecordAndContinue *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getEvents());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::events::handlers::PY_TYPE(RecordAndContinue$Event));
          }

          static PyObject *t_RecordAndContinue_get__events(t_RecordAndContinue *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getEvents());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/ComplexField.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/complex/ComplexField.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *ComplexField::class$ = NULL;
      jmethodID *ComplexField::mids$ = NULL;
      bool ComplexField::live$ = false;

      jclass ComplexField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/ComplexField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getInstance_74589e1538dd146b] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/complex/ComplexField;");
          mids$[mid_getOne_2f0868cbf8c045d4] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_getRuntimeClass_1aeb0737a960d371] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getZero_2f0868cbf8c045d4] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean ComplexField::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      ComplexField ComplexField::getInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return ComplexField(env->callStaticObjectMethod(cls, mids$[mid_getInstance_74589e1538dd146b]));
      }

      ::org::hipparchus::complex::Complex ComplexField::getOne() const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_getOne_2f0868cbf8c045d4]));
      }

      ::java::lang::Class ComplexField::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_1aeb0737a960d371]));
      }

      ::org::hipparchus::complex::Complex ComplexField::getZero() const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_getZero_2f0868cbf8c045d4]));
      }

      jint ComplexField::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      static PyObject *t_ComplexField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexField_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexField_equals(t_ComplexField *self, PyObject *args);
      static PyObject *t_ComplexField_getInstance(PyTypeObject *type);
      static PyObject *t_ComplexField_getOne(t_ComplexField *self);
      static PyObject *t_ComplexField_getRuntimeClass(t_ComplexField *self);
      static PyObject *t_ComplexField_getZero(t_ComplexField *self);
      static PyObject *t_ComplexField_hashCode(t_ComplexField *self, PyObject *args);
      static PyObject *t_ComplexField_get__instance(t_ComplexField *self, void *data);
      static PyObject *t_ComplexField_get__one(t_ComplexField *self, void *data);
      static PyObject *t_ComplexField_get__runtimeClass(t_ComplexField *self, void *data);
      static PyObject *t_ComplexField_get__zero(t_ComplexField *self, void *data);
      static PyGetSetDef t_ComplexField__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexField, instance),
        DECLARE_GET_FIELD(t_ComplexField, one),
        DECLARE_GET_FIELD(t_ComplexField, runtimeClass),
        DECLARE_GET_FIELD(t_ComplexField, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexField__methods_[] = {
        DECLARE_METHOD(t_ComplexField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexField, equals, METH_VARARGS),
        DECLARE_METHOD(t_ComplexField, getInstance, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_ComplexField, getOne, METH_NOARGS),
        DECLARE_METHOD(t_ComplexField, getRuntimeClass, METH_NOARGS),
        DECLARE_METHOD(t_ComplexField, getZero, METH_NOARGS),
        DECLARE_METHOD(t_ComplexField, hashCode, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexField)[] = {
        { Py_tp_methods, t_ComplexField__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ComplexField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexField, t_ComplexField, ComplexField);

      void t_ComplexField::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexField), &PY_TYPE_DEF(ComplexField), module, "ComplexField", 0);
      }

      void t_ComplexField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexField), "class_", make_descriptor(ComplexField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexField), "wrapfn_", make_descriptor(t_ComplexField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexField), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexField::initializeClass, 1)))
          return NULL;
        return t_ComplexField::wrap_Object(ComplexField(((t_ComplexField *) arg)->object.this$));
      }
      static PyObject *t_ComplexField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ComplexField_equals(t_ComplexField *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(ComplexField), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_ComplexField_getInstance(PyTypeObject *type)
      {
        ComplexField result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::complex::ComplexField::getInstance());
        return t_ComplexField::wrap_Object(result);
      }

      static PyObject *t_ComplexField_getOne(t_ComplexField *self)
      {
        ::org::hipparchus::complex::Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
      }

      static PyObject *t_ComplexField_getRuntimeClass(t_ComplexField *self)
      {
        ::java::lang::Class result((jobject) NULL);
        OBJ_CALL(result = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
      }

      static PyObject *t_ComplexField_getZero(t_ComplexField *self)
      {
        ::org::hipparchus::complex::Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
      }

      static PyObject *t_ComplexField_hashCode(t_ComplexField *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ComplexField), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_ComplexField_get__instance(t_ComplexField *self, void *data)
      {
        ComplexField value((jobject) NULL);
        OBJ_CALL(value = self->object.getInstance());
        return t_ComplexField::wrap_Object(value);
      }

      static PyObject *t_ComplexField_get__one(t_ComplexField *self, void *data)
      {
        ::org::hipparchus::complex::Complex value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::complex::t_Complex::wrap_Object(value);
      }

      static PyObject *t_ComplexField_get__runtimeClass(t_ComplexField *self, void *data)
      {
        ::java::lang::Class value((jobject) NULL);
        OBJ_CALL(value = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(value);
      }

      static PyObject *t_ComplexField_get__zero(t_ComplexField *self, void *data)
      {
        ::org::hipparchus::complex::Complex value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::complex::t_Complex::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/los/LOSTransform.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/util/stream/Stream.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *LOSTransform::class$ = NULL;
        jmethodID *LOSTransform::mids$ = NULL;
        bool LOSTransform::live$ = false;

        jclass LOSTransform::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/LOSTransform");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getParametersDrivers_14e21bf777ff0ccf] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_transformLOS_355979cbd37ce923] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transformLOS_d764ada7ab62136f] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::stream::Stream LOSTransform::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_14e21bf777ff0ccf]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D LOSTransform::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_355979cbd37ce923], a0, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D LOSTransform::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::rugged::utils::DerivativeGenerator & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_d764ada7ab62136f], a0, a1.this$, a2.this$, a3.this$));
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
      namespace los {
        static PyObject *t_LOSTransform_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LOSTransform_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LOSTransform_getParametersDrivers(t_LOSTransform *self);
        static PyObject *t_LOSTransform_transformLOS(t_LOSTransform *self, PyObject *args);
        static PyObject *t_LOSTransform_get__parametersDrivers(t_LOSTransform *self, void *data);
        static PyGetSetDef t_LOSTransform__fields_[] = {
          DECLARE_GET_FIELD(t_LOSTransform, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LOSTransform__methods_[] = {
          DECLARE_METHOD(t_LOSTransform, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LOSTransform, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LOSTransform, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_LOSTransform, transformLOS, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LOSTransform)[] = {
          { Py_tp_methods, t_LOSTransform__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_LOSTransform__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LOSTransform)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LOSTransform, t_LOSTransform, LOSTransform);

        void t_LOSTransform::install(PyObject *module)
        {
          installType(&PY_TYPE(LOSTransform), &PY_TYPE_DEF(LOSTransform), module, "LOSTransform", 0);
        }

        void t_LOSTransform::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LOSTransform), "class_", make_descriptor(LOSTransform::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LOSTransform), "wrapfn_", make_descriptor(t_LOSTransform::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LOSTransform), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LOSTransform_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LOSTransform::initializeClass, 1)))
            return NULL;
          return t_LOSTransform::wrap_Object(LOSTransform(((t_LOSTransform *) arg)->object.this$));
        }
        static PyObject *t_LOSTransform_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LOSTransform::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LOSTransform_getParametersDrivers(t_LOSTransform *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_LOSTransform_transformLOS(t_LOSTransform *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "Ikk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::orekit::rugged::utils::DerivativeGenerator a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "IKkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &a3, &p3, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1, a2, a3));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "transformLOS", args);
          return NULL;
        }

        static PyObject *t_LOSTransform_get__parametersDrivers(t_LOSTransform *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDConfiguration$LaserConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$LaserConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$LaserConfiguration::mids$ = NULL;
        bool CRDConfiguration$LaserConfiguration::live$ = false;

        jclass CRDConfiguration$LaserConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$LaserConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getBeamDivergence_b74f83833fdad017] = env->getMethodID(cls, "getBeamDivergence", "()D");
            mids$[mid_getLaserId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getLaserId", "()Ljava/lang/String;");
            mids$[mid_getLaserType_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getLaserType", "()Ljava/lang/String;");
            mids$[mid_getNominalFireRate_b74f83833fdad017] = env->getMethodID(cls, "getNominalFireRate", "()D");
            mids$[mid_getPrimaryWavelength_b74f83833fdad017] = env->getMethodID(cls, "getPrimaryWavelength", "()D");
            mids$[mid_getPulseEnergy_b74f83833fdad017] = env->getMethodID(cls, "getPulseEnergy", "()D");
            mids$[mid_getPulseInOutgoingSemiTrain_55546ef6a647f39b] = env->getMethodID(cls, "getPulseInOutgoingSemiTrain", "()I");
            mids$[mid_getPulseWidth_b74f83833fdad017] = env->getMethodID(cls, "getPulseWidth", "()D");
            mids$[mid_setBeamDivergence_8ba9fe7a847cecad] = env->getMethodID(cls, "setBeamDivergence", "(D)V");
            mids$[mid_setLaserId_734b91ac30d5f9b4] = env->getMethodID(cls, "setLaserId", "(Ljava/lang/String;)V");
            mids$[mid_setLaserType_734b91ac30d5f9b4] = env->getMethodID(cls, "setLaserType", "(Ljava/lang/String;)V");
            mids$[mid_setNominalFireRate_8ba9fe7a847cecad] = env->getMethodID(cls, "setNominalFireRate", "(D)V");
            mids$[mid_setPrimaryWavelength_8ba9fe7a847cecad] = env->getMethodID(cls, "setPrimaryWavelength", "(D)V");
            mids$[mid_setPulseEnergy_8ba9fe7a847cecad] = env->getMethodID(cls, "setPulseEnergy", "(D)V");
            mids$[mid_setPulseInOutgoingSemiTrain_44ed599e93e8a30c] = env->getMethodID(cls, "setPulseInOutgoingSemiTrain", "(I)V");
            mids$[mid_setPulseWidth_8ba9fe7a847cecad] = env->getMethodID(cls, "setPulseWidth", "(D)V");
            mids$[mid_toCrdString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$LaserConfiguration::CRDConfiguration$LaserConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble CRDConfiguration$LaserConfiguration::getBeamDivergence() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBeamDivergence_b74f83833fdad017]);
        }

        ::java::lang::String CRDConfiguration$LaserConfiguration::getLaserId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLaserId_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRDConfiguration$LaserConfiguration::getLaserType() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLaserType_1c1fa1e935d6cdcf]));
        }

        jdouble CRDConfiguration$LaserConfiguration::getNominalFireRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNominalFireRate_b74f83833fdad017]);
        }

        jdouble CRDConfiguration$LaserConfiguration::getPrimaryWavelength() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPrimaryWavelength_b74f83833fdad017]);
        }

        jdouble CRDConfiguration$LaserConfiguration::getPulseEnergy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPulseEnergy_b74f83833fdad017]);
        }

        jint CRDConfiguration$LaserConfiguration::getPulseInOutgoingSemiTrain() const
        {
          return env->callIntMethod(this$, mids$[mid_getPulseInOutgoingSemiTrain_55546ef6a647f39b]);
        }

        jdouble CRDConfiguration$LaserConfiguration::getPulseWidth() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPulseWidth_b74f83833fdad017]);
        }

        void CRDConfiguration$LaserConfiguration::setBeamDivergence(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setBeamDivergence_8ba9fe7a847cecad], a0);
        }

        void CRDConfiguration$LaserConfiguration::setLaserId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setLaserId_734b91ac30d5f9b4], a0.this$);
        }

        void CRDConfiguration$LaserConfiguration::setLaserType(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setLaserType_734b91ac30d5f9b4], a0.this$);
        }

        void CRDConfiguration$LaserConfiguration::setNominalFireRate(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNominalFireRate_8ba9fe7a847cecad], a0);
        }

        void CRDConfiguration$LaserConfiguration::setPrimaryWavelength(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPrimaryWavelength_8ba9fe7a847cecad], a0);
        }

        void CRDConfiguration$LaserConfiguration::setPulseEnergy(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPulseEnergy_8ba9fe7a847cecad], a0);
        }

        void CRDConfiguration$LaserConfiguration::setPulseInOutgoingSemiTrain(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPulseInOutgoingSemiTrain_44ed599e93e8a30c], a0);
        }

        void CRDConfiguration$LaserConfiguration::setPulseWidth(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPulseWidth_8ba9fe7a847cecad], a0);
        }

        ::java::lang::String CRDConfiguration$LaserConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRDConfiguration$LaserConfiguration::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
        static PyObject *t_CRDConfiguration$LaserConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$LaserConfiguration_init_(t_CRDConfiguration$LaserConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$LaserConfiguration_getBeamDivergence(t_CRDConfiguration$LaserConfiguration *self);
        static PyObject *t_CRDConfiguration$LaserConfiguration_getLaserId(t_CRDConfiguration$LaserConfiguration *self);
        static PyObject *t_CRDConfiguration$LaserConfiguration_getLaserType(t_CRDConfiguration$LaserConfiguration *self);
        static PyObject *t_CRDConfiguration$LaserConfiguration_getNominalFireRate(t_CRDConfiguration$LaserConfiguration *self);
        static PyObject *t_CRDConfiguration$LaserConfiguration_getPrimaryWavelength(t_CRDConfiguration$LaserConfiguration *self);
        static PyObject *t_CRDConfiguration$LaserConfiguration_getPulseEnergy(t_CRDConfiguration$LaserConfiguration *self);
        static PyObject *t_CRDConfiguration$LaserConfiguration_getPulseInOutgoingSemiTrain(t_CRDConfiguration$LaserConfiguration *self);
        static PyObject *t_CRDConfiguration$LaserConfiguration_getPulseWidth(t_CRDConfiguration$LaserConfiguration *self);
        static PyObject *t_CRDConfiguration$LaserConfiguration_setBeamDivergence(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_setLaserId(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_setLaserType(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_setNominalFireRate(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_setPrimaryWavelength(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_setPulseEnergy(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_setPulseInOutgoingSemiTrain(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_setPulseWidth(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_toCrdString(t_CRDConfiguration$LaserConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$LaserConfiguration_toString(t_CRDConfiguration$LaserConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$LaserConfiguration_get__beamDivergence(t_CRDConfiguration$LaserConfiguration *self, void *data);
        static int t_CRDConfiguration$LaserConfiguration_set__beamDivergence(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$LaserConfiguration_get__laserId(t_CRDConfiguration$LaserConfiguration *self, void *data);
        static int t_CRDConfiguration$LaserConfiguration_set__laserId(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$LaserConfiguration_get__laserType(t_CRDConfiguration$LaserConfiguration *self, void *data);
        static int t_CRDConfiguration$LaserConfiguration_set__laserType(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$LaserConfiguration_get__nominalFireRate(t_CRDConfiguration$LaserConfiguration *self, void *data);
        static int t_CRDConfiguration$LaserConfiguration_set__nominalFireRate(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$LaserConfiguration_get__primaryWavelength(t_CRDConfiguration$LaserConfiguration *self, void *data);
        static int t_CRDConfiguration$LaserConfiguration_set__primaryWavelength(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$LaserConfiguration_get__pulseEnergy(t_CRDConfiguration$LaserConfiguration *self, void *data);
        static int t_CRDConfiguration$LaserConfiguration_set__pulseEnergy(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$LaserConfiguration_get__pulseInOutgoingSemiTrain(t_CRDConfiguration$LaserConfiguration *self, void *data);
        static int t_CRDConfiguration$LaserConfiguration_set__pulseInOutgoingSemiTrain(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$LaserConfiguration_get__pulseWidth(t_CRDConfiguration$LaserConfiguration *self, void *data);
        static int t_CRDConfiguration$LaserConfiguration_set__pulseWidth(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$LaserConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$LaserConfiguration, beamDivergence),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$LaserConfiguration, laserId),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$LaserConfiguration, laserType),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$LaserConfiguration, nominalFireRate),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$LaserConfiguration, primaryWavelength),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$LaserConfiguration, pulseEnergy),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$LaserConfiguration, pulseInOutgoingSemiTrain),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$LaserConfiguration, pulseWidth),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$LaserConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, getBeamDivergence, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, getLaserId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, getLaserType, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, getNominalFireRate, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, getPrimaryWavelength, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, getPulseEnergy, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, getPulseInOutgoingSemiTrain, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, getPulseWidth, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, setBeamDivergence, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, setLaserId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, setLaserType, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, setNominalFireRate, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, setPrimaryWavelength, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, setPulseEnergy, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, setPulseInOutgoingSemiTrain, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, setPulseWidth, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$LaserConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$LaserConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$LaserConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$LaserConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$LaserConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$LaserConfiguration, t_CRDConfiguration$LaserConfiguration, CRDConfiguration$LaserConfiguration);

        void t_CRDConfiguration$LaserConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$LaserConfiguration), &PY_TYPE_DEF(CRDConfiguration$LaserConfiguration), module, "CRDConfiguration$LaserConfiguration", 0);
        }

        void t_CRDConfiguration$LaserConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$LaserConfiguration), "class_", make_descriptor(CRDConfiguration$LaserConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$LaserConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$LaserConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$LaserConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$LaserConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$LaserConfiguration::wrap_Object(CRDConfiguration$LaserConfiguration(((t_CRDConfiguration$LaserConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$LaserConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$LaserConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$LaserConfiguration_init_(t_CRDConfiguration$LaserConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$LaserConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$LaserConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_getBeamDivergence(t_CRDConfiguration$LaserConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBeamDivergence());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_getLaserId(t_CRDConfiguration$LaserConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getLaserId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_getLaserType(t_CRDConfiguration$LaserConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getLaserType());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_getNominalFireRate(t_CRDConfiguration$LaserConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNominalFireRate());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_getPrimaryWavelength(t_CRDConfiguration$LaserConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPrimaryWavelength());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_getPulseEnergy(t_CRDConfiguration$LaserConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPulseEnergy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_getPulseInOutgoingSemiTrain(t_CRDConfiguration$LaserConfiguration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getPulseInOutgoingSemiTrain());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_getPulseWidth(t_CRDConfiguration$LaserConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPulseWidth());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_setBeamDivergence(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setBeamDivergence(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setBeamDivergence", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_setLaserId(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setLaserId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setLaserId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_setLaserType(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setLaserType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setLaserType", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_setNominalFireRate(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setNominalFireRate(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNominalFireRate", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_setPrimaryWavelength(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setPrimaryWavelength(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPrimaryWavelength", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_setPulseEnergy(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setPulseEnergy(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPulseEnergy", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_setPulseInOutgoingSemiTrain(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setPulseInOutgoingSemiTrain(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPulseInOutgoingSemiTrain", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_setPulseWidth(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setPulseWidth(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPulseWidth", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_toCrdString(t_CRDConfiguration$LaserConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$LaserConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_toString(t_CRDConfiguration$LaserConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$LaserConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_get__beamDivergence(t_CRDConfiguration$LaserConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBeamDivergence());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$LaserConfiguration_set__beamDivergence(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setBeamDivergence(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "beamDivergence", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_get__laserId(t_CRDConfiguration$LaserConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getLaserId());
          return j2p(value);
        }
        static int t_CRDConfiguration$LaserConfiguration_set__laserId(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setLaserId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "laserId", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_get__laserType(t_CRDConfiguration$LaserConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getLaserType());
          return j2p(value);
        }
        static int t_CRDConfiguration$LaserConfiguration_set__laserType(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setLaserType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "laserType", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_get__nominalFireRate(t_CRDConfiguration$LaserConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNominalFireRate());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$LaserConfiguration_set__nominalFireRate(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setNominalFireRate(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "nominalFireRate", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_get__primaryWavelength(t_CRDConfiguration$LaserConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPrimaryWavelength());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$LaserConfiguration_set__primaryWavelength(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setPrimaryWavelength(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "primaryWavelength", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_get__pulseEnergy(t_CRDConfiguration$LaserConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPulseEnergy());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$LaserConfiguration_set__pulseEnergy(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setPulseEnergy(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pulseEnergy", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_get__pulseInOutgoingSemiTrain(t_CRDConfiguration$LaserConfiguration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getPulseInOutgoingSemiTrain());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDConfiguration$LaserConfiguration_set__pulseInOutgoingSemiTrain(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setPulseInOutgoingSemiTrain(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pulseInOutgoingSemiTrain", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_get__pulseWidth(t_CRDConfiguration$LaserConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPulseWidth());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$LaserConfiguration_set__pulseWidth(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setPulseWidth(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pulseWidth", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/EquinoctialOrbit.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/orbits/EquinoctialOrbit.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinates.h"
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
          mids$[mid_init$_69b47a274eed440d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_18124f64d7fce8bd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;D)V");
          mids$[mid_init$_bc81b5d0c2baa99c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_5fc5d1b0e40c2d5b] = env->getMethodID(cls, "<init>", "(DDDDDDLorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_3058e51cfd00310e] = env->getMethodID(cls, "<init>", "(DDDDDDDDDDDDLorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_addKeplerContribution_2a5649bc1625306e] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V");
          mids$[mid_eccentricToMean_f804f816b79164cb] = env->getStaticMethodID(cls, "eccentricToMean", "(DDD)D");
          mids$[mid_eccentricToTrue_f804f816b79164cb] = env->getStaticMethodID(cls, "eccentricToTrue", "(DDD)D");
          mids$[mid_getA_b74f83833fdad017] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getADot_b74f83833fdad017] = env->getMethodID(cls, "getADot", "()D");
          mids$[mid_getCachedPositionAngleType_c25055891f180348] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getE_b74f83833fdad017] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEDot_b74f83833fdad017] = env->getMethodID(cls, "getEDot", "()D");
          mids$[mid_getEquinoctialEx_b74f83833fdad017] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialExDot_b74f83833fdad017] = env->getMethodID(cls, "getEquinoctialExDot", "()D");
          mids$[mid_getEquinoctialEy_b74f83833fdad017] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getEquinoctialEyDot_b74f83833fdad017] = env->getMethodID(cls, "getEquinoctialEyDot", "()D");
          mids$[mid_getHx_b74f83833fdad017] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHxDot_b74f83833fdad017] = env->getMethodID(cls, "getHxDot", "()D");
          mids$[mid_getHy_b74f83833fdad017] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getHyDot_b74f83833fdad017] = env->getMethodID(cls, "getHyDot", "()D");
          mids$[mid_getI_b74f83833fdad017] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getIDot_b74f83833fdad017] = env->getMethodID(cls, "getIDot", "()D");
          mids$[mid_getL_68608c097e66b295] = env->getMethodID(cls, "getL", "(Lorg/orekit/orbits/PositionAngleType;)D");
          mids$[mid_getLDot_68608c097e66b295] = env->getMethodID(cls, "getLDot", "(Lorg/orekit/orbits/PositionAngleType;)D");
          mids$[mid_getLE_b74f83833fdad017] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_b74f83833fdad017] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLM_b74f83833fdad017] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLMDot_b74f83833fdad017] = env->getMethodID(cls, "getLMDot", "()D");
          mids$[mid_getLv_b74f83833fdad017] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getLvDot_b74f83833fdad017] = env->getMethodID(cls, "getLvDot", "()D");
          mids$[mid_getType_c7d4737d7afca612] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasRates_9ab94ac1dc23b105] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_meanToEccentric_f804f816b79164cb] = env->getStaticMethodID(cls, "meanToEccentric", "(DDD)D");
          mids$[mid_removeRates_fd625ef6a79a03db] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/EquinoctialOrbit;");
          mids$[mid_shiftedBy_bbafbee12fa05f6f] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/EquinoctialOrbit;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_trueToEccentric_f804f816b79164cb] = env->getStaticMethodID(cls, "trueToEccentric", "(DDD)D");
          mids$[mid_initPosition_8b724f8b4fdad1a2] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_initPVCoordinates_136cc8ba23b21c29] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_computeJacobianMeanWrtCartesian_3b7b373db8e7887f] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[D");
          mids$[mid_computeJacobianEccentricWrtCartesian_3b7b373db8e7887f] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[D");
          mids$[mid_computeJacobianTrueWrtCartesian_3b7b373db8e7887f] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EquinoctialOrbit::EquinoctialOrbit(const ::org::orekit::orbits::Orbit & a0) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_69b47a274eed440d, a0.this$)) {}

      EquinoctialOrbit::EquinoctialOrbit(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, jdouble a2) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_18124f64d7fce8bd, a0.this$, a1.this$, a2)) {}

      EquinoctialOrbit::EquinoctialOrbit(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_bc81b5d0c2baa99c, a0.this$, a1.this$, a2.this$, a3)) {}

      EquinoctialOrbit::EquinoctialOrbit(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::orbits::PositionAngleType & a6, const ::org::orekit::frames::Frame & a7, const ::org::orekit::time::AbsoluteDate & a8, jdouble a9) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_5fc5d1b0e40c2d5b, a0, a1, a2, a3, a4, a5, a6.this$, a7.this$, a8.this$, a9)) {}

      EquinoctialOrbit::EquinoctialOrbit(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, const ::org::orekit::orbits::PositionAngleType & a12, const ::org::orekit::frames::Frame & a13, const ::org::orekit::time::AbsoluteDate & a14, jdouble a15) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_3058e51cfd00310e, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12.this$, a13.this$, a14.this$, a15)) {}

      void EquinoctialOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, jdouble a1, const JArray< jdouble > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_2a5649bc1625306e], a0.this$, a1, a2.this$);
      }

      jdouble EquinoctialOrbit::eccentricToMean(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_eccentricToMean_f804f816b79164cb], a0, a1, a2);
      }

      jdouble EquinoctialOrbit::eccentricToTrue(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_eccentricToTrue_f804f816b79164cb], a0, a1, a2);
      }

      jdouble EquinoctialOrbit::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_b74f83833fdad017]);
      }

      jdouble EquinoctialOrbit::getADot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getADot_b74f83833fdad017]);
      }

      ::org::orekit::orbits::PositionAngleType EquinoctialOrbit::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_c25055891f180348]));
      }

      jdouble EquinoctialOrbit::getE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getE_b74f83833fdad017]);
      }

      jdouble EquinoctialOrbit::getEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEDot_b74f83833fdad017]);
      }

      jdouble EquinoctialOrbit::getEquinoctialEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEx_b74f83833fdad017]);
      }

      jdouble EquinoctialOrbit::getEquinoctialExDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialExDot_b74f83833fdad017]);
      }

      jdouble EquinoctialOrbit::getEquinoctialEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEy_b74f83833fdad017]);
      }

      jdouble EquinoctialOrbit::getEquinoctialEyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEyDot_b74f83833fdad017]);
      }

      jdouble EquinoctialOrbit::getHx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHx_b74f83833fdad017]);
      }

      jdouble EquinoctialOrbit::getHxDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHxDot_b74f83833fdad017]);
      }

      jdouble EquinoctialOrbit::getHy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHy_b74f83833fdad017]);
      }

      jdouble EquinoctialOrbit::getHyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHyDot_b74f83833fdad017]);
      }

      jdouble EquinoctialOrbit::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_b74f83833fdad017]);
      }

      jdouble EquinoctialOrbit::getIDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getIDot_b74f83833fdad017]);
      }

      jdouble EquinoctialOrbit::getL(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL_68608c097e66b295], a0.this$);
      }

      jdouble EquinoctialOrbit::getLDot(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLDot_68608c097e66b295], a0.this$);
      }

      jdouble EquinoctialOrbit::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_b74f83833fdad017]);
      }

      jdouble EquinoctialOrbit::getLEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLEDot_b74f83833fdad017]);
      }

      jdouble EquinoctialOrbit::getLM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLM_b74f83833fdad017]);
      }

      jdouble EquinoctialOrbit::getLMDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMDot_b74f83833fdad017]);
      }

      jdouble EquinoctialOrbit::getLv() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLv_b74f83833fdad017]);
      }

      jdouble EquinoctialOrbit::getLvDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLvDot_b74f83833fdad017]);
      }

      ::org::orekit::orbits::OrbitType EquinoctialOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_c7d4737d7afca612]));
      }

      jboolean EquinoctialOrbit::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_9ab94ac1dc23b105]);
      }

      jdouble EquinoctialOrbit::meanToEccentric(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_meanToEccentric_f804f816b79164cb], a0, a1, a2);
      }

      EquinoctialOrbit EquinoctialOrbit::removeRates() const
      {
        return EquinoctialOrbit(env->callObjectMethod(this$, mids$[mid_removeRates_fd625ef6a79a03db]));
      }

      EquinoctialOrbit EquinoctialOrbit::shiftedBy(jdouble a0) const
      {
        return EquinoctialOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_bbafbee12fa05f6f], a0));
      }

      ::java::lang::String EquinoctialOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
      }

      jdouble EquinoctialOrbit::trueToEccentric(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_trueToEccentric_f804f816b79164cb], a0, a1, a2);
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
#include "org/orekit/forces/maneuvers/propulsion/BasicConstantThrustPropulsionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *BasicConstantThrustPropulsionModel::class$ = NULL;
          jmethodID *BasicConstantThrustPropulsionModel::mids$ = NULL;
          bool BasicConstantThrustPropulsionModel::live$ = false;
          ::java::lang::String *BasicConstantThrustPropulsionModel::FLOW_RATE = NULL;
          jdouble BasicConstantThrustPropulsionModel::FLOW_RATE_SCALE = (jdouble) 0;
          ::java::lang::String *BasicConstantThrustPropulsionModel::THRUST = NULL;
          jdouble BasicConstantThrustPropulsionModel::THRUST_SCALE = (jdouble) 0;

          jclass BasicConstantThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/BasicConstantThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c0d617667838be49] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Ljava/lang/String;)V");
              mids$[mid_init$_5c295347eb1c7d1a] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/forces/maneuvers/Control3DVectorCostType;Ljava/lang/String;)V");
              mids$[mid_getFlowRate_b74f83833fdad017] = env->getMethodID(cls, "getFlowRate", "()D");
              mids$[mid_getFlowRate_b060e4326765ccf1] = env->getMethodID(cls, "getFlowRate", "([D)D");
              mids$[mid_getFlowRate_ba5ea64a789ad864] = env->getMethodID(cls, "getFlowRate", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFlowRate_fd347811007a6ba3] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getThrustVector_8b724f8b4fdad1a2] = env->getMethodID(cls, "getThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_5dc321c3ba065f30] = env->getMethodID(cls, "getThrustVector", "([D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_b7e5bd35daed8b40] = env->getMethodID(cls, "getThrustVector", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_082e6346b274f880] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              FLOW_RATE = new ::java::lang::String(env->getStaticObjectField(cls, "FLOW_RATE", "Ljava/lang/String;"));
              FLOW_RATE_SCALE = env->getStaticDoubleField(cls, "FLOW_RATE_SCALE");
              THRUST = new ::java::lang::String(env->getStaticObjectField(cls, "THRUST", "Ljava/lang/String;"));
              THRUST_SCALE = env->getStaticDoubleField(cls, "THRUST_SCALE");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BasicConstantThrustPropulsionModel::BasicConstantThrustPropulsionModel(jdouble a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::java::lang::String & a3) : ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel(env->newObject(initializeClass, &mids$, mid_init$_c0d617667838be49, a0, a1, a2.this$, a3.this$)) {}

          BasicConstantThrustPropulsionModel::BasicConstantThrustPropulsionModel(jdouble a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a3, const ::java::lang::String & a4) : ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel(env->newObject(initializeClass, &mids$, mid_init$_5c295347eb1c7d1a, a0, a1, a2.this$, a3.this$, a4.this$)) {}

          jdouble BasicConstantThrustPropulsionModel::getFlowRate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_b74f83833fdad017]);
          }

          jdouble BasicConstantThrustPropulsionModel::getFlowRate(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_b060e4326765ccf1], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement BasicConstantThrustPropulsionModel::getFlowRate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFlowRate_ba5ea64a789ad864], a0.this$));
          }

          jdouble BasicConstantThrustPropulsionModel::getFlowRate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_fd347811007a6ba3], a0.this$);
          }

          ::java::util::List BasicConstantThrustPropulsionModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D BasicConstantThrustPropulsionModel::getThrustVector() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_8b724f8b4fdad1a2]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D BasicConstantThrustPropulsionModel::getThrustVector(const JArray< jdouble > & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_5dc321c3ba065f30], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D BasicConstantThrustPropulsionModel::getThrustVector(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_b7e5bd35daed8b40], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D BasicConstantThrustPropulsionModel::getThrustVector(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_082e6346b274f880], a0.this$));
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
          static PyObject *t_BasicConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BasicConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_BasicConstantThrustPropulsionModel_init_(t_BasicConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BasicConstantThrustPropulsionModel_getFlowRate(t_BasicConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_BasicConstantThrustPropulsionModel_getParametersDrivers(t_BasicConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_BasicConstantThrustPropulsionModel_getThrustVector(t_BasicConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_BasicConstantThrustPropulsionModel_get__flowRate(t_BasicConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_BasicConstantThrustPropulsionModel_get__parametersDrivers(t_BasicConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_BasicConstantThrustPropulsionModel_get__thrustVector(t_BasicConstantThrustPropulsionModel *self, void *data);
          static PyGetSetDef t_BasicConstantThrustPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_BasicConstantThrustPropulsionModel, flowRate),
            DECLARE_GET_FIELD(t_BasicConstantThrustPropulsionModel, parametersDrivers),
            DECLARE_GET_FIELD(t_BasicConstantThrustPropulsionModel, thrustVector),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BasicConstantThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_BasicConstantThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BasicConstantThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BasicConstantThrustPropulsionModel, getFlowRate, METH_VARARGS),
            DECLARE_METHOD(t_BasicConstantThrustPropulsionModel, getParametersDrivers, METH_VARARGS),
            DECLARE_METHOD(t_BasicConstantThrustPropulsionModel, getThrustVector, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BasicConstantThrustPropulsionModel)[] = {
            { Py_tp_methods, t_BasicConstantThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_BasicConstantThrustPropulsionModel_init_ },
            { Py_tp_getset, t_BasicConstantThrustPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BasicConstantThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel),
            NULL
          };

          DEFINE_TYPE(BasicConstantThrustPropulsionModel, t_BasicConstantThrustPropulsionModel, BasicConstantThrustPropulsionModel);

          void t_BasicConstantThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(BasicConstantThrustPropulsionModel), &PY_TYPE_DEF(BasicConstantThrustPropulsionModel), module, "BasicConstantThrustPropulsionModel", 0);
          }

          void t_BasicConstantThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "class_", make_descriptor(BasicConstantThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "wrapfn_", make_descriptor(t_BasicConstantThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(BasicConstantThrustPropulsionModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "FLOW_RATE", make_descriptor(j2p(*BasicConstantThrustPropulsionModel::FLOW_RATE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "FLOW_RATE_SCALE", make_descriptor(BasicConstantThrustPropulsionModel::FLOW_RATE_SCALE));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "THRUST", make_descriptor(j2p(*BasicConstantThrustPropulsionModel::THRUST)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "THRUST_SCALE", make_descriptor(BasicConstantThrustPropulsionModel::THRUST_SCALE));
          }

          static PyObject *t_BasicConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BasicConstantThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_BasicConstantThrustPropulsionModel::wrap_Object(BasicConstantThrustPropulsionModel(((t_BasicConstantThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_BasicConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BasicConstantThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_BasicConstantThrustPropulsionModel_init_(t_BasicConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                jdouble a0;
                jdouble a1;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
                ::java::lang::String a3((jobject) NULL);
                BasicConstantThrustPropulsionModel object((jobject) NULL);

                if (!parseArgs(args, "DDks", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = BasicConstantThrustPropulsionModel(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                jdouble a0;
                jdouble a1;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
                ::org::orekit::forces::maneuvers::Control3DVectorCostType a3((jobject) NULL);
                PyTypeObject **p3;
                ::java::lang::String a4((jobject) NULL);
                BasicConstantThrustPropulsionModel object((jobject) NULL);

                if (!parseArgs(args, "DDkKs", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_, &a4))
                {
                  INT_CALL(object = BasicConstantThrustPropulsionModel(a0, a1, a2, a3, a4));
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

          static PyObject *t_BasicConstantThrustPropulsionModel_getFlowRate(t_BasicConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFlowRate());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "[D", &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(BasicConstantThrustPropulsionModel), (PyObject *) self, "getFlowRate", args, 2);
          }

          static PyObject *t_BasicConstantThrustPropulsionModel_getParametersDrivers(t_BasicConstantThrustPropulsionModel *self, PyObject *args)
          {
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            return callSuper(PY_TYPE(BasicConstantThrustPropulsionModel), (PyObject *) self, "getParametersDrivers", args, 2);
          }

          static PyObject *t_BasicConstantThrustPropulsionModel_getThrustVector(t_BasicConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getThrustVector());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
              break;
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "[D", &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(BasicConstantThrustPropulsionModel), (PyObject *) self, "getThrustVector", args, 2);
          }

          static PyObject *t_BasicConstantThrustPropulsionModel_get__flowRate(t_BasicConstantThrustPropulsionModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFlowRate());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_BasicConstantThrustPropulsionModel_get__parametersDrivers(t_BasicConstantThrustPropulsionModel *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_BasicConstantThrustPropulsionModel_get__thrustVector(t_BasicConstantThrustPropulsionModel *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getThrustVector());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/GroundPointing.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *GroundPointing::class$ = NULL;
      jmethodID *GroundPointing::mids$ = NULL;
      bool GroundPointing::live$ = false;

      jclass GroundPointing::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/GroundPointing");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAttitude_21845cfb0034fe1c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_896ee4d68989b1e8] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitudeRotation_1bc07ea175743b30] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getAttitudeRotation_6acae55a2f5d3ab4] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getBodyFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getTargetPV_4a6b199bd28f952f] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getTargetPV_0c9a6603286e7c6f] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getTargetPosition_07759faf76e8b991] = env->getMethodID(cls, "getTargetPosition", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getTargetPosition_ec4cfef21ca9ef1f] = env->getMethodID(cls, "getTargetPosition", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::attitudes::Attitude GroundPointing::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_21845cfb0034fe1c], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude GroundPointing::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_896ee4d68989b1e8], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation GroundPointing::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_1bc07ea175743b30], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation GroundPointing::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_6acae55a2f5d3ab4], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::Frame GroundPointing::getBodyFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getBodyFrame_2c51111cc6894ba1]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_GroundPointing_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GroundPointing_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GroundPointing_getAttitude(t_GroundPointing *self, PyObject *args);
      static PyObject *t_GroundPointing_getAttitudeRotation(t_GroundPointing *self, PyObject *args);
      static PyObject *t_GroundPointing_getBodyFrame(t_GroundPointing *self);
      static PyObject *t_GroundPointing_get__bodyFrame(t_GroundPointing *self, void *data);
      static PyGetSetDef t_GroundPointing__fields_[] = {
        DECLARE_GET_FIELD(t_GroundPointing, bodyFrame),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GroundPointing__methods_[] = {
        DECLARE_METHOD(t_GroundPointing, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GroundPointing, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GroundPointing, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_GroundPointing, getAttitudeRotation, METH_VARARGS),
        DECLARE_METHOD(t_GroundPointing, getBodyFrame, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GroundPointing)[] = {
        { Py_tp_methods, t_GroundPointing__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_GroundPointing__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GroundPointing)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GroundPointing, t_GroundPointing, GroundPointing);

      void t_GroundPointing::install(PyObject *module)
      {
        installType(&PY_TYPE(GroundPointing), &PY_TYPE_DEF(GroundPointing), module, "GroundPointing", 0);
      }

      void t_GroundPointing::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GroundPointing), "class_", make_descriptor(GroundPointing::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GroundPointing), "wrapfn_", make_descriptor(t_GroundPointing::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GroundPointing), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GroundPointing_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GroundPointing::initializeClass, 1)))
          return NULL;
        return t_GroundPointing::wrap_Object(GroundPointing(((t_GroundPointing *) arg)->object.this$));
      }
      static PyObject *t_GroundPointing_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GroundPointing::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GroundPointing_getAttitude(t_GroundPointing *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_GroundPointing_getAttitudeRotation(t_GroundPointing *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitudeRotation", args);
        return NULL;
      }

      static PyObject *t_GroundPointing_getBodyFrame(t_GroundPointing *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getBodyFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_GroundPointing_get__bodyFrame(t_GroundPointing *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getBodyFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/EventState.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/events/EventOccurrence.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *EventState::class$ = NULL;
        jmethodID *EventState::mids$ = NULL;
        bool EventState::live$ = false;

        jclass EventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/EventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_doEvent_1eca994d89f760c7] = env->getMethodID(cls, "doEvent", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/events/EventOccurrence;");
            mids$[mid_evaluateStep_f2bd5620f6269916] = env->getMethodID(cls, "evaluateStep", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)Z");
            mids$[mid_getEventTime_b74f83833fdad017] = env->getMethodID(cls, "getEventTime", "()D");
            mids$[mid_init_a7556bd72cab73f1] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::events::EventOccurrence EventState::doEvent(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::events::EventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_1eca994d89f760c7], a0.this$));
        }

        jboolean EventState::evaluateStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_f2bd5620f6269916], a0.this$);
        }

        jdouble EventState::getEventTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getEventTime_b74f83833fdad017]);
        }

        void EventState::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_a7556bd72cab73f1], a0.this$, a1);
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
        static PyObject *t_EventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventState_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventState_doEvent(t_EventState *self, PyObject *arg);
        static PyObject *t_EventState_evaluateStep(t_EventState *self, PyObject *arg);
        static PyObject *t_EventState_getEventTime(t_EventState *self);
        static PyObject *t_EventState_init(t_EventState *self, PyObject *args);
        static PyObject *t_EventState_get__eventTime(t_EventState *self, void *data);
        static PyGetSetDef t_EventState__fields_[] = {
          DECLARE_GET_FIELD(t_EventState, eventTime),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventState__methods_[] = {
          DECLARE_METHOD(t_EventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventState, doEvent, METH_O),
          DECLARE_METHOD(t_EventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_EventState, getEventTime, METH_NOARGS),
          DECLARE_METHOD(t_EventState, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventState)[] = {
          { Py_tp_methods, t_EventState__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventState, t_EventState, EventState);

        void t_EventState::install(PyObject *module)
        {
          installType(&PY_TYPE(EventState), &PY_TYPE_DEF(EventState), module, "EventState", 0);
        }

        void t_EventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState), "class_", make_descriptor(EventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState), "wrapfn_", make_descriptor(t_EventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventState::initializeClass, 1)))
            return NULL;
          return t_EventState::wrap_Object(EventState(((t_EventState *) arg)->object.this$));
        }
        static PyObject *t_EventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventState_doEvent(t_EventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          ::org::hipparchus::ode::events::EventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::hipparchus::ode::events::t_EventOccurrence::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_EventState_evaluateStep(t_EventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::ODEStateInterpolator a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStateInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_EventState_getEventTime(t_EventState *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getEventTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EventState_init(t_EventState *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_EventState_get__eventTime(t_EventState *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getEventTime());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/DatesSelector.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *DatesSelector::class$ = NULL;
      jmethodID *DatesSelector::mids$ = NULL;
      bool DatesSelector::live$ = false;

      jclass DatesSelector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/DatesSelector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_selectDates_50850a0bb1306a34] = env->getMethodID(cls, "selectDates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List DatesSelector::selectDates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_selectDates_50850a0bb1306a34], a0.this$, a1.this$));
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
      static PyObject *t_DatesSelector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DatesSelector_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DatesSelector_selectDates(t_DatesSelector *self, PyObject *args);

      static PyMethodDef t_DatesSelector__methods_[] = {
        DECLARE_METHOD(t_DatesSelector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DatesSelector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DatesSelector, selectDates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DatesSelector)[] = {
        { Py_tp_methods, t_DatesSelector__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DatesSelector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DatesSelector, t_DatesSelector, DatesSelector);

      void t_DatesSelector::install(PyObject *module)
      {
        installType(&PY_TYPE(DatesSelector), &PY_TYPE_DEF(DatesSelector), module, "DatesSelector", 0);
      }

      void t_DatesSelector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DatesSelector), "class_", make_descriptor(DatesSelector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DatesSelector), "wrapfn_", make_descriptor(t_DatesSelector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DatesSelector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DatesSelector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DatesSelector::initializeClass, 1)))
          return NULL;
        return t_DatesSelector::wrap_Object(DatesSelector(((t_DatesSelector *) arg)->object.this$));
      }
      static PyObject *t_DatesSelector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DatesSelector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DatesSelector_selectDates(t_DatesSelector *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.selectDates(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(AbsoluteDate));
        }

        PyErr_SetArgsError((PyObject *) self, "selectDates", args);
        return NULL;
      }
    }
  }
}
