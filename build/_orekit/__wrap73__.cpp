#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/FieldBodiesElements.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *FieldBodiesElements::class$ = NULL;
      jmethodID *FieldBodiesElements::mids$ = NULL;
      bool FieldBodiesElements::live$ = false;

      jclass FieldBodiesElements::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/FieldBodiesElements");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_563f70b712ba8f2a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getLE_e6d4d3215c30992a] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLEDot_e6d4d3215c30992a] = env->getMethodID(cls, "getLEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLJu_e6d4d3215c30992a] = env->getMethodID(cls, "getLJu", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLJuDot_e6d4d3215c30992a] = env->getMethodID(cls, "getLJuDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMa_e6d4d3215c30992a] = env->getMethodID(cls, "getLMa", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMaDot_e6d4d3215c30992a] = env->getMethodID(cls, "getLMaDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMe_e6d4d3215c30992a] = env->getMethodID(cls, "getLMe", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMeDot_e6d4d3215c30992a] = env->getMethodID(cls, "getLMeDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLNe_e6d4d3215c30992a] = env->getMethodID(cls, "getLNe", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLNeDot_e6d4d3215c30992a] = env->getMethodID(cls, "getLNeDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLSa_e6d4d3215c30992a] = env->getMethodID(cls, "getLSa", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLSaDot_e6d4d3215c30992a] = env->getMethodID(cls, "getLSaDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLUr_e6d4d3215c30992a] = env->getMethodID(cls, "getLUr", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLUrDot_e6d4d3215c30992a] = env->getMethodID(cls, "getLUrDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLVe_e6d4d3215c30992a] = env->getMethodID(cls, "getLVe", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLVeDot_e6d4d3215c30992a] = env->getMethodID(cls, "getLVeDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPa_e6d4d3215c30992a] = env->getMethodID(cls, "getPa", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPaDot_e6d4d3215c30992a] = env->getMethodID(cls, "getPaDot", "()Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldBodiesElements::FieldBodiesElements(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::hipparchus::CalculusFieldElement & a12, const ::org::hipparchus::CalculusFieldElement & a13, const ::org::hipparchus::CalculusFieldElement & a14, const ::org::hipparchus::CalculusFieldElement & a15, const ::org::hipparchus::CalculusFieldElement & a16, const ::org::hipparchus::CalculusFieldElement & a17, const ::org::hipparchus::CalculusFieldElement & a18, const ::org::hipparchus::CalculusFieldElement & a19, const ::org::hipparchus::CalculusFieldElement & a20, const ::org::hipparchus::CalculusFieldElement & a21, const ::org::hipparchus::CalculusFieldElement & a22, const ::org::hipparchus::CalculusFieldElement & a23, const ::org::hipparchus::CalculusFieldElement & a24, const ::org::hipparchus::CalculusFieldElement & a25, const ::org::hipparchus::CalculusFieldElement & a26, const ::org::hipparchus::CalculusFieldElement & a27, const ::org::hipparchus::CalculusFieldElement & a28, const ::org::hipparchus::CalculusFieldElement & a29, const ::org::hipparchus::CalculusFieldElement & a30, const ::org::hipparchus::CalculusFieldElement & a31) : ::org::orekit::data::FieldDelaunayArguments(env->newObject(initializeClass, &mids$, mid_init$_563f70b712ba8f2a, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$, a16.this$, a17.this$, a18.this$, a19.this$, a20.this$, a21.this$, a22.this$, a23.this$, a24.this$, a25.this$, a26.this$, a27.this$, a28.this$, a29.this$, a30.this$, a31.this$)) {}

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLEDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLJu() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLJu_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLJuDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLJuDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLMa() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMa_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLMaDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMaDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLMe() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMe_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLMeDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMeDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLNe() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLNe_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLNeDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLNeDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLSa() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLSa_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLSaDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLSaDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLUr() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLUr_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLUrDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLUrDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLVe() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLVe_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLVeDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLVeDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getPa() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPa_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getPaDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPaDot_e6d4d3215c30992a]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_FieldBodiesElements_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBodiesElements_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBodiesElements_of_(t_FieldBodiesElements *self, PyObject *args);
      static int t_FieldBodiesElements_init_(t_FieldBodiesElements *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldBodiesElements_getLE(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLEDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLJu(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLJuDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLMa(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLMaDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLMe(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLMeDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLNe(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLNeDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLSa(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLSaDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLUr(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLUrDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLVe(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLVeDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getPa(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getPaDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_get__lE(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lEDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lJu(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lJuDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lMa(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lMaDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lMe(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lMeDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lNe(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lNeDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lSa(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lSaDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lUr(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lUrDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lVe(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lVeDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__pa(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__paDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__parameters_(t_FieldBodiesElements *self, void *data);
      static PyGetSetDef t_FieldBodiesElements__fields_[] = {
        DECLARE_GET_FIELD(t_FieldBodiesElements, lE),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lEDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lJu),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lJuDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lMa),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lMaDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lMe),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lMeDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lNe),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lNeDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lSa),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lSaDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lUr),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lUrDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lVe),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lVeDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, pa),
        DECLARE_GET_FIELD(t_FieldBodiesElements, paDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldBodiesElements__methods_[] = {
        DECLARE_METHOD(t_FieldBodiesElements, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBodiesElements, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBodiesElements, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLE, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLEDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLJu, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLJuDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLMa, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLMaDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLMe, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLMeDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLNe, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLNeDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLSa, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLSaDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLUr, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLUrDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLVe, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLVeDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getPa, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getPaDot, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldBodiesElements)[] = {
        { Py_tp_methods, t_FieldBodiesElements__methods_ },
        { Py_tp_init, (void *) t_FieldBodiesElements_init_ },
        { Py_tp_getset, t_FieldBodiesElements__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldBodiesElements)[] = {
        &PY_TYPE_DEF(::org::orekit::data::FieldDelaunayArguments),
        NULL
      };

      DEFINE_TYPE(FieldBodiesElements, t_FieldBodiesElements, FieldBodiesElements);
      PyObject *t_FieldBodiesElements::wrap_Object(const FieldBodiesElements& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldBodiesElements::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldBodiesElements *self = (t_FieldBodiesElements *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldBodiesElements::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldBodiesElements::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldBodiesElements *self = (t_FieldBodiesElements *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldBodiesElements::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldBodiesElements), &PY_TYPE_DEF(FieldBodiesElements), module, "FieldBodiesElements", 0);
      }

      void t_FieldBodiesElements::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBodiesElements), "class_", make_descriptor(FieldBodiesElements::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBodiesElements), "wrapfn_", make_descriptor(t_FieldBodiesElements::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBodiesElements), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldBodiesElements_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldBodiesElements::initializeClass, 1)))
          return NULL;
        return t_FieldBodiesElements::wrap_Object(FieldBodiesElements(((t_FieldBodiesElements *) arg)->object.this$));
      }
      static PyObject *t_FieldBodiesElements_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldBodiesElements::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldBodiesElements_of_(t_FieldBodiesElements *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldBodiesElements_init_(t_FieldBodiesElements *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
        PyTypeObject **p3;
        ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
        PyTypeObject **p4;
        ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
        PyTypeObject **p5;
        ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
        PyTypeObject **p6;
        ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
        PyTypeObject **p7;
        ::org::hipparchus::CalculusFieldElement a8((jobject) NULL);
        PyTypeObject **p8;
        ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
        PyTypeObject **p9;
        ::org::hipparchus::CalculusFieldElement a10((jobject) NULL);
        PyTypeObject **p10;
        ::org::hipparchus::CalculusFieldElement a11((jobject) NULL);
        PyTypeObject **p11;
        ::org::hipparchus::CalculusFieldElement a12((jobject) NULL);
        PyTypeObject **p12;
        ::org::hipparchus::CalculusFieldElement a13((jobject) NULL);
        PyTypeObject **p13;
        ::org::hipparchus::CalculusFieldElement a14((jobject) NULL);
        PyTypeObject **p14;
        ::org::hipparchus::CalculusFieldElement a15((jobject) NULL);
        PyTypeObject **p15;
        ::org::hipparchus::CalculusFieldElement a16((jobject) NULL);
        PyTypeObject **p16;
        ::org::hipparchus::CalculusFieldElement a17((jobject) NULL);
        PyTypeObject **p17;
        ::org::hipparchus::CalculusFieldElement a18((jobject) NULL);
        PyTypeObject **p18;
        ::org::hipparchus::CalculusFieldElement a19((jobject) NULL);
        PyTypeObject **p19;
        ::org::hipparchus::CalculusFieldElement a20((jobject) NULL);
        PyTypeObject **p20;
        ::org::hipparchus::CalculusFieldElement a21((jobject) NULL);
        PyTypeObject **p21;
        ::org::hipparchus::CalculusFieldElement a22((jobject) NULL);
        PyTypeObject **p22;
        ::org::hipparchus::CalculusFieldElement a23((jobject) NULL);
        PyTypeObject **p23;
        ::org::hipparchus::CalculusFieldElement a24((jobject) NULL);
        PyTypeObject **p24;
        ::org::hipparchus::CalculusFieldElement a25((jobject) NULL);
        PyTypeObject **p25;
        ::org::hipparchus::CalculusFieldElement a26((jobject) NULL);
        PyTypeObject **p26;
        ::org::hipparchus::CalculusFieldElement a27((jobject) NULL);
        PyTypeObject **p27;
        ::org::hipparchus::CalculusFieldElement a28((jobject) NULL);
        PyTypeObject **p28;
        ::org::hipparchus::CalculusFieldElement a29((jobject) NULL);
        PyTypeObject **p29;
        ::org::hipparchus::CalculusFieldElement a30((jobject) NULL);
        PyTypeObject **p30;
        ::org::hipparchus::CalculusFieldElement a31((jobject) NULL);
        PyTypeObject **p31;
        FieldBodiesElements object((jobject) NULL);

        if (!parseArgs(args, "KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &p11, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a12, &p12, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a13, &p13, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a14, &p14, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a15, &p15, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a16, &p16, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a17, &p17, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a18, &p18, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a19, &p19, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a20, &p20, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a21, &p21, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a22, &p22, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a23, &p23, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a24, &p24, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a25, &p25, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a26, &p26, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a27, &p27, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a28, &p28, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a29, &p29, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a30, &p30, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a31, &p31, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldBodiesElements(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldBodiesElements_getLE(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLE());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLEDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLEDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLJu(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLJu());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLJuDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLJuDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLMa(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLMa());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLMaDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLMaDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLMe(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLMe());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLMeDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLMeDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLNe(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLNe());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLNeDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLNeDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLSa(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLSa());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLSaDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLSaDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLUr(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLUr());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLUrDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLUrDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLVe(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLVe());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLVeDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLVeDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getPa(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getPa());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getPaDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getPaDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_FieldBodiesElements_get__parameters_(t_FieldBodiesElements *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldBodiesElements_get__lE(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lEDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lJu(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLJu());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lJuDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLJuDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lMa(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMa());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lMaDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMaDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lMe(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMe());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lMeDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMeDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lNe(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLNe());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lNeDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLNeDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lSa(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLSa());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lSaDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLSaDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lUr(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLUr());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lUrDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLUrDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lVe(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLVe());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lVeDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLVeDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__pa(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getPa());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__paDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getPaDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonEventDetectorsProvider.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/util/stream/Stream.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/EventDetectorsProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonEventDetectorsProvider::class$ = NULL;
        jmethodID *PythonEventDetectorsProvider::mids$ = NULL;
        bool PythonEventDetectorsProvider::live$ = false;

        jclass PythonEventDetectorsProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonEventDetectorsProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getEventDetectors_a68a17dd093f796d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_1328ddb491531a35] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEventDetectorsProvider::PythonEventDetectorsProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonEventDetectorsProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonEventDetectorsProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonEventDetectorsProvider::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
        static PyObject *t_PythonEventDetectorsProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEventDetectorsProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEventDetectorsProvider_init_(t_PythonEventDetectorsProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEventDetectorsProvider_finalize(t_PythonEventDetectorsProvider *self);
        static PyObject *t_PythonEventDetectorsProvider_pythonExtension(t_PythonEventDetectorsProvider *self, PyObject *args);
        static jobject JNICALL t_PythonEventDetectorsProvider_getEventDetectors0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEventDetectorsProvider_getFieldEventDetectors1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonEventDetectorsProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEventDetectorsProvider_get__self(t_PythonEventDetectorsProvider *self, void *data);
        static PyGetSetDef t_PythonEventDetectorsProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEventDetectorsProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEventDetectorsProvider__methods_[] = {
          DECLARE_METHOD(t_PythonEventDetectorsProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEventDetectorsProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEventDetectorsProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEventDetectorsProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEventDetectorsProvider)[] = {
          { Py_tp_methods, t_PythonEventDetectorsProvider__methods_ },
          { Py_tp_init, (void *) t_PythonEventDetectorsProvider_init_ },
          { Py_tp_getset, t_PythonEventDetectorsProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEventDetectorsProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEventDetectorsProvider, t_PythonEventDetectorsProvider, PythonEventDetectorsProvider);

        void t_PythonEventDetectorsProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEventDetectorsProvider), &PY_TYPE_DEF(PythonEventDetectorsProvider), module, "PythonEventDetectorsProvider", 1);
        }

        void t_PythonEventDetectorsProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventDetectorsProvider), "class_", make_descriptor(PythonEventDetectorsProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventDetectorsProvider), "wrapfn_", make_descriptor(t_PythonEventDetectorsProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventDetectorsProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEventDetectorsProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "getEventDetectors", "()Ljava/util/stream/Stream;", (void *) t_PythonEventDetectorsProvider_getEventDetectors0 },
            { "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;", (void *) t_PythonEventDetectorsProvider_getFieldEventDetectors1 },
            { "pythonDecRef", "()V", (void *) t_PythonEventDetectorsProvider_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonEventDetectorsProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEventDetectorsProvider::initializeClass, 1)))
            return NULL;
          return t_PythonEventDetectorsProvider::wrap_Object(PythonEventDetectorsProvider(((t_PythonEventDetectorsProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonEventDetectorsProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEventDetectorsProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEventDetectorsProvider_init_(t_PythonEventDetectorsProvider *self, PyObject *args, PyObject *kwds)
        {
          PythonEventDetectorsProvider object((jobject) NULL);

          INT_CALL(object = PythonEventDetectorsProvider());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEventDetectorsProvider_finalize(t_PythonEventDetectorsProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEventDetectorsProvider_pythonExtension(t_PythonEventDetectorsProvider *self, PyObject *args)
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

        static jobject JNICALL t_PythonEventDetectorsProvider_getEventDetectors0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetectorsProvider::mids$[PythonEventDetectorsProvider::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::stream::Stream value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getEventDetectors", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
          {
            throwTypeError("getEventDetectors", result);
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

        static jobject JNICALL t_PythonEventDetectorsProvider_getFieldEventDetectors1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetectorsProvider::mids$[PythonEventDetectorsProvider::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::stream::Stream value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
          PyObject *result = PyObject_CallMethod(obj, "getFieldEventDetectors", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
          {
            throwTypeError("getFieldEventDetectors", result);
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

        static void JNICALL t_PythonEventDetectorsProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetectorsProvider::mids$[PythonEventDetectorsProvider::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEventDetectorsProvider::mids$[PythonEventDetectorsProvider::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEventDetectorsProvider_get__self(t_PythonEventDetectorsProvider *self, void *data)
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
#include "org/orekit/data/PolynomialNutation.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PolynomialNutation::class$ = NULL;
      jmethodID *PolynomialNutation::mids$ = NULL;
      bool PolynomialNutation::live$ = false;

      jclass PolynomialNutation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PolynomialNutation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ebc26dcaf4761286] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_derivative_0ba5fed9597b693e] = env->getMethodID(cls, "derivative", "(D)D");
          mids$[mid_derivative_d3398190482814dc] = env->getMethodID(cls, "derivative", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
          mids$[mid_value_d3398190482814dc] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PolynomialNutation::PolynomialNutation(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ebc26dcaf4761286, a0.this$)) {}

      jdouble PolynomialNutation::derivative(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_derivative_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement PolynomialNutation::derivative(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_derivative_d3398190482814dc], a0.this$));
      }

      jdouble PolynomialNutation::value(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement PolynomialNutation::value(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_d3398190482814dc], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_PolynomialNutation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialNutation_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PolynomialNutation_init_(t_PolynomialNutation *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PolynomialNutation_derivative(t_PolynomialNutation *self, PyObject *args);
      static PyObject *t_PolynomialNutation_value(t_PolynomialNutation *self, PyObject *args);

      static PyMethodDef t_PolynomialNutation__methods_[] = {
        DECLARE_METHOD(t_PolynomialNutation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialNutation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialNutation, derivative, METH_VARARGS),
        DECLARE_METHOD(t_PolynomialNutation, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PolynomialNutation)[] = {
        { Py_tp_methods, t_PolynomialNutation__methods_ },
        { Py_tp_init, (void *) t_PolynomialNutation_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PolynomialNutation)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PolynomialNutation, t_PolynomialNutation, PolynomialNutation);

      void t_PolynomialNutation::install(PyObject *module)
      {
        installType(&PY_TYPE(PolynomialNutation), &PY_TYPE_DEF(PolynomialNutation), module, "PolynomialNutation", 0);
      }

      void t_PolynomialNutation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialNutation), "class_", make_descriptor(PolynomialNutation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialNutation), "wrapfn_", make_descriptor(t_PolynomialNutation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialNutation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PolynomialNutation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PolynomialNutation::initializeClass, 1)))
          return NULL;
        return t_PolynomialNutation::wrap_Object(PolynomialNutation(((t_PolynomialNutation *) arg)->object.this$));
      }
      static PyObject *t_PolynomialNutation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PolynomialNutation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PolynomialNutation_init_(t_PolynomialNutation *self, PyObject *args, PyObject *kwds)
      {
        JArray< jdouble > a0((jobject) NULL);
        PolynomialNutation object((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          INT_CALL(object = PolynomialNutation(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_PolynomialNutation_derivative(t_PolynomialNutation *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.derivative(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.derivative(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "derivative", args);
        return NULL;
      }

      static PyObject *t_PolynomialNutation_value(t_PolynomialNutation *self, PyObject *args)
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
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.value(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
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
#include "org/hipparchus/linear/SparseFieldMatrix.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SparseFieldMatrix::class$ = NULL;
      jmethodID *SparseFieldMatrix::mids$ = NULL;
      bool SparseFieldMatrix::live$ = false;

      jclass SparseFieldMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SparseFieldMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_205c34b8e33cf33f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_3e03971cd3efa337] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_init$_11914f5932256658] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
          mids$[mid_addToEntry_8c5ca78361f003c1] = env->getMethodID(cls, "addToEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_copy_cc77900a647586cf] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createMatrix_8e5837651d169cc8] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumnDimension_f2f64475e4580546] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getEntry_e4e0a9e5376069de] = env->getMethodID(cls, "getEntry", "(II)Lorg/hipparchus/FieldElement;");
          mids$[mid_getRowDimension_f2f64475e4580546] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_multiplyEntry_8c5ca78361f003c1] = env->getMethodID(cls, "multiplyEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_multiplyTransposed_311c21c57522a65c] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_setEntry_8c5ca78361f003c1] = env->getMethodID(cls, "setEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_transposeMultiply_311c21c57522a65c] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SparseFieldMatrix::SparseFieldMatrix(const ::org::hipparchus::Field & a0) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_205c34b8e33cf33f, a0.this$)) {}

      SparseFieldMatrix::SparseFieldMatrix(const ::org::hipparchus::linear::FieldMatrix & a0) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_3e03971cd3efa337, a0.this$)) {}

      SparseFieldMatrix::SparseFieldMatrix(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_11914f5932256658, a0.this$, a1, a2)) {}

      void SparseFieldMatrix::addToEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_8c5ca78361f003c1], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix SparseFieldMatrix::copy() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_copy_cc77900a647586cf]));
      }

      ::org::hipparchus::linear::FieldMatrix SparseFieldMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_8e5837651d169cc8], a0, a1));
      }

      jint SparseFieldMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_f2f64475e4580546]);
      }

      ::org::hipparchus::FieldElement SparseFieldMatrix::getEntry(jint a0, jint a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_e4e0a9e5376069de], a0, a1));
      }

      jint SparseFieldMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_f2f64475e4580546]);
      }

      void SparseFieldMatrix::multiplyEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_8c5ca78361f003c1], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix SparseFieldMatrix::multiplyTransposed(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_311c21c57522a65c], a0.this$));
      }

      void SparseFieldMatrix::setEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_8c5ca78361f003c1], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix SparseFieldMatrix::transposeMultiply(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_311c21c57522a65c], a0.this$));
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
      static PyObject *t_SparseFieldMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SparseFieldMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SparseFieldMatrix_of_(t_SparseFieldMatrix *self, PyObject *args);
      static int t_SparseFieldMatrix_init_(t_SparseFieldMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SparseFieldMatrix_addToEntry(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_copy(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_createMatrix(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_getColumnDimension(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_getEntry(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_getRowDimension(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_multiplyEntry(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_multiplyTransposed(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_setEntry(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_transposeMultiply(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_get__columnDimension(t_SparseFieldMatrix *self, void *data);
      static PyObject *t_SparseFieldMatrix_get__rowDimension(t_SparseFieldMatrix *self, void *data);
      static PyObject *t_SparseFieldMatrix_get__parameters_(t_SparseFieldMatrix *self, void *data);
      static PyGetSetDef t_SparseFieldMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_SparseFieldMatrix, columnDimension),
        DECLARE_GET_FIELD(t_SparseFieldMatrix, rowDimension),
        DECLARE_GET_FIELD(t_SparseFieldMatrix, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SparseFieldMatrix__methods_[] = {
        DECLARE_METHOD(t_SparseFieldMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SparseFieldMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SparseFieldMatrix, of_, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, transposeMultiply, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SparseFieldMatrix)[] = {
        { Py_tp_methods, t_SparseFieldMatrix__methods_ },
        { Py_tp_init, (void *) t_SparseFieldMatrix_init_ },
        { Py_tp_getset, t_SparseFieldMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SparseFieldMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractFieldMatrix),
        NULL
      };

      DEFINE_TYPE(SparseFieldMatrix, t_SparseFieldMatrix, SparseFieldMatrix);
      PyObject *t_SparseFieldMatrix::wrap_Object(const SparseFieldMatrix& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SparseFieldMatrix::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SparseFieldMatrix *self = (t_SparseFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SparseFieldMatrix::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SparseFieldMatrix::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SparseFieldMatrix *self = (t_SparseFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SparseFieldMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(SparseFieldMatrix), &PY_TYPE_DEF(SparseFieldMatrix), module, "SparseFieldMatrix", 0);
      }

      void t_SparseFieldMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseFieldMatrix), "class_", make_descriptor(SparseFieldMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseFieldMatrix), "wrapfn_", make_descriptor(t_SparseFieldMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseFieldMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SparseFieldMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SparseFieldMatrix::initializeClass, 1)))
          return NULL;
        return t_SparseFieldMatrix::wrap_Object(SparseFieldMatrix(((t_SparseFieldMatrix *) arg)->object.this$));
      }
      static PyObject *t_SparseFieldMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SparseFieldMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SparseFieldMatrix_of_(t_SparseFieldMatrix *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_SparseFieldMatrix_init_(t_SparseFieldMatrix *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            SparseFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = SparseFieldMatrix(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            SparseFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              INT_CALL(object = SparseFieldMatrix(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            SparseFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = SparseFieldMatrix(a0, a1, a2));
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

      static PyObject *t_SparseFieldMatrix_addToEntry(t_SparseFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_copy(t_SparseFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_createMatrix(t_SparseFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_getColumnDimension(t_SparseFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_getEntry(t_SparseFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_getRowDimension(t_SparseFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_multiplyEntry(t_SparseFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_multiplyTransposed(t_SparseFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.multiplyTransposed(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_setEntry(t_SparseFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_transposeMultiply(t_SparseFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.transposeMultiply(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }
      static PyObject *t_SparseFieldMatrix_get__parameters_(t_SparseFieldMatrix *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_SparseFieldMatrix_get__columnDimension(t_SparseFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_SparseFieldMatrix_get__rowDimension(t_SparseFieldMatrix *self, void *data)
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
#include "org/orekit/files/ilrs/CRDConfiguration$DetectorConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$DetectorConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$DetectorConfiguration::mids$ = NULL;
        bool CRDConfiguration$DetectorConfiguration::live$ = false;

        jclass CRDConfiguration$DetectorConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$DetectorConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getAmplifierBandwidth_456d9a2f64d6b28d] = env->getMethodID(cls, "getAmplifierBandwidth", "()D");
            mids$[mid_getAmplifierGain_456d9a2f64d6b28d] = env->getMethodID(cls, "getAmplifierGain", "()D");
            mids$[mid_getAmplifierInUse_0090f7797e403f43] = env->getMethodID(cls, "getAmplifierInUse", "()Ljava/lang/String;");
            mids$[mid_getApplicableWavelength_456d9a2f64d6b28d] = env->getMethodID(cls, "getApplicableWavelength", "()D");
            mids$[mid_getAppliedVoltage_456d9a2f64d6b28d] = env->getMethodID(cls, "getAppliedVoltage", "()D");
            mids$[mid_getDarkCount_456d9a2f64d6b28d] = env->getMethodID(cls, "getDarkCount", "()D");
            mids$[mid_getDetectorId_0090f7797e403f43] = env->getMethodID(cls, "getDetectorId", "()Ljava/lang/String;");
            mids$[mid_getDetectorType_0090f7797e403f43] = env->getMethodID(cls, "getDetectorType", "()Ljava/lang/String;");
            mids$[mid_getExternalSignalProcessing_0090f7797e403f43] = env->getMethodID(cls, "getExternalSignalProcessing", "()Ljava/lang/String;");
            mids$[mid_getOutputPulseType_0090f7797e403f43] = env->getMethodID(cls, "getOutputPulseType", "()Ljava/lang/String;");
            mids$[mid_getOutputPulseWidth_456d9a2f64d6b28d] = env->getMethodID(cls, "getOutputPulseWidth", "()D");
            mids$[mid_getQuantumEfficiency_456d9a2f64d6b28d] = env->getMethodID(cls, "getQuantumEfficiency", "()D");
            mids$[mid_getSpatialFilter_456d9a2f64d6b28d] = env->getMethodID(cls, "getSpatialFilter", "()D");
            mids$[mid_getSpectralFilter_456d9a2f64d6b28d] = env->getMethodID(cls, "getSpectralFilter", "()D");
            mids$[mid_getTransmissionOfSpectralFilter_456d9a2f64d6b28d] = env->getMethodID(cls, "getTransmissionOfSpectralFilter", "()D");
            mids$[mid_setAmplifierBandwidth_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAmplifierBandwidth", "(D)V");
            mids$[mid_setAmplifierGain_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAmplifierGain", "(D)V");
            mids$[mid_setAmplifierInUse_e939c6558ae8d313] = env->getMethodID(cls, "setAmplifierInUse", "(Ljava/lang/String;)V");
            mids$[mid_setApplicableWavelength_77e0f9a1f260e2e5] = env->getMethodID(cls, "setApplicableWavelength", "(D)V");
            mids$[mid_setAppliedVoltage_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAppliedVoltage", "(D)V");
            mids$[mid_setDarkCount_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDarkCount", "(D)V");
            mids$[mid_setDetectorId_e939c6558ae8d313] = env->getMethodID(cls, "setDetectorId", "(Ljava/lang/String;)V");
            mids$[mid_setDetectorType_e939c6558ae8d313] = env->getMethodID(cls, "setDetectorType", "(Ljava/lang/String;)V");
            mids$[mid_setExternalSignalProcessing_e939c6558ae8d313] = env->getMethodID(cls, "setExternalSignalProcessing", "(Ljava/lang/String;)V");
            mids$[mid_setOutputPulseType_e939c6558ae8d313] = env->getMethodID(cls, "setOutputPulseType", "(Ljava/lang/String;)V");
            mids$[mid_setOutputPulseWidth_77e0f9a1f260e2e5] = env->getMethodID(cls, "setOutputPulseWidth", "(D)V");
            mids$[mid_setQuantumEfficiency_77e0f9a1f260e2e5] = env->getMethodID(cls, "setQuantumEfficiency", "(D)V");
            mids$[mid_setSpatialFilter_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSpatialFilter", "(D)V");
            mids$[mid_setSpectralFilter_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSpectralFilter", "(D)V");
            mids$[mid_setTransmissionOfSpectralFilter_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTransmissionOfSpectralFilter", "(D)V");
            mids$[mid_toCrdString_0090f7797e403f43] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$DetectorConfiguration::CRDConfiguration$DetectorConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble CRDConfiguration$DetectorConfiguration::getAmplifierBandwidth() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAmplifierBandwidth_456d9a2f64d6b28d]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getAmplifierGain() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAmplifierGain_456d9a2f64d6b28d]);
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::getAmplifierInUse() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAmplifierInUse_0090f7797e403f43]));
        }

        jdouble CRDConfiguration$DetectorConfiguration::getApplicableWavelength() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getApplicableWavelength_456d9a2f64d6b28d]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getAppliedVoltage() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAppliedVoltage_456d9a2f64d6b28d]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getDarkCount() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDarkCount_456d9a2f64d6b28d]);
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::getDetectorId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDetectorId_0090f7797e403f43]));
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::getDetectorType() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDetectorType_0090f7797e403f43]));
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::getExternalSignalProcessing() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getExternalSignalProcessing_0090f7797e403f43]));
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::getOutputPulseType() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOutputPulseType_0090f7797e403f43]));
        }

        jdouble CRDConfiguration$DetectorConfiguration::getOutputPulseWidth() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getOutputPulseWidth_456d9a2f64d6b28d]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getQuantumEfficiency() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getQuantumEfficiency_456d9a2f64d6b28d]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getSpatialFilter() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSpatialFilter_456d9a2f64d6b28d]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getSpectralFilter() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSpectralFilter_456d9a2f64d6b28d]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getTransmissionOfSpectralFilter() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTransmissionOfSpectralFilter_456d9a2f64d6b28d]);
        }

        void CRDConfiguration$DetectorConfiguration::setAmplifierBandwidth(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAmplifierBandwidth_77e0f9a1f260e2e5], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setAmplifierGain(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAmplifierGain_77e0f9a1f260e2e5], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setAmplifierInUse(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAmplifierInUse_e939c6558ae8d313], a0.this$);
        }

        void CRDConfiguration$DetectorConfiguration::setApplicableWavelength(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setApplicableWavelength_77e0f9a1f260e2e5], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setAppliedVoltage(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAppliedVoltage_77e0f9a1f260e2e5], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setDarkCount(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDarkCount_77e0f9a1f260e2e5], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setDetectorId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDetectorId_e939c6558ae8d313], a0.this$);
        }

        void CRDConfiguration$DetectorConfiguration::setDetectorType(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDetectorType_e939c6558ae8d313], a0.this$);
        }

        void CRDConfiguration$DetectorConfiguration::setExternalSignalProcessing(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setExternalSignalProcessing_e939c6558ae8d313], a0.this$);
        }

        void CRDConfiguration$DetectorConfiguration::setOutputPulseType(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setOutputPulseType_e939c6558ae8d313], a0.this$);
        }

        void CRDConfiguration$DetectorConfiguration::setOutputPulseWidth(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setOutputPulseWidth_77e0f9a1f260e2e5], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setQuantumEfficiency(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setQuantumEfficiency_77e0f9a1f260e2e5], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setSpatialFilter(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSpatialFilter_77e0f9a1f260e2e5], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setSpectralFilter(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSpectralFilter_77e0f9a1f260e2e5], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setTransmissionOfSpectralFilter(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTransmissionOfSpectralFilter_77e0f9a1f260e2e5], a0);
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_0090f7797e403f43]));
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
        static PyObject *t_CRDConfiguration$DetectorConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$DetectorConfiguration_init_(t_CRDConfiguration$DetectorConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAmplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAmplifierGain(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAmplifierInUse(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getApplicableWavelength(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAppliedVoltage(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getDarkCount(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getDetectorId(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getDetectorType(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getExternalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getOutputPulseType(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getOutputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getQuantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getSpatialFilter(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getTransmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAmplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAmplifierGain(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAmplifierInUse(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setApplicableWavelength(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAppliedVoltage(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setDarkCount(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setDetectorId(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setDetectorType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setExternalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setOutputPulseType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setOutputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setQuantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setSpatialFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setTransmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_toCrdString(t_CRDConfiguration$DetectorConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_toString(t_CRDConfiguration$DetectorConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__amplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__amplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__amplifierGain(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__amplifierGain(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__amplifierInUse(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__amplifierInUse(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__applicableWavelength(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__applicableWavelength(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__appliedVoltage(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__appliedVoltage(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__darkCount(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__darkCount(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__detectorId(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__detectorId(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__detectorType(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__detectorType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__externalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__externalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__outputPulseType(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__outputPulseType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__outputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__outputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__quantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__quantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__spatialFilter(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__spatialFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__spectralFilter(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__spectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__transmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__transmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$DetectorConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, amplifierBandwidth),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, amplifierGain),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, amplifierInUse),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, applicableWavelength),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, appliedVoltage),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, darkCount),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, detectorId),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, detectorType),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, externalSignalProcessing),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, outputPulseType),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, outputPulseWidth),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, quantumEfficiency),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, spatialFilter),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, spectralFilter),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, transmissionOfSpectralFilter),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$DetectorConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getAmplifierBandwidth, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getAmplifierGain, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getAmplifierInUse, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getApplicableWavelength, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getAppliedVoltage, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getDarkCount, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getDetectorId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getDetectorType, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getExternalSignalProcessing, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getOutputPulseType, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getOutputPulseWidth, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getQuantumEfficiency, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getSpatialFilter, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getSpectralFilter, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getTransmissionOfSpectralFilter, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setAmplifierBandwidth, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setAmplifierGain, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setAmplifierInUse, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setApplicableWavelength, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setAppliedVoltage, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setDarkCount, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setDetectorId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setDetectorType, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setExternalSignalProcessing, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setOutputPulseType, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setOutputPulseWidth, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setQuantumEfficiency, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setSpatialFilter, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setSpectralFilter, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setTransmissionOfSpectralFilter, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$DetectorConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$DetectorConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$DetectorConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$DetectorConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$DetectorConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$DetectorConfiguration, t_CRDConfiguration$DetectorConfiguration, CRDConfiguration$DetectorConfiguration);

        void t_CRDConfiguration$DetectorConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$DetectorConfiguration), &PY_TYPE_DEF(CRDConfiguration$DetectorConfiguration), module, "CRDConfiguration$DetectorConfiguration", 0);
        }

        void t_CRDConfiguration$DetectorConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$DetectorConfiguration), "class_", make_descriptor(CRDConfiguration$DetectorConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$DetectorConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$DetectorConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$DetectorConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$DetectorConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$DetectorConfiguration::wrap_Object(CRDConfiguration$DetectorConfiguration(((t_CRDConfiguration$DetectorConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$DetectorConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$DetectorConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$DetectorConfiguration_init_(t_CRDConfiguration$DetectorConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$DetectorConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$DetectorConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAmplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAmplifierBandwidth());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAmplifierGain(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAmplifierGain());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAmplifierInUse(t_CRDConfiguration$DetectorConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getAmplifierInUse());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getApplicableWavelength(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getApplicableWavelength());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAppliedVoltage(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAppliedVoltage());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getDarkCount(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDarkCount());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getDetectorId(t_CRDConfiguration$DetectorConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetectorId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getDetectorType(t_CRDConfiguration$DetectorConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetectorType());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getExternalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getExternalSignalProcessing());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getOutputPulseType(t_CRDConfiguration$DetectorConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getOutputPulseType());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getOutputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getOutputPulseWidth());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getQuantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getQuantumEfficiency());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getSpatialFilter(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSpatialFilter());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSpectralFilter());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getTransmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTransmissionOfSpectralFilter());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAmplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setAmplifierBandwidth(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAmplifierBandwidth", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAmplifierGain(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setAmplifierGain(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAmplifierGain", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAmplifierInUse(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setAmplifierInUse(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAmplifierInUse", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setApplicableWavelength(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setApplicableWavelength(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setApplicableWavelength", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAppliedVoltage(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setAppliedVoltage(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAppliedVoltage", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setDarkCount(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setDarkCount(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDarkCount", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setDetectorId(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setDetectorId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDetectorId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setDetectorType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setDetectorType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDetectorType", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setExternalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setExternalSignalProcessing(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setExternalSignalProcessing", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setOutputPulseType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setOutputPulseType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOutputPulseType", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setOutputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setOutputPulseWidth(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOutputPulseWidth", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setQuantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setQuantumEfficiency(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setQuantumEfficiency", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setSpatialFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSpatialFilter(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSpatialFilter", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSpectralFilter(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSpectralFilter", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setTransmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTransmissionOfSpectralFilter(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTransmissionOfSpectralFilter", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_toCrdString(t_CRDConfiguration$DetectorConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$DetectorConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_toString(t_CRDConfiguration$DetectorConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$DetectorConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__amplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAmplifierBandwidth());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__amplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setAmplifierBandwidth(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "amplifierBandwidth", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__amplifierGain(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAmplifierGain());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__amplifierGain(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setAmplifierGain(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "amplifierGain", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__amplifierInUse(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getAmplifierInUse());
          return j2p(value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__amplifierInUse(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setAmplifierInUse(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "amplifierInUse", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__applicableWavelength(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getApplicableWavelength());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__applicableWavelength(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setApplicableWavelength(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "applicableWavelength", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__appliedVoltage(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAppliedVoltage());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__appliedVoltage(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setAppliedVoltage(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "appliedVoltage", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__darkCount(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDarkCount());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__darkCount(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setDarkCount(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "darkCount", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__detectorId(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetectorId());
          return j2p(value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__detectorId(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setDetectorId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "detectorId", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__detectorType(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetectorType());
          return j2p(value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__detectorType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setDetectorType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "detectorType", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__externalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getExternalSignalProcessing());
          return j2p(value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__externalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setExternalSignalProcessing(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "externalSignalProcessing", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__outputPulseType(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getOutputPulseType());
          return j2p(value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__outputPulseType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setOutputPulseType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "outputPulseType", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__outputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getOutputPulseWidth());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__outputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setOutputPulseWidth(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "outputPulseWidth", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__quantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getQuantumEfficiency());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__quantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setQuantumEfficiency(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "quantumEfficiency", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__spatialFilter(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSpatialFilter());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__spatialFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSpatialFilter(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "spatialFilter", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__spectralFilter(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSpectralFilter());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__spectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSpectralFilter(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "spectralFilter", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__transmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTransmissionOfSpectralFilter());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__transmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTransmissionOfSpectralFilter(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transmissionOfSpectralFilter", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/PythonStartStopEventsTrigger.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/FieldAbstractDetector.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/events/AbstractDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *PythonStartStopEventsTrigger::class$ = NULL;
          jmethodID *PythonStartStopEventsTrigger::mids$ = NULL;
          bool PythonStartStopEventsTrigger::live$ = false;

          jclass PythonStartStopEventsTrigger::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/PythonStartStopEventsTrigger");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1e95b919db08acd8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/AbstractDetector;Lorg/orekit/propagation/events/AbstractDetector;)V");
              mids$[mid_convertStartDetector_695049796b8b09bd] = env->getMethodID(cls, "convertStartDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
              mids$[mid_convertStopDetector_695049796b8b09bd] = env->getMethodID(cls, "convertStopDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonStartStopEventsTrigger::PythonStartStopEventsTrigger(const ::org::orekit::propagation::events::AbstractDetector & a0, const ::org::orekit::propagation::events::AbstractDetector & a1) : ::org::orekit::forces::maneuvers::trigger::StartStopEventsTrigger(env->newObject(initializeClass, &mids$, mid_init$_1e95b919db08acd8, a0.this$, a1.this$)) {}

          void PythonStartStopEventsTrigger::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonStartStopEventsTrigger::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonStartStopEventsTrigger::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
          static PyObject *t_PythonStartStopEventsTrigger_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonStartStopEventsTrigger_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonStartStopEventsTrigger_of_(t_PythonStartStopEventsTrigger *self, PyObject *args);
          static int t_PythonStartStopEventsTrigger_init_(t_PythonStartStopEventsTrigger *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonStartStopEventsTrigger_finalize(t_PythonStartStopEventsTrigger *self);
          static PyObject *t_PythonStartStopEventsTrigger_pythonExtension(t_PythonStartStopEventsTrigger *self, PyObject *args);
          static jobject JNICALL t_PythonStartStopEventsTrigger_convertStartDetector0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonStartStopEventsTrigger_convertStopDetector1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonStartStopEventsTrigger_getParametersDrivers2(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonStartStopEventsTrigger_pythonDecRef3(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonStartStopEventsTrigger_get__self(t_PythonStartStopEventsTrigger *self, void *data);
          static PyObject *t_PythonStartStopEventsTrigger_get__parameters_(t_PythonStartStopEventsTrigger *self, void *data);
          static PyGetSetDef t_PythonStartStopEventsTrigger__fields_[] = {
            DECLARE_GET_FIELD(t_PythonStartStopEventsTrigger, self),
            DECLARE_GET_FIELD(t_PythonStartStopEventsTrigger, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonStartStopEventsTrigger__methods_[] = {
            DECLARE_METHOD(t_PythonStartStopEventsTrigger, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonStartStopEventsTrigger, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonStartStopEventsTrigger, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonStartStopEventsTrigger, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonStartStopEventsTrigger, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonStartStopEventsTrigger)[] = {
            { Py_tp_methods, t_PythonStartStopEventsTrigger__methods_ },
            { Py_tp_init, (void *) t_PythonStartStopEventsTrigger_init_ },
            { Py_tp_getset, t_PythonStartStopEventsTrigger__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonStartStopEventsTrigger)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::trigger::StartStopEventsTrigger),
            NULL
          };

          DEFINE_TYPE(PythonStartStopEventsTrigger, t_PythonStartStopEventsTrigger, PythonStartStopEventsTrigger);
          PyObject *t_PythonStartStopEventsTrigger::wrap_Object(const PythonStartStopEventsTrigger& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PythonStartStopEventsTrigger::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonStartStopEventsTrigger *self = (t_PythonStartStopEventsTrigger *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_PythonStartStopEventsTrigger::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PythonStartStopEventsTrigger::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonStartStopEventsTrigger *self = (t_PythonStartStopEventsTrigger *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_PythonStartStopEventsTrigger::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonStartStopEventsTrigger), &PY_TYPE_DEF(PythonStartStopEventsTrigger), module, "PythonStartStopEventsTrigger", 1);
          }

          void t_PythonStartStopEventsTrigger::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStartStopEventsTrigger), "class_", make_descriptor(PythonStartStopEventsTrigger::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStartStopEventsTrigger), "wrapfn_", make_descriptor(t_PythonStartStopEventsTrigger::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStartStopEventsTrigger), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonStartStopEventsTrigger::initializeClass);
            JNINativeMethod methods[] = {
              { "convertStartDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;", (void *) t_PythonStartStopEventsTrigger_convertStartDetector0 },
              { "convertStopDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;", (void *) t_PythonStartStopEventsTrigger_convertStopDetector1 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonStartStopEventsTrigger_getParametersDrivers2 },
              { "pythonDecRef", "()V", (void *) t_PythonStartStopEventsTrigger_pythonDecRef3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonStartStopEventsTrigger_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonStartStopEventsTrigger::initializeClass, 1)))
              return NULL;
            return t_PythonStartStopEventsTrigger::wrap_Object(PythonStartStopEventsTrigger(((t_PythonStartStopEventsTrigger *) arg)->object.this$));
          }
          static PyObject *t_PythonStartStopEventsTrigger_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonStartStopEventsTrigger::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonStartStopEventsTrigger_of_(t_PythonStartStopEventsTrigger *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonStartStopEventsTrigger_init_(t_PythonStartStopEventsTrigger *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::propagation::events::AbstractDetector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::events::AbstractDetector a1((jobject) NULL);
            PyTypeObject **p1;
            PythonStartStopEventsTrigger object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::propagation::events::AbstractDetector::initializeClass, ::org::orekit::propagation::events::AbstractDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_AbstractDetector::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_AbstractDetector::parameters_))
            {
              INT_CALL(object = PythonStartStopEventsTrigger(a0, a1));
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

          static PyObject *t_PythonStartStopEventsTrigger_finalize(t_PythonStartStopEventsTrigger *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonStartStopEventsTrigger_pythonExtension(t_PythonStartStopEventsTrigger *self, PyObject *args)
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

          static jobject JNICALL t_PythonStartStopEventsTrigger_convertStartDetector0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonStartStopEventsTrigger::mids$[PythonStartStopEventsTrigger::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::events::FieldAbstractDetector value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *o1 = ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(::org::orekit::propagation::events::AbstractDetector(a1));
            PyObject *result = PyObject_CallMethod(obj, "convertStartDetector", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::events::FieldAbstractDetector::initializeClass, &value))
            {
              throwTypeError("convertStartDetector", result);
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

          static jobject JNICALL t_PythonStartStopEventsTrigger_convertStopDetector1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonStartStopEventsTrigger::mids$[PythonStartStopEventsTrigger::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::events::FieldAbstractDetector value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *o1 = ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(::org::orekit::propagation::events::AbstractDetector(a1));
            PyObject *result = PyObject_CallMethod(obj, "convertStopDetector", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::events::FieldAbstractDetector::initializeClass, &value))
            {
              throwTypeError("convertStopDetector", result);
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

          static jobject JNICALL t_PythonStartStopEventsTrigger_getParametersDrivers2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonStartStopEventsTrigger::mids$[PythonStartStopEventsTrigger::mid_pythonExtension_a27fc9afd27e559d]);
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

          static void JNICALL t_PythonStartStopEventsTrigger_pythonDecRef3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonStartStopEventsTrigger::mids$[PythonStartStopEventsTrigger::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonStartStopEventsTrigger::mids$[PythonStartStopEventsTrigger::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonStartStopEventsTrigger_get__self(t_PythonStartStopEventsTrigger *self, void *data)
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
          static PyObject *t_PythonStartStopEventsTrigger_get__parameters_(t_PythonStartStopEventsTrigger *self, void *data)
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
#include "org/hipparchus/geometry/spherical/oned/ArcsSet.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet.h"
#include "java/lang/Iterable.h"
#include "java/util/Iterator.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet$InconsistentStateAt2PiWrapping.h"
#include "org/hipparchus/geometry/partitioning/BoundaryProjection.h"
#include "java/util/Collection.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/spherical/oned/Arc.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet$Split.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *ArcsSet::class$ = NULL;
          jmethodID *ArcsSet::mids$ = NULL;
          bool ArcsSet::live$ = false;

          jclass ArcsSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/ArcsSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_3e72dd0bd3a69a59] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/BSPTree;D)V");
              mids$[mid_init$_b832ff2fd1b54c87] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;D)V");
              mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_asList_a6156df500549a58] = env->getMethodID(cls, "asList", "()Ljava/util/List;");
              mids$[mid_buildNew_7cfd2171837d9e80] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/spherical/oned/ArcsSet;");
              mids$[mid_iterator_035c6167e6569aac] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
              mids$[mid_projectToBoundary_a3932f0f8ec705f8] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/BoundaryProjection;");
              mids$[mid_split_10b435f7457cfcb0] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/spherical/oned/Arc;)Lorg/hipparchus/geometry/spherical/oned/ArcsSet$Split;");
              mids$[mid_computeGeometricalProperties_7ae3461a92a43152] = env->getMethodID(cls, "computeGeometricalProperties", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ArcsSet::ArcsSet(jdouble a0) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

          ArcsSet::ArcsSet(const ::org::hipparchus::geometry::partitioning::BSPTree & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_3e72dd0bd3a69a59, a0.this$, a1)) {}

          ArcsSet::ArcsSet(const ::java::util::Collection & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_b832ff2fd1b54c87, a0.this$, a1)) {}

          ArcsSet::ArcsSet(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

          ::java::util::List ArcsSet::asList() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_asList_a6156df500549a58]));
          }

          ArcsSet ArcsSet::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
          {
            return ArcsSet(env->callObjectMethod(this$, mids$[mid_buildNew_7cfd2171837d9e80], a0.this$));
          }

          ::java::util::Iterator ArcsSet::iterator() const
          {
            return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_035c6167e6569aac]));
          }

          ::org::hipparchus::geometry::partitioning::BoundaryProjection ArcsSet::projectToBoundary(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::BoundaryProjection(env->callObjectMethod(this$, mids$[mid_projectToBoundary_a3932f0f8ec705f8], a0.this$));
          }

          ::org::hipparchus::geometry::spherical::oned::ArcsSet$Split ArcsSet::split(const ::org::hipparchus::geometry::spherical::oned::Arc & a0) const
          {
            return ::org::hipparchus::geometry::spherical::oned::ArcsSet$Split(env->callObjectMethod(this$, mids$[mid_split_10b435f7457cfcb0], a0.this$));
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
        namespace oned {
          static PyObject *t_ArcsSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ArcsSet_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ArcsSet_of_(t_ArcsSet *self, PyObject *args);
          static int t_ArcsSet_init_(t_ArcsSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ArcsSet_asList(t_ArcsSet *self);
          static PyObject *t_ArcsSet_buildNew(t_ArcsSet *self, PyObject *args);
          static PyObject *t_ArcsSet_iterator(t_ArcsSet *self);
          static PyObject *t_ArcsSet_projectToBoundary(t_ArcsSet *self, PyObject *args);
          static PyObject *t_ArcsSet_split(t_ArcsSet *self, PyObject *arg);
          static PyObject *t_ArcsSet_get__parameters_(t_ArcsSet *self, void *data);
          static PyGetSetDef t_ArcsSet__fields_[] = {
            DECLARE_GET_FIELD(t_ArcsSet, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ArcsSet__methods_[] = {
            DECLARE_METHOD(t_ArcsSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ArcsSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ArcsSet, of_, METH_VARARGS),
            DECLARE_METHOD(t_ArcsSet, asList, METH_NOARGS),
            DECLARE_METHOD(t_ArcsSet, buildNew, METH_VARARGS),
            DECLARE_METHOD(t_ArcsSet, iterator, METH_NOARGS),
            DECLARE_METHOD(t_ArcsSet, projectToBoundary, METH_VARARGS),
            DECLARE_METHOD(t_ArcsSet, split, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ArcsSet)[] = {
            { Py_tp_methods, t_ArcsSet__methods_ },
            { Py_tp_init, (void *) t_ArcsSet_init_ },
            { Py_tp_getset, t_ArcsSet__fields_ },
            { Py_tp_iter, (void *) ((PyObject *(*)(t_ArcsSet *)) get_generic_iterator< t_ArcsSet >) },
            { Py_tp_iternext, (void *) 0 },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ArcsSet)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractRegion),
            NULL
          };

          DEFINE_TYPE(ArcsSet, t_ArcsSet, ArcsSet);
          PyObject *t_ArcsSet::wrap_Object(const ArcsSet& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_ArcsSet::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ArcsSet *self = (t_ArcsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_ArcsSet::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_ArcsSet::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ArcsSet *self = (t_ArcsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_ArcsSet::install(PyObject *module)
          {
            installType(&PY_TYPE(ArcsSet), &PY_TYPE_DEF(ArcsSet), module, "ArcsSet", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet), "InconsistentStateAt2PiWrapping", make_descriptor(&PY_TYPE_DEF(ArcsSet$InconsistentStateAt2PiWrapping)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet), "Split", make_descriptor(&PY_TYPE_DEF(ArcsSet$Split)));
          }

          void t_ArcsSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet), "class_", make_descriptor(ArcsSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet), "wrapfn_", make_descriptor(t_ArcsSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ArcsSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ArcsSet::initializeClass, 1)))
              return NULL;
            return t_ArcsSet::wrap_Object(ArcsSet(((t_ArcsSet *) arg)->object.this$));
          }
          static PyObject *t_ArcsSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ArcsSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ArcsSet_of_(t_ArcsSet *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ArcsSet_init_(t_ArcsSet *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ArcsSet object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = ArcsSet(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                ArcsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a1))
                {
                  INT_CALL(object = ArcsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              {
                ::java::util::Collection a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                ArcsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
                {
                  INT_CALL(object = ArcsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              goto err;
             case 3:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                ArcsSet object((jobject) NULL);

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  INT_CALL(object = ArcsSet(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
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

          static PyObject *t_ArcsSet_asList(t_ArcsSet *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.asList());
            return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Arc));
          }

          static PyObject *t_ArcsSet_buildNew(t_ArcsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
            PyTypeObject **p0;
            ArcsSet result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
            {
              OBJ_CALL(result = self->object.buildNew(a0));
              return t_ArcsSet::wrap_Object(result);
            }

            return callSuper(PY_TYPE(ArcsSet), (PyObject *) self, "buildNew", args, 2);
          }

          static PyObject *t_ArcsSet_iterator(t_ArcsSet *self)
          {
            ::java::util::Iterator result((jobject) NULL);
            OBJ_CALL(result = self->object.iterator());
            return ::java::util::t_Iterator::wrap_Object(result, ::java::lang::PY_TYPE(Object));
          }

          static PyObject *t_ArcsSet_projectToBoundary(t_ArcsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::BoundaryProjection result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.projectToBoundary(a0));
              return ::org::hipparchus::geometry::partitioning::t_BoundaryProjection::wrap_Object(result, ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D));
            }

            return callSuper(PY_TYPE(ArcsSet), (PyObject *) self, "projectToBoundary", args, 2);
          }

          static PyObject *t_ArcsSet_split(t_ArcsSet *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::spherical::oned::Arc a0((jobject) NULL);
            ::org::hipparchus::geometry::spherical::oned::ArcsSet$Split result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::spherical::oned::Arc::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.split(a0));
              return ::org::hipparchus::geometry::spherical::oned::t_ArcsSet$Split::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "split", arg);
            return NULL;
          }
          static PyObject *t_ArcsSet_get__parameters_(t_ArcsSet *self, void *data)
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
#include "org/orekit/forces/drag/TimeSpanDragForce.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/TimeScale.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        ::java::lang::Class *TimeSpanDragForce::class$ = NULL;
        jmethodID *TimeSpanDragForce::mids$ = NULL;
        bool TimeSpanDragForce::live$ = false;
        ::java::lang::String *TimeSpanDragForce::DATE_AFTER = NULL;
        ::java::lang::String *TimeSpanDragForce::DATE_BEFORE = NULL;

        jclass TimeSpanDragForce::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/drag/TimeSpanDragForce");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9d49a06389f1e886] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/Atmosphere;Lorg/orekit/forces/drag/DragSensitive;)V");
            mids$[mid_init$_bea16ae8e365aa2e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/Atmosphere;Lorg/orekit/forces/drag/DragSensitive;Lorg/orekit/time/TimeScale;)V");
            mids$[mid_acceleration_78989e44b99f7cc2] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_00aba28d3abe9a8c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_addDragSensitiveValidAfter_463b27ff4d36a75d] = env->getMethodID(cls, "addDragSensitiveValidAfter", "(Lorg/orekit/forces/drag/DragSensitive;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_addDragSensitiveValidBefore_463b27ff4d36a75d] = env->getMethodID(cls, "addDragSensitiveValidBefore", "(Lorg/orekit/forces/drag/DragSensitive;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_extractDragSensitiveRange_df7496d2771de2ea] = env->getMethodID(cls, "extractDragSensitiveRange", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap;");
            mids$[mid_extractParameters_d7d552e275320f67] = env->getMethodID(cls, "extractParameters", "([DLorg/orekit/time/AbsoluteDate;)[D");
            mids$[mid_extractParameters_8b177eb25e4eb468] = env->getMethodID(cls, "extractParameters", "([Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDragSensitive_6eefaebd1c71d9b8] = env->getMethodID(cls, "getDragSensitive", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/drag/DragSensitive;");
            mids$[mid_getDragSensitiveSpan_e815c41e031d3908] = env->getMethodID(cls, "getDragSensitiveSpan", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap$Span;");
            mids$[mid_getEventDetectors_a68a17dd093f796d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_1328ddb491531a35] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getFirstSpan_39a1e35b17737f60] = env->getMethodID(cls, "getFirstSpan", "()Lorg/orekit/utils/TimeSpanMap$Span;");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DATE_AFTER = new ::java::lang::String(env->getStaticObjectField(cls, "DATE_AFTER", "Ljava/lang/String;"));
            DATE_BEFORE = new ::java::lang::String(env->getStaticObjectField(cls, "DATE_BEFORE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TimeSpanDragForce::TimeSpanDragForce(const ::org::orekit::models::earth::atmosphere::Atmosphere & a0, const ::org::orekit::forces::drag::DragSensitive & a1) : ::org::orekit::forces::drag::AbstractDragForceModel(env->newObject(initializeClass, &mids$, mid_init$_9d49a06389f1e886, a0.this$, a1.this$)) {}

        TimeSpanDragForce::TimeSpanDragForce(const ::org::orekit::models::earth::atmosphere::Atmosphere & a0, const ::org::orekit::forces::drag::DragSensitive & a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::forces::drag::AbstractDragForceModel(env->newObject(initializeClass, &mids$, mid_init$_bea16ae8e365aa2e, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D TimeSpanDragForce::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_78989e44b99f7cc2], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D TimeSpanDragForce::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_00aba28d3abe9a8c], a0.this$, a1.this$));
        }

        void TimeSpanDragForce::addDragSensitiveValidAfter(const ::org::orekit::forces::drag::DragSensitive & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addDragSensitiveValidAfter_463b27ff4d36a75d], a0.this$, a1.this$);
        }

        void TimeSpanDragForce::addDragSensitiveValidBefore(const ::org::orekit::forces::drag::DragSensitive & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addDragSensitiveValidBefore_463b27ff4d36a75d], a0.this$, a1.this$);
        }

        ::org::orekit::utils::TimeSpanMap TimeSpanDragForce::extractDragSensitiveRange(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_extractDragSensitiveRange_df7496d2771de2ea], a0.this$, a1.this$));
        }

        JArray< jdouble > TimeSpanDragForce::extractParameters(const JArray< jdouble > & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_extractParameters_d7d552e275320f67], a0.this$, a1.this$));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > TimeSpanDragForce::extractParameters(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_extractParameters_8b177eb25e4eb468], a0.this$, a1.this$));
        }

        ::org::orekit::forces::drag::DragSensitive TimeSpanDragForce::getDragSensitive(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::forces::drag::DragSensitive(env->callObjectMethod(this$, mids$[mid_getDragSensitive_6eefaebd1c71d9b8], a0.this$));
        }

        ::org::orekit::utils::TimeSpanMap$Span TimeSpanDragForce::getDragSensitiveSpan(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getDragSensitiveSpan_e815c41e031d3908], a0.this$));
        }

        ::java::util::stream::Stream TimeSpanDragForce::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_a68a17dd093f796d]));
        }

        ::java::util::stream::Stream TimeSpanDragForce::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_1328ddb491531a35], a0.this$));
        }

        ::org::orekit::utils::TimeSpanMap$Span TimeSpanDragForce::getFirstSpan() const
        {
          return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getFirstSpan_39a1e35b17737f60]));
        }

        ::java::util::List TimeSpanDragForce::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
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
        static PyObject *t_TimeSpanDragForce_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeSpanDragForce_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TimeSpanDragForce_init_(t_TimeSpanDragForce *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TimeSpanDragForce_acceleration(t_TimeSpanDragForce *self, PyObject *args);
        static PyObject *t_TimeSpanDragForce_addDragSensitiveValidAfter(t_TimeSpanDragForce *self, PyObject *args);
        static PyObject *t_TimeSpanDragForce_addDragSensitiveValidBefore(t_TimeSpanDragForce *self, PyObject *args);
        static PyObject *t_TimeSpanDragForce_extractDragSensitiveRange(t_TimeSpanDragForce *self, PyObject *args);
        static PyObject *t_TimeSpanDragForce_extractParameters(t_TimeSpanDragForce *self, PyObject *args);
        static PyObject *t_TimeSpanDragForce_getDragSensitive(t_TimeSpanDragForce *self, PyObject *arg);
        static PyObject *t_TimeSpanDragForce_getDragSensitiveSpan(t_TimeSpanDragForce *self, PyObject *arg);
        static PyObject *t_TimeSpanDragForce_getEventDetectors(t_TimeSpanDragForce *self, PyObject *args);
        static PyObject *t_TimeSpanDragForce_getFieldEventDetectors(t_TimeSpanDragForce *self, PyObject *args);
        static PyObject *t_TimeSpanDragForce_getFirstSpan(t_TimeSpanDragForce *self);
        static PyObject *t_TimeSpanDragForce_getParametersDrivers(t_TimeSpanDragForce *self, PyObject *args);
        static PyObject *t_TimeSpanDragForce_get__eventDetectors(t_TimeSpanDragForce *self, void *data);
        static PyObject *t_TimeSpanDragForce_get__firstSpan(t_TimeSpanDragForce *self, void *data);
        static PyObject *t_TimeSpanDragForce_get__parametersDrivers(t_TimeSpanDragForce *self, void *data);
        static PyGetSetDef t_TimeSpanDragForce__fields_[] = {
          DECLARE_GET_FIELD(t_TimeSpanDragForce, eventDetectors),
          DECLARE_GET_FIELD(t_TimeSpanDragForce, firstSpan),
          DECLARE_GET_FIELD(t_TimeSpanDragForce, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TimeSpanDragForce__methods_[] = {
          DECLARE_METHOD(t_TimeSpanDragForce, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeSpanDragForce, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeSpanDragForce, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanDragForce, addDragSensitiveValidAfter, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanDragForce, addDragSensitiveValidBefore, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanDragForce, extractDragSensitiveRange, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanDragForce, extractParameters, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanDragForce, getDragSensitive, METH_O),
          DECLARE_METHOD(t_TimeSpanDragForce, getDragSensitiveSpan, METH_O),
          DECLARE_METHOD(t_TimeSpanDragForce, getEventDetectors, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanDragForce, getFieldEventDetectors, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanDragForce, getFirstSpan, METH_NOARGS),
          DECLARE_METHOD(t_TimeSpanDragForce, getParametersDrivers, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TimeSpanDragForce)[] = {
          { Py_tp_methods, t_TimeSpanDragForce__methods_ },
          { Py_tp_init, (void *) t_TimeSpanDragForce_init_ },
          { Py_tp_getset, t_TimeSpanDragForce__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TimeSpanDragForce)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::drag::AbstractDragForceModel),
          NULL
        };

        DEFINE_TYPE(TimeSpanDragForce, t_TimeSpanDragForce, TimeSpanDragForce);

        void t_TimeSpanDragForce::install(PyObject *module)
        {
          installType(&PY_TYPE(TimeSpanDragForce), &PY_TYPE_DEF(TimeSpanDragForce), module, "TimeSpanDragForce", 0);
        }

        void t_TimeSpanDragForce::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanDragForce), "class_", make_descriptor(TimeSpanDragForce::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanDragForce), "wrapfn_", make_descriptor(t_TimeSpanDragForce::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanDragForce), "boxfn_", make_descriptor(boxObject));
          env->getClass(TimeSpanDragForce::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanDragForce), "DATE_AFTER", make_descriptor(j2p(*TimeSpanDragForce::DATE_AFTER)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanDragForce), "DATE_BEFORE", make_descriptor(j2p(*TimeSpanDragForce::DATE_BEFORE)));
        }

        static PyObject *t_TimeSpanDragForce_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TimeSpanDragForce::initializeClass, 1)))
            return NULL;
          return t_TimeSpanDragForce::wrap_Object(TimeSpanDragForce(((t_TimeSpanDragForce *) arg)->object.this$));
        }
        static PyObject *t_TimeSpanDragForce_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TimeSpanDragForce::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TimeSpanDragForce_init_(t_TimeSpanDragForce *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::models::earth::atmosphere::Atmosphere a0((jobject) NULL);
              ::org::orekit::forces::drag::DragSensitive a1((jobject) NULL);
              TimeSpanDragForce object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::models::earth::atmosphere::Atmosphere::initializeClass, ::org::orekit::forces::drag::DragSensitive::initializeClass, &a0, &a1))
              {
                INT_CALL(object = TimeSpanDragForce(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::models::earth::atmosphere::Atmosphere a0((jobject) NULL);
              ::org::orekit::forces::drag::DragSensitive a1((jobject) NULL);
              ::org::orekit::time::TimeScale a2((jobject) NULL);
              TimeSpanDragForce object((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::orekit::models::earth::atmosphere::Atmosphere::initializeClass, ::org::orekit::forces::drag::DragSensitive::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = TimeSpanDragForce(a0, a1, a2));
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

        static PyObject *t_TimeSpanDragForce_acceleration(t_TimeSpanDragForce *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
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
          }

          return callSuper(PY_TYPE(TimeSpanDragForce), (PyObject *) self, "acceleration", args, 2);
        }

        static PyObject *t_TimeSpanDragForce_addDragSensitiveValidAfter(t_TimeSpanDragForce *self, PyObject *args)
        {
          ::org::orekit::forces::drag::DragSensitive a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::forces::drag::DragSensitive::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addDragSensitiveValidAfter(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addDragSensitiveValidAfter", args);
          return NULL;
        }

        static PyObject *t_TimeSpanDragForce_addDragSensitiveValidBefore(t_TimeSpanDragForce *self, PyObject *args)
        {
          ::org::orekit::forces::drag::DragSensitive a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::forces::drag::DragSensitive::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addDragSensitiveValidBefore(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addDragSensitiveValidBefore", args);
          return NULL;
        }

        static PyObject *t_TimeSpanDragForce_extractDragSensitiveRange(t_TimeSpanDragForce *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::TimeSpanMap result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.extractDragSensitiveRange(a0, a1));
            return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::org::orekit::forces::drag::PY_TYPE(DragSensitive));
          }

          PyErr_SetArgsError((PyObject *) self, "extractDragSensitiveRange", args);
          return NULL;
        }

        static PyObject *t_TimeSpanDragForce_extractParameters(t_TimeSpanDragForce *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "[Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.extractParameters(a0, a1));
                return result.wrap();
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.extractParameters(a0, a1));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "extractParameters", args);
          return NULL;
        }

        static PyObject *t_TimeSpanDragForce_getDragSensitive(t_TimeSpanDragForce *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::forces::drag::DragSensitive result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDragSensitive(a0));
            return ::org::orekit::forces::drag::t_DragSensitive::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDragSensitive", arg);
          return NULL;
        }

        static PyObject *t_TimeSpanDragForce_getDragSensitiveSpan(t_TimeSpanDragForce *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDragSensitiveSpan(a0));
            return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, ::org::orekit::forces::drag::PY_TYPE(DragSensitive));
          }

          PyErr_SetArgsError((PyObject *) self, "getDragSensitiveSpan", arg);
          return NULL;
        }

        static PyObject *t_TimeSpanDragForce_getEventDetectors(t_TimeSpanDragForce *self, PyObject *args)
        {
          ::java::util::stream::Stream result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
          }

          return callSuper(PY_TYPE(TimeSpanDragForce), (PyObject *) self, "getEventDetectors", args, 2);
        }

        static PyObject *t_TimeSpanDragForce_getFieldEventDetectors(t_TimeSpanDragForce *self, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::stream::Stream result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
            return ::java::util::stream::t_Stream::wrap_Object(result);
          }

          return callSuper(PY_TYPE(TimeSpanDragForce), (PyObject *) self, "getFieldEventDetectors", args, 2);
        }

        static PyObject *t_TimeSpanDragForce_getFirstSpan(t_TimeSpanDragForce *self)
        {
          ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
          OBJ_CALL(result = self->object.getFirstSpan());
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, ::org::orekit::forces::drag::PY_TYPE(DragSensitive));
        }

        static PyObject *t_TimeSpanDragForce_getParametersDrivers(t_TimeSpanDragForce *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(TimeSpanDragForce), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_TimeSpanDragForce_get__eventDetectors(t_TimeSpanDragForce *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_TimeSpanDragForce_get__firstSpan(t_TimeSpanDragForce *self, void *data)
        {
          ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
          OBJ_CALL(value = self->object.getFirstSpan());
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
        }

        static PyObject *t_TimeSpanDragForce_get__parametersDrivers(t_TimeSpanDragForce *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
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
          mids$[mid_end_7e89936bdf79375b] = env->getMethodID(cls, "end", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_start_c80ec2f7d8b5fe87] = env->getMethodID(cls, "start", "(III)V");
          mids$[mid_visit_344984fcd6be0043] = env->getMethodID(cls, "visit", "(ILorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::FieldElement FieldVectorChangingVisitor::end() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_end_7e89936bdf79375b]));
      }

      void FieldVectorChangingVisitor::start(jint a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_start_c80ec2f7d8b5fe87], a0, a1, a2);
      }

      ::org::hipparchus::FieldElement FieldVectorChangingVisitor::visit(jint a0, const ::org::hipparchus::FieldElement & a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_visit_344984fcd6be0043], a0, a1.this$));
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
#include "org/orekit/estimation/measurements/gnss/CombinationType.h"
#include "org/orekit/estimation/measurements/gnss/CombinationType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *CombinationType::class$ = NULL;
          jmethodID *CombinationType::mids$ = NULL;
          bool CombinationType::live$ = false;
          CombinationType *CombinationType::GEOMETRY_FREE = NULL;
          CombinationType *CombinationType::GRAPHIC = NULL;
          CombinationType *CombinationType::IONO_FREE = NULL;
          CombinationType *CombinationType::MELBOURNE_WUBBENA = NULL;
          CombinationType *CombinationType::NARROW_LANE = NULL;
          CombinationType *CombinationType::PHASE_MINUS_CODE = NULL;
          CombinationType *CombinationType::WIDE_LANE = NULL;

          jclass CombinationType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/CombinationType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_valueOf_9f698acbcd1cdd52] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/estimation/measurements/gnss/CombinationType;");
              mids$[mid_values_a51bc9f8a01f7529] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/estimation/measurements/gnss/CombinationType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              GEOMETRY_FREE = new CombinationType(env->getStaticObjectField(cls, "GEOMETRY_FREE", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              GRAPHIC = new CombinationType(env->getStaticObjectField(cls, "GRAPHIC", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              IONO_FREE = new CombinationType(env->getStaticObjectField(cls, "IONO_FREE", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              MELBOURNE_WUBBENA = new CombinationType(env->getStaticObjectField(cls, "MELBOURNE_WUBBENA", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              NARROW_LANE = new CombinationType(env->getStaticObjectField(cls, "NARROW_LANE", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              PHASE_MINUS_CODE = new CombinationType(env->getStaticObjectField(cls, "PHASE_MINUS_CODE", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              WIDE_LANE = new CombinationType(env->getStaticObjectField(cls, "WIDE_LANE", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String CombinationType::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
          }

          CombinationType CombinationType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CombinationType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_9f698acbcd1cdd52], a0.this$));
          }

          JArray< CombinationType > CombinationType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< CombinationType >(env->callStaticObjectMethod(cls, mids$[mid_values_a51bc9f8a01f7529]));
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
        namespace gnss {
          static PyObject *t_CombinationType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CombinationType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CombinationType_of_(t_CombinationType *self, PyObject *args);
          static PyObject *t_CombinationType_getName(t_CombinationType *self);
          static PyObject *t_CombinationType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_CombinationType_values(PyTypeObject *type);
          static PyObject *t_CombinationType_get__name(t_CombinationType *self, void *data);
          static PyObject *t_CombinationType_get__parameters_(t_CombinationType *self, void *data);
          static PyGetSetDef t_CombinationType__fields_[] = {
            DECLARE_GET_FIELD(t_CombinationType, name),
            DECLARE_GET_FIELD(t_CombinationType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CombinationType__methods_[] = {
            DECLARE_METHOD(t_CombinationType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CombinationType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CombinationType, of_, METH_VARARGS),
            DECLARE_METHOD(t_CombinationType, getName, METH_NOARGS),
            DECLARE_METHOD(t_CombinationType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CombinationType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CombinationType)[] = {
            { Py_tp_methods, t_CombinationType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_CombinationType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CombinationType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(CombinationType, t_CombinationType, CombinationType);
          PyObject *t_CombinationType::wrap_Object(const CombinationType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CombinationType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CombinationType *self = (t_CombinationType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_CombinationType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CombinationType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CombinationType *self = (t_CombinationType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_CombinationType::install(PyObject *module)
          {
            installType(&PY_TYPE(CombinationType), &PY_TYPE_DEF(CombinationType), module, "CombinationType", 0);
          }

          void t_CombinationType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "class_", make_descriptor(CombinationType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "wrapfn_", make_descriptor(t_CombinationType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "boxfn_", make_descriptor(boxObject));
            env->getClass(CombinationType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "GEOMETRY_FREE", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::GEOMETRY_FREE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "GRAPHIC", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::GRAPHIC)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "IONO_FREE", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::IONO_FREE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "MELBOURNE_WUBBENA", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::MELBOURNE_WUBBENA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "NARROW_LANE", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::NARROW_LANE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "PHASE_MINUS_CODE", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::PHASE_MINUS_CODE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "WIDE_LANE", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::WIDE_LANE)));
          }

          static PyObject *t_CombinationType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CombinationType::initializeClass, 1)))
              return NULL;
            return t_CombinationType::wrap_Object(CombinationType(((t_CombinationType *) arg)->object.this$));
          }
          static PyObject *t_CombinationType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CombinationType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CombinationType_of_(t_CombinationType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_CombinationType_getName(t_CombinationType *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_CombinationType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            CombinationType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::CombinationType::valueOf(a0));
              return t_CombinationType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_CombinationType_values(PyTypeObject *type)
          {
            JArray< CombinationType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::CombinationType::values());
            return JArray<jobject>(result.this$).wrap(t_CombinationType::wrap_jobject);
          }
          static PyObject *t_CombinationType_get__parameters_(t_CombinationType *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_CombinationType_get__name(t_CombinationType *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/J2SquaredModel.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *J2SquaredModel::class$ = NULL;
            jmethodID *J2SquaredModel::mids$ = NULL;
            bool J2SquaredModel::live$ = false;

            jclass J2SquaredModel::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/J2SquaredModel");

                mids$ = new jmethodID[max_mid];
                mids$[mid_computeMeanEquinoctialSecondOrderTerms_e32239e65f2894b6] = env->getMethodID(cls, "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext;)[D");
                mids$[mid_computeMeanEquinoctialSecondOrderTerms_567add3558894c9e] = env->getMethodID(cls, "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< jdouble > J2SquaredModel::computeMeanEquinoctialSecondOrderTerms(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext & a0) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeMeanEquinoctialSecondOrderTerms_e32239e65f2894b6], a0.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > J2SquaredModel::computeMeanEquinoctialSecondOrderTerms(const ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext & a0) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeMeanEquinoctialSecondOrderTerms_567add3558894c9e], a0.this$));
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
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            static PyObject *t_J2SquaredModel_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_J2SquaredModel_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_J2SquaredModel_computeMeanEquinoctialSecondOrderTerms(t_J2SquaredModel *self, PyObject *args);

            static PyMethodDef t_J2SquaredModel__methods_[] = {
              DECLARE_METHOD(t_J2SquaredModel, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_J2SquaredModel, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_J2SquaredModel, computeMeanEquinoctialSecondOrderTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(J2SquaredModel)[] = {
              { Py_tp_methods, t_J2SquaredModel__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(J2SquaredModel)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(J2SquaredModel, t_J2SquaredModel, J2SquaredModel);

            void t_J2SquaredModel::install(PyObject *module)
            {
              installType(&PY_TYPE(J2SquaredModel), &PY_TYPE_DEF(J2SquaredModel), module, "J2SquaredModel", 0);
            }

            void t_J2SquaredModel::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(J2SquaredModel), "class_", make_descriptor(J2SquaredModel::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(J2SquaredModel), "wrapfn_", make_descriptor(t_J2SquaredModel::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(J2SquaredModel), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_J2SquaredModel_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, J2SquaredModel::initializeClass, 1)))
                return NULL;
              return t_J2SquaredModel::wrap_Object(J2SquaredModel(((t_J2SquaredModel *) arg)->object.this$));
            }
            static PyObject *t_J2SquaredModel_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, J2SquaredModel::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_J2SquaredModel_computeMeanEquinoctialSecondOrderTerms(t_J2SquaredModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext a0((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.computeMeanEquinoctialSecondOrderTerms(a0));
                    return result.wrap();
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "K", ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::forces::t_FieldDSSTJ2SquaredClosedFormContext::parameters_))
                  {
                    OBJ_CALL(result = self->object.computeMeanEquinoctialSecondOrderTerms(a0));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "computeMeanEquinoctialSecondOrderTerms", args);
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
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/AbstractEvaluation.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *AbstractEvaluation::class$ = NULL;
            jmethodID *AbstractEvaluation::mids$ = NULL;
            bool AbstractEvaluation::live$ = false;

            jclass AbstractEvaluation::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/AbstractEvaluation");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getChiSquare_456d9a2f64d6b28d] = env->getMethodID(cls, "getChiSquare", "()D");
                mids$[mid_getCost_456d9a2f64d6b28d] = env->getMethodID(cls, "getCost", "()D");
                mids$[mid_getCovariances_2461b653ab91779b] = env->getMethodID(cls, "getCovariances", "(D)Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_getRMS_456d9a2f64d6b28d] = env->getMethodID(cls, "getRMS", "()D");
                mids$[mid_getReducedChiSquare_b772323fc98b7293] = env->getMethodID(cls, "getReducedChiSquare", "(I)D");
                mids$[mid_getSigma_247afd2de476d613] = env->getMethodID(cls, "getSigma", "(D)Lorg/hipparchus/linear/RealVector;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractEvaluation::AbstractEvaluation(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

            jdouble AbstractEvaluation::getChiSquare() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getChiSquare_456d9a2f64d6b28d]);
            }

            jdouble AbstractEvaluation::getCost() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCost_456d9a2f64d6b28d]);
            }

            ::org::hipparchus::linear::RealMatrix AbstractEvaluation::getCovariances(jdouble a0) const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariances_2461b653ab91779b], a0));
            }

            jdouble AbstractEvaluation::getRMS() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRMS_456d9a2f64d6b28d]);
            }

            jdouble AbstractEvaluation::getReducedChiSquare(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getReducedChiSquare_b772323fc98b7293], a0);
            }

            ::org::hipparchus::linear::RealVector AbstractEvaluation::getSigma(jdouble a0) const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getSigma_247afd2de476d613], a0));
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
        namespace vector {
          namespace leastsquares {
            static PyObject *t_AbstractEvaluation_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractEvaluation_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AbstractEvaluation_init_(t_AbstractEvaluation *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractEvaluation_getChiSquare(t_AbstractEvaluation *self);
            static PyObject *t_AbstractEvaluation_getCost(t_AbstractEvaluation *self);
            static PyObject *t_AbstractEvaluation_getCovariances(t_AbstractEvaluation *self, PyObject *arg);
            static PyObject *t_AbstractEvaluation_getRMS(t_AbstractEvaluation *self);
            static PyObject *t_AbstractEvaluation_getReducedChiSquare(t_AbstractEvaluation *self, PyObject *arg);
            static PyObject *t_AbstractEvaluation_getSigma(t_AbstractEvaluation *self, PyObject *arg);
            static PyObject *t_AbstractEvaluation_get__chiSquare(t_AbstractEvaluation *self, void *data);
            static PyObject *t_AbstractEvaluation_get__cost(t_AbstractEvaluation *self, void *data);
            static PyObject *t_AbstractEvaluation_get__rMS(t_AbstractEvaluation *self, void *data);
            static PyGetSetDef t_AbstractEvaluation__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractEvaluation, chiSquare),
              DECLARE_GET_FIELD(t_AbstractEvaluation, cost),
              DECLARE_GET_FIELD(t_AbstractEvaluation, rMS),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractEvaluation__methods_[] = {
              DECLARE_METHOD(t_AbstractEvaluation, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractEvaluation, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractEvaluation, getChiSquare, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEvaluation, getCost, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEvaluation, getCovariances, METH_O),
              DECLARE_METHOD(t_AbstractEvaluation, getRMS, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEvaluation, getReducedChiSquare, METH_O),
              DECLARE_METHOD(t_AbstractEvaluation, getSigma, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractEvaluation)[] = {
              { Py_tp_methods, t_AbstractEvaluation__methods_ },
              { Py_tp_init, (void *) t_AbstractEvaluation_init_ },
              { Py_tp_getset, t_AbstractEvaluation__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractEvaluation)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractEvaluation, t_AbstractEvaluation, AbstractEvaluation);

            void t_AbstractEvaluation::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractEvaluation), &PY_TYPE_DEF(AbstractEvaluation), module, "AbstractEvaluation", 0);
            }

            void t_AbstractEvaluation::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEvaluation), "class_", make_descriptor(AbstractEvaluation::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEvaluation), "wrapfn_", make_descriptor(t_AbstractEvaluation::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEvaluation), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractEvaluation_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractEvaluation::initializeClass, 1)))
                return NULL;
              return t_AbstractEvaluation::wrap_Object(AbstractEvaluation(((t_AbstractEvaluation *) arg)->object.this$));
            }
            static PyObject *t_AbstractEvaluation_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractEvaluation::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AbstractEvaluation_init_(t_AbstractEvaluation *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              AbstractEvaluation object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = AbstractEvaluation(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AbstractEvaluation_getChiSquare(t_AbstractEvaluation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getChiSquare());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEvaluation_getCost(t_AbstractEvaluation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCost());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEvaluation_getCovariances(t_AbstractEvaluation *self, PyObject *arg)
            {
              jdouble a0;
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.getCovariances(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getCovariances", arg);
              return NULL;
            }

            static PyObject *t_AbstractEvaluation_getRMS(t_AbstractEvaluation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRMS());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEvaluation_getReducedChiSquare(t_AbstractEvaluation *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getReducedChiSquare(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getReducedChiSquare", arg);
              return NULL;
            }

            static PyObject *t_AbstractEvaluation_getSigma(t_AbstractEvaluation *self, PyObject *arg)
            {
              jdouble a0;
              ::org::hipparchus::linear::RealVector result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.getSigma(a0));
                return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getSigma", arg);
              return NULL;
            }

            static PyObject *t_AbstractEvaluation_get__chiSquare(t_AbstractEvaluation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getChiSquare());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractEvaluation_get__cost(t_AbstractEvaluation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCost());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractEvaluation_get__rMS(t_AbstractEvaluation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRMS());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/AccuracyProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *AccuracyProvider::class$ = NULL;
            jmethodID *AccuracyProvider::mids$ = NULL;
            bool AccuracyProvider::live$ = false;

            jclass AccuracyProvider::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/AccuracyProvider");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getAccuracy_456d9a2f64d6b28d] = env->getMethodID(cls, "getAccuracy", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble AccuracyProvider::getAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAccuracy_456d9a2f64d6b28d]);
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
          namespace common {
            static PyObject *t_AccuracyProvider_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AccuracyProvider_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AccuracyProvider_getAccuracy(t_AccuracyProvider *self);
            static PyObject *t_AccuracyProvider_get__accuracy(t_AccuracyProvider *self, void *data);
            static PyGetSetDef t_AccuracyProvider__fields_[] = {
              DECLARE_GET_FIELD(t_AccuracyProvider, accuracy),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AccuracyProvider__methods_[] = {
              DECLARE_METHOD(t_AccuracyProvider, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AccuracyProvider, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AccuracyProvider, getAccuracy, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AccuracyProvider)[] = {
              { Py_tp_methods, t_AccuracyProvider__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AccuracyProvider__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AccuracyProvider)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AccuracyProvider, t_AccuracyProvider, AccuracyProvider);

            void t_AccuracyProvider::install(PyObject *module)
            {
              installType(&PY_TYPE(AccuracyProvider), &PY_TYPE_DEF(AccuracyProvider), module, "AccuracyProvider", 0);
            }

            void t_AccuracyProvider::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AccuracyProvider), "class_", make_descriptor(AccuracyProvider::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AccuracyProvider), "wrapfn_", make_descriptor(t_AccuracyProvider::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AccuracyProvider), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AccuracyProvider_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AccuracyProvider::initializeClass, 1)))
                return NULL;
              return t_AccuracyProvider::wrap_Object(AccuracyProvider(((t_AccuracyProvider *) arg)->object.this$));
            }
            static PyObject *t_AccuracyProvider_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AccuracyProvider::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AccuracyProvider_getAccuracy(t_AccuracyProvider *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAccuracy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AccuracyProvider_get__accuracy(t_AccuracyProvider *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAccuracy());
              return PyFloat_FromDouble((double) value);
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
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/SparseRealMatrix.h"
#include "org/hipparchus/linear/OpenMapRealMatrix.h"
#include "java/lang/Class.h"
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
          mids$[mid_init$_8dbc1129a3c2557a] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_add_a888b793e7da7480] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/OpenMapRealMatrix;)Lorg/hipparchus/linear/OpenMapRealMatrix;");
          mids$[mid_addToEntry_78e41e7b5124a628] = env->getMethodID(cls, "addToEntry", "(IID)V");
          mids$[mid_copy_65fb3321439bb1aa] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/OpenMapRealMatrix;");
          mids$[mid_createMatrix_29bfd603ae1326fc] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/OpenMapRealMatrix;");
          mids$[mid_getColumnDimension_f2f64475e4580546] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getEntry_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getEntry", "(II)D");
          mids$[mid_getRowDimension_f2f64475e4580546] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_multiply_a888b793e7da7480] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/OpenMapRealMatrix;)Lorg/hipparchus/linear/OpenMapRealMatrix;");
          mids$[mid_multiply_e00cd33aedcc5bd0] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiplyEntry_78e41e7b5124a628] = env->getMethodID(cls, "multiplyEntry", "(IID)V");
          mids$[mid_multiplyTransposed_e00cd33aedcc5bd0] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_setEntry_78e41e7b5124a628] = env->getMethodID(cls, "setEntry", "(IID)V");
          mids$[mid_subtract_a888b793e7da7480] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/OpenMapRealMatrix;)Lorg/hipparchus/linear/OpenMapRealMatrix;");
          mids$[mid_subtract_19342885a4dbcd99] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/OpenMapRealMatrix;");
          mids$[mid_transposeMultiply_e00cd33aedcc5bd0] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OpenMapRealMatrix::OpenMapRealMatrix(jint a0, jint a1) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_8dbc1129a3c2557a, a0, a1)) {}

      OpenMapRealMatrix OpenMapRealMatrix::add(const OpenMapRealMatrix & a0) const
      {
        return OpenMapRealMatrix(env->callObjectMethod(this$, mids$[mid_add_a888b793e7da7480], a0.this$));
      }

      void OpenMapRealMatrix::addToEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_78e41e7b5124a628], a0, a1, a2);
      }

      OpenMapRealMatrix OpenMapRealMatrix::copy() const
      {
        return OpenMapRealMatrix(env->callObjectMethod(this$, mids$[mid_copy_65fb3321439bb1aa]));
      }

      OpenMapRealMatrix OpenMapRealMatrix::createMatrix(jint a0, jint a1) const
      {
        return OpenMapRealMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_29bfd603ae1326fc], a0, a1));
      }

      jint OpenMapRealMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_f2f64475e4580546]);
      }

      jdouble OpenMapRealMatrix::getEntry(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_a84e4ee1da3f1ab8], a0, a1);
      }

      jint OpenMapRealMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_f2f64475e4580546]);
      }

      OpenMapRealMatrix OpenMapRealMatrix::multiply(const OpenMapRealMatrix & a0) const
      {
        return OpenMapRealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_a888b793e7da7480], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix OpenMapRealMatrix::multiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_e00cd33aedcc5bd0], a0.this$));
      }

      void OpenMapRealMatrix::multiplyEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_78e41e7b5124a628], a0, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix OpenMapRealMatrix::multiplyTransposed(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_e00cd33aedcc5bd0], a0.this$));
      }

      void OpenMapRealMatrix::setEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_78e41e7b5124a628], a0, a1, a2);
      }

      OpenMapRealMatrix OpenMapRealMatrix::subtract(const OpenMapRealMatrix & a0) const
      {
        return OpenMapRealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_a888b793e7da7480], a0.this$));
      }

      OpenMapRealMatrix OpenMapRealMatrix::subtract(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return OpenMapRealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_19342885a4dbcd99], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix OpenMapRealMatrix::transposeMultiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_e00cd33aedcc5bd0], a0.this$));
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
#include "org/hipparchus/analysis/integration/gauss/FieldLegendreRuleFactory.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *FieldLegendreRuleFactory::class$ = NULL;
          jmethodID *FieldLegendreRuleFactory::mids$ = NULL;
          bool FieldLegendreRuleFactory::live$ = false;

          jclass FieldLegendreRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/FieldLegendreRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_205c34b8e33cf33f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
              mids$[mid_computeRule_086dd68d091255ed] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldLegendreRuleFactory::FieldLegendreRuleFactory(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_205c34b8e33cf33f, a0.this$)) {}

          ::org::hipparchus::util::Pair FieldLegendreRuleFactory::computeRule(jint a0) const
          {
            return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_computeRule_086dd68d091255ed], a0));
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
          static PyObject *t_FieldLegendreRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldLegendreRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldLegendreRuleFactory_of_(t_FieldLegendreRuleFactory *self, PyObject *args);
          static int t_FieldLegendreRuleFactory_init_(t_FieldLegendreRuleFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldLegendreRuleFactory_computeRule(t_FieldLegendreRuleFactory *self, PyObject *arg);
          static PyObject *t_FieldLegendreRuleFactory_get__parameters_(t_FieldLegendreRuleFactory *self, void *data);
          static PyGetSetDef t_FieldLegendreRuleFactory__fields_[] = {
            DECLARE_GET_FIELD(t_FieldLegendreRuleFactory, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldLegendreRuleFactory__methods_[] = {
            DECLARE_METHOD(t_FieldLegendreRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldLegendreRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldLegendreRuleFactory, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldLegendreRuleFactory, computeRule, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldLegendreRuleFactory)[] = {
            { Py_tp_methods, t_FieldLegendreRuleFactory__methods_ },
            { Py_tp_init, (void *) t_FieldLegendreRuleFactory_init_ },
            { Py_tp_getset, t_FieldLegendreRuleFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldLegendreRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(FieldLegendreRuleFactory, t_FieldLegendreRuleFactory, FieldLegendreRuleFactory);
          PyObject *t_FieldLegendreRuleFactory::wrap_Object(const FieldLegendreRuleFactory& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldLegendreRuleFactory::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldLegendreRuleFactory *self = (t_FieldLegendreRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldLegendreRuleFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldLegendreRuleFactory::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldLegendreRuleFactory *self = (t_FieldLegendreRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldLegendreRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldLegendreRuleFactory), &PY_TYPE_DEF(FieldLegendreRuleFactory), module, "FieldLegendreRuleFactory", 0);
          }

          void t_FieldLegendreRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLegendreRuleFactory), "class_", make_descriptor(FieldLegendreRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLegendreRuleFactory), "wrapfn_", make_descriptor(t_FieldLegendreRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLegendreRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldLegendreRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldLegendreRuleFactory::initializeClass, 1)))
              return NULL;
            return t_FieldLegendreRuleFactory::wrap_Object(FieldLegendreRuleFactory(((t_FieldLegendreRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_FieldLegendreRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldLegendreRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldLegendreRuleFactory_of_(t_FieldLegendreRuleFactory *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldLegendreRuleFactory_init_(t_FieldLegendreRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldLegendreRuleFactory object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldLegendreRuleFactory(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FieldLegendreRuleFactory_computeRule(t_FieldLegendreRuleFactory *self, PyObject *arg)
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
          static PyObject *t_FieldLegendreRuleFactory_get__parameters_(t_FieldLegendreRuleFactory *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/OneWayGNSSPhaseBuilder.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *OneWayGNSSPhaseBuilder::class$ = NULL;
          jmethodID *OneWayGNSSPhaseBuilder::mids$ = NULL;
          bool OneWayGNSSPhaseBuilder::live$ = false;

          jclass OneWayGNSSPhaseBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/OneWayGNSSPhaseBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_build_30a9d075e2ad5929] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/gnss/OneWayGNSSPhase;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::OneWayGNSSPhase OneWayGNSSPhaseBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::gnss::OneWayGNSSPhase(env->callObjectMethod(this$, mids$[mid_build_30a9d075e2ad5929], a0.this$, a1.this$));
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
          static PyObject *t_OneWayGNSSPhaseBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSPhaseBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSPhaseBuilder_of_(t_OneWayGNSSPhaseBuilder *self, PyObject *args);
          static PyObject *t_OneWayGNSSPhaseBuilder_build(t_OneWayGNSSPhaseBuilder *self, PyObject *args);
          static PyObject *t_OneWayGNSSPhaseBuilder_get__parameters_(t_OneWayGNSSPhaseBuilder *self, void *data);
          static PyGetSetDef t_OneWayGNSSPhaseBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_OneWayGNSSPhaseBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OneWayGNSSPhaseBuilder__methods_[] = {
            DECLARE_METHOD(t_OneWayGNSSPhaseBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSPhaseBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSPhaseBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_OneWayGNSSPhaseBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OneWayGNSSPhaseBuilder)[] = {
            { Py_tp_methods, t_OneWayGNSSPhaseBuilder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_OneWayGNSSPhaseBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OneWayGNSSPhaseBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(OneWayGNSSPhaseBuilder, t_OneWayGNSSPhaseBuilder, OneWayGNSSPhaseBuilder);
          PyObject *t_OneWayGNSSPhaseBuilder::wrap_Object(const OneWayGNSSPhaseBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSPhaseBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSPhaseBuilder *self = (t_OneWayGNSSPhaseBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OneWayGNSSPhaseBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSPhaseBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSPhaseBuilder *self = (t_OneWayGNSSPhaseBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OneWayGNSSPhaseBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(OneWayGNSSPhaseBuilder), &PY_TYPE_DEF(OneWayGNSSPhaseBuilder), module, "OneWayGNSSPhaseBuilder", 0);
          }

          void t_OneWayGNSSPhaseBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhaseBuilder), "class_", make_descriptor(OneWayGNSSPhaseBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhaseBuilder), "wrapfn_", make_descriptor(t_OneWayGNSSPhaseBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhaseBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OneWayGNSSPhaseBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OneWayGNSSPhaseBuilder::initializeClass, 1)))
              return NULL;
            return t_OneWayGNSSPhaseBuilder::wrap_Object(OneWayGNSSPhaseBuilder(((t_OneWayGNSSPhaseBuilder *) arg)->object.this$));
          }
          static PyObject *t_OneWayGNSSPhaseBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OneWayGNSSPhaseBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OneWayGNSSPhaseBuilder_of_(t_OneWayGNSSPhaseBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_OneWayGNSSPhaseBuilder_build(t_OneWayGNSSPhaseBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::gnss::OneWayGNSSPhase result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::gnss::t_OneWayGNSSPhase::wrap_Object(result);
            }

            return callSuper(PY_TYPE(OneWayGNSSPhaseBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_OneWayGNSSPhaseBuilder_get__parameters_(t_OneWayGNSSPhaseBuilder *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/NewcombOperators.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *NewcombOperators::class$ = NULL;
            jmethodID *NewcombOperators::mids$ = NULL;
            bool NewcombOperators::live$ = false;

            jclass NewcombOperators::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/NewcombOperators");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getValue_abd3941c73dbe95a] = env->getStaticMethodID(cls, "getValue", "(IIII)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble NewcombOperators::getValue(jint a0, jint a1, jint a2, jint a3)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticDoubleMethod(cls, mids$[mid_getValue_abd3941c73dbe95a], a0, a1, a2, a3);
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
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            static PyObject *t_NewcombOperators_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NewcombOperators_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NewcombOperators_getValue(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_NewcombOperators__methods_[] = {
              DECLARE_METHOD(t_NewcombOperators, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NewcombOperators, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NewcombOperators, getValue, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(NewcombOperators)[] = {
              { Py_tp_methods, t_NewcombOperators__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(NewcombOperators)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(NewcombOperators, t_NewcombOperators, NewcombOperators);

            void t_NewcombOperators::install(PyObject *module)
            {
              installType(&PY_TYPE(NewcombOperators), &PY_TYPE_DEF(NewcombOperators), module, "NewcombOperators", 0);
            }

            void t_NewcombOperators::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(NewcombOperators), "class_", make_descriptor(NewcombOperators::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NewcombOperators), "wrapfn_", make_descriptor(t_NewcombOperators::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NewcombOperators), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_NewcombOperators_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, NewcombOperators::initializeClass, 1)))
                return NULL;
              return t_NewcombOperators::wrap_Object(NewcombOperators(((t_NewcombOperators *) arg)->object.this$));
            }
            static PyObject *t_NewcombOperators_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, NewcombOperators::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_NewcombOperators_getValue(PyTypeObject *type, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jint a3;
              jdouble result;

              if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::NewcombOperators::getValue(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError(type, "getValue", args);
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
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/frames/LOF.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *StateCovariance::class$ = NULL;
      jmethodID *StateCovariance::mids$ = NULL;
      bool StateCovariance::live$ = false;
      jint StateCovariance::STATE_DIMENSION = (jint) 0;

      jclass StateCovariance::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/StateCovariance");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_bc3eac47e80fb0ba] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/LOF;)V");
          mids$[mid_init$_1c599a7dea3b43c0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_changeCovarianceFrame_3fd4717a462c22f4] = env->getMethodID(cls, "changeCovarianceFrame", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_changeCovarianceFrame_1a4b94b92ad46ea0] = env->getMethodID(cls, "changeCovarianceFrame", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/frames/LOF;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_changeCovarianceType_73777e50711dae04] = env->getMethodID(cls, "changeCovarianceType", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_checkFrameAndOrbitTypeConsistency_eac94fe4d20a9982] = env->getStaticMethodID(cls, "checkFrameAndOrbitTypeConsistency", "(Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;)V");
          mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getLOF_6131a2ffcdec47e9] = env->getMethodID(cls, "getLOF", "()Lorg/orekit/frames/LOF;");
          mids$[mid_getMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getOrbitType_63ea5cd020bf7bf1] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getPositionAngleType_2571e8fe1cede425] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getStm_f834e4415e4edf80] = env->getStaticMethodID(cls, "getStm", "(Lorg/orekit/orbits/Orbit;D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_shiftedBy_7942b69d6379bc01] = env->getMethodID(cls, "shiftedBy", "(Lorg/orekit/orbits/Orbit;D)Lorg/orekit/propagation/StateCovariance;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          STATE_DIMENSION = env->getStaticIntField(cls, "STATE_DIMENSION");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      StateCovariance::StateCovariance(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::LOF & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bc3eac47e80fb0ba, a0.this$, a1.this$, a2.this$)) {}

      StateCovariance::StateCovariance(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::orbits::OrbitType & a3, const ::org::orekit::orbits::PositionAngleType & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1c599a7dea3b43c0, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      StateCovariance StateCovariance::changeCovarianceFrame(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return StateCovariance(env->callObjectMethod(this$, mids$[mid_changeCovarianceFrame_3fd4717a462c22f4], a0.this$, a1.this$));
      }

      StateCovariance StateCovariance::changeCovarianceFrame(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::frames::LOF & a1) const
      {
        return StateCovariance(env->callObjectMethod(this$, mids$[mid_changeCovarianceFrame_1a4b94b92ad46ea0], a0.this$, a1.this$));
      }

      StateCovariance StateCovariance::changeCovarianceType(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1, const ::org::orekit::orbits::PositionAngleType & a2) const
      {
        return StateCovariance(env->callObjectMethod(this$, mids$[mid_changeCovarianceType_73777e50711dae04], a0.this$, a1.this$, a2.this$));
      }

      void StateCovariance::checkFrameAndOrbitTypeConsistency(const ::org::orekit::frames::Frame & a0, const ::org::orekit::orbits::OrbitType & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkFrameAndOrbitTypeConsistency_eac94fe4d20a9982], a0.this$, a1.this$);
      }

      ::org::orekit::time::AbsoluteDate StateCovariance::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
      }

      ::org::orekit::frames::Frame StateCovariance::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
      }

      ::org::orekit::frames::LOF StateCovariance::getLOF() const
      {
        return ::org::orekit::frames::LOF(env->callObjectMethod(this$, mids$[mid_getLOF_6131a2ffcdec47e9]));
      }

      ::org::hipparchus::linear::RealMatrix StateCovariance::getMatrix() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getMatrix_7116bbecdd8ceb21]));
      }

      ::org::orekit::orbits::OrbitType StateCovariance::getOrbitType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_63ea5cd020bf7bf1]));
      }

      ::org::orekit::orbits::PositionAngleType StateCovariance::getPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_2571e8fe1cede425]));
      }

      ::org::hipparchus::linear::RealMatrix StateCovariance::getStm(const ::org::orekit::orbits::Orbit & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_getStm_f834e4415e4edf80], a0.this$, a1));
      }

      StateCovariance StateCovariance::shiftedBy(const ::org::orekit::orbits::Orbit & a0, jdouble a1) const
      {
        return StateCovariance(env->callObjectMethod(this$, mids$[mid_shiftedBy_7942b69d6379bc01], a0.this$, a1));
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
      static PyObject *t_StateCovariance_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateCovariance_instance_(PyTypeObject *type, PyObject *arg);
      static int t_StateCovariance_init_(t_StateCovariance *self, PyObject *args, PyObject *kwds);
      static PyObject *t_StateCovariance_changeCovarianceFrame(t_StateCovariance *self, PyObject *args);
      static PyObject *t_StateCovariance_changeCovarianceType(t_StateCovariance *self, PyObject *args);
      static PyObject *t_StateCovariance_checkFrameAndOrbitTypeConsistency(PyTypeObject *type, PyObject *args);
      static PyObject *t_StateCovariance_getDate(t_StateCovariance *self);
      static PyObject *t_StateCovariance_getFrame(t_StateCovariance *self);
      static PyObject *t_StateCovariance_getLOF(t_StateCovariance *self);
      static PyObject *t_StateCovariance_getMatrix(t_StateCovariance *self);
      static PyObject *t_StateCovariance_getOrbitType(t_StateCovariance *self);
      static PyObject *t_StateCovariance_getPositionAngleType(t_StateCovariance *self);
      static PyObject *t_StateCovariance_getStm(PyTypeObject *type, PyObject *args);
      static PyObject *t_StateCovariance_shiftedBy(t_StateCovariance *self, PyObject *args);
      static PyObject *t_StateCovariance_get__date(t_StateCovariance *self, void *data);
      static PyObject *t_StateCovariance_get__frame(t_StateCovariance *self, void *data);
      static PyObject *t_StateCovariance_get__lOF(t_StateCovariance *self, void *data);
      static PyObject *t_StateCovariance_get__matrix(t_StateCovariance *self, void *data);
      static PyObject *t_StateCovariance_get__orbitType(t_StateCovariance *self, void *data);
      static PyObject *t_StateCovariance_get__positionAngleType(t_StateCovariance *self, void *data);
      static PyGetSetDef t_StateCovariance__fields_[] = {
        DECLARE_GET_FIELD(t_StateCovariance, date),
        DECLARE_GET_FIELD(t_StateCovariance, frame),
        DECLARE_GET_FIELD(t_StateCovariance, lOF),
        DECLARE_GET_FIELD(t_StateCovariance, matrix),
        DECLARE_GET_FIELD(t_StateCovariance, orbitType),
        DECLARE_GET_FIELD(t_StateCovariance, positionAngleType),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_StateCovariance__methods_[] = {
        DECLARE_METHOD(t_StateCovariance, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovariance, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovariance, changeCovarianceFrame, METH_VARARGS),
        DECLARE_METHOD(t_StateCovariance, changeCovarianceType, METH_VARARGS),
        DECLARE_METHOD(t_StateCovariance, checkFrameAndOrbitTypeConsistency, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StateCovariance, getDate, METH_NOARGS),
        DECLARE_METHOD(t_StateCovariance, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_StateCovariance, getLOF, METH_NOARGS),
        DECLARE_METHOD(t_StateCovariance, getMatrix, METH_NOARGS),
        DECLARE_METHOD(t_StateCovariance, getOrbitType, METH_NOARGS),
        DECLARE_METHOD(t_StateCovariance, getPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_StateCovariance, getStm, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StateCovariance, shiftedBy, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StateCovariance)[] = {
        { Py_tp_methods, t_StateCovariance__methods_ },
        { Py_tp_init, (void *) t_StateCovariance_init_ },
        { Py_tp_getset, t_StateCovariance__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StateCovariance)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(StateCovariance, t_StateCovariance, StateCovariance);

      void t_StateCovariance::install(PyObject *module)
      {
        installType(&PY_TYPE(StateCovariance), &PY_TYPE_DEF(StateCovariance), module, "StateCovariance", 0);
      }

      void t_StateCovariance::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovariance), "class_", make_descriptor(StateCovariance::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovariance), "wrapfn_", make_descriptor(t_StateCovariance::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovariance), "boxfn_", make_descriptor(boxObject));
        env->getClass(StateCovariance::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovariance), "STATE_DIMENSION", make_descriptor(StateCovariance::STATE_DIMENSION));
      }

      static PyObject *t_StateCovariance_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StateCovariance::initializeClass, 1)))
          return NULL;
        return t_StateCovariance::wrap_Object(StateCovariance(((t_StateCovariance *) arg)->object.this$));
      }
      static PyObject *t_StateCovariance_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StateCovariance::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_StateCovariance_init_(t_StateCovariance *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::LOF a2((jobject) NULL);
            StateCovariance object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::LOF::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = StateCovariance(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::orbits::OrbitType a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::orbits::PositionAngleType a4((jobject) NULL);
            PyTypeObject **p4;
            StateCovariance object((jobject) NULL);

            if (!parseArgs(args, "kkkKK", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::orbits::t_OrbitType::parameters_, &a4, &p4, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = StateCovariance(a0, a1, a2, a3, a4));
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

      static PyObject *t_StateCovariance_changeCovarianceFrame(t_StateCovariance *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            StateCovariance result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.changeCovarianceFrame(a0, a1));
              return t_StateCovariance::wrap_Object(result);
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::frames::LOF a1((jobject) NULL);
            StateCovariance result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::frames::LOF::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.changeCovarianceFrame(a0, a1));
              return t_StateCovariance::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "changeCovarianceFrame", args);
        return NULL;
      }

      static PyObject *t_StateCovariance_changeCovarianceType(t_StateCovariance *self, PyObject *args)
      {
        ::org::orekit::orbits::Orbit a0((jobject) NULL);
        ::org::orekit::orbits::OrbitType a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
        PyTypeObject **p2;
        StateCovariance result((jobject) NULL);

        if (!parseArgs(args, "kKK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.changeCovarianceType(a0, a1, a2));
          return t_StateCovariance::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "changeCovarianceType", args);
        return NULL;
      }

      static PyObject *t_StateCovariance_checkFrameAndOrbitTypeConsistency(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::orbits::OrbitType a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "kK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
        {
          OBJ_CALL(::org::orekit::propagation::StateCovariance::checkFrameAndOrbitTypeConsistency(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkFrameAndOrbitTypeConsistency", args);
        return NULL;
      }

      static PyObject *t_StateCovariance_getDate(t_StateCovariance *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_StateCovariance_getFrame(t_StateCovariance *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_StateCovariance_getLOF(t_StateCovariance *self)
      {
        ::org::orekit::frames::LOF result((jobject) NULL);
        OBJ_CALL(result = self->object.getLOF());
        return ::org::orekit::frames::t_LOF::wrap_Object(result);
      }

      static PyObject *t_StateCovariance_getMatrix(t_StateCovariance *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_StateCovariance_getOrbitType(t_StateCovariance *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_StateCovariance_getPositionAngleType(t_StateCovariance *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_StateCovariance_getStm(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::orbits::Orbit a0((jobject) NULL);
        jdouble a1;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "kD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::propagation::StateCovariance::getStm(a0, a1));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getStm", args);
        return NULL;
      }

      static PyObject *t_StateCovariance_shiftedBy(t_StateCovariance *self, PyObject *args)
      {
        ::org::orekit::orbits::Orbit a0((jobject) NULL);
        jdouble a1;
        StateCovariance result((jobject) NULL);

        if (!parseArgs(args, "kD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0, a1));
          return t_StateCovariance::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_StateCovariance_get__date(t_StateCovariance *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_StateCovariance_get__frame(t_StateCovariance *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_StateCovariance_get__lOF(t_StateCovariance *self, void *data)
      {
        ::org::orekit::frames::LOF value((jobject) NULL);
        OBJ_CALL(value = self->object.getLOF());
        return ::org::orekit::frames::t_LOF::wrap_Object(value);
      }

      static PyObject *t_StateCovariance_get__matrix(t_StateCovariance *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_StateCovariance_get__orbitType(t_StateCovariance *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }

      static PyObject *t_StateCovariance_get__positionAngleType(t_StateCovariance *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonAbstractAlfriend1999.h"
#include "java/lang/Throwable.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
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
                  mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
                  mids$[mid_computeValue_c564d6ace53a5934] = env->getMethodID(cls, "computeValue", "(DDD)D");
                  mids$[mid_computeValue_f56548599899c286] = env->getMethodID(cls, "computeValue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
                  mids$[mid_getType_830fb81b25fc6619] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
                  mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
                  mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              PythonAbstractAlfriend1999::PythonAbstractAlfriend1999(const ::java::lang::String & a0) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

              void PythonAbstractAlfriend1999::finalize() const
              {
                env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
              }

              jlong PythonAbstractAlfriend1999::pythonExtension() const
              {
                return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
              }

              void PythonAbstractAlfriend1999::pythonExtension(jlong a0) const
              {
                env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAlfriend1999::mids$[PythonAbstractAlfriend1999::mid_pythonExtension_a27fc9afd27e559d]);
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
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAlfriend1999::mids$[PythonAbstractAlfriend1999::mid_pythonExtension_a27fc9afd27e559d]);
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
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAlfriend1999::mids$[PythonAbstractAlfriend1999::mid_pythonExtension_a27fc9afd27e559d]);
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
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAlfriend1999::mids$[PythonAbstractAlfriend1999::mid_pythonExtension_a27fc9afd27e559d]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

                if (obj != NULL)
                {
                  jenv->CallVoidMethod(jobj, PythonAbstractAlfriend1999::mids$[PythonAbstractAlfriend1999::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
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
#include "org/orekit/files/ilrs/CRD$CRDDataBlock.h"
#include "java/util/List.h"
#include "org/orekit/files/ilrs/CRD$CalibrationDetail.h"
#include "org/orekit/files/ilrs/CRD$RangeSupplement.h"
#include "org/orekit/files/ilrs/CRD$AnglesMeasurement.h"
#include "org/orekit/files/ilrs/CRDHeader.h"
#include "org/orekit/files/ilrs/CRD$Calibration.h"
#include "org/orekit/files/ilrs/CRDConfiguration.h"
#include "org/orekit/files/ilrs/CRD$RangeMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ilrs/CRD$MeteorologicalMeasurement.h"
#include "java/lang/String.h"
#include "org/orekit/files/ilrs/CRD$Meteo.h"
#include "org/orekit/files/ilrs/CRD$SessionStatistics.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$CRDDataBlock::class$ = NULL;
        jmethodID *CRD$CRDDataBlock::mids$ = NULL;
        bool CRD$CRDDataBlock::live$ = false;

        jclass CRD$CRDDataBlock::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$CRDDataBlock");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addAnglesData_fdbc10f5869cf001] = env->getMethodID(cls, "addAnglesData", "(Lorg/orekit/files/ilrs/CRD$AnglesMeasurement;)V");
            mids$[mid_addCalibrationData_1979c13861d37d85] = env->getMethodID(cls, "addCalibrationData", "(Lorg/orekit/files/ilrs/CRD$Calibration;)V");
            mids$[mid_addCalibrationDetailData_de1d36ea8533ded1] = env->getMethodID(cls, "addCalibrationDetailData", "(Lorg/orekit/files/ilrs/CRD$CalibrationDetail;)V");
            mids$[mid_addMeteoData_f2d3e2233ad03dba] = env->getMethodID(cls, "addMeteoData", "(Lorg/orekit/files/ilrs/CRD$MeteorologicalMeasurement;)V");
            mids$[mid_addRangeData_48b73d8623943b9d] = env->getMethodID(cls, "addRangeData", "(Lorg/orekit/files/ilrs/CRD$RangeMeasurement;)V");
            mids$[mid_addRangeSupplementData_d17923b8d3860522] = env->getMethodID(cls, "addRangeSupplementData", "(Lorg/orekit/files/ilrs/CRD$RangeSupplement;)V");
            mids$[mid_addSessionStatisticsData_bf9a1af7f7500e5f] = env->getMethodID(cls, "addSessionStatisticsData", "(Lorg/orekit/files/ilrs/CRD$SessionStatistics;)V");
            mids$[mid_getAnglesData_a6156df500549a58] = env->getMethodID(cls, "getAnglesData", "()Ljava/util/List;");
            mids$[mid_getCalibrationData_a6156df500549a58] = env->getMethodID(cls, "getCalibrationData", "()Ljava/util/List;");
            mids$[mid_getCalibrationDetailData_a6156df500549a58] = env->getMethodID(cls, "getCalibrationDetailData", "()Ljava/util/List;");
            mids$[mid_getCalibrationDetailRecords_a6156df500549a58] = env->getMethodID(cls, "getCalibrationDetailRecords", "()Ljava/util/List;");
            mids$[mid_getCalibrationDetailRecords_720e76ad3b86a46a] = env->getMethodID(cls, "getCalibrationDetailRecords", "(Ljava/lang/String;)Ljava/util/List;");
            mids$[mid_getCalibrationRecords_a6156df500549a58] = env->getMethodID(cls, "getCalibrationRecords", "()Ljava/util/List;");
            mids$[mid_getCalibrationRecords_720e76ad3b86a46a] = env->getMethodID(cls, "getCalibrationRecords", "(Ljava/lang/String;)Ljava/util/List;");
            mids$[mid_getConfigurationRecords_c078d1163d6e31e6] = env->getMethodID(cls, "getConfigurationRecords", "()Lorg/orekit/files/ilrs/CRDConfiguration;");
            mids$[mid_getHeader_a6ac000995869c89] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ilrs/CRDHeader;");
            mids$[mid_getMeteoData_4098865cefc5362e] = env->getMethodID(cls, "getMeteoData", "()Lorg/orekit/files/ilrs/CRD$Meteo;");
            mids$[mid_getRangeData_a6156df500549a58] = env->getMethodID(cls, "getRangeData", "()Ljava/util/List;");
            mids$[mid_getRangeSupplementData_a6156df500549a58] = env->getMethodID(cls, "getRangeSupplementData", "()Ljava/util/List;");
            mids$[mid_getSessionStatisticsData_a6156df500549a58] = env->getMethodID(cls, "getSessionStatisticsData", "()Ljava/util/List;");
            mids$[mid_getSessionStatisticsRecord_dd0bf23a6792e381] = env->getMethodID(cls, "getSessionStatisticsRecord", "()Lorg/orekit/files/ilrs/CRD$SessionStatistics;");
            mids$[mid_getSessionStatisticsRecord_97d81f26b5df075c] = env->getMethodID(cls, "getSessionStatisticsRecord", "(Ljava/lang/String;)Lorg/orekit/files/ilrs/CRD$SessionStatistics;");
            mids$[mid_getWavelength_7940055cb2c5196d] = env->getMethodID(cls, "getWavelength", "(Lorg/orekit/files/ilrs/CRD$RangeMeasurement;)D");
            mids$[mid_setConfigurationRecords_03c50d7ef630256e] = env->getMethodID(cls, "setConfigurationRecords", "(Lorg/orekit/files/ilrs/CRDConfiguration;)V");
            mids$[mid_setHeader_681264e50bdf7b51] = env->getMethodID(cls, "setHeader", "(Lorg/orekit/files/ilrs/CRDHeader;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$CRDDataBlock::CRD$CRDDataBlock() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void CRD$CRDDataBlock::addAnglesData(const ::org::orekit::files::ilrs::CRD$AnglesMeasurement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addAnglesData_fdbc10f5869cf001], a0.this$);
        }

        void CRD$CRDDataBlock::addCalibrationData(const ::org::orekit::files::ilrs::CRD$Calibration & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addCalibrationData_1979c13861d37d85], a0.this$);
        }

        void CRD$CRDDataBlock::addCalibrationDetailData(const ::org::orekit::files::ilrs::CRD$CalibrationDetail & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addCalibrationDetailData_de1d36ea8533ded1], a0.this$);
        }

        void CRD$CRDDataBlock::addMeteoData(const ::org::orekit::files::ilrs::CRD$MeteorologicalMeasurement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addMeteoData_f2d3e2233ad03dba], a0.this$);
        }

        void CRD$CRDDataBlock::addRangeData(const ::org::orekit::files::ilrs::CRD$RangeMeasurement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addRangeData_48b73d8623943b9d], a0.this$);
        }

        void CRD$CRDDataBlock::addRangeSupplementData(const ::org::orekit::files::ilrs::CRD$RangeSupplement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addRangeSupplementData_d17923b8d3860522], a0.this$);
        }

        void CRD$CRDDataBlock::addSessionStatisticsData(const ::org::orekit::files::ilrs::CRD$SessionStatistics & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addSessionStatisticsData_bf9a1af7f7500e5f], a0.this$);
        }

        ::java::util::List CRD$CRDDataBlock::getAnglesData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAnglesData_a6156df500549a58]));
        }

        ::java::util::List CRD$CRDDataBlock::getCalibrationData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCalibrationData_a6156df500549a58]));
        }

        ::java::util::List CRD$CRDDataBlock::getCalibrationDetailData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCalibrationDetailData_a6156df500549a58]));
        }

        ::java::util::List CRD$CRDDataBlock::getCalibrationDetailRecords() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCalibrationDetailRecords_a6156df500549a58]));
        }

        ::java::util::List CRD$CRDDataBlock::getCalibrationDetailRecords(const ::java::lang::String & a0) const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCalibrationDetailRecords_720e76ad3b86a46a], a0.this$));
        }

        ::java::util::List CRD$CRDDataBlock::getCalibrationRecords() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCalibrationRecords_a6156df500549a58]));
        }

        ::java::util::List CRD$CRDDataBlock::getCalibrationRecords(const ::java::lang::String & a0) const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCalibrationRecords_720e76ad3b86a46a], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration CRD$CRDDataBlock::getConfigurationRecords() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration(env->callObjectMethod(this$, mids$[mid_getConfigurationRecords_c078d1163d6e31e6]));
        }

        ::org::orekit::files::ilrs::CRDHeader CRD$CRDDataBlock::getHeader() const
        {
          return ::org::orekit::files::ilrs::CRDHeader(env->callObjectMethod(this$, mids$[mid_getHeader_a6ac000995869c89]));
        }

        ::org::orekit::files::ilrs::CRD$Meteo CRD$CRDDataBlock::getMeteoData() const
        {
          return ::org::orekit::files::ilrs::CRD$Meteo(env->callObjectMethod(this$, mids$[mid_getMeteoData_4098865cefc5362e]));
        }

        ::java::util::List CRD$CRDDataBlock::getRangeData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRangeData_a6156df500549a58]));
        }

        ::java::util::List CRD$CRDDataBlock::getRangeSupplementData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRangeSupplementData_a6156df500549a58]));
        }

        ::java::util::List CRD$CRDDataBlock::getSessionStatisticsData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSessionStatisticsData_a6156df500549a58]));
        }

        ::org::orekit::files::ilrs::CRD$SessionStatistics CRD$CRDDataBlock::getSessionStatisticsRecord() const
        {
          return ::org::orekit::files::ilrs::CRD$SessionStatistics(env->callObjectMethod(this$, mids$[mid_getSessionStatisticsRecord_dd0bf23a6792e381]));
        }

        ::org::orekit::files::ilrs::CRD$SessionStatistics CRD$CRDDataBlock::getSessionStatisticsRecord(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::ilrs::CRD$SessionStatistics(env->callObjectMethod(this$, mids$[mid_getSessionStatisticsRecord_97d81f26b5df075c], a0.this$));
        }

        jdouble CRD$CRDDataBlock::getWavelength(const ::org::orekit::files::ilrs::CRD$RangeMeasurement & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getWavelength_7940055cb2c5196d], a0.this$);
        }

        void CRD$CRDDataBlock::setConfigurationRecords(const ::org::orekit::files::ilrs::CRDConfiguration & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setConfigurationRecords_03c50d7ef630256e], a0.this$);
        }

        void CRD$CRDDataBlock::setHeader(const ::org::orekit::files::ilrs::CRDHeader & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setHeader_681264e50bdf7b51], a0.this$);
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
        static PyObject *t_CRD$CRDDataBlock_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$CRDDataBlock_init_(t_CRD$CRDDataBlock *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$CRDDataBlock_addAnglesData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_addCalibrationData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_addCalibrationDetailData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_addMeteoData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_addRangeData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_addRangeSupplementData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_addSessionStatisticsData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_getAnglesData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getCalibrationData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getCalibrationDetailData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getCalibrationDetailRecords(t_CRD$CRDDataBlock *self, PyObject *args);
        static PyObject *t_CRD$CRDDataBlock_getCalibrationRecords(t_CRD$CRDDataBlock *self, PyObject *args);
        static PyObject *t_CRD$CRDDataBlock_getConfigurationRecords(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getHeader(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getMeteoData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getRangeData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getRangeSupplementData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getSessionStatisticsData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getSessionStatisticsRecord(t_CRD$CRDDataBlock *self, PyObject *args);
        static PyObject *t_CRD$CRDDataBlock_getWavelength(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_setConfigurationRecords(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_setHeader(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_get__anglesData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__calibrationData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__calibrationDetailData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__calibrationDetailRecords(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__calibrationRecords(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__configurationRecords(t_CRD$CRDDataBlock *self, void *data);
        static int t_CRD$CRDDataBlock_set__configurationRecords(t_CRD$CRDDataBlock *self, PyObject *arg, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__header(t_CRD$CRDDataBlock *self, void *data);
        static int t_CRD$CRDDataBlock_set__header(t_CRD$CRDDataBlock *self, PyObject *arg, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__meteoData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__rangeData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__rangeSupplementData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__sessionStatisticsData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__sessionStatisticsRecord(t_CRD$CRDDataBlock *self, void *data);
        static PyGetSetDef t_CRD$CRDDataBlock__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, anglesData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, calibrationData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, calibrationDetailData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, calibrationDetailRecords),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, calibrationRecords),
          DECLARE_GETSET_FIELD(t_CRD$CRDDataBlock, configurationRecords),
          DECLARE_GETSET_FIELD(t_CRD$CRDDataBlock, header),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, meteoData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, rangeData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, rangeSupplementData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, sessionStatisticsData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, sessionStatisticsRecord),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$CRDDataBlock__methods_[] = {
          DECLARE_METHOD(t_CRD$CRDDataBlock, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addAnglesData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addCalibrationData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addCalibrationDetailData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addMeteoData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addRangeData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addRangeSupplementData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addSessionStatisticsData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getAnglesData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getCalibrationData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getCalibrationDetailData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getCalibrationDetailRecords, METH_VARARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getCalibrationRecords, METH_VARARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getConfigurationRecords, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getHeader, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getMeteoData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getRangeData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getRangeSupplementData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getSessionStatisticsData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getSessionStatisticsRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getWavelength, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, setConfigurationRecords, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, setHeader, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$CRDDataBlock)[] = {
          { Py_tp_methods, t_CRD$CRDDataBlock__methods_ },
          { Py_tp_init, (void *) t_CRD$CRDDataBlock_init_ },
          { Py_tp_getset, t_CRD$CRDDataBlock__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$CRDDataBlock)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$CRDDataBlock, t_CRD$CRDDataBlock, CRD$CRDDataBlock);

        void t_CRD$CRDDataBlock::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$CRDDataBlock), &PY_TYPE_DEF(CRD$CRDDataBlock), module, "CRD$CRDDataBlock", 0);
        }

        void t_CRD$CRDDataBlock::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$CRDDataBlock), "class_", make_descriptor(CRD$CRDDataBlock::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$CRDDataBlock), "wrapfn_", make_descriptor(t_CRD$CRDDataBlock::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$CRDDataBlock), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$CRDDataBlock_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$CRDDataBlock::initializeClass, 1)))
            return NULL;
          return t_CRD$CRDDataBlock::wrap_Object(CRD$CRDDataBlock(((t_CRD$CRDDataBlock *) arg)->object.this$));
        }
        static PyObject *t_CRD$CRDDataBlock_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$CRDDataBlock::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$CRDDataBlock_init_(t_CRD$CRDDataBlock *self, PyObject *args, PyObject *kwds)
        {
          CRD$CRDDataBlock object((jobject) NULL);

          INT_CALL(object = CRD$CRDDataBlock());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRD$CRDDataBlock_addAnglesData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$AnglesMeasurement a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$AnglesMeasurement::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addAnglesData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAnglesData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_addCalibrationData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$Calibration a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$Calibration::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addCalibrationData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addCalibrationData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_addCalibrationDetailData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$CalibrationDetail a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$CalibrationDetail::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addCalibrationDetailData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addCalibrationDetailData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_addMeteoData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$MeteorologicalMeasurement a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$MeteorologicalMeasurement::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addMeteoData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addMeteoData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_addRangeData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$RangeMeasurement a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$RangeMeasurement::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addRangeData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addRangeData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_addRangeSupplementData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$RangeSupplement a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$RangeSupplement::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addRangeSupplementData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addRangeSupplementData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_addSessionStatisticsData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$SessionStatistics a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$SessionStatistics::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addSessionStatisticsData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSessionStatisticsData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_getAnglesData(t_CRD$CRDDataBlock *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAnglesData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$AnglesMeasurement));
        }

        static PyObject *t_CRD$CRDDataBlock_getCalibrationData(t_CRD$CRDDataBlock *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getCalibrationData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$Calibration));
        }

        static PyObject *t_CRD$CRDDataBlock_getCalibrationDetailData(t_CRD$CRDDataBlock *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getCalibrationDetailData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$CalibrationDetail));
        }

        static PyObject *t_CRD$CRDDataBlock_getCalibrationDetailRecords(t_CRD$CRDDataBlock *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getCalibrationDetailRecords());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$CalibrationDetail));
            }
            break;
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::util::List result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = self->object.getCalibrationDetailRecords(a0));
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$CalibrationDetail));
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getCalibrationDetailRecords", args);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_getCalibrationRecords(t_CRD$CRDDataBlock *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getCalibrationRecords());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$Calibration));
            }
            break;
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::util::List result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = self->object.getCalibrationRecords(a0));
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$Calibration));
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getCalibrationRecords", args);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_getConfigurationRecords(t_CRD$CRDDataBlock *self)
        {
          ::org::orekit::files::ilrs::CRDConfiguration result((jobject) NULL);
          OBJ_CALL(result = self->object.getConfigurationRecords());
          return ::org::orekit::files::ilrs::t_CRDConfiguration::wrap_Object(result);
        }

        static PyObject *t_CRD$CRDDataBlock_getHeader(t_CRD$CRDDataBlock *self)
        {
          ::org::orekit::files::ilrs::CRDHeader result((jobject) NULL);
          OBJ_CALL(result = self->object.getHeader());
          return ::org::orekit::files::ilrs::t_CRDHeader::wrap_Object(result);
        }

        static PyObject *t_CRD$CRDDataBlock_getMeteoData(t_CRD$CRDDataBlock *self)
        {
          ::org::orekit::files::ilrs::CRD$Meteo result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeteoData());
          return ::org::orekit::files::ilrs::t_CRD$Meteo::wrap_Object(result);
        }

        static PyObject *t_CRD$CRDDataBlock_getRangeData(t_CRD$CRDDataBlock *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getRangeData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$RangeMeasurement));
        }

        static PyObject *t_CRD$CRDDataBlock_getRangeSupplementData(t_CRD$CRDDataBlock *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getRangeSupplementData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$RangeSupplement));
        }

        static PyObject *t_CRD$CRDDataBlock_getSessionStatisticsData(t_CRD$CRDDataBlock *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSessionStatisticsData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$SessionStatistics));
        }

        static PyObject *t_CRD$CRDDataBlock_getSessionStatisticsRecord(t_CRD$CRDDataBlock *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRD$SessionStatistics result((jobject) NULL);
              OBJ_CALL(result = self->object.getSessionStatisticsRecord());
              return ::org::orekit::files::ilrs::t_CRD$SessionStatistics::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRD$SessionStatistics result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = self->object.getSessionStatisticsRecord(a0));
                return ::org::orekit::files::ilrs::t_CRD$SessionStatistics::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getSessionStatisticsRecord", args);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_getWavelength(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$RangeMeasurement a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$RangeMeasurement::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getWavelength(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getWavelength", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_setConfigurationRecords(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRDConfiguration a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRDConfiguration::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setConfigurationRecords(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setConfigurationRecords", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_setHeader(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRDHeader a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRDHeader::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setHeader(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setHeader", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_get__anglesData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAnglesData());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__calibrationData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCalibrationData());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__calibrationDetailData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCalibrationDetailData());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__calibrationDetailRecords(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCalibrationDetailRecords());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__calibrationRecords(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCalibrationRecords());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__configurationRecords(t_CRD$CRDDataBlock *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getConfigurationRecords());
          return ::org::orekit::files::ilrs::t_CRDConfiguration::wrap_Object(value);
        }
        static int t_CRD$CRDDataBlock_set__configurationRecords(t_CRD$CRDDataBlock *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::files::ilrs::CRDConfiguration value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRDConfiguration::initializeClass, &value))
            {
              INT_CALL(self->object.setConfigurationRecords(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "configurationRecords", arg);
          return -1;
        }

        static PyObject *t_CRD$CRDDataBlock_get__header(t_CRD$CRDDataBlock *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDHeader value((jobject) NULL);
          OBJ_CALL(value = self->object.getHeader());
          return ::org::orekit::files::ilrs::t_CRDHeader::wrap_Object(value);
        }
        static int t_CRD$CRDDataBlock_set__header(t_CRD$CRDDataBlock *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::files::ilrs::CRDHeader value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRDHeader::initializeClass, &value))
            {
              INT_CALL(self->object.setHeader(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "header", arg);
          return -1;
        }

        static PyObject *t_CRD$CRDDataBlock_get__meteoData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::org::orekit::files::ilrs::CRD$Meteo value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeteoData());
          return ::org::orekit::files::ilrs::t_CRD$Meteo::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__rangeData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getRangeData());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__rangeSupplementData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getRangeSupplementData());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__sessionStatisticsData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSessionStatisticsData());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__sessionStatisticsRecord(t_CRD$CRDDataBlock *self, void *data)
        {
          ::org::orekit::files::ilrs::CRD$SessionStatistics value((jobject) NULL);
          OBJ_CALL(value = self->object.getSessionStatisticsRecord());
          return ::org::orekit::files::ilrs::t_CRD$SessionStatistics::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/enclosing/WelzlEncloser.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "java/lang/Iterable.h"
#include "org/hipparchus/geometry/enclosing/Encloser.h"
#include "org/hipparchus/geometry/enclosing/SupportBallGenerator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/Space.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace enclosing {

        ::java::lang::Class *WelzlEncloser::class$ = NULL;
        jmethodID *WelzlEncloser::mids$ = NULL;
        bool WelzlEncloser::live$ = false;

        jclass WelzlEncloser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/enclosing/WelzlEncloser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fb4c8f91478026fb] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/enclosing/SupportBallGenerator;)V");
            mids$[mid_enclose_bae9cdfb16288f0e] = env->getMethodID(cls, "enclose", "(Ljava/lang/Iterable;)Lorg/hipparchus/geometry/enclosing/EnclosingBall;");
            mids$[mid_selectFarthest_6a8e2f3846b1eb2d] = env->getMethodID(cls, "selectFarthest", "(Ljava/lang/Iterable;Lorg/hipparchus/geometry/enclosing/EnclosingBall;)Lorg/hipparchus/geometry/Point;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        WelzlEncloser::WelzlEncloser(jdouble a0, const ::org::hipparchus::geometry::enclosing::SupportBallGenerator & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fb4c8f91478026fb, a0, a1.this$)) {}

        ::org::hipparchus::geometry::enclosing::EnclosingBall WelzlEncloser::enclose(const ::java::lang::Iterable & a0) const
        {
          return ::org::hipparchus::geometry::enclosing::EnclosingBall(env->callObjectMethod(this$, mids$[mid_enclose_bae9cdfb16288f0e], a0.this$));
        }

        ::org::hipparchus::geometry::Point WelzlEncloser::selectFarthest(const ::java::lang::Iterable & a0, const ::org::hipparchus::geometry::enclosing::EnclosingBall & a1) const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_selectFarthest_6a8e2f3846b1eb2d], a0.this$, a1.this$));
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
      namespace enclosing {
        static PyObject *t_WelzlEncloser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_WelzlEncloser_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_WelzlEncloser_of_(t_WelzlEncloser *self, PyObject *args);
        static int t_WelzlEncloser_init_(t_WelzlEncloser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_WelzlEncloser_enclose(t_WelzlEncloser *self, PyObject *arg);
        static PyObject *t_WelzlEncloser_selectFarthest(t_WelzlEncloser *self, PyObject *args);
        static PyObject *t_WelzlEncloser_get__parameters_(t_WelzlEncloser *self, void *data);
        static PyGetSetDef t_WelzlEncloser__fields_[] = {
          DECLARE_GET_FIELD(t_WelzlEncloser, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_WelzlEncloser__methods_[] = {
          DECLARE_METHOD(t_WelzlEncloser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WelzlEncloser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WelzlEncloser, of_, METH_VARARGS),
          DECLARE_METHOD(t_WelzlEncloser, enclose, METH_O),
          DECLARE_METHOD(t_WelzlEncloser, selectFarthest, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(WelzlEncloser)[] = {
          { Py_tp_methods, t_WelzlEncloser__methods_ },
          { Py_tp_init, (void *) t_WelzlEncloser_init_ },
          { Py_tp_getset, t_WelzlEncloser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(WelzlEncloser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(WelzlEncloser, t_WelzlEncloser, WelzlEncloser);
        PyObject *t_WelzlEncloser::wrap_Object(const WelzlEncloser& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_WelzlEncloser::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_WelzlEncloser *self = (t_WelzlEncloser *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_WelzlEncloser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_WelzlEncloser::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_WelzlEncloser *self = (t_WelzlEncloser *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_WelzlEncloser::install(PyObject *module)
        {
          installType(&PY_TYPE(WelzlEncloser), &PY_TYPE_DEF(WelzlEncloser), module, "WelzlEncloser", 0);
        }

        void t_WelzlEncloser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(WelzlEncloser), "class_", make_descriptor(WelzlEncloser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WelzlEncloser), "wrapfn_", make_descriptor(t_WelzlEncloser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WelzlEncloser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_WelzlEncloser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, WelzlEncloser::initializeClass, 1)))
            return NULL;
          return t_WelzlEncloser::wrap_Object(WelzlEncloser(((t_WelzlEncloser *) arg)->object.this$));
        }
        static PyObject *t_WelzlEncloser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, WelzlEncloser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_WelzlEncloser_of_(t_WelzlEncloser *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_WelzlEncloser_init_(t_WelzlEncloser *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::hipparchus::geometry::enclosing::SupportBallGenerator a1((jobject) NULL);
          PyTypeObject **p1;
          WelzlEncloser object((jobject) NULL);

          if (!parseArgs(args, "DK", ::org::hipparchus::geometry::enclosing::SupportBallGenerator::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::enclosing::t_SupportBallGenerator::parameters_))
          {
            INT_CALL(object = WelzlEncloser(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_WelzlEncloser_enclose(t_WelzlEncloser *self, PyObject *arg)
        {
          ::java::lang::Iterable a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::enclosing::EnclosingBall result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::lang::Iterable::initializeClass, &a0, &p0, ::java::lang::t_Iterable::parameters_))
          {
            OBJ_CALL(result = self->object.enclose(a0));
            return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "enclose", arg);
          return NULL;
        }

        static PyObject *t_WelzlEncloser_selectFarthest(t_WelzlEncloser *self, PyObject *args)
        {
          ::java::lang::Iterable a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::enclosing::EnclosingBall a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::geometry::Point result((jobject) NULL);

          if (!parseArgs(args, "KK", ::java::lang::Iterable::initializeClass, ::org::hipparchus::geometry::enclosing::EnclosingBall::initializeClass, &a0, &p0, ::java::lang::t_Iterable::parameters_, &a1, &p1, ::org::hipparchus::geometry::enclosing::t_EnclosingBall::parameters_))
          {
            OBJ_CALL(result = self->object.selectFarthest(a0, a1));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::geometry::t_Point::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "selectFarthest", args);
          return NULL;
        }
        static PyObject *t_WelzlEncloser_get__parameters_(t_WelzlEncloser *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/BigFractionField.h"
#include "org/hipparchus/fraction/BigFraction.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/fraction/BigFractionField.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *BigFractionField::class$ = NULL;
      jmethodID *BigFractionField::mids$ = NULL;
      bool BigFractionField::live$ = false;

      jclass BigFractionField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/BigFractionField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getInstance_5eaa6afab444a02c] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/fraction/BigFractionField;");
          mids$[mid_getOne_c16be17dc5e53511] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_getRuntimeClass_8f66acc08d2a174c] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getZero_c16be17dc5e53511] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean BigFractionField::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      BigFractionField BigFractionField::getInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return BigFractionField(env->callStaticObjectMethod(cls, mids$[mid_getInstance_5eaa6afab444a02c]));
      }

      ::org::hipparchus::fraction::BigFraction BigFractionField::getOne() const
      {
        return ::org::hipparchus::fraction::BigFraction(env->callObjectMethod(this$, mids$[mid_getOne_c16be17dc5e53511]));
      }

      ::java::lang::Class BigFractionField::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_8f66acc08d2a174c]));
      }

      ::org::hipparchus::fraction::BigFraction BigFractionField::getZero() const
      {
        return ::org::hipparchus::fraction::BigFraction(env->callObjectMethod(this$, mids$[mid_getZero_c16be17dc5e53511]));
      }

      jint BigFractionField::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
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
      static PyObject *t_BigFractionField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFractionField_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFractionField_equals(t_BigFractionField *self, PyObject *args);
      static PyObject *t_BigFractionField_getInstance(PyTypeObject *type);
      static PyObject *t_BigFractionField_getOne(t_BigFractionField *self);
      static PyObject *t_BigFractionField_getRuntimeClass(t_BigFractionField *self);
      static PyObject *t_BigFractionField_getZero(t_BigFractionField *self);
      static PyObject *t_BigFractionField_hashCode(t_BigFractionField *self, PyObject *args);
      static PyObject *t_BigFractionField_get__instance(t_BigFractionField *self, void *data);
      static PyObject *t_BigFractionField_get__one(t_BigFractionField *self, void *data);
      static PyObject *t_BigFractionField_get__runtimeClass(t_BigFractionField *self, void *data);
      static PyObject *t_BigFractionField_get__zero(t_BigFractionField *self, void *data);
      static PyGetSetDef t_BigFractionField__fields_[] = {
        DECLARE_GET_FIELD(t_BigFractionField, instance),
        DECLARE_GET_FIELD(t_BigFractionField, one),
        DECLARE_GET_FIELD(t_BigFractionField, runtimeClass),
        DECLARE_GET_FIELD(t_BigFractionField, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BigFractionField__methods_[] = {
        DECLARE_METHOD(t_BigFractionField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFractionField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFractionField, equals, METH_VARARGS),
        DECLARE_METHOD(t_BigFractionField, getInstance, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFractionField, getOne, METH_NOARGS),
        DECLARE_METHOD(t_BigFractionField, getRuntimeClass, METH_NOARGS),
        DECLARE_METHOD(t_BigFractionField, getZero, METH_NOARGS),
        DECLARE_METHOD(t_BigFractionField, hashCode, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BigFractionField)[] = {
        { Py_tp_methods, t_BigFractionField__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BigFractionField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BigFractionField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BigFractionField, t_BigFractionField, BigFractionField);

      void t_BigFractionField::install(PyObject *module)
      {
        installType(&PY_TYPE(BigFractionField), &PY_TYPE_DEF(BigFractionField), module, "BigFractionField", 0);
      }

      void t_BigFractionField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFractionField), "class_", make_descriptor(BigFractionField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFractionField), "wrapfn_", make_descriptor(t_BigFractionField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFractionField), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BigFractionField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BigFractionField::initializeClass, 1)))
          return NULL;
        return t_BigFractionField::wrap_Object(BigFractionField(((t_BigFractionField *) arg)->object.this$));
      }
      static PyObject *t_BigFractionField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BigFractionField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BigFractionField_equals(t_BigFractionField *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(BigFractionField), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_BigFractionField_getInstance(PyTypeObject *type)
      {
        BigFractionField result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionField::getInstance());
        return t_BigFractionField::wrap_Object(result);
      }

      static PyObject *t_BigFractionField_getOne(t_BigFractionField *self)
      {
        ::org::hipparchus::fraction::BigFraction result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return ::org::hipparchus::fraction::t_BigFraction::wrap_Object(result);
      }

      static PyObject *t_BigFractionField_getRuntimeClass(t_BigFractionField *self)
      {
        ::java::lang::Class result((jobject) NULL);
        OBJ_CALL(result = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::fraction::PY_TYPE(BigFraction));
      }

      static PyObject *t_BigFractionField_getZero(t_BigFractionField *self)
      {
        ::org::hipparchus::fraction::BigFraction result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return ::org::hipparchus::fraction::t_BigFraction::wrap_Object(result);
      }

      static PyObject *t_BigFractionField_hashCode(t_BigFractionField *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BigFractionField), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_BigFractionField_get__instance(t_BigFractionField *self, void *data)
      {
        BigFractionField value((jobject) NULL);
        OBJ_CALL(value = self->object.getInstance());
        return t_BigFractionField::wrap_Object(value);
      }

      static PyObject *t_BigFractionField_get__one(t_BigFractionField *self, void *data)
      {
        ::org::hipparchus::fraction::BigFraction value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::fraction::t_BigFraction::wrap_Object(value);
      }

      static PyObject *t_BigFractionField_get__runtimeClass(t_BigFractionField *self, void *data)
      {
        ::java::lang::Class value((jobject) NULL);
        OBJ_CALL(value = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(value);
      }

      static PyObject *t_BigFractionField_get__zero(t_BigFractionField *self, void *data)
      {
        ::org::hipparchus::fraction::BigFraction value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::fraction::t_BigFraction::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/BistaticRangeRate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/BistaticRangeRate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *BistaticRangeRate::class$ = NULL;
        jmethodID *BistaticRangeRate::mids$ = NULL;
        bool BistaticRangeRate::live$ = false;
        ::java::lang::String *BistaticRangeRate::MEASUREMENT_TYPE = NULL;

        jclass BistaticRangeRate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/BistaticRangeRate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_09e77fb07b836cc0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getEmitterStation_4a0fede0c03d79b0] = env->getMethodID(cls, "getEmitterStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_getReceiverStation_4a0fede0c03d79b0] = env->getMethodID(cls, "getReceiverStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_c188a3b50efa39a5] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_9d5a7270ffb14a9e] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BistaticRangeRate::BistaticRangeRate(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_09e77fb07b836cc0, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$)) {}

        ::org::orekit::estimation::measurements::GroundStation BistaticRangeRate::getEmitterStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getEmitterStation_4a0fede0c03d79b0]));
        }

        ::org::orekit::estimation::measurements::GroundStation BistaticRangeRate::getReceiverStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getReceiverStation_4a0fede0c03d79b0]));
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
        static PyObject *t_BistaticRangeRate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BistaticRangeRate_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BistaticRangeRate_of_(t_BistaticRangeRate *self, PyObject *args);
        static int t_BistaticRangeRate_init_(t_BistaticRangeRate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BistaticRangeRate_getEmitterStation(t_BistaticRangeRate *self);
        static PyObject *t_BistaticRangeRate_getReceiverStation(t_BistaticRangeRate *self);
        static PyObject *t_BistaticRangeRate_get__emitterStation(t_BistaticRangeRate *self, void *data);
        static PyObject *t_BistaticRangeRate_get__receiverStation(t_BistaticRangeRate *self, void *data);
        static PyObject *t_BistaticRangeRate_get__parameters_(t_BistaticRangeRate *self, void *data);
        static PyGetSetDef t_BistaticRangeRate__fields_[] = {
          DECLARE_GET_FIELD(t_BistaticRangeRate, emitterStation),
          DECLARE_GET_FIELD(t_BistaticRangeRate, receiverStation),
          DECLARE_GET_FIELD(t_BistaticRangeRate, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BistaticRangeRate__methods_[] = {
          DECLARE_METHOD(t_BistaticRangeRate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BistaticRangeRate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BistaticRangeRate, of_, METH_VARARGS),
          DECLARE_METHOD(t_BistaticRangeRate, getEmitterStation, METH_NOARGS),
          DECLARE_METHOD(t_BistaticRangeRate, getReceiverStation, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BistaticRangeRate)[] = {
          { Py_tp_methods, t_BistaticRangeRate__methods_ },
          { Py_tp_init, (void *) t_BistaticRangeRate_init_ },
          { Py_tp_getset, t_BistaticRangeRate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BistaticRangeRate)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(BistaticRangeRate, t_BistaticRangeRate, BistaticRangeRate);
        PyObject *t_BistaticRangeRate::wrap_Object(const BistaticRangeRate& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BistaticRangeRate::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BistaticRangeRate *self = (t_BistaticRangeRate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BistaticRangeRate::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BistaticRangeRate::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BistaticRangeRate *self = (t_BistaticRangeRate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BistaticRangeRate::install(PyObject *module)
        {
          installType(&PY_TYPE(BistaticRangeRate), &PY_TYPE_DEF(BistaticRangeRate), module, "BistaticRangeRate", 0);
        }

        void t_BistaticRangeRate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRate), "class_", make_descriptor(BistaticRangeRate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRate), "wrapfn_", make_descriptor(t_BistaticRangeRate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRate), "boxfn_", make_descriptor(boxObject));
          env->getClass(BistaticRangeRate::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRate), "MEASUREMENT_TYPE", make_descriptor(j2p(*BistaticRangeRate::MEASUREMENT_TYPE)));
        }

        static PyObject *t_BistaticRangeRate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BistaticRangeRate::initializeClass, 1)))
            return NULL;
          return t_BistaticRangeRate::wrap_Object(BistaticRangeRate(((t_BistaticRangeRate *) arg)->object.this$));
        }
        static PyObject *t_BistaticRangeRate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BistaticRangeRate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BistaticRangeRate_of_(t_BistaticRangeRate *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BistaticRangeRate_init_(t_BistaticRangeRate *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          jdouble a5;
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          BistaticRangeRate object((jobject) NULL);

          if (!parseArgs(args, "kkkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = BistaticRangeRate(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(BistaticRangeRate);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BistaticRangeRate_getEmitterStation(t_BistaticRangeRate *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getEmitterStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }

        static PyObject *t_BistaticRangeRate_getReceiverStation(t_BistaticRangeRate *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getReceiverStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }
        static PyObject *t_BistaticRangeRate_get__parameters_(t_BistaticRangeRate *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BistaticRangeRate_get__emitterStation(t_BistaticRangeRate *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getEmitterStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }

        static PyObject *t_BistaticRangeRate_get__receiverStation(t_BistaticRangeRate *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getReceiverStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/PythonAtmosphere.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *PythonAtmosphere::class$ = NULL;
          jmethodID *PythonAtmosphere::mids$ = NULL;
          bool PythonAtmosphere::live$ = false;

          jclass PythonAtmosphere::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/PythonAtmosphere");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getDensity_e3f5c4474b151066] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDensity_ee5ac6667b0d4b90] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getVelocity_8f4e8542665c98ee] = env->getMethodID(cls, "getVelocity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getVelocity_4aa5ce694a02c205] = env->getMethodID(cls, "getVelocity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAtmosphere::PythonAtmosphere() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonAtmosphere::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonAtmosphere::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonAtmosphere::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
          static PyObject *t_PythonAtmosphere_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAtmosphere_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAtmosphere_init_(t_PythonAtmosphere *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAtmosphere_finalize(t_PythonAtmosphere *self);
          static PyObject *t_PythonAtmosphere_pythonExtension(t_PythonAtmosphere *self, PyObject *args);
          static jdouble JNICALL t_PythonAtmosphere_getDensity0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static jobject JNICALL t_PythonAtmosphere_getDensity1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static jobject JNICALL t_PythonAtmosphere_getFrame2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonAtmosphere_getVelocity3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static jobject JNICALL t_PythonAtmosphere_getVelocity4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonAtmosphere_pythonDecRef5(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAtmosphere_get__self(t_PythonAtmosphere *self, void *data);
          static PyGetSetDef t_PythonAtmosphere__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAtmosphere, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAtmosphere__methods_[] = {
            DECLARE_METHOD(t_PythonAtmosphere, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAtmosphere, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAtmosphere, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAtmosphere, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAtmosphere)[] = {
            { Py_tp_methods, t_PythonAtmosphere__methods_ },
            { Py_tp_init, (void *) t_PythonAtmosphere_init_ },
            { Py_tp_getset, t_PythonAtmosphere__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAtmosphere)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonAtmosphere, t_PythonAtmosphere, PythonAtmosphere);

          void t_PythonAtmosphere::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAtmosphere), &PY_TYPE_DEF(PythonAtmosphere), module, "PythonAtmosphere", 1);
          }

          void t_PythonAtmosphere::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAtmosphere), "class_", make_descriptor(PythonAtmosphere::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAtmosphere), "wrapfn_", make_descriptor(t_PythonAtmosphere::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAtmosphere), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAtmosphere::initializeClass);
            JNINativeMethod methods[] = {
              { "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D", (void *) t_PythonAtmosphere_getDensity0 },
              { "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonAtmosphere_getDensity1 },
              { "getFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonAtmosphere_getFrame2 },
              { "getVelocity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAtmosphere_getVelocity3 },
              { "getVelocity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonAtmosphere_getVelocity4 },
              { "pythonDecRef", "()V", (void *) t_PythonAtmosphere_pythonDecRef5 },
            };
            env->registerNatives(cls, methods, 6);
          }

          static PyObject *t_PythonAtmosphere_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAtmosphere::initializeClass, 1)))
              return NULL;
            return t_PythonAtmosphere::wrap_Object(PythonAtmosphere(((t_PythonAtmosphere *) arg)->object.this$));
          }
          static PyObject *t_PythonAtmosphere_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAtmosphere::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAtmosphere_init_(t_PythonAtmosphere *self, PyObject *args, PyObject *kwds)
          {
            PythonAtmosphere object((jobject) NULL);

            INT_CALL(object = PythonAtmosphere());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAtmosphere_finalize(t_PythonAtmosphere *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAtmosphere_pythonExtension(t_PythonAtmosphere *self, PyObject *args)
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

          static jdouble JNICALL t_PythonAtmosphere_getDensity0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a1));
            PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
            PyObject *result = PyObject_CallMethod(obj, "getDensity", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getDensity", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonAtmosphere_getDensity1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
            PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a1));
            PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
            PyObject *result = PyObject_CallMethod(obj, "getDensity", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("getDensity", result);
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

          static jobject JNICALL t_PythonAtmosphere_getFrame2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::frames::Frame value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getFrame", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
            {
              throwTypeError("getFrame", result);
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

          static jobject JNICALL t_PythonAtmosphere_getVelocity3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a1));
            PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
            PyObject *result = PyObject_CallMethod(obj, "getVelocity", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("getVelocity", result);
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

          static jobject JNICALL t_PythonAtmosphere_getVelocity4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
            PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a1));
            PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
            PyObject *result = PyObject_CallMethod(obj, "getVelocity", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
            {
              throwTypeError("getVelocity", result);
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

          static void JNICALL t_PythonAtmosphere_pythonDecRef5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAtmosphere_get__self(t_PythonAtmosphere *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/threed/PolyhedronsSet$BRep.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *PolyhedronsSet$BRep::class$ = NULL;
          jmethodID *PolyhedronsSet$BRep::mids$ = NULL;
          bool PolyhedronsSet$BRep::live$ = false;

          jclass PolyhedronsSet$BRep::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/PolyhedronsSet$BRep");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_694ad53d6db8f702] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;)V");
              mids$[mid_getFacets_a6156df500549a58] = env->getMethodID(cls, "getFacets", "()Ljava/util/List;");
              mids$[mid_getVertices_a6156df500549a58] = env->getMethodID(cls, "getVertices", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PolyhedronsSet$BRep::PolyhedronsSet$BRep(const ::java::util::List & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_694ad53d6db8f702, a0.this$, a1.this$)) {}

          ::java::util::List PolyhedronsSet$BRep::getFacets() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFacets_a6156df500549a58]));
          }

          ::java::util::List PolyhedronsSet$BRep::getVertices() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getVertices_a6156df500549a58]));
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
          static PyObject *t_PolyhedronsSet$BRep_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolyhedronsSet$BRep_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolyhedronsSet$BRep_of_(t_PolyhedronsSet$BRep *self, PyObject *args);
          static int t_PolyhedronsSet$BRep_init_(t_PolyhedronsSet$BRep *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PolyhedronsSet$BRep_getFacets(t_PolyhedronsSet$BRep *self);
          static PyObject *t_PolyhedronsSet$BRep_getVertices(t_PolyhedronsSet$BRep *self);
          static PyObject *t_PolyhedronsSet$BRep_get__facets(t_PolyhedronsSet$BRep *self, void *data);
          static PyObject *t_PolyhedronsSet$BRep_get__vertices(t_PolyhedronsSet$BRep *self, void *data);
          static PyObject *t_PolyhedronsSet$BRep_get__parameters_(t_PolyhedronsSet$BRep *self, void *data);
          static PyGetSetDef t_PolyhedronsSet$BRep__fields_[] = {
            DECLARE_GET_FIELD(t_PolyhedronsSet$BRep, facets),
            DECLARE_GET_FIELD(t_PolyhedronsSet$BRep, vertices),
            DECLARE_GET_FIELD(t_PolyhedronsSet$BRep, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PolyhedronsSet$BRep__methods_[] = {
            DECLARE_METHOD(t_PolyhedronsSet$BRep, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolyhedronsSet$BRep, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolyhedronsSet$BRep, of_, METH_VARARGS),
            DECLARE_METHOD(t_PolyhedronsSet$BRep, getFacets, METH_NOARGS),
            DECLARE_METHOD(t_PolyhedronsSet$BRep, getVertices, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PolyhedronsSet$BRep)[] = {
            { Py_tp_methods, t_PolyhedronsSet$BRep__methods_ },
            { Py_tp_init, (void *) t_PolyhedronsSet$BRep_init_ },
            { Py_tp_getset, t_PolyhedronsSet$BRep__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PolyhedronsSet$BRep)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PolyhedronsSet$BRep, t_PolyhedronsSet$BRep, PolyhedronsSet$BRep);
          PyObject *t_PolyhedronsSet$BRep::wrap_Object(const PolyhedronsSet$BRep& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PolyhedronsSet$BRep::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PolyhedronsSet$BRep *self = (t_PolyhedronsSet$BRep *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_PolyhedronsSet$BRep::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PolyhedronsSet$BRep::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PolyhedronsSet$BRep *self = (t_PolyhedronsSet$BRep *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_PolyhedronsSet$BRep::install(PyObject *module)
          {
            installType(&PY_TYPE(PolyhedronsSet$BRep), &PY_TYPE_DEF(PolyhedronsSet$BRep), module, "PolyhedronsSet$BRep", 0);
          }

          void t_PolyhedronsSet$BRep::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet$BRep), "class_", make_descriptor(PolyhedronsSet$BRep::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet$BRep), "wrapfn_", make_descriptor(t_PolyhedronsSet$BRep::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet$BRep), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PolyhedronsSet$BRep_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PolyhedronsSet$BRep::initializeClass, 1)))
              return NULL;
            return t_PolyhedronsSet$BRep::wrap_Object(PolyhedronsSet$BRep(((t_PolyhedronsSet$BRep *) arg)->object.this$));
          }
          static PyObject *t_PolyhedronsSet$BRep_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PolyhedronsSet$BRep::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PolyhedronsSet$BRep_of_(t_PolyhedronsSet$BRep *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PolyhedronsSet$BRep_init_(t_PolyhedronsSet$BRep *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            PolyhedronsSet$BRep object((jobject) NULL);

            if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = PolyhedronsSet$BRep(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
              self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PolyhedronsSet$BRep_getFacets(t_PolyhedronsSet$BRep *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getFacets());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(Object));
          }

          static PyObject *t_PolyhedronsSet$BRep_getVertices(t_PolyhedronsSet$BRep *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getVertices());
            return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D));
          }
          static PyObject *t_PolyhedronsSet$BRep_get__parameters_(t_PolyhedronsSet$BRep *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_PolyhedronsSet$BRep_get__facets(t_PolyhedronsSet$BRep *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getFacets());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_PolyhedronsSet$BRep_get__vertices(t_PolyhedronsSet$BRep *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getVertices());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/InterSensorsOptimizationProblemBuilder.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/rugged/api/Rugged.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "org/orekit/rugged/adjustment/measurements/Observables.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        ::java::lang::Class *InterSensorsOptimizationProblemBuilder::class$ = NULL;
        jmethodID *InterSensorsOptimizationProblemBuilder::mids$ = NULL;
        bool InterSensorsOptimizationProblemBuilder::live$ = false;

        jclass InterSensorsOptimizationProblemBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/InterSensorsOptimizationProblemBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3612b8397aecc563] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/rugged/adjustment/measurements/Observables;Ljava/util/Collection;)V");
            mids$[mid_build_2e2baa3c6f1b9087] = env->getMethodID(cls, "build", "(ID)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
            mids$[mid_initMapping_7ae3461a92a43152] = env->getMethodID(cls, "initMapping", "()V");
            mids$[mid_createTargetAndWeight_7ae3461a92a43152] = env->getMethodID(cls, "createTargetAndWeight", "()V");
            mids$[mid_createFunction_b196da25fd980476] = env->getMethodID(cls, "createFunction", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InterSensorsOptimizationProblemBuilder::InterSensorsOptimizationProblemBuilder(const ::java::util::List & a0, const ::org::orekit::rugged::adjustment::measurements::Observables & a1, const ::java::util::Collection & a2) : ::org::orekit::rugged::adjustment::OptimizationProblemBuilder(env->newObject(initializeClass, &mids$, mid_init$_3612b8397aecc563, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem InterSensorsOptimizationProblemBuilder::build(jint a0, jdouble a1) const
        {
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callObjectMethod(this$, mids$[mid_build_2e2baa3c6f1b9087], a0, a1));
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
      namespace adjustment {
        static PyObject *t_InterSensorsOptimizationProblemBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterSensorsOptimizationProblemBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_InterSensorsOptimizationProblemBuilder_init_(t_InterSensorsOptimizationProblemBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_InterSensorsOptimizationProblemBuilder_build(t_InterSensorsOptimizationProblemBuilder *self, PyObject *args);

        static PyMethodDef t_InterSensorsOptimizationProblemBuilder__methods_[] = {
          DECLARE_METHOD(t_InterSensorsOptimizationProblemBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterSensorsOptimizationProblemBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterSensorsOptimizationProblemBuilder, build, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InterSensorsOptimizationProblemBuilder)[] = {
          { Py_tp_methods, t_InterSensorsOptimizationProblemBuilder__methods_ },
          { Py_tp_init, (void *) t_InterSensorsOptimizationProblemBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InterSensorsOptimizationProblemBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::adjustment::OptimizationProblemBuilder),
          NULL
        };

        DEFINE_TYPE(InterSensorsOptimizationProblemBuilder, t_InterSensorsOptimizationProblemBuilder, InterSensorsOptimizationProblemBuilder);

        void t_InterSensorsOptimizationProblemBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(InterSensorsOptimizationProblemBuilder), &PY_TYPE_DEF(InterSensorsOptimizationProblemBuilder), module, "InterSensorsOptimizationProblemBuilder", 0);
        }

        void t_InterSensorsOptimizationProblemBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSensorsOptimizationProblemBuilder), "class_", make_descriptor(InterSensorsOptimizationProblemBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSensorsOptimizationProblemBuilder), "wrapfn_", make_descriptor(t_InterSensorsOptimizationProblemBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSensorsOptimizationProblemBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_InterSensorsOptimizationProblemBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InterSensorsOptimizationProblemBuilder::initializeClass, 1)))
            return NULL;
          return t_InterSensorsOptimizationProblemBuilder::wrap_Object(InterSensorsOptimizationProblemBuilder(((t_InterSensorsOptimizationProblemBuilder *) arg)->object.this$));
        }
        static PyObject *t_InterSensorsOptimizationProblemBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InterSensorsOptimizationProblemBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_InterSensorsOptimizationProblemBuilder_init_(t_InterSensorsOptimizationProblemBuilder *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::rugged::adjustment::measurements::Observables a1((jobject) NULL);
          ::java::util::Collection a2((jobject) NULL);
          PyTypeObject **p2;
          InterSensorsOptimizationProblemBuilder object((jobject) NULL);

          if (!parseArgs(args, "KkK", ::java::util::List::initializeClass, ::org::orekit::rugged::adjustment::measurements::Observables::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::java::util::t_Collection::parameters_))
          {
            INT_CALL(object = InterSensorsOptimizationProblemBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_InterSensorsOptimizationProblemBuilder_build(t_InterSensorsOptimizationProblemBuilder *self, PyObject *args)
        {
          jint a0;
          jdouble a1;
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = self->object.build(a0, a1));
            return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
          }

          return callSuper(PY_TYPE(InterSensorsOptimizationProblemBuilder), (PyObject *) self, "build", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PVCoordinatesProvider::class$ = NULL;
      jmethodID *PVCoordinatesProvider::mids$ = NULL;
      bool PVCoordinatesProvider::live$ = false;

      jclass PVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getPVCoordinates_20557c175f7cd899] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPosition_5343d34e5fbffcdd] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::TimeStampedPVCoordinates PVCoordinatesProvider::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_20557c175f7cd899], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinatesProvider::getPosition(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_5343d34e5fbffcdd], a0.this$, a1.this$));
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
      static PyObject *t_PVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PVCoordinatesProvider_getPVCoordinates(t_PVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_PVCoordinatesProvider_getPosition(t_PVCoordinatesProvider *self, PyObject *args);

      static PyMethodDef t_PVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_PVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PVCoordinatesProvider, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_PVCoordinatesProvider, getPosition, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PVCoordinatesProvider)[] = {
        { Py_tp_methods, t_PVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PVCoordinatesProvider, t_PVCoordinatesProvider, PVCoordinatesProvider);

      void t_PVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PVCoordinatesProvider), &PY_TYPE_DEF(PVCoordinatesProvider), module, "PVCoordinatesProvider", 0);
      }

      void t_PVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinatesProvider), "class_", make_descriptor(PVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinatesProvider), "wrapfn_", make_descriptor(t_PVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_PVCoordinatesProvider::wrap_Object(PVCoordinatesProvider(((t_PVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_PVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PVCoordinatesProvider_getPVCoordinates(t_PVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
          return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_PVCoordinatesProvider_getPosition(t_PVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPosition(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/Binary64.h"
#include "org/hipparchus/util/Binary64.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Binary64::class$ = NULL;
      jmethodID *Binary64::mids$ = NULL;
      bool Binary64::live$ = false;
      Binary64 *Binary64::NAN$ = NULL;
      Binary64 *Binary64::NEGATIVE_INFINITY = NULL;
      Binary64 *Binary64::ONE = NULL;
      Binary64 *Binary64::PI = NULL;
      Binary64 *Binary64::POSITIVE_INFINITY = NULL;
      Binary64 *Binary64::ZERO = NULL;

      jclass Binary64::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Binary64");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_abs_cd1f6a49ec3a1b51] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_acos_cd1f6a49ec3a1b51] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_acosh_cd1f6a49ec3a1b51] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_add_7a222516a2a3837b] = env->getMethodID(cls, "add", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_add_1f77ee0c21723a22] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_asin_cd1f6a49ec3a1b51] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_asinh_cd1f6a49ec3a1b51] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_atan_cd1f6a49ec3a1b51] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_atan2_7a222516a2a3837b] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_atanh_cd1f6a49ec3a1b51] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_byteValue_1d06dd1980a98d13] = env->getMethodID(cls, "byteValue", "()B");
          mids$[mid_cbrt_cd1f6a49ec3a1b51] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_ceil_cd1f6a49ec3a1b51] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_compareTo_ad583666878cc7ff] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/util/Binary64;)I");
          mids$[mid_copySign_7a222516a2a3837b] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_copySign_1f77ee0c21723a22] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_cos_cd1f6a49ec3a1b51] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_cosh_cd1f6a49ec3a1b51] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_divide_7a222516a2a3837b] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_divide_1f77ee0c21723a22] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_doubleValue_456d9a2f64d6b28d] = env->getMethodID(cls, "doubleValue", "()D");
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_exp_cd1f6a49ec3a1b51] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_expm1_cd1f6a49ec3a1b51] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_floatValue_966c782d3223854d] = env->getMethodID(cls, "floatValue", "()F");
          mids$[mid_floor_cd1f6a49ec3a1b51] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_getField_70b4bbd3fa378d6b] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getPi_cd1f6a49ec3a1b51] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_getReal_456d9a2f64d6b28d] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_hypot_7a222516a2a3837b] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_intValue_f2f64475e4580546] = env->getMethodID(cls, "intValue", "()I");
          mids$[mid_isInfinite_e470b6d9e0d979db] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isNaN_e470b6d9e0d979db] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_isZero_e470b6d9e0d979db] = env->getMethodID(cls, "isZero", "()Z");
          mids$[mid_linearCombination_c4e58f5fcef3f495] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_f2a9b8fe681d11c7] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/util/Binary64;[Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_fa2bb73ad874b016] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_caa9f884a583e650] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/Binary64;DLorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_11eba44d2dcd485e] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_a5eae51123ce07c4] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/Binary64;DLorg/hipparchus/util/Binary64;DLorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_f418b785c843722d] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_0c0b3fd9ffb0437e] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/Binary64;DLorg/hipparchus/util/Binary64;DLorg/hipparchus/util/Binary64;DLorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_log_cd1f6a49ec3a1b51] = env->getMethodID(cls, "log", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_log10_cd1f6a49ec3a1b51] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_log1p_cd1f6a49ec3a1b51] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_longValue_a27fc9afd27e559d] = env->getMethodID(cls, "longValue", "()J");
          mids$[mid_multiply_7a222516a2a3837b] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_multiply_1f77ee0c21723a22] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_multiply_172129e969ccb11c] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/util/Binary64;");
          mids$[mid_negate_cd1f6a49ec3a1b51] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_newInstance_1f77ee0c21723a22] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_pow_7a222516a2a3837b] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_pow_1f77ee0c21723a22] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_pow_172129e969ccb11c] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/util/Binary64;");
          mids$[mid_reciprocal_cd1f6a49ec3a1b51] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_remainder_7a222516a2a3837b] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_remainder_1f77ee0c21723a22] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_rint_cd1f6a49ec3a1b51] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_rootN_172129e969ccb11c] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/util/Binary64;");
          mids$[mid_scalb_172129e969ccb11c] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/util/Binary64;");
          mids$[mid_shortValue_f89720844d790ad7] = env->getMethodID(cls, "shortValue", "()S");
          mids$[mid_sign_cd1f6a49ec3a1b51] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_sin_cd1f6a49ec3a1b51] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_sinCos_35f2499c71416a1a] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_cd1f6a49ec3a1b51] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_sinhCosh_c388a3eefde9d597] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_cd1f6a49ec3a1b51] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_subtract_7a222516a2a3837b] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_subtract_1f77ee0c21723a22] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_tan_cd1f6a49ec3a1b51] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_tanh_cd1f6a49ec3a1b51] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_toDegrees_cd1f6a49ec3a1b51] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_toRadians_cd1f6a49ec3a1b51] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_ulp_cd1f6a49ec3a1b51] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/util/Binary64;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          NAN$ = new Binary64(env->getStaticObjectField(cls, "NAN", "Lorg/hipparchus/util/Binary64;"));
          NEGATIVE_INFINITY = new Binary64(env->getStaticObjectField(cls, "NEGATIVE_INFINITY", "Lorg/hipparchus/util/Binary64;"));
          ONE = new Binary64(env->getStaticObjectField(cls, "ONE", "Lorg/hipparchus/util/Binary64;"));
          PI = new Binary64(env->getStaticObjectField(cls, "PI", "Lorg/hipparchus/util/Binary64;"));
          POSITIVE_INFINITY = new Binary64(env->getStaticObjectField(cls, "POSITIVE_INFINITY", "Lorg/hipparchus/util/Binary64;"));
          ZERO = new Binary64(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/util/Binary64;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Binary64::Binary64(jdouble a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

      Binary64 Binary64::abs() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_abs_cd1f6a49ec3a1b51]));
      }

      Binary64 Binary64::acos() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_acos_cd1f6a49ec3a1b51]));
      }

      Binary64 Binary64::acosh() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_acosh_cd1f6a49ec3a1b51]));
      }

      Binary64 Binary64::add(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_add_7a222516a2a3837b], a0.this$));
      }

      Binary64 Binary64::add(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_add_1f77ee0c21723a22], a0));
      }

      Binary64 Binary64::asin() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_asin_cd1f6a49ec3a1b51]));
      }

      Binary64 Binary64::asinh() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_asinh_cd1f6a49ec3a1b51]));
      }

      Binary64 Binary64::atan() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_atan_cd1f6a49ec3a1b51]));
      }

      Binary64 Binary64::atan2(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_atan2_7a222516a2a3837b], a0.this$));
      }

      Binary64 Binary64::atanh() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_atanh_cd1f6a49ec3a1b51]));
      }

      jbyte Binary64::byteValue() const
      {
        return env->callByteMethod(this$, mids$[mid_byteValue_1d06dd1980a98d13]);
      }

      Binary64 Binary64::cbrt() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_cbrt_cd1f6a49ec3a1b51]));
      }

      Binary64 Binary64::ceil() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_ceil_cd1f6a49ec3a1b51]));
      }

      jint Binary64::compareTo(const Binary64 & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_ad583666878cc7ff], a0.this$);
      }

      Binary64 Binary64::copySign(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_copySign_7a222516a2a3837b], a0.this$));
      }

      Binary64 Binary64::copySign(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_copySign_1f77ee0c21723a22], a0));
      }

      Binary64 Binary64::cos() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_cos_cd1f6a49ec3a1b51]));
      }

      Binary64 Binary64::cosh() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_cosh_cd1f6a49ec3a1b51]));
      }

      Binary64 Binary64::divide(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_divide_7a222516a2a3837b], a0.this$));
      }

      Binary64 Binary64::divide(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_divide_1f77ee0c21723a22], a0));
      }

      jdouble Binary64::doubleValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_doubleValue_456d9a2f64d6b28d]);
      }

      jboolean Binary64::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      Binary64 Binary64::exp() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_exp_cd1f6a49ec3a1b51]));
      }

      Binary64 Binary64::expm1() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_expm1_cd1f6a49ec3a1b51]));
      }

      jfloat Binary64::floatValue() const
      {
        return env->callFloatMethod(this$, mids$[mid_floatValue_966c782d3223854d]);
      }

      Binary64 Binary64::floor() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_floor_cd1f6a49ec3a1b51]));
      }

      ::org::hipparchus::Field Binary64::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_70b4bbd3fa378d6b]));
      }

      Binary64 Binary64::getPi() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_getPi_cd1f6a49ec3a1b51]));
      }

      jdouble Binary64::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_456d9a2f64d6b28d]);
      }

      jint Binary64::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }

      Binary64 Binary64::hypot(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_hypot_7a222516a2a3837b], a0.this$));
      }

      jint Binary64::intValue() const
      {
        return env->callIntMethod(this$, mids$[mid_intValue_f2f64475e4580546]);
      }

      jboolean Binary64::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_e470b6d9e0d979db]);
      }

      jboolean Binary64::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_e470b6d9e0d979db]);
      }

      jboolean Binary64::isZero() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isZero_e470b6d9e0d979db]);
      }

      Binary64 Binary64::linearCombination(const JArray< jdouble > & a0, const JArray< Binary64 > & a1) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_c4e58f5fcef3f495], a0.this$, a1.this$));
      }

      Binary64 Binary64::linearCombination(const JArray< Binary64 > & a0, const JArray< Binary64 > & a1) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_f2a9b8fe681d11c7], a0.this$, a1.this$));
      }

      Binary64 Binary64::linearCombination(const Binary64 & a0, const Binary64 & a1, const Binary64 & a2, const Binary64 & a3) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_fa2bb73ad874b016], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      Binary64 Binary64::linearCombination(jdouble a0, const Binary64 & a1, jdouble a2, const Binary64 & a3) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_caa9f884a583e650], a0, a1.this$, a2, a3.this$));
      }

      Binary64 Binary64::linearCombination(const Binary64 & a0, const Binary64 & a1, const Binary64 & a2, const Binary64 & a3, const Binary64 & a4, const Binary64 & a5) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_11eba44d2dcd485e], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      Binary64 Binary64::linearCombination(jdouble a0, const Binary64 & a1, jdouble a2, const Binary64 & a3, jdouble a4, const Binary64 & a5) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_a5eae51123ce07c4], a0, a1.this$, a2, a3.this$, a4, a5.this$));
      }

      Binary64 Binary64::linearCombination(const Binary64 & a0, const Binary64 & a1, const Binary64 & a2, const Binary64 & a3, const Binary64 & a4, const Binary64 & a5, const Binary64 & a6, const Binary64 & a7) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_f418b785c843722d], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
      }

      Binary64 Binary64::linearCombination(jdouble a0, const Binary64 & a1, jdouble a2, const Binary64 & a3, jdouble a4, const Binary64 & a5, jdouble a6, const Binary64 & a7) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_0c0b3fd9ffb0437e], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
      }

      Binary64 Binary64::log() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_log_cd1f6a49ec3a1b51]));
      }

      Binary64 Binary64::log10() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_log10_cd1f6a49ec3a1b51]));
      }

      Binary64 Binary64::log1p() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_log1p_cd1f6a49ec3a1b51]));
      }

      jlong Binary64::longValue() const
      {
        return env->callLongMethod(this$, mids$[mid_longValue_a27fc9afd27e559d]);
      }

      Binary64 Binary64::multiply(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_multiply_7a222516a2a3837b], a0.this$));
      }

      Binary64 Binary64::multiply(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_multiply_1f77ee0c21723a22], a0));
      }

      Binary64 Binary64::multiply(jint a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_multiply_172129e969ccb11c], a0));
      }

      Binary64 Binary64::negate() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_negate_cd1f6a49ec3a1b51]));
      }

      Binary64 Binary64::newInstance(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_newInstance_1f77ee0c21723a22], a0));
      }

      Binary64 Binary64::pow(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_pow_7a222516a2a3837b], a0.this$));
      }

      Binary64 Binary64::pow(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_pow_1f77ee0c21723a22], a0));
      }

      Binary64 Binary64::pow(jint a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_pow_172129e969ccb11c], a0));
      }

      Binary64 Binary64::reciprocal() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_reciprocal_cd1f6a49ec3a1b51]));
      }

      Binary64 Binary64::remainder(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_remainder_7a222516a2a3837b], a0.this$));
      }

      Binary64 Binary64::remainder(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_remainder_1f77ee0c21723a22], a0));
      }

      Binary64 Binary64::rint() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_rint_cd1f6a49ec3a1b51]));
      }

      Binary64 Binary64::rootN(jint a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_rootN_172129e969ccb11c], a0));
      }

      Binary64 Binary64::scalb(jint a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_scalb_172129e969ccb11c], a0));
      }

      jshort Binary64::shortValue() const
      {
        return env->callShortMethod(this$, mids$[mid_shortValue_f89720844d790ad7]);
      }

      Binary64 Binary64::sign() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_sign_cd1f6a49ec3a1b51]));
      }

      Binary64 Binary64::sin() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_sin_cd1f6a49ec3a1b51]));
      }

      ::org::hipparchus::util::FieldSinCos Binary64::sinCos() const
      {
        return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_35f2499c71416a1a]));
      }

      Binary64 Binary64::sinh() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_sinh_cd1f6a49ec3a1b51]));
      }

      ::org::hipparchus::util::FieldSinhCosh Binary64::sinhCosh() const
      {
        return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_c388a3eefde9d597]));
      }

      Binary64 Binary64::sqrt() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_sqrt_cd1f6a49ec3a1b51]));
      }

      Binary64 Binary64::subtract(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_subtract_7a222516a2a3837b], a0.this$));
      }

      Binary64 Binary64::subtract(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_subtract_1f77ee0c21723a22], a0));
      }

      Binary64 Binary64::tan() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_tan_cd1f6a49ec3a1b51]));
      }

      Binary64 Binary64::tanh() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_tanh_cd1f6a49ec3a1b51]));
      }

      Binary64 Binary64::toDegrees() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_toDegrees_cd1f6a49ec3a1b51]));
      }

      Binary64 Binary64::toRadians() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_toRadians_cd1f6a49ec3a1b51]));
      }

      ::java::lang::String Binary64::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
      }

      Binary64 Binary64::ulp() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_ulp_cd1f6a49ec3a1b51]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_Binary64_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Binary64_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Binary64_init_(t_Binary64 *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Binary64_abs(t_Binary64 *self);
      static PyObject *t_Binary64_acos(t_Binary64 *self);
      static PyObject *t_Binary64_acosh(t_Binary64 *self);
      static PyObject *t_Binary64_add(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_asin(t_Binary64 *self);
      static PyObject *t_Binary64_asinh(t_Binary64 *self);
      static PyObject *t_Binary64_atan(t_Binary64 *self);
      static PyObject *t_Binary64_atan2(t_Binary64 *self, PyObject *arg);
      static PyObject *t_Binary64_atanh(t_Binary64 *self);
      static PyObject *t_Binary64_byteValue(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_cbrt(t_Binary64 *self);
      static PyObject *t_Binary64_ceil(t_Binary64 *self);
      static PyObject *t_Binary64_compareTo(t_Binary64 *self, PyObject *arg);
      static PyObject *t_Binary64_copySign(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_cos(t_Binary64 *self);
      static PyObject *t_Binary64_cosh(t_Binary64 *self);
      static PyObject *t_Binary64_divide(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_doubleValue(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_equals(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_exp(t_Binary64 *self);
      static PyObject *t_Binary64_expm1(t_Binary64 *self);
      static PyObject *t_Binary64_floatValue(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_floor(t_Binary64 *self);
      static PyObject *t_Binary64_getField(t_Binary64 *self);
      static PyObject *t_Binary64_getPi(t_Binary64 *self);
      static PyObject *t_Binary64_getReal(t_Binary64 *self);
      static PyObject *t_Binary64_hashCode(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_hypot(t_Binary64 *self, PyObject *arg);
      static PyObject *t_Binary64_intValue(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_isInfinite(t_Binary64 *self);
      static PyObject *t_Binary64_isNaN(t_Binary64 *self);
      static PyObject *t_Binary64_isZero(t_Binary64 *self);
      static PyObject *t_Binary64_linearCombination(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_log(t_Binary64 *self);
      static PyObject *t_Binary64_log10(t_Binary64 *self);
      static PyObject *t_Binary64_log1p(t_Binary64 *self);
      static PyObject *t_Binary64_longValue(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_multiply(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_negate(t_Binary64 *self);
      static PyObject *t_Binary64_newInstance(t_Binary64 *self, PyObject *arg);
      static PyObject *t_Binary64_pow(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_reciprocal(t_Binary64 *self);
      static PyObject *t_Binary64_remainder(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_rint(t_Binary64 *self);
      static PyObject *t_Binary64_rootN(t_Binary64 *self, PyObject *arg);
      static PyObject *t_Binary64_scalb(t_Binary64 *self, PyObject *arg);
      static PyObject *t_Binary64_shortValue(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_sign(t_Binary64 *self);
      static PyObject *t_Binary64_sin(t_Binary64 *self);
      static PyObject *t_Binary64_sinCos(t_Binary64 *self);
      static PyObject *t_Binary64_sinh(t_Binary64 *self);
      static PyObject *t_Binary64_sinhCosh(t_Binary64 *self);
      static PyObject *t_Binary64_sqrt(t_Binary64 *self);
      static PyObject *t_Binary64_subtract(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_tan(t_Binary64 *self);
      static PyObject *t_Binary64_tanh(t_Binary64 *self);
      static PyObject *t_Binary64_toDegrees(t_Binary64 *self);
      static PyObject *t_Binary64_toRadians(t_Binary64 *self);
      static PyObject *t_Binary64_toString(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_ulp(t_Binary64 *self);
      static PyObject *t_Binary64_get__field(t_Binary64 *self, void *data);
      static PyObject *t_Binary64_get__infinite(t_Binary64 *self, void *data);
      static PyObject *t_Binary64_get__naN(t_Binary64 *self, void *data);
      static PyObject *t_Binary64_get__pi(t_Binary64 *self, void *data);
      static PyObject *t_Binary64_get__real(t_Binary64 *self, void *data);
      static PyObject *t_Binary64_get__zero(t_Binary64 *self, void *data);
      static PyGetSetDef t_Binary64__fields_[] = {
        DECLARE_GET_FIELD(t_Binary64, field),
        DECLARE_GET_FIELD(t_Binary64, infinite),
        DECLARE_GET_FIELD(t_Binary64, naN),
        DECLARE_GET_FIELD(t_Binary64, pi),
        DECLARE_GET_FIELD(t_Binary64, real),
        DECLARE_GET_FIELD(t_Binary64, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Binary64__methods_[] = {
        DECLARE_METHOD(t_Binary64, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Binary64, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Binary64, abs, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, acos, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, acosh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, add, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, asin, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, asinh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, atan, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, atan2, METH_O),
        DECLARE_METHOD(t_Binary64, atanh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, byteValue, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, cbrt, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, ceil, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, compareTo, METH_O),
        DECLARE_METHOD(t_Binary64, copySign, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, cos, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, cosh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, divide, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, doubleValue, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, equals, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, exp, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, expm1, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, floatValue, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, floor, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, getField, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, getPi, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, getReal, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, hypot, METH_O),
        DECLARE_METHOD(t_Binary64, intValue, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, isInfinite, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, isNaN, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, isZero, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, linearCombination, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, log, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, log10, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, log1p, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, longValue, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, negate, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, newInstance, METH_O),
        DECLARE_METHOD(t_Binary64, pow, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, remainder, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, rint, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, rootN, METH_O),
        DECLARE_METHOD(t_Binary64, scalb, METH_O),
        DECLARE_METHOD(t_Binary64, shortValue, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, sign, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, sin, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, sinCos, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, sinh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, sinhCosh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, sqrt, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, tan, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, tanh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, toDegrees, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, toRadians, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, toString, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, ulp, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Binary64)[] = {
        { Py_tp_methods, t_Binary64__methods_ },
        { Py_tp_init, (void *) t_Binary64_init_ },
        { Py_tp_getset, t_Binary64__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Binary64)[] = {
        &PY_TYPE_DEF(::java::lang::Number),
        NULL
      };

      DEFINE_TYPE(Binary64, t_Binary64, Binary64);

      void t_Binary64::install(PyObject *module)
      {
        installType(&PY_TYPE(Binary64), &PY_TYPE_DEF(Binary64), module, "Binary64", 0);
      }

      void t_Binary64::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "class_", make_descriptor(Binary64::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "wrapfn_", make_descriptor(t_Binary64::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "boxfn_", make_descriptor(boxObject));
        env->getClass(Binary64::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "NAN", make_descriptor(t_Binary64::wrap_Object(*Binary64::NAN$)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "NEGATIVE_INFINITY", make_descriptor(t_Binary64::wrap_Object(*Binary64::NEGATIVE_INFINITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "ONE", make_descriptor(t_Binary64::wrap_Object(*Binary64::ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "PI", make_descriptor(t_Binary64::wrap_Object(*Binary64::PI)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "POSITIVE_INFINITY", make_descriptor(t_Binary64::wrap_Object(*Binary64::POSITIVE_INFINITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "ZERO", make_descriptor(t_Binary64::wrap_Object(*Binary64::ZERO)));
      }

      static PyObject *t_Binary64_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Binary64::initializeClass, 1)))
          return NULL;
        return t_Binary64::wrap_Object(Binary64(((t_Binary64 *) arg)->object.this$));
      }
      static PyObject *t_Binary64_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Binary64::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Binary64_init_(t_Binary64 *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        Binary64 object((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          INT_CALL(object = Binary64(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Binary64_abs(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_acos(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.acos());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_acosh(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.acosh());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_add(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_Binary64_asin(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.asin());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_asinh(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.asinh());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_atan(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.atan());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_atan2(t_Binary64 *self, PyObject *arg)
      {
        Binary64 a0((jobject) NULL);
        Binary64 result((jobject) NULL);

        if (!parseArg(arg, "k", Binary64::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.atan2(a0));
          return t_Binary64::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "atan2", arg);
        return NULL;
      }

      static PyObject *t_Binary64_atanh(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.atanh());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_byteValue(t_Binary64 *self, PyObject *args)
      {
        jbyte result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.byteValue());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "byteValue", args, 2);
      }

      static PyObject *t_Binary64_cbrt(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.cbrt());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_ceil(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.ceil());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_compareTo(t_Binary64 *self, PyObject *arg)
      {
        Binary64 a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", Binary64::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_Binary64_copySign(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySign", args);
        return NULL;
      }

      static PyObject *t_Binary64_cos(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.cos());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_cosh(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.cosh());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_divide(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_Binary64_doubleValue(t_Binary64 *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.doubleValue());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "doubleValue", args, 2);
      }

      static PyObject *t_Binary64_equals(t_Binary64 *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Binary64_exp(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.exp());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_expm1(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.expm1());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_floatValue(t_Binary64 *self, PyObject *args)
      {
        jfloat result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.floatValue());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "floatValue", args, 2);
      }

      static PyObject *t_Binary64_floor(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.floor());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_getField(t_Binary64 *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Binary64));
      }

      static PyObject *t_Binary64_getPi(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.getPi());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_getReal(t_Binary64 *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Binary64_hashCode(t_Binary64 *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Binary64_hypot(t_Binary64 *self, PyObject *arg)
      {
        Binary64 a0((jobject) NULL);
        Binary64 result((jobject) NULL);

        if (!parseArg(arg, "k", Binary64::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.hypot(a0));
          return t_Binary64::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hypot", arg);
        return NULL;
      }

      static PyObject *t_Binary64_intValue(t_Binary64 *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.intValue());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "intValue", args, 2);
      }

      static PyObject *t_Binary64_isInfinite(t_Binary64 *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInfinite());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Binary64_isNaN(t_Binary64 *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNaN());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Binary64_isZero(t_Binary64 *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isZero());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Binary64_linearCombination(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< Binary64 > a1((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "[D[k", Binary64::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            JArray< Binary64 > a0((jobject) NULL);
            JArray< Binary64 > a1((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "[k[k", Binary64::initializeClass, Binary64::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Binary64::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            Binary64 a0((jobject) NULL);
            Binary64 a1((jobject) NULL);
            Binary64 a2((jobject) NULL);
            Binary64 a3((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "kkkk", Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 a1((jobject) NULL);
            jdouble a2;
            Binary64 a3((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "DkDk", Binary64::initializeClass, Binary64::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Binary64::wrap_Object(result);
            }
          }
          break;
         case 6:
          {
            Binary64 a0((jobject) NULL);
            Binary64 a1((jobject) NULL);
            Binary64 a2((jobject) NULL);
            Binary64 a3((jobject) NULL);
            Binary64 a4((jobject) NULL);
            Binary64 a5((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "kkkkkk", Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 a1((jobject) NULL);
            jdouble a2;
            Binary64 a3((jobject) NULL);
            jdouble a4;
            Binary64 a5((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "DkDkDk", Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Binary64::wrap_Object(result);
            }
          }
          break;
         case 8:
          {
            Binary64 a0((jobject) NULL);
            Binary64 a1((jobject) NULL);
            Binary64 a2((jobject) NULL);
            Binary64 a3((jobject) NULL);
            Binary64 a4((jobject) NULL);
            Binary64 a5((jobject) NULL);
            Binary64 a6((jobject) NULL);
            Binary64 a7((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "kkkkkkkk", Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 a1((jobject) NULL);
            jdouble a2;
            Binary64 a3((jobject) NULL);
            jdouble a4;
            Binary64 a5((jobject) NULL);
            jdouble a6;
            Binary64 a7((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "DkDkDkDk", Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
        return NULL;
      }

      static PyObject *t_Binary64_log(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.log());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_log10(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.log10());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_log1p(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.log1p());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_longValue(t_Binary64 *self, PyObject *args)
      {
        jlong result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.longValue());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "longValue", args, 2);
      }

      static PyObject *t_Binary64_multiply(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jint a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_Binary64_negate(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_newInstance(t_Binary64 *self, PyObject *arg)
      {
        jdouble a0;
        Binary64 result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.newInstance(a0));
          return t_Binary64::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
        return NULL;
      }

      static PyObject *t_Binary64_pow(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jint a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pow", args);
        return NULL;
      }

      static PyObject *t_Binary64_reciprocal(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_remainder(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "remainder", args);
        return NULL;
      }

      static PyObject *t_Binary64_rint(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.rint());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_rootN(t_Binary64 *self, PyObject *arg)
      {
        jint a0;
        Binary64 result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.rootN(a0));
          return t_Binary64::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "rootN", arg);
        return NULL;
      }

      static PyObject *t_Binary64_scalb(t_Binary64 *self, PyObject *arg)
      {
        jint a0;
        Binary64 result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.scalb(a0));
          return t_Binary64::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalb", arg);
        return NULL;
      }

      static PyObject *t_Binary64_shortValue(t_Binary64 *self, PyObject *args)
      {
        jshort result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.shortValue());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "shortValue", args, 2);
      }

      static PyObject *t_Binary64_sign(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.sign());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_sin(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.sin());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_sinCos(t_Binary64 *self)
      {
        ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
        OBJ_CALL(result = self->object.sinCos());
        return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Binary64));
      }

      static PyObject *t_Binary64_sinh(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.sinh());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_sinhCosh(t_Binary64 *self)
      {
        ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
        OBJ_CALL(result = self->object.sinhCosh());
        return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Binary64));
      }

      static PyObject *t_Binary64_sqrt(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_subtract(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_Binary64_tan(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.tan());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_tanh(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.tanh());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_toDegrees(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.toDegrees());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_toRadians(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.toRadians());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_toString(t_Binary64 *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Binary64_ulp(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.ulp());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_get__field(t_Binary64 *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_Binary64_get__infinite(t_Binary64 *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Binary64_get__naN(t_Binary64 *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Binary64_get__pi(t_Binary64 *self, void *data)
      {
        Binary64 value((jobject) NULL);
        OBJ_CALL(value = self->object.getPi());
        return t_Binary64::wrap_Object(value);
      }

      static PyObject *t_Binary64_get__real(t_Binary64 *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Binary64_get__zero(t_Binary64 *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isZero());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *AdditionalCovarianceMetadata::class$ = NULL;
            jmethodID *AdditionalCovarianceMetadata::mids$ = NULL;
            bool AdditionalCovarianceMetadata::live$ = false;

            jclass AdditionalCovarianceMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getDcpSensitivityVectorPosition_7cdc325af0834901] = env->getMethodID(cls, "getDcpSensitivityVectorPosition", "()[D");
                mids$[mid_getDcpSensitivityVectorVelocity_7cdc325af0834901] = env->getMethodID(cls, "getDcpSensitivityVectorVelocity", "()[D");
                mids$[mid_getDensityForecastUncertainty_456d9a2f64d6b28d] = env->getMethodID(cls, "getDensityForecastUncertainty", "()D");
                mids$[mid_getScreeningDataSource_0090f7797e403f43] = env->getMethodID(cls, "getScreeningDataSource", "()Ljava/lang/String;");
                mids$[mid_getcScaleFactor_456d9a2f64d6b28d] = env->getMethodID(cls, "getcScaleFactor", "()D");
                mids$[mid_getcScaleFactorMax_456d9a2f64d6b28d] = env->getMethodID(cls, "getcScaleFactorMax", "()D");
                mids$[mid_getcScaleFactorMin_456d9a2f64d6b28d] = env->getMethodID(cls, "getcScaleFactorMin", "()D");
                mids$[mid_setDcpSensitivityVectorPosition_ebc26dcaf4761286] = env->getMethodID(cls, "setDcpSensitivityVectorPosition", "([D)V");
                mids$[mid_setDcpSensitivityVectorVelocity_ebc26dcaf4761286] = env->getMethodID(cls, "setDcpSensitivityVectorVelocity", "([D)V");
                mids$[mid_setDensityForecastUncertainty_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDensityForecastUncertainty", "(D)V");
                mids$[mid_setScreeningDataSource_e939c6558ae8d313] = env->getMethodID(cls, "setScreeningDataSource", "(Ljava/lang/String;)V");
                mids$[mid_setcScaleFactor_77e0f9a1f260e2e5] = env->getMethodID(cls, "setcScaleFactor", "(D)V");
                mids$[mid_setcScaleFactorMax_77e0f9a1f260e2e5] = env->getMethodID(cls, "setcScaleFactorMax", "(D)V");
                mids$[mid_setcScaleFactorMin_77e0f9a1f260e2e5] = env->getMethodID(cls, "setcScaleFactorMin", "(D)V");
                mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AdditionalCovarianceMetadata::AdditionalCovarianceMetadata() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            JArray< jdouble > AdditionalCovarianceMetadata::getDcpSensitivityVectorPosition() const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getDcpSensitivityVectorPosition_7cdc325af0834901]));
            }

            JArray< jdouble > AdditionalCovarianceMetadata::getDcpSensitivityVectorVelocity() const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getDcpSensitivityVectorVelocity_7cdc325af0834901]));
            }

            jdouble AdditionalCovarianceMetadata::getDensityForecastUncertainty() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDensityForecastUncertainty_456d9a2f64d6b28d]);
            }

            ::java::lang::String AdditionalCovarianceMetadata::getScreeningDataSource() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getScreeningDataSource_0090f7797e403f43]));
            }

            jdouble AdditionalCovarianceMetadata::getcScaleFactor() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getcScaleFactor_456d9a2f64d6b28d]);
            }

            jdouble AdditionalCovarianceMetadata::getcScaleFactorMax() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getcScaleFactorMax_456d9a2f64d6b28d]);
            }

            jdouble AdditionalCovarianceMetadata::getcScaleFactorMin() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getcScaleFactorMin_456d9a2f64d6b28d]);
            }

            void AdditionalCovarianceMetadata::setDcpSensitivityVectorPosition(const JArray< jdouble > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDcpSensitivityVectorPosition_ebc26dcaf4761286], a0.this$);
            }

            void AdditionalCovarianceMetadata::setDcpSensitivityVectorVelocity(const JArray< jdouble > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDcpSensitivityVectorVelocity_ebc26dcaf4761286], a0.this$);
            }

            void AdditionalCovarianceMetadata::setDensityForecastUncertainty(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDensityForecastUncertainty_77e0f9a1f260e2e5], a0);
            }

            void AdditionalCovarianceMetadata::setScreeningDataSource(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreeningDataSource_e939c6558ae8d313], a0.this$);
            }

            void AdditionalCovarianceMetadata::setcScaleFactor(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setcScaleFactor_77e0f9a1f260e2e5], a0);
            }

            void AdditionalCovarianceMetadata::setcScaleFactorMax(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setcScaleFactorMax_77e0f9a1f260e2e5], a0);
            }

            void AdditionalCovarianceMetadata::setcScaleFactorMin(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setcScaleFactorMin_77e0f9a1f260e2e5], a0);
            }

            void AdditionalCovarianceMetadata::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
            static PyObject *t_AdditionalCovarianceMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AdditionalCovarianceMetadata_init_(t_AdditionalCovarianceMetadata *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AdditionalCovarianceMetadata_getDcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_getDcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_getDensityForecastUncertainty(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_getScreeningDataSource(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_getcScaleFactor(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_getcScaleFactorMax(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_getcScaleFactorMin(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_setDcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_setDcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_setDensityForecastUncertainty(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_setScreeningDataSource(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_setcScaleFactor(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_setcScaleFactorMax(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_setcScaleFactorMin(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_validate(t_AdditionalCovarianceMetadata *self, PyObject *args);
            static PyObject *t_AdditionalCovarianceMetadata_get__cScaleFactor(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__cScaleFactor(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalCovarianceMetadata_get__cScaleFactorMax(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__cScaleFactorMax(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalCovarianceMetadata_get__cScaleFactorMin(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__cScaleFactorMin(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalCovarianceMetadata_get__dcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__dcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalCovarianceMetadata_get__dcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__dcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalCovarianceMetadata_get__densityForecastUncertainty(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__densityForecastUncertainty(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalCovarianceMetadata_get__screeningDataSource(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__screeningDataSource(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_AdditionalCovarianceMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, cScaleFactor),
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, cScaleFactorMax),
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, cScaleFactorMin),
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, dcpSensitivityVectorPosition),
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, dcpSensitivityVectorVelocity),
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, densityForecastUncertainty),
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, screeningDataSource),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdditionalCovarianceMetadata__methods_[] = {
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getDcpSensitivityVectorPosition, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getDcpSensitivityVectorVelocity, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getDensityForecastUncertainty, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getScreeningDataSource, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getcScaleFactor, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getcScaleFactorMax, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getcScaleFactorMin, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setDcpSensitivityVectorPosition, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setDcpSensitivityVectorVelocity, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setDensityForecastUncertainty, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setScreeningDataSource, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setcScaleFactor, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setcScaleFactorMax, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setcScaleFactorMin, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdditionalCovarianceMetadata)[] = {
              { Py_tp_methods, t_AdditionalCovarianceMetadata__methods_ },
              { Py_tp_init, (void *) t_AdditionalCovarianceMetadata_init_ },
              { Py_tp_getset, t_AdditionalCovarianceMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdditionalCovarianceMetadata)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(AdditionalCovarianceMetadata, t_AdditionalCovarianceMetadata, AdditionalCovarianceMetadata);

            void t_AdditionalCovarianceMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(AdditionalCovarianceMetadata), &PY_TYPE_DEF(AdditionalCovarianceMetadata), module, "AdditionalCovarianceMetadata", 0);
            }

            void t_AdditionalCovarianceMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadata), "class_", make_descriptor(AdditionalCovarianceMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadata), "wrapfn_", make_descriptor(t_AdditionalCovarianceMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdditionalCovarianceMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdditionalCovarianceMetadata::initializeClass, 1)))
                return NULL;
              return t_AdditionalCovarianceMetadata::wrap_Object(AdditionalCovarianceMetadata(((t_AdditionalCovarianceMetadata *) arg)->object.this$));
            }
            static PyObject *t_AdditionalCovarianceMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdditionalCovarianceMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AdditionalCovarianceMetadata_init_(t_AdditionalCovarianceMetadata *self, PyObject *args, PyObject *kwds)
            {
              AdditionalCovarianceMetadata object((jobject) NULL);

              INT_CALL(object = AdditionalCovarianceMetadata());
              self->object = object;

              return 0;
            }

            static PyObject *t_AdditionalCovarianceMetadata_getDcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self)
            {
              JArray< jdouble > result((jobject) NULL);
              OBJ_CALL(result = self->object.getDcpSensitivityVectorPosition());
              return result.wrap();
            }

            static PyObject *t_AdditionalCovarianceMetadata_getDcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self)
            {
              JArray< jdouble > result((jobject) NULL);
              OBJ_CALL(result = self->object.getDcpSensitivityVectorVelocity());
              return result.wrap();
            }

            static PyObject *t_AdditionalCovarianceMetadata_getDensityForecastUncertainty(t_AdditionalCovarianceMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDensityForecastUncertainty());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalCovarianceMetadata_getScreeningDataSource(t_AdditionalCovarianceMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getScreeningDataSource());
              return j2p(result);
            }

            static PyObject *t_AdditionalCovarianceMetadata_getcScaleFactor(t_AdditionalCovarianceMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getcScaleFactor());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalCovarianceMetadata_getcScaleFactorMax(t_AdditionalCovarianceMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getcScaleFactorMax());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalCovarianceMetadata_getcScaleFactorMin(t_AdditionalCovarianceMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getcScaleFactorMin());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalCovarianceMetadata_setDcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
              {
                OBJ_CALL(self->object.setDcpSensitivityVectorPosition(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDcpSensitivityVectorPosition", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_setDcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
              {
                OBJ_CALL(self->object.setDcpSensitivityVectorVelocity(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDcpSensitivityVectorVelocity", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_setDensityForecastUncertainty(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDensityForecastUncertainty(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDensityForecastUncertainty", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_setScreeningDataSource(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setScreeningDataSource(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreeningDataSource", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_setcScaleFactor(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setcScaleFactor(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setcScaleFactor", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_setcScaleFactorMax(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setcScaleFactorMax(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setcScaleFactorMax", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_setcScaleFactorMin(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setcScaleFactorMin(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setcScaleFactorMin", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_validate(t_AdditionalCovarianceMetadata *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(AdditionalCovarianceMetadata), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__cScaleFactor(t_AdditionalCovarianceMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getcScaleFactor());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalCovarianceMetadata_set__cScaleFactor(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setcScaleFactor(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cScaleFactor", arg);
              return -1;
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__cScaleFactorMax(t_AdditionalCovarianceMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getcScaleFactorMax());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalCovarianceMetadata_set__cScaleFactorMax(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setcScaleFactorMax(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cScaleFactorMax", arg);
              return -1;
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__cScaleFactorMin(t_AdditionalCovarianceMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getcScaleFactorMin());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalCovarianceMetadata_set__cScaleFactorMin(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setcScaleFactorMin(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cScaleFactorMin", arg);
              return -1;
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__dcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self, void *data)
            {
              JArray< jdouble > value((jobject) NULL);
              OBJ_CALL(value = self->object.getDcpSensitivityVectorPosition());
              return value.wrap();
            }
            static int t_AdditionalCovarianceMetadata_set__dcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                JArray< jdouble > value((jobject) NULL);
                if (!parseArg(arg, "[D", &value))
                {
                  INT_CALL(self->object.setDcpSensitivityVectorPosition(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dcpSensitivityVectorPosition", arg);
              return -1;
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__dcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self, void *data)
            {
              JArray< jdouble > value((jobject) NULL);
              OBJ_CALL(value = self->object.getDcpSensitivityVectorVelocity());
              return value.wrap();
            }
            static int t_AdditionalCovarianceMetadata_set__dcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                JArray< jdouble > value((jobject) NULL);
                if (!parseArg(arg, "[D", &value))
                {
                  INT_CALL(self->object.setDcpSensitivityVectorVelocity(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dcpSensitivityVectorVelocity", arg);
              return -1;
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__densityForecastUncertainty(t_AdditionalCovarianceMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDensityForecastUncertainty());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalCovarianceMetadata_set__densityForecastUncertainty(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDensityForecastUncertainty(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "densityForecastUncertainty", arg);
              return -1;
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__screeningDataSource(t_AdditionalCovarianceMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getScreeningDataSource());
              return j2p(value);
            }
            static int t_AdditionalCovarianceMetadata_set__screeningDataSource(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setScreeningDataSource(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screeningDataSource", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
