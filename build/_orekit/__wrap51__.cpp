#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/FieldBodiesElements.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
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
          mids$[mid_init$_e15296bba89d8c64] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getLE_613c8f46c659f636] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLEDot_613c8f46c659f636] = env->getMethodID(cls, "getLEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLJu_613c8f46c659f636] = env->getMethodID(cls, "getLJu", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLJuDot_613c8f46c659f636] = env->getMethodID(cls, "getLJuDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMa_613c8f46c659f636] = env->getMethodID(cls, "getLMa", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMaDot_613c8f46c659f636] = env->getMethodID(cls, "getLMaDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMe_613c8f46c659f636] = env->getMethodID(cls, "getLMe", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMeDot_613c8f46c659f636] = env->getMethodID(cls, "getLMeDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLNe_613c8f46c659f636] = env->getMethodID(cls, "getLNe", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLNeDot_613c8f46c659f636] = env->getMethodID(cls, "getLNeDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLSa_613c8f46c659f636] = env->getMethodID(cls, "getLSa", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLSaDot_613c8f46c659f636] = env->getMethodID(cls, "getLSaDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLUr_613c8f46c659f636] = env->getMethodID(cls, "getLUr", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLUrDot_613c8f46c659f636] = env->getMethodID(cls, "getLUrDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLVe_613c8f46c659f636] = env->getMethodID(cls, "getLVe", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLVeDot_613c8f46c659f636] = env->getMethodID(cls, "getLVeDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPa_613c8f46c659f636] = env->getMethodID(cls, "getPa", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPaDot_613c8f46c659f636] = env->getMethodID(cls, "getPaDot", "()Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldBodiesElements::FieldBodiesElements(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::hipparchus::CalculusFieldElement & a12, const ::org::hipparchus::CalculusFieldElement & a13, const ::org::hipparchus::CalculusFieldElement & a14, const ::org::hipparchus::CalculusFieldElement & a15, const ::org::hipparchus::CalculusFieldElement & a16, const ::org::hipparchus::CalculusFieldElement & a17, const ::org::hipparchus::CalculusFieldElement & a18, const ::org::hipparchus::CalculusFieldElement & a19, const ::org::hipparchus::CalculusFieldElement & a20, const ::org::hipparchus::CalculusFieldElement & a21, const ::org::hipparchus::CalculusFieldElement & a22, const ::org::hipparchus::CalculusFieldElement & a23, const ::org::hipparchus::CalculusFieldElement & a24, const ::org::hipparchus::CalculusFieldElement & a25, const ::org::hipparchus::CalculusFieldElement & a26, const ::org::hipparchus::CalculusFieldElement & a27, const ::org::hipparchus::CalculusFieldElement & a28, const ::org::hipparchus::CalculusFieldElement & a29, const ::org::hipparchus::CalculusFieldElement & a30, const ::org::hipparchus::CalculusFieldElement & a31) : ::org::orekit::data::FieldDelaunayArguments(env->newObject(initializeClass, &mids$, mid_init$_e15296bba89d8c64, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$, a16.this$, a17.this$, a18.this$, a19.this$, a20.this$, a21.this$, a22.this$, a23.this$, a24.this$, a25.this$, a26.this$, a27.this$, a28.this$, a29.this$, a30.this$, a31.this$)) {}

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLEDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLJu() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLJu_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLJuDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLJuDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLMa() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMa_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLMaDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMaDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLMe() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMe_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLMeDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMeDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLNe() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLNe_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLNeDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLNeDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLSa() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLSa_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLSaDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLSaDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLUr() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLUr_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLUrDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLUrDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLVe() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLVe_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLVeDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLVeDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getPa() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPa_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getPaDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPaDot_613c8f46c659f636]));
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
#include "org/orekit/time/PythonFieldTimeInterpolator.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/FieldTimeInterpolator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonFieldTimeInterpolator::class$ = NULL;
      jmethodID *PythonFieldTimeInterpolator::mids$ = NULL;
      bool PythonFieldTimeInterpolator::live$ = false;

      jclass PythonFieldTimeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonFieldTimeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getExtrapolationThreshold_557b8123390d8d0c] = env->getMethodID(cls, "getExtrapolationThreshold", "()D");
          mids$[mid_getNbInterpolationPoints_412668abc8d889e9] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getSubInterpolators_0d9551367f7ecdef] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_0d1a3de47e765f3f] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/FieldTimeInterpolator;");
          mids$[mid_interpolate_1a679ded4d218b1e] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/FieldTimeInterpolator;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldTimeInterpolator::PythonFieldTimeInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonFieldTimeInterpolator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonFieldTimeInterpolator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonFieldTimeInterpolator::pythonExtension(jlong a0) const
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
    namespace time {
      static PyObject *t_PythonFieldTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeInterpolator_of_(t_PythonFieldTimeInterpolator *self, PyObject *args);
      static int t_PythonFieldTimeInterpolator_init_(t_PythonFieldTimeInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldTimeInterpolator_finalize(t_PythonFieldTimeInterpolator *self);
      static PyObject *t_PythonFieldTimeInterpolator_pythonExtension(t_PythonFieldTimeInterpolator *self, PyObject *args);
      static jdouble JNICALL t_PythonFieldTimeInterpolator_getExtrapolationThreshold0(JNIEnv *jenv, jobject jobj);
      static jint JNICALL t_PythonFieldTimeInterpolator_getNbInterpolationPoints1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldTimeInterpolator_getSubInterpolators2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldTimeInterpolator_interpolate3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonFieldTimeInterpolator_interpolate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonFieldTimeInterpolator_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldTimeInterpolator_get__self(t_PythonFieldTimeInterpolator *self, void *data);
      static PyObject *t_PythonFieldTimeInterpolator_get__parameters_(t_PythonFieldTimeInterpolator *self, void *data);
      static PyGetSetDef t_PythonFieldTimeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldTimeInterpolator, self),
        DECLARE_GET_FIELD(t_PythonFieldTimeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldTimeInterpolator__methods_[] = {
        DECLARE_METHOD(t_PythonFieldTimeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldTimeInterpolator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldTimeInterpolator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldTimeInterpolator)[] = {
        { Py_tp_methods, t_PythonFieldTimeInterpolator__methods_ },
        { Py_tp_init, (void *) t_PythonFieldTimeInterpolator_init_ },
        { Py_tp_getset, t_PythonFieldTimeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldTimeInterpolator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldTimeInterpolator, t_PythonFieldTimeInterpolator, PythonFieldTimeInterpolator);
      PyObject *t_PythonFieldTimeInterpolator::wrap_Object(const PythonFieldTimeInterpolator& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFieldTimeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeInterpolator *self = (t_PythonFieldTimeInterpolator *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_PythonFieldTimeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFieldTimeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeInterpolator *self = (t_PythonFieldTimeInterpolator *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_PythonFieldTimeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldTimeInterpolator), &PY_TYPE_DEF(PythonFieldTimeInterpolator), module, "PythonFieldTimeInterpolator", 1);
      }

      void t_PythonFieldTimeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeInterpolator), "class_", make_descriptor(PythonFieldTimeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeInterpolator), "wrapfn_", make_descriptor(t_PythonFieldTimeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeInterpolator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldTimeInterpolator::initializeClass);
        JNINativeMethod methods[] = {
          { "getExtrapolationThreshold", "()D", (void *) t_PythonFieldTimeInterpolator_getExtrapolationThreshold0 },
          { "getNbInterpolationPoints", "()I", (void *) t_PythonFieldTimeInterpolator_getNbInterpolationPoints1 },
          { "getSubInterpolators", "()Ljava/util/List;", (void *) t_PythonFieldTimeInterpolator_getSubInterpolators2 },
          { "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/FieldTimeInterpolator;", (void *) t_PythonFieldTimeInterpolator_interpolate3 },
          { "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/FieldTimeInterpolator;", (void *) t_PythonFieldTimeInterpolator_interpolate4 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldTimeInterpolator_pythonDecRef5 },
        };
        env->registerNatives(cls, methods, 6);
      }

      static PyObject *t_PythonFieldTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldTimeInterpolator::initializeClass, 1)))
          return NULL;
        return t_PythonFieldTimeInterpolator::wrap_Object(PythonFieldTimeInterpolator(((t_PythonFieldTimeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldTimeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldTimeInterpolator_of_(t_PythonFieldTimeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldTimeInterpolator_init_(t_PythonFieldTimeInterpolator *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldTimeInterpolator object((jobject) NULL);

        INT_CALL(object = PythonFieldTimeInterpolator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldTimeInterpolator_finalize(t_PythonFieldTimeInterpolator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldTimeInterpolator_pythonExtension(t_PythonFieldTimeInterpolator *self, PyObject *args)
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

      static jdouble JNICALL t_PythonFieldTimeInterpolator_getExtrapolationThreshold0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getExtrapolationThreshold", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getExtrapolationThreshold", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jint JNICALL t_PythonFieldTimeInterpolator_getNbInterpolationPoints1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jint value;
        PyObject *result = PyObject_CallMethod(obj, "getNbInterpolationPoints", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "I", &value))
        {
          throwTypeError("getNbInterpolationPoints", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jint) 0;
      }

      static jobject JNICALL t_PythonFieldTimeInterpolator_getSubInterpolators2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getSubInterpolators", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getSubInterpolators", result);
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

      static jobject JNICALL t_PythonFieldTimeInterpolator_interpolate3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldTimeInterpolator value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::java::util::t_Collection::wrap_Object(::java::util::Collection(a1));
        PyObject *result = PyObject_CallMethod(obj, "interpolate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldTimeInterpolator::initializeClass, &value))
        {
          throwTypeError("interpolate", result);
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

      static jobject JNICALL t_PythonFieldTimeInterpolator_interpolate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldTimeInterpolator value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::java::util::stream::t_Stream::wrap_Object(::java::util::stream::Stream(a1));
        PyObject *result = PyObject_CallMethod(obj, "interpolate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldTimeInterpolator::initializeClass, &value))
        {
          throwTypeError("interpolate", result);
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

      static void JNICALL t_PythonFieldTimeInterpolator_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldTimeInterpolator_get__self(t_PythonFieldTimeInterpolator *self, void *data)
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
      static PyObject *t_PythonFieldTimeInterpolator_get__parameters_(t_PythonFieldTimeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/VectorFormat.h"
#include "java/text/ParsePosition.h"
#include "java/util/Locale.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "java/lang/StringBuffer.h"
#include "java/text/FieldPosition.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {

      ::java::lang::Class *VectorFormat::class$ = NULL;
      jmethodID *VectorFormat::mids$ = NULL;
      bool VectorFormat::live$ = false;
      ::java::lang::String *VectorFormat::DEFAULT_PREFIX = NULL;
      ::java::lang::String *VectorFormat::DEFAULT_SEPARATOR = NULL;
      ::java::lang::String *VectorFormat::DEFAULT_SUFFIX = NULL;

      jclass VectorFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/geometry/VectorFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_format_fbc9c473747e1713] = env->getMethodID(cls, "format", "(Lorg/hipparchus/geometry/Vector;)Ljava/lang/String;");
          mids$[mid_format_6f1f6993f3124ea0] = env->getMethodID(cls, "format", "(Lorg/hipparchus/geometry/Vector;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getAvailableLocales_85ff0d07ca843902] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
          mids$[mid_getFormat_001645e916bd626d] = env->getMethodID(cls, "getFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getPrefix_3cffd47377eca18a] = env->getMethodID(cls, "getPrefix", "()Ljava/lang/String;");
          mids$[mid_getSeparator_3cffd47377eca18a] = env->getMethodID(cls, "getSeparator", "()Ljava/lang/String;");
          mids$[mid_getSuffix_3cffd47377eca18a] = env->getMethodID(cls, "getSuffix", "()Ljava/lang/String;");
          mids$[mid_parse_7236b6f35bbe732b] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_parse_a9ea402cd0957b38] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_parseCoordinates_cb64af18199b2965] = env->getMethodID(cls, "parseCoordinates", "(ILjava/lang/String;Ljava/text/ParsePosition;)[D");
          mids$[mid_format_fa4f8fe137c30573] = env->getMethodID(cls, "format", "(Ljava/lang/StringBuffer;Ljava/text/FieldPosition;[D)Ljava/lang/StringBuffer;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_PREFIX", "Ljava/lang/String;"));
          DEFAULT_SEPARATOR = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SEPARATOR", "Ljava/lang/String;"));
          DEFAULT_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUFFIX", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String VectorFormat::format(const ::org::hipparchus::geometry::Vector & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_fbc9c473747e1713], a0.this$));
      }

      ::java::lang::StringBuffer VectorFormat::format(const ::org::hipparchus::geometry::Vector & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_6f1f6993f3124ea0], a0.this$, a1.this$, a2.this$));
      }

      JArray< ::java::util::Locale > VectorFormat::getAvailableLocales()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_85ff0d07ca843902]));
      }

      ::java::text::NumberFormat VectorFormat::getFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getFormat_001645e916bd626d]));
      }

      ::java::lang::String VectorFormat::getPrefix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrefix_3cffd47377eca18a]));
      }

      ::java::lang::String VectorFormat::getSeparator() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSeparator_3cffd47377eca18a]));
      }

      ::java::lang::String VectorFormat::getSuffix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSuffix_3cffd47377eca18a]));
      }

      ::org::hipparchus::geometry::Vector VectorFormat::parse(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::geometry::Vector(env->callObjectMethod(this$, mids$[mid_parse_7236b6f35bbe732b], a0.this$));
      }

      ::org::hipparchus::geometry::Vector VectorFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::geometry::Vector(env->callObjectMethod(this$, mids$[mid_parse_a9ea402cd0957b38], a0.this$, a1.this$));
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
      static PyObject *t_VectorFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_VectorFormat_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_VectorFormat_of_(t_VectorFormat *self, PyObject *args);
      static PyObject *t_VectorFormat_format(t_VectorFormat *self, PyObject *args);
      static PyObject *t_VectorFormat_getAvailableLocales(PyTypeObject *type);
      static PyObject *t_VectorFormat_getFormat(t_VectorFormat *self);
      static PyObject *t_VectorFormat_getPrefix(t_VectorFormat *self);
      static PyObject *t_VectorFormat_getSeparator(t_VectorFormat *self);
      static PyObject *t_VectorFormat_getSuffix(t_VectorFormat *self);
      static PyObject *t_VectorFormat_parse(t_VectorFormat *self, PyObject *args);
      static PyObject *t_VectorFormat_get__availableLocales(t_VectorFormat *self, void *data);
      static PyObject *t_VectorFormat_get__prefix(t_VectorFormat *self, void *data);
      static PyObject *t_VectorFormat_get__separator(t_VectorFormat *self, void *data);
      static PyObject *t_VectorFormat_get__suffix(t_VectorFormat *self, void *data);
      static PyObject *t_VectorFormat_get__parameters_(t_VectorFormat *self, void *data);
      static PyGetSetDef t_VectorFormat__fields_[] = {
        DECLARE_GET_FIELD(t_VectorFormat, availableLocales),
        DECLARE_GET_FIELD(t_VectorFormat, prefix),
        DECLARE_GET_FIELD(t_VectorFormat, separator),
        DECLARE_GET_FIELD(t_VectorFormat, suffix),
        DECLARE_GET_FIELD(t_VectorFormat, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_VectorFormat__methods_[] = {
        DECLARE_METHOD(t_VectorFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_VectorFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_VectorFormat, of_, METH_VARARGS),
        DECLARE_METHOD(t_VectorFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_VectorFormat, getAvailableLocales, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_VectorFormat, getFormat, METH_NOARGS),
        DECLARE_METHOD(t_VectorFormat, getPrefix, METH_NOARGS),
        DECLARE_METHOD(t_VectorFormat, getSeparator, METH_NOARGS),
        DECLARE_METHOD(t_VectorFormat, getSuffix, METH_NOARGS),
        DECLARE_METHOD(t_VectorFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(VectorFormat)[] = {
        { Py_tp_methods, t_VectorFormat__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_VectorFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(VectorFormat)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(VectorFormat, t_VectorFormat, VectorFormat);
      PyObject *t_VectorFormat::wrap_Object(const VectorFormat& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_VectorFormat::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_VectorFormat *self = (t_VectorFormat *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_VectorFormat::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_VectorFormat::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_VectorFormat *self = (t_VectorFormat *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_VectorFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(VectorFormat), &PY_TYPE_DEF(VectorFormat), module, "VectorFormat", 0);
      }

      void t_VectorFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(VectorFormat), "class_", make_descriptor(VectorFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VectorFormat), "wrapfn_", make_descriptor(t_VectorFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VectorFormat), "boxfn_", make_descriptor(boxObject));
        env->getClass(VectorFormat::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(VectorFormat), "DEFAULT_PREFIX", make_descriptor(j2p(*VectorFormat::DEFAULT_PREFIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VectorFormat), "DEFAULT_SEPARATOR", make_descriptor(j2p(*VectorFormat::DEFAULT_SEPARATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VectorFormat), "DEFAULT_SUFFIX", make_descriptor(j2p(*VectorFormat::DEFAULT_SUFFIX)));
      }

      static PyObject *t_VectorFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, VectorFormat::initializeClass, 1)))
          return NULL;
        return t_VectorFormat::wrap_Object(VectorFormat(((t_VectorFormat *) arg)->object.this$));
      }
      static PyObject *t_VectorFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, VectorFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_VectorFormat_of_(t_VectorFormat *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_VectorFormat_format(t_VectorFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.format(a0));
              return j2p(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::hipparchus::geometry::Vector::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "format", args);
        return NULL;
      }

      static PyObject *t_VectorFormat_getAvailableLocales(PyTypeObject *type)
      {
        JArray< ::java::util::Locale > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::geometry::VectorFormat::getAvailableLocales());
        return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_VectorFormat_getFormat(t_VectorFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_VectorFormat_getPrefix(t_VectorFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrefix());
        return j2p(result);
      }

      static PyObject *t_VectorFormat_getSeparator(t_VectorFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSeparator());
        return j2p(result);
      }

      static PyObject *t_VectorFormat_getSuffix(t_VectorFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSuffix());
        return j2p(result);
      }

      static PyObject *t_VectorFormat_parse(t_VectorFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::geometry::Vector result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::hipparchus::geometry::t_Vector::wrap_Object(result, self->parameters[0], self->parameters[1]);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::ParsePosition a1((jobject) NULL);
            ::org::hipparchus::geometry::Vector result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::hipparchus::geometry::t_Vector::wrap_Object(result, self->parameters[0], self->parameters[1]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }
      static PyObject *t_VectorFormat_get__parameters_(t_VectorFormat *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_VectorFormat_get__availableLocales(t_VectorFormat *self, void *data)
      {
        JArray< ::java::util::Locale > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAvailableLocales());
        return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_VectorFormat_get__prefix(t_VectorFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrefix());
        return j2p(value);
      }

      static PyObject *t_VectorFormat_get__separator(t_VectorFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSeparator());
        return j2p(value);
      }

      static PyObject *t_VectorFormat_get__suffix(t_VectorFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSuffix());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/WriterBuilder.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemWriter.h"
#include "org/orekit/files/ccsds/ndm/WriterBuilder.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmWriter.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmWriter.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/NdmWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmWriter.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmWriter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *WriterBuilder::class$ = NULL;
          jmethodID *WriterBuilder::mids$ = NULL;
          bool WriterBuilder::live$ = false;

          jclass WriterBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/WriterBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_23625b258f7a7479] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataContext;)V");
              mids$[mid_buildAcmWriter_ac5c6bc604e80701] = env->getMethodID(cls, "buildAcmWriter", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AcmWriter;");
              mids$[mid_buildAemWriter_33553e3db5b6ee04] = env->getMethodID(cls, "buildAemWriter", "()Lorg/orekit/files/ccsds/ndm/adm/aem/AemWriter;");
              mids$[mid_buildApmWriter_d4f3fa41ba24df8c] = env->getMethodID(cls, "buildApmWriter", "()Lorg/orekit/files/ccsds/ndm/adm/apm/ApmWriter;");
              mids$[mid_buildCdmWriter_818b84fc38c0dd0d] = env->getMethodID(cls, "buildCdmWriter", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmWriter;");
              mids$[mid_buildNdmWriter_d903da0dc241993f] = env->getMethodID(cls, "buildNdmWriter", "()Lorg/orekit/files/ccsds/ndm/NdmWriter;");
              mids$[mid_buildOcmWriter_3263929edd1e4c42] = env->getMethodID(cls, "buildOcmWriter", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmWriter;");
              mids$[mid_buildOemWriter_adfe32f5643bf0a3] = env->getMethodID(cls, "buildOemWriter", "()Lorg/orekit/files/ccsds/ndm/odm/oem/OemWriter;");
              mids$[mid_buildOmmWriter_d77b2a4d53d61700] = env->getMethodID(cls, "buildOmmWriter", "()Lorg/orekit/files/ccsds/ndm/odm/omm/OmmWriter;");
              mids$[mid_buildOpmWriter_e4807266c3ecf516] = env->getMethodID(cls, "buildOpmWriter", "()Lorg/orekit/files/ccsds/ndm/odm/opm/OpmWriter;");
              mids$[mid_buildTdmWriter_28170177e5cccee1] = env->getMethodID(cls, "buildTdmWriter", "()Lorg/orekit/files/ccsds/ndm/tdm/TdmWriter;");
              mids$[mid_create_ddd6d526b48d2733] = env->getMethodID(cls, "create", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)Lorg/orekit/files/ccsds/ndm/WriterBuilder;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          WriterBuilder::WriterBuilder() : ::org::orekit::files::ccsds::ndm::AbstractBuilder(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          WriterBuilder::WriterBuilder(const ::org::orekit::data::DataContext & a0) : ::org::orekit::files::ccsds::ndm::AbstractBuilder(env->newObject(initializeClass, &mids$, mid_init$_23625b258f7a7479, a0.this$)) {}

          ::org::orekit::files::ccsds::ndm::adm::acm::AcmWriter WriterBuilder::buildAcmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::adm::acm::AcmWriter(env->callObjectMethod(this$, mids$[mid_buildAcmWriter_ac5c6bc604e80701]));
          }

          ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter WriterBuilder::buildAemWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter(env->callObjectMethod(this$, mids$[mid_buildAemWriter_33553e3db5b6ee04]));
          }

          ::org::orekit::files::ccsds::ndm::adm::apm::ApmWriter WriterBuilder::buildApmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::adm::apm::ApmWriter(env->callObjectMethod(this$, mids$[mid_buildApmWriter_d4f3fa41ba24df8c]));
          }

          ::org::orekit::files::ccsds::ndm::cdm::CdmWriter WriterBuilder::buildCdmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::cdm::CdmWriter(env->callObjectMethod(this$, mids$[mid_buildCdmWriter_818b84fc38c0dd0d]));
          }

          ::org::orekit::files::ccsds::ndm::NdmWriter WriterBuilder::buildNdmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::NdmWriter(env->callObjectMethod(this$, mids$[mid_buildNdmWriter_d903da0dc241993f]));
          }

          ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter WriterBuilder::buildOcmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter(env->callObjectMethod(this$, mids$[mid_buildOcmWriter_3263929edd1e4c42]));
          }

          ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter WriterBuilder::buildOemWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter(env->callObjectMethod(this$, mids$[mid_buildOemWriter_adfe32f5643bf0a3]));
          }

          ::org::orekit::files::ccsds::ndm::odm::omm::OmmWriter WriterBuilder::buildOmmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::omm::OmmWriter(env->callObjectMethod(this$, mids$[mid_buildOmmWriter_d77b2a4d53d61700]));
          }

          ::org::orekit::files::ccsds::ndm::odm::opm::OpmWriter WriterBuilder::buildOpmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::opm::OpmWriter(env->callObjectMethod(this$, mids$[mid_buildOpmWriter_e4807266c3ecf516]));
          }

          ::org::orekit::files::ccsds::ndm::tdm::TdmWriter WriterBuilder::buildTdmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::tdm::TdmWriter(env->callObjectMethod(this$, mids$[mid_buildTdmWriter_28170177e5cccee1]));
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
          static PyObject *t_WriterBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WriterBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WriterBuilder_of_(t_WriterBuilder *self, PyObject *args);
          static int t_WriterBuilder_init_(t_WriterBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_WriterBuilder_buildAcmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildAemWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildApmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildCdmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildNdmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildOcmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildOemWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildOmmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildOpmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildTdmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_get__parameters_(t_WriterBuilder *self, void *data);
          static PyGetSetDef t_WriterBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_WriterBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_WriterBuilder__methods_[] = {
            DECLARE_METHOD(t_WriterBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WriterBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WriterBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_WriterBuilder, buildAcmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildAemWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildApmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildCdmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildNdmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildOcmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildOemWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildOmmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildOpmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildTdmWriter, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(WriterBuilder)[] = {
            { Py_tp_methods, t_WriterBuilder__methods_ },
            { Py_tp_init, (void *) t_WriterBuilder_init_ },
            { Py_tp_getset, t_WriterBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(WriterBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::AbstractBuilder),
            NULL
          };

          DEFINE_TYPE(WriterBuilder, t_WriterBuilder, WriterBuilder);
          PyObject *t_WriterBuilder::wrap_Object(const WriterBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_WriterBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_WriterBuilder *self = (t_WriterBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_WriterBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_WriterBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_WriterBuilder *self = (t_WriterBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_WriterBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(WriterBuilder), &PY_TYPE_DEF(WriterBuilder), module, "WriterBuilder", 0);
          }

          void t_WriterBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(WriterBuilder), "class_", make_descriptor(WriterBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WriterBuilder), "wrapfn_", make_descriptor(t_WriterBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WriterBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_WriterBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, WriterBuilder::initializeClass, 1)))
              return NULL;
            return t_WriterBuilder::wrap_Object(WriterBuilder(((t_WriterBuilder *) arg)->object.this$));
          }
          static PyObject *t_WriterBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, WriterBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_WriterBuilder_of_(t_WriterBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_WriterBuilder_init_(t_WriterBuilder *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                WriterBuilder object((jobject) NULL);

                INT_CALL(object = WriterBuilder());
                self->object = object;
                self->parameters[0] = ::org::orekit::files::ccsds::ndm::PY_TYPE(WriterBuilder);
                break;
              }
             case 1:
              {
                ::org::orekit::data::DataContext a0((jobject) NULL);
                WriterBuilder object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
                {
                  INT_CALL(object = WriterBuilder(a0));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::PY_TYPE(WriterBuilder);
                  break;
                }
              }
             default:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_WriterBuilder_buildAcmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::adm::acm::AcmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildAcmWriter());
            return ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildAemWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildAemWriter());
            return ::org::orekit::files::ccsds::ndm::adm::aem::t_AemWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildApmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::adm::apm::ApmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildApmWriter());
            return ::org::orekit::files::ccsds::ndm::adm::apm::t_ApmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildCdmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::cdm::CdmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildCdmWriter());
            return ::org::orekit::files::ccsds::ndm::cdm::t_CdmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildNdmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::NdmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildNdmWriter());
            return ::org::orekit::files::ccsds::ndm::t_NdmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildOcmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOcmWriter());
            return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildOemWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOemWriter());
            return ::org::orekit::files::ccsds::ndm::odm::oem::t_OemWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildOmmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::omm::OmmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOmmWriter());
            return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildOpmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::opm::OpmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOpmWriter());
            return ::org::orekit::files::ccsds::ndm::odm::opm::t_OpmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildTdmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::tdm::TdmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildTdmWriter());
            return ::org::orekit::files::ccsds::ndm::tdm::t_TdmWriter::wrap_Object(result);
          }
          static PyObject *t_WriterBuilder_get__parameters_(t_WriterBuilder *self, void *data)
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
#include "org/hipparchus/ode/EquationsMapper.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *EquationsMapper::class$ = NULL;
      jmethodID *EquationsMapper::mids$ = NULL;
      bool EquationsMapper::live$ = false;

      jclass EquationsMapper::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/EquationsMapper");

          mids$ = new jmethodID[max_mid];
          mids$[mid_extractEquationData_545d7714bece21ed] = env->getMethodID(cls, "extractEquationData", "(I[D)[D");
          mids$[mid_getNumberOfEquations_412668abc8d889e9] = env->getMethodID(cls, "getNumberOfEquations", "()I");
          mids$[mid_getTotalDimension_412668abc8d889e9] = env->getMethodID(cls, "getTotalDimension", "()I");
          mids$[mid_insertEquationData_4b60b99b94da8ca7] = env->getMethodID(cls, "insertEquationData", "(I[D[D)V");
          mids$[mid_mapStateAndDerivative_f8a8d5145e03dbab] = env->getMethodID(cls, "mapStateAndDerivative", "(D[D[D)Lorg/hipparchus/ode/ODEStateAndDerivative;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > EquationsMapper::extractEquationData(jint a0, const JArray< jdouble > & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_extractEquationData_545d7714bece21ed], a0, a1.this$));
      }

      jint EquationsMapper::getNumberOfEquations() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumberOfEquations_412668abc8d889e9]);
      }

      jint EquationsMapper::getTotalDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getTotalDimension_412668abc8d889e9]);
      }

      void EquationsMapper::insertEquationData(jint a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_insertEquationData_4b60b99b94da8ca7], a0, a1.this$, a2.this$);
      }

      ::org::hipparchus::ode::ODEStateAndDerivative EquationsMapper::mapStateAndDerivative(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
      {
        return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_mapStateAndDerivative_f8a8d5145e03dbab], a0, a1.this$, a2.this$));
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
      static PyObject *t_EquationsMapper_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EquationsMapper_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EquationsMapper_extractEquationData(t_EquationsMapper *self, PyObject *args);
      static PyObject *t_EquationsMapper_getNumberOfEquations(t_EquationsMapper *self);
      static PyObject *t_EquationsMapper_getTotalDimension(t_EquationsMapper *self);
      static PyObject *t_EquationsMapper_insertEquationData(t_EquationsMapper *self, PyObject *args);
      static PyObject *t_EquationsMapper_mapStateAndDerivative(t_EquationsMapper *self, PyObject *args);
      static PyObject *t_EquationsMapper_get__numberOfEquations(t_EquationsMapper *self, void *data);
      static PyObject *t_EquationsMapper_get__totalDimension(t_EquationsMapper *self, void *data);
      static PyGetSetDef t_EquationsMapper__fields_[] = {
        DECLARE_GET_FIELD(t_EquationsMapper, numberOfEquations),
        DECLARE_GET_FIELD(t_EquationsMapper, totalDimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EquationsMapper__methods_[] = {
        DECLARE_METHOD(t_EquationsMapper, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EquationsMapper, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EquationsMapper, extractEquationData, METH_VARARGS),
        DECLARE_METHOD(t_EquationsMapper, getNumberOfEquations, METH_NOARGS),
        DECLARE_METHOD(t_EquationsMapper, getTotalDimension, METH_NOARGS),
        DECLARE_METHOD(t_EquationsMapper, insertEquationData, METH_VARARGS),
        DECLARE_METHOD(t_EquationsMapper, mapStateAndDerivative, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EquationsMapper)[] = {
        { Py_tp_methods, t_EquationsMapper__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_EquationsMapper__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EquationsMapper)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EquationsMapper, t_EquationsMapper, EquationsMapper);

      void t_EquationsMapper::install(PyObject *module)
      {
        installType(&PY_TYPE(EquationsMapper), &PY_TYPE_DEF(EquationsMapper), module, "EquationsMapper", 0);
      }

      void t_EquationsMapper::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EquationsMapper), "class_", make_descriptor(EquationsMapper::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EquationsMapper), "wrapfn_", make_descriptor(t_EquationsMapper::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EquationsMapper), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EquationsMapper_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EquationsMapper::initializeClass, 1)))
          return NULL;
        return t_EquationsMapper::wrap_Object(EquationsMapper(((t_EquationsMapper *) arg)->object.this$));
      }
      static PyObject *t_EquationsMapper_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EquationsMapper::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_EquationsMapper_extractEquationData(t_EquationsMapper *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(result = self->object.extractEquationData(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "extractEquationData", args);
        return NULL;
      }

      static PyObject *t_EquationsMapper_getNumberOfEquations(t_EquationsMapper *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumberOfEquations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_EquationsMapper_getTotalDimension(t_EquationsMapper *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getTotalDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_EquationsMapper_insertEquationData(t_EquationsMapper *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);

        if (!parseArgs(args, "I[D[D", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.insertEquationData(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "insertEquationData", args);
        return NULL;
      }

      static PyObject *t_EquationsMapper_mapStateAndDerivative(t_EquationsMapper *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);
        ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

        if (!parseArgs(args, "D[D[D", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.mapStateAndDerivative(a0, a1, a2));
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapStateAndDerivative", args);
        return NULL;
      }

      static PyObject *t_EquationsMapper_get__numberOfEquations(t_EquationsMapper *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumberOfEquations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_EquationsMapper_get__totalDimension(t_EquationsMapper *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getTotalDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/AbstractGenerator.h"
#include "java/io/IOException.h"
#include "java/util/List.h"
#include "java/lang/CharSequence.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "java/lang/Double.h"
#include "java/lang/Enum.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/lang/Appendable.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *AbstractGenerator::class$ = NULL;
            jmethodID *AbstractGenerator::mids$ = NULL;
            bool AbstractGenerator::live$ = false;

            jclass AbstractGenerator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/AbstractGenerator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_6e7c6a479ca124c5] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;Ljava/lang/String;DZ)V");
                mids$[mid_close_0640e6acf969ed28] = env->getMethodID(cls, "close", "()V");
                mids$[mid_dateToCalendarString_53bb79ba03b156ff] = env->getMethodID(cls, "dateToCalendarString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
                mids$[mid_dateToString_53bb79ba03b156ff] = env->getMethodID(cls, "dateToString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
                mids$[mid_dateToString_26917e8002e2fe0e] = env->getMethodID(cls, "dateToString", "(IIIIID)Ljava/lang/String;");
                mids$[mid_doubleToString_c03a7791f2fcb1f1] = env->getMethodID(cls, "doubleToString", "(D)Ljava/lang/String;");
                mids$[mid_enterSection_f5ffdf29129ef90a] = env->getMethodID(cls, "enterSection", "(Ljava/lang/String;)V");
                mids$[mid_exitSection_3cffd47377eca18a] = env->getMethodID(cls, "exitSection", "()Ljava/lang/String;");
                mids$[mid_getOutputName_3cffd47377eca18a] = env->getMethodID(cls, "getOutputName", "()Ljava/lang/String;");
                mids$[mid_newLine_0640e6acf969ed28] = env->getMethodID(cls, "newLine", "()V");
                mids$[mid_siToCcsdsName_60bb1b490b673cbf] = env->getMethodID(cls, "siToCcsdsName", "(Ljava/lang/String;)Ljava/lang/String;");
                mids$[mid_unitsListToString_efa2aa6df7244612] = env->getMethodID(cls, "unitsListToString", "(Ljava/util/List;)Ljava/lang/String;");
                mids$[mid_writeEntry_a576ec9025591acc] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/Enum;Z)V");
                mids$[mid_writeEntry_93ab992976af83e7] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;CZ)V");
                mids$[mid_writeEntry_011f5c0c4346496d] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;IZ)V");
                mids$[mid_writeEntry_134df300ac33b05f] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/util/List;Z)V");
                mids$[mid_writeEntry_23e19e02040a2cc2] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/Double;Lorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_8e286bd988c33b7f] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;DLorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_f678851e8742cc77] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;ZZ)V");
                mids$[mid_writeRawData_102587d250c3217b] = env->getMethodID(cls, "writeRawData", "(C)V");
                mids$[mid_writeRawData_01ce980d49cb2b81] = env->getMethodID(cls, "writeRawData", "(Ljava/lang/CharSequence;)V");
                mids$[mid_writeUnits_3afc691233085be6] = env->getMethodID(cls, "writeUnits", "(Lorg/orekit/utils/units/Unit;)Z");
                mids$[mid_complain_e5ca4b97ee6bd2b6] = env->getMethodID(cls, "complain", "(Ljava/lang/String;Z)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractGenerator::AbstractGenerator(const ::java::lang::Appendable & a0, const ::java::lang::String & a1, jdouble a2, jboolean a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6e7c6a479ca124c5, a0.this$, a1.this$, a2, a3)) {}

            void AbstractGenerator::close() const
            {
              env->callVoidMethod(this$, mids$[mid_close_0640e6acf969ed28]);
            }

            ::java::lang::String AbstractGenerator::dateToCalendarString(const ::org::orekit::files::ccsds::definitions::TimeConverter & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_dateToCalendarString_53bb79ba03b156ff], a0.this$, a1.this$));
            }

            ::java::lang::String AbstractGenerator::dateToString(const ::org::orekit::files::ccsds::definitions::TimeConverter & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_dateToString_53bb79ba03b156ff], a0.this$, a1.this$));
            }

            ::java::lang::String AbstractGenerator::dateToString(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_dateToString_26917e8002e2fe0e], a0, a1, a2, a3, a4, a5));
            }

            ::java::lang::String AbstractGenerator::doubleToString(jdouble a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_doubleToString_c03a7791f2fcb1f1], a0));
            }

            void AbstractGenerator::enterSection(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_enterSection_f5ffdf29129ef90a], a0.this$);
            }

            ::java::lang::String AbstractGenerator::exitSection() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_exitSection_3cffd47377eca18a]));
            }

            ::java::lang::String AbstractGenerator::getOutputName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOutputName_3cffd47377eca18a]));
            }

            void AbstractGenerator::newLine() const
            {
              env->callVoidMethod(this$, mids$[mid_newLine_0640e6acf969ed28]);
            }

            ::java::lang::String AbstractGenerator::siToCcsdsName(const ::java::lang::String & a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_siToCcsdsName_60bb1b490b673cbf], a0.this$));
            }

            ::java::lang::String AbstractGenerator::unitsListToString(const ::java::util::List & a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_unitsListToString_efa2aa6df7244612], a0.this$));
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, const ::java::lang::Enum & a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_a576ec9025591acc], a0.this$, a1.this$, a2);
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, jchar a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_93ab992976af83e7], a0.this$, a1, a2);
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, jint a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_011f5c0c4346496d], a0.this$, a1, a2);
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, const ::java::util::List & a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_134df300ac33b05f], a0.this$, a1.this$, a2);
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, const ::java::lang::Double & a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_23e19e02040a2cc2], a0.this$, a1.this$, a2.this$, a3);
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, jdouble a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_8e286bd988c33b7f], a0.this$, a1, a2.this$, a3);
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, const ::org::orekit::files::ccsds::definitions::TimeConverter & a1, const ::org::orekit::time::AbsoluteDate & a2, jboolean a3, jboolean a4) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_f678851e8742cc77], a0.this$, a1.this$, a2.this$, a3, a4);
            }

            void AbstractGenerator::writeRawData(jchar a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeRawData_102587d250c3217b], a0);
            }

            void AbstractGenerator::writeRawData(const ::java::lang::CharSequence & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeRawData_01ce980d49cb2b81], a0.this$);
            }

            jboolean AbstractGenerator::writeUnits(const ::org::orekit::utils::units::Unit & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_writeUnits_3afc691233085be6], a0.this$);
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
          namespace generation {
            static PyObject *t_AbstractGenerator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractGenerator_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AbstractGenerator_init_(t_AbstractGenerator *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractGenerator_close(t_AbstractGenerator *self);
            static PyObject *t_AbstractGenerator_dateToCalendarString(t_AbstractGenerator *self, PyObject *args);
            static PyObject *t_AbstractGenerator_dateToString(t_AbstractGenerator *self, PyObject *args);
            static PyObject *t_AbstractGenerator_doubleToString(t_AbstractGenerator *self, PyObject *arg);
            static PyObject *t_AbstractGenerator_enterSection(t_AbstractGenerator *self, PyObject *arg);
            static PyObject *t_AbstractGenerator_exitSection(t_AbstractGenerator *self);
            static PyObject *t_AbstractGenerator_getOutputName(t_AbstractGenerator *self);
            static PyObject *t_AbstractGenerator_newLine(t_AbstractGenerator *self);
            static PyObject *t_AbstractGenerator_siToCcsdsName(t_AbstractGenerator *self, PyObject *arg);
            static PyObject *t_AbstractGenerator_unitsListToString(t_AbstractGenerator *self, PyObject *arg);
            static PyObject *t_AbstractGenerator_writeEntry(t_AbstractGenerator *self, PyObject *args);
            static PyObject *t_AbstractGenerator_writeRawData(t_AbstractGenerator *self, PyObject *args);
            static PyObject *t_AbstractGenerator_writeUnits(t_AbstractGenerator *self, PyObject *arg);
            static PyObject *t_AbstractGenerator_get__outputName(t_AbstractGenerator *self, void *data);
            static PyGetSetDef t_AbstractGenerator__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractGenerator, outputName),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractGenerator__methods_[] = {
              DECLARE_METHOD(t_AbstractGenerator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractGenerator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractGenerator, close, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGenerator, dateToCalendarString, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGenerator, dateToString, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGenerator, doubleToString, METH_O),
              DECLARE_METHOD(t_AbstractGenerator, enterSection, METH_O),
              DECLARE_METHOD(t_AbstractGenerator, exitSection, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGenerator, getOutputName, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGenerator, newLine, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGenerator, siToCcsdsName, METH_O),
              DECLARE_METHOD(t_AbstractGenerator, unitsListToString, METH_O),
              DECLARE_METHOD(t_AbstractGenerator, writeEntry, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGenerator, writeRawData, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGenerator, writeUnits, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractGenerator)[] = {
              { Py_tp_methods, t_AbstractGenerator__methods_ },
              { Py_tp_init, (void *) t_AbstractGenerator_init_ },
              { Py_tp_getset, t_AbstractGenerator__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractGenerator)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractGenerator, t_AbstractGenerator, AbstractGenerator);

            void t_AbstractGenerator::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractGenerator), &PY_TYPE_DEF(AbstractGenerator), module, "AbstractGenerator", 0);
            }

            void t_AbstractGenerator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGenerator), "class_", make_descriptor(AbstractGenerator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGenerator), "wrapfn_", make_descriptor(t_AbstractGenerator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGenerator), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractGenerator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractGenerator::initializeClass, 1)))
                return NULL;
              return t_AbstractGenerator::wrap_Object(AbstractGenerator(((t_AbstractGenerator *) arg)->object.this$));
            }
            static PyObject *t_AbstractGenerator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractGenerator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AbstractGenerator_init_(t_AbstractGenerator *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::Appendable a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              jboolean a3;
              AbstractGenerator object((jobject) NULL);

              if (!parseArgs(args, "ksDZ", ::java::lang::Appendable::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = AbstractGenerator(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AbstractGenerator_close(t_AbstractGenerator *self)
            {
              OBJ_CALL(self->object.close());
              Py_RETURN_NONE;
            }

            static PyObject *t_AbstractGenerator_dateToCalendarString(t_AbstractGenerator *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::definitions::TimeConverter a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.dateToCalendarString(a0, a1));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "dateToCalendarString", args);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_dateToString(t_AbstractGenerator *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::orekit::files::ccsds::definitions::TimeConverter a0((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                  ::java::lang::String result((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.dateToString(a0, a1));
                    return j2p(result);
                  }
                }
                break;
               case 6:
                {
                  jint a0;
                  jint a1;
                  jint a2;
                  jint a3;
                  jint a4;
                  jdouble a5;
                  ::java::lang::String result((jobject) NULL);

                  if (!parseArgs(args, "IIIIID", &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    OBJ_CALL(result = self->object.dateToString(a0, a1, a2, a3, a4, a5));
                    return j2p(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "dateToString", args);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_doubleToString(t_AbstractGenerator *self, PyObject *arg)
            {
              jdouble a0;
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.doubleToString(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "doubleToString", arg);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_enterSection(t_AbstractGenerator *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.enterSection(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "enterSection", arg);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_exitSection(t_AbstractGenerator *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.exitSection());
              return j2p(result);
            }

            static PyObject *t_AbstractGenerator_getOutputName(t_AbstractGenerator *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOutputName());
              return j2p(result);
            }

            static PyObject *t_AbstractGenerator_newLine(t_AbstractGenerator *self)
            {
              OBJ_CALL(self->object.newLine());
              Py_RETURN_NONE;
            }

            static PyObject *t_AbstractGenerator_siToCcsdsName(t_AbstractGenerator *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(result = self->object.siToCcsdsName(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "siToCcsdsName", arg);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_unitsListToString(t_AbstractGenerator *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.unitsListToString(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "unitsListToString", arg);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_writeEntry(t_AbstractGenerator *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::Enum a1((jobject) NULL);
                  PyTypeObject **p1;
                  jboolean a2;

                  if (!parseArgs(args, "sKZ", ::java::lang::Enum::initializeClass, &a0, &a1, &p1, ::java::lang::t_Enum::parameters_, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  jchar a1;
                  jboolean a2;

                  if (!parseArgs(args, "sCZ", &a0, &a1, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  jint a1;
                  jboolean a2;

                  if (!parseArgs(args, "sIZ", &a0, &a1, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::util::List a1((jobject) NULL);
                  PyTypeObject **p1;
                  jboolean a2;

                  if (!parseArgs(args, "sKZ", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                break;
               case 4:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::Double a1((jobject) NULL);
                  ::org::orekit::utils::units::Unit a2((jobject) NULL);
                  jboolean a3;

                  if (!parseArgs(args, "sOkZ", ::java::lang::PY_TYPE(Double), ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  jdouble a1;
                  ::org::orekit::utils::units::Unit a2((jobject) NULL);
                  jboolean a3;

                  if (!parseArgs(args, "sDkZ", ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3));
                    Py_RETURN_NONE;
                  }
                }
                break;
               case 5:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::files::ccsds::definitions::TimeConverter a1((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                  jboolean a3;
                  jboolean a4;

                  if (!parseArgs(args, "skkZZ", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3, a4));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "writeEntry", args);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_writeRawData(t_AbstractGenerator *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  jchar a0;

                  if (!parseArgs(args, "C", &a0))
                  {
                    OBJ_CALL(self->object.writeRawData(a0));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::CharSequence a0((jobject) NULL);

                  if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
                  {
                    OBJ_CALL(self->object.writeRawData(a0));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "writeRawData", args);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_writeUnits(t_AbstractGenerator *self, PyObject *arg)
            {
              ::org::orekit::utils::units::Unit a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::utils::units::Unit::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.writeUnits(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "writeUnits", arg);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_get__outputName(t_AbstractGenerator *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOutputName());
              return j2p(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/vector/VectorialCovariance.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace vector {

          ::java::lang::Class *VectorialCovariance::class$ = NULL;
          jmethodID *VectorialCovariance::mids$ = NULL;
          bool VectorialCovariance::live$ = false;

          jclass VectorialCovariance::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/vector/VectorialCovariance");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_746492bb94848925] = env->getMethodID(cls, "<init>", "(IZ)V");
              mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getN_9e26256fb0d384a2] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_70a207fcbc031df2] = env->getMethodID(cls, "getResult", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_increment_cc18240f4a737f14] = env->getMethodID(cls, "increment", "([D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          VectorialCovariance::VectorialCovariance(jint a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_746492bb94848925, a0, a1)) {}

          void VectorialCovariance::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
          }

          jboolean VectorialCovariance::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
          }

          jlong VectorialCovariance::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_9e26256fb0d384a2]);
          }

          ::org::hipparchus::linear::RealMatrix VectorialCovariance::getResult() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getResult_70a207fcbc031df2]));
          }

          jint VectorialCovariance::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
          }

          void VectorialCovariance::increment(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_cc18240f4a737f14], a0.this$);
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
    namespace stat {
      namespace descriptive {
        namespace vector {
          static PyObject *t_VectorialCovariance_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_VectorialCovariance_instance_(PyTypeObject *type, PyObject *arg);
          static int t_VectorialCovariance_init_(t_VectorialCovariance *self, PyObject *args, PyObject *kwds);
          static PyObject *t_VectorialCovariance_clear(t_VectorialCovariance *self);
          static PyObject *t_VectorialCovariance_equals(t_VectorialCovariance *self, PyObject *args);
          static PyObject *t_VectorialCovariance_getN(t_VectorialCovariance *self);
          static PyObject *t_VectorialCovariance_getResult(t_VectorialCovariance *self);
          static PyObject *t_VectorialCovariance_hashCode(t_VectorialCovariance *self, PyObject *args);
          static PyObject *t_VectorialCovariance_increment(t_VectorialCovariance *self, PyObject *arg);
          static PyObject *t_VectorialCovariance_get__n(t_VectorialCovariance *self, void *data);
          static PyObject *t_VectorialCovariance_get__result(t_VectorialCovariance *self, void *data);
          static PyGetSetDef t_VectorialCovariance__fields_[] = {
            DECLARE_GET_FIELD(t_VectorialCovariance, n),
            DECLARE_GET_FIELD(t_VectorialCovariance, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_VectorialCovariance__methods_[] = {
            DECLARE_METHOD(t_VectorialCovariance, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_VectorialCovariance, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_VectorialCovariance, clear, METH_NOARGS),
            DECLARE_METHOD(t_VectorialCovariance, equals, METH_VARARGS),
            DECLARE_METHOD(t_VectorialCovariance, getN, METH_NOARGS),
            DECLARE_METHOD(t_VectorialCovariance, getResult, METH_NOARGS),
            DECLARE_METHOD(t_VectorialCovariance, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_VectorialCovariance, increment, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(VectorialCovariance)[] = {
            { Py_tp_methods, t_VectorialCovariance__methods_ },
            { Py_tp_init, (void *) t_VectorialCovariance_init_ },
            { Py_tp_getset, t_VectorialCovariance__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(VectorialCovariance)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(VectorialCovariance, t_VectorialCovariance, VectorialCovariance);

          void t_VectorialCovariance::install(PyObject *module)
          {
            installType(&PY_TYPE(VectorialCovariance), &PY_TYPE_DEF(VectorialCovariance), module, "VectorialCovariance", 0);
          }

          void t_VectorialCovariance::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(VectorialCovariance), "class_", make_descriptor(VectorialCovariance::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(VectorialCovariance), "wrapfn_", make_descriptor(t_VectorialCovariance::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(VectorialCovariance), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_VectorialCovariance_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, VectorialCovariance::initializeClass, 1)))
              return NULL;
            return t_VectorialCovariance::wrap_Object(VectorialCovariance(((t_VectorialCovariance *) arg)->object.this$));
          }
          static PyObject *t_VectorialCovariance_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, VectorialCovariance::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_VectorialCovariance_init_(t_VectorialCovariance *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jboolean a1;
            VectorialCovariance object((jobject) NULL);

            if (!parseArgs(args, "IZ", &a0, &a1))
            {
              INT_CALL(object = VectorialCovariance(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_VectorialCovariance_clear(t_VectorialCovariance *self)
          {
            OBJ_CALL(self->object.clear());
            Py_RETURN_NONE;
          }

          static PyObject *t_VectorialCovariance_equals(t_VectorialCovariance *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(VectorialCovariance), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_VectorialCovariance_getN(t_VectorialCovariance *self)
          {
            jlong result;
            OBJ_CALL(result = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }

          static PyObject *t_VectorialCovariance_getResult(t_VectorialCovariance *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getResult());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_VectorialCovariance_hashCode(t_VectorialCovariance *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(VectorialCovariance), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_VectorialCovariance_increment(t_VectorialCovariance *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "increment", arg);
            return NULL;
          }

          static PyObject *t_VectorialCovariance_get__n(t_VectorialCovariance *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_VectorialCovariance_get__result(t_VectorialCovariance *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getResult());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/FieldGaussIntegratorFactory.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/integration/gauss/FieldGaussIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/integration/gauss/SymmetricFieldGaussIntegrator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *FieldGaussIntegratorFactory::class$ = NULL;
          jmethodID *FieldGaussIntegratorFactory::mids$ = NULL;
          bool FieldGaussIntegratorFactory::live$ = false;

          jclass FieldGaussIntegratorFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/FieldGaussIntegratorFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_979ae7f57a96b096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
              mids$[mid_hermite_1add97ebd5646b46] = env->getMethodID(cls, "hermite", "(I)Lorg/hipparchus/analysis/integration/gauss/SymmetricFieldGaussIntegrator;");
              mids$[mid_laguerre_38b31531f10ee94c] = env->getMethodID(cls, "laguerre", "(I)Lorg/hipparchus/analysis/integration/gauss/FieldGaussIntegrator;");
              mids$[mid_legendre_38b31531f10ee94c] = env->getMethodID(cls, "legendre", "(I)Lorg/hipparchus/analysis/integration/gauss/FieldGaussIntegrator;");
              mids$[mid_legendre_50eeb305783de1a7] = env->getMethodID(cls, "legendre", "(ILorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/integration/gauss/FieldGaussIntegrator;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldGaussIntegratorFactory::FieldGaussIntegratorFactory(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_979ae7f57a96b096, a0.this$)) {}

          ::org::hipparchus::analysis::integration::gauss::SymmetricFieldGaussIntegrator FieldGaussIntegratorFactory::hermite(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::SymmetricFieldGaussIntegrator(env->callObjectMethod(this$, mids$[mid_hermite_1add97ebd5646b46], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator FieldGaussIntegratorFactory::laguerre(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator(env->callObjectMethod(this$, mids$[mid_laguerre_38b31531f10ee94c], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator FieldGaussIntegratorFactory::legendre(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator(env->callObjectMethod(this$, mids$[mid_legendre_38b31531f10ee94c], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator FieldGaussIntegratorFactory::legendre(jint a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
          {
            return ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator(env->callObjectMethod(this$, mids$[mid_legendre_50eeb305783de1a7], a0, a1.this$, a2.this$));
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
          static PyObject *t_FieldGaussIntegratorFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldGaussIntegratorFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldGaussIntegratorFactory_of_(t_FieldGaussIntegratorFactory *self, PyObject *args);
          static int t_FieldGaussIntegratorFactory_init_(t_FieldGaussIntegratorFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldGaussIntegratorFactory_hermite(t_FieldGaussIntegratorFactory *self, PyObject *arg);
          static PyObject *t_FieldGaussIntegratorFactory_laguerre(t_FieldGaussIntegratorFactory *self, PyObject *arg);
          static PyObject *t_FieldGaussIntegratorFactory_legendre(t_FieldGaussIntegratorFactory *self, PyObject *args);
          static PyObject *t_FieldGaussIntegratorFactory_get__parameters_(t_FieldGaussIntegratorFactory *self, void *data);
          static PyGetSetDef t_FieldGaussIntegratorFactory__fields_[] = {
            DECLARE_GET_FIELD(t_FieldGaussIntegratorFactory, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldGaussIntegratorFactory__methods_[] = {
            DECLARE_METHOD(t_FieldGaussIntegratorFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldGaussIntegratorFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldGaussIntegratorFactory, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldGaussIntegratorFactory, hermite, METH_O),
            DECLARE_METHOD(t_FieldGaussIntegratorFactory, laguerre, METH_O),
            DECLARE_METHOD(t_FieldGaussIntegratorFactory, legendre, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldGaussIntegratorFactory)[] = {
            { Py_tp_methods, t_FieldGaussIntegratorFactory__methods_ },
            { Py_tp_init, (void *) t_FieldGaussIntegratorFactory_init_ },
            { Py_tp_getset, t_FieldGaussIntegratorFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldGaussIntegratorFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldGaussIntegratorFactory, t_FieldGaussIntegratorFactory, FieldGaussIntegratorFactory);
          PyObject *t_FieldGaussIntegratorFactory::wrap_Object(const FieldGaussIntegratorFactory& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldGaussIntegratorFactory::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldGaussIntegratorFactory *self = (t_FieldGaussIntegratorFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldGaussIntegratorFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldGaussIntegratorFactory::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldGaussIntegratorFactory *self = (t_FieldGaussIntegratorFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldGaussIntegratorFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldGaussIntegratorFactory), &PY_TYPE_DEF(FieldGaussIntegratorFactory), module, "FieldGaussIntegratorFactory", 0);
          }

          void t_FieldGaussIntegratorFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGaussIntegratorFactory), "class_", make_descriptor(FieldGaussIntegratorFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGaussIntegratorFactory), "wrapfn_", make_descriptor(t_FieldGaussIntegratorFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGaussIntegratorFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldGaussIntegratorFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldGaussIntegratorFactory::initializeClass, 1)))
              return NULL;
            return t_FieldGaussIntegratorFactory::wrap_Object(FieldGaussIntegratorFactory(((t_FieldGaussIntegratorFactory *) arg)->object.this$));
          }
          static PyObject *t_FieldGaussIntegratorFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldGaussIntegratorFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldGaussIntegratorFactory_of_(t_FieldGaussIntegratorFactory *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldGaussIntegratorFactory_init_(t_FieldGaussIntegratorFactory *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldGaussIntegratorFactory object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldGaussIntegratorFactory(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FieldGaussIntegratorFactory_hermite(t_FieldGaussIntegratorFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::analysis::integration::gauss::SymmetricFieldGaussIntegrator result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.hermite(a0));
              return ::org::hipparchus::analysis::integration::gauss::t_SymmetricFieldGaussIntegrator::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "hermite", arg);
            return NULL;
          }

          static PyObject *t_FieldGaussIntegratorFactory_laguerre(t_FieldGaussIntegratorFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.laguerre(a0));
              return ::org::hipparchus::analysis::integration::gauss::t_FieldGaussIntegrator::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "laguerre", arg);
            return NULL;
          }

          static PyObject *t_FieldGaussIntegratorFactory_legendre(t_FieldGaussIntegratorFactory *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jint a0;
                ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator result((jobject) NULL);

                if (!parseArgs(args, "I", &a0))
                {
                  OBJ_CALL(result = self->object.legendre(a0));
                  return ::org::hipparchus::analysis::integration::gauss::t_FieldGaussIntegrator::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 3:
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator result((jobject) NULL);

                if (!parseArgs(args, "IKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.legendre(a0, a1, a2));
                  return ::org::hipparchus::analysis::integration::gauss::t_FieldGaussIntegrator::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "legendre", args);
            return NULL;
          }
          static PyObject *t_FieldGaussIntegratorFactory_get__parameters_(t_FieldGaussIntegratorFactory *self, void *data)
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
#include "org/orekit/forces/maneuvers/Maneuver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/numerical/TimeDerivativesEquations.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/numerical/FieldTimeDerivativesEquations.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggers.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/forces/maneuvers/propulsion/PropulsionModel.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *Maneuver::class$ = NULL;
        jmethodID *Maneuver::mids$ = NULL;
        bool Maneuver::live$ = false;

        jclass Maneuver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/Maneuver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_812a7c56b984179a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggers;Lorg/orekit/forces/maneuvers/propulsion/PropulsionModel;)V");
            mids$[mid_acceleration_61944e27a39e8290] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_b61fb59a041240c6] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_addContribution_0f28031d74393af0] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/numerical/FieldTimeDerivativesEquations;)V");
            mids$[mid_addContribution_9ecc165cc3358de0] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/numerical/TimeDerivativesEquations;)V");
            mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getAttitudeOverride_6df6b78ab9377151] = env->getMethodID(cls, "getAttitudeOverride", "()Lorg/orekit/attitudes/AttitudeProvider;");
            mids$[mid_getControl3DVectorCostType_601f05e5d0c82ad9] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
            mids$[mid_getEventDetectors_d7cce92225eb0db2] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_8130af76f6998f44] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getManeuverTriggers_cee7298c5da7b0f2] = env->getMethodID(cls, "getManeuverTriggers", "()Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggers;");
            mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getPropulsionModel_a5c75fea8de63925] = env->getMethodID(cls, "getPropulsionModel", "()Lorg/orekit/forces/maneuvers/propulsion/PropulsionModel;");
            mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_init_811e49dad2467b67] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Maneuver::Maneuver(const ::org::orekit::attitudes::AttitudeProvider & a0, const ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers & a1, const ::org::orekit::forces::maneuvers::propulsion::PropulsionModel & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_812a7c56b984179a, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Maneuver::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_61944e27a39e8290], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D Maneuver::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b61fb59a041240c6], a0.this$, a1.this$));
        }

        void Maneuver::addContribution(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addContribution_0f28031d74393af0], a0.this$, a1.this$);
        }

        void Maneuver::addContribution(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::numerical::TimeDerivativesEquations & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addContribution_9ecc165cc3358de0], a0.this$, a1.this$);
        }

        jboolean Maneuver::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1]);
        }

        ::org::orekit::attitudes::AttitudeProvider Maneuver::getAttitudeOverride() const
        {
          return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeOverride_6df6b78ab9377151]));
        }

        ::org::orekit::forces::maneuvers::Control3DVectorCostType Maneuver::getControl3DVectorCostType() const
        {
          return ::org::orekit::forces::maneuvers::Control3DVectorCostType(env->callObjectMethod(this$, mids$[mid_getControl3DVectorCostType_601f05e5d0c82ad9]));
        }

        ::java::util::stream::Stream Maneuver::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_d7cce92225eb0db2]));
        }

        ::java::util::stream::Stream Maneuver::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_8130af76f6998f44], a0.this$));
        }

        ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers Maneuver::getManeuverTriggers() const
        {
          return ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers(env->callObjectMethod(this$, mids$[mid_getManeuverTriggers_cee7298c5da7b0f2]));
        }

        ::java::lang::String Maneuver::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
        }

        ::java::util::List Maneuver::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
        }

        ::org::orekit::forces::maneuvers::propulsion::PropulsionModel Maneuver::getPropulsionModel() const
        {
          return ::org::orekit::forces::maneuvers::propulsion::PropulsionModel(env->callObjectMethod(this$, mids$[mid_getPropulsionModel_a5c75fea8de63925]));
        }

        void Maneuver::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
        }

        void Maneuver::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_811e49dad2467b67], a0.this$, a1.this$);
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
        static PyObject *t_Maneuver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Maneuver_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Maneuver_init_(t_Maneuver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Maneuver_acceleration(t_Maneuver *self, PyObject *args);
        static PyObject *t_Maneuver_addContribution(t_Maneuver *self, PyObject *args);
        static PyObject *t_Maneuver_dependsOnPositionOnly(t_Maneuver *self);
        static PyObject *t_Maneuver_getAttitudeOverride(t_Maneuver *self);
        static PyObject *t_Maneuver_getControl3DVectorCostType(t_Maneuver *self);
        static PyObject *t_Maneuver_getEventDetectors(t_Maneuver *self);
        static PyObject *t_Maneuver_getFieldEventDetectors(t_Maneuver *self, PyObject *arg);
        static PyObject *t_Maneuver_getManeuverTriggers(t_Maneuver *self);
        static PyObject *t_Maneuver_getName(t_Maneuver *self);
        static PyObject *t_Maneuver_getParametersDrivers(t_Maneuver *self);
        static PyObject *t_Maneuver_getPropulsionModel(t_Maneuver *self);
        static PyObject *t_Maneuver_init(t_Maneuver *self, PyObject *args);
        static PyObject *t_Maneuver_get__attitudeOverride(t_Maneuver *self, void *data);
        static PyObject *t_Maneuver_get__control3DVectorCostType(t_Maneuver *self, void *data);
        static PyObject *t_Maneuver_get__eventDetectors(t_Maneuver *self, void *data);
        static PyObject *t_Maneuver_get__maneuverTriggers(t_Maneuver *self, void *data);
        static PyObject *t_Maneuver_get__name(t_Maneuver *self, void *data);
        static PyObject *t_Maneuver_get__parametersDrivers(t_Maneuver *self, void *data);
        static PyObject *t_Maneuver_get__propulsionModel(t_Maneuver *self, void *data);
        static PyGetSetDef t_Maneuver__fields_[] = {
          DECLARE_GET_FIELD(t_Maneuver, attitudeOverride),
          DECLARE_GET_FIELD(t_Maneuver, control3DVectorCostType),
          DECLARE_GET_FIELD(t_Maneuver, eventDetectors),
          DECLARE_GET_FIELD(t_Maneuver, maneuverTriggers),
          DECLARE_GET_FIELD(t_Maneuver, name),
          DECLARE_GET_FIELD(t_Maneuver, parametersDrivers),
          DECLARE_GET_FIELD(t_Maneuver, propulsionModel),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Maneuver__methods_[] = {
          DECLARE_METHOD(t_Maneuver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Maneuver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Maneuver, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_Maneuver, addContribution, METH_VARARGS),
          DECLARE_METHOD(t_Maneuver, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getAttitudeOverride, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getControl3DVectorCostType, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getEventDetectors, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getFieldEventDetectors, METH_O),
          DECLARE_METHOD(t_Maneuver, getManeuverTriggers, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getName, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getPropulsionModel, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Maneuver)[] = {
          { Py_tp_methods, t_Maneuver__methods_ },
          { Py_tp_init, (void *) t_Maneuver_init_ },
          { Py_tp_getset, t_Maneuver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Maneuver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Maneuver, t_Maneuver, Maneuver);

        void t_Maneuver::install(PyObject *module)
        {
          installType(&PY_TYPE(Maneuver), &PY_TYPE_DEF(Maneuver), module, "Maneuver", 0);
        }

        void t_Maneuver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuver), "class_", make_descriptor(Maneuver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuver), "wrapfn_", make_descriptor(t_Maneuver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Maneuver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Maneuver::initializeClass, 1)))
            return NULL;
          return t_Maneuver::wrap_Object(Maneuver(((t_Maneuver *) arg)->object.this$));
        }
        static PyObject *t_Maneuver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Maneuver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Maneuver_init_(t_Maneuver *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
          ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers a1((jobject) NULL);
          ::org::orekit::forces::maneuvers::propulsion::PropulsionModel a2((jobject) NULL);
          Maneuver object((jobject) NULL);

          if (!parseArgs(args, "kkk", ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers::initializeClass, ::org::orekit::forces::maneuvers::propulsion::PropulsionModel::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = Maneuver(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Maneuver_acceleration(t_Maneuver *self, PyObject *args)
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

        static PyObject *t_Maneuver_addContribution(t_Maneuver *self, PyObject *args)
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

        static PyObject *t_Maneuver_dependsOnPositionOnly(t_Maneuver *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_Maneuver_getAttitudeOverride(t_Maneuver *self)
        {
          ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeOverride());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_Maneuver_getControl3DVectorCostType(t_Maneuver *self)
        {
          ::org::orekit::forces::maneuvers::Control3DVectorCostType result((jobject) NULL);
          OBJ_CALL(result = self->object.getControl3DVectorCostType());
          return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(result);
        }

        static PyObject *t_Maneuver_getEventDetectors(t_Maneuver *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_Maneuver_getFieldEventDetectors(t_Maneuver *self, PyObject *arg)
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

        static PyObject *t_Maneuver_getManeuverTriggers(t_Maneuver *self)
        {
          ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers result((jobject) NULL);
          OBJ_CALL(result = self->object.getManeuverTriggers());
          return ::org::orekit::forces::maneuvers::trigger::t_ManeuverTriggers::wrap_Object(result);
        }

        static PyObject *t_Maneuver_getName(t_Maneuver *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_Maneuver_getParametersDrivers(t_Maneuver *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_Maneuver_getPropulsionModel(t_Maneuver *self)
        {
          ::org::orekit::forces::maneuvers::propulsion::PropulsionModel result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropulsionModel());
          return ::org::orekit::forces::maneuvers::propulsion::t_PropulsionModel::wrap_Object(result);
        }

        static PyObject *t_Maneuver_init(t_Maneuver *self, PyObject *args)
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

        static PyObject *t_Maneuver_get__attitudeOverride(t_Maneuver *self, void *data)
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeOverride());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_Maneuver_get__control3DVectorCostType(t_Maneuver *self, void *data)
        {
          ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
          OBJ_CALL(value = self->object.getControl3DVectorCostType());
          return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(value);
        }

        static PyObject *t_Maneuver_get__eventDetectors(t_Maneuver *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_Maneuver_get__maneuverTriggers(t_Maneuver *self, void *data)
        {
          ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers value((jobject) NULL);
          OBJ_CALL(value = self->object.getManeuverTriggers());
          return ::org::orekit::forces::maneuvers::trigger::t_ManeuverTriggers::wrap_Object(value);
        }

        static PyObject *t_Maneuver_get__name(t_Maneuver *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }

        static PyObject *t_Maneuver_get__parametersDrivers(t_Maneuver *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_Maneuver_get__propulsionModel(t_Maneuver *self, void *data)
        {
          ::org::orekit::forces::maneuvers::propulsion::PropulsionModel value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropulsionModel());
          return ::org::orekit::forces::maneuvers::propulsion::t_PropulsionModel::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/MannWhitneyUTest.h"
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/stat/ranking/TiesStrategy.h"
#include "java/lang/Class.h"
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
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_08eff940a3336a45] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/NaNStrategy;Lorg/hipparchus/stat/ranking/TiesStrategy;)V");
            mids$[mid_mannWhitneyU_628a76297e217f13] = env->getMethodID(cls, "mannWhitneyU", "([D[D)D");
            mids$[mid_mannWhitneyUTest_628a76297e217f13] = env->getMethodID(cls, "mannWhitneyUTest", "([D[D)D");
            mids$[mid_mannWhitneyUTest_81226d0b24750fea] = env->getMethodID(cls, "mannWhitneyUTest", "([D[DZ)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MannWhitneyUTest::MannWhitneyUTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        MannWhitneyUTest::MannWhitneyUTest(const ::org::hipparchus::stat::ranking::NaNStrategy & a0, const ::org::hipparchus::stat::ranking::TiesStrategy & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_08eff940a3336a45, a0.this$, a1.this$)) {}

        jdouble MannWhitneyUTest::mannWhitneyU(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_mannWhitneyU_628a76297e217f13], a0.this$, a1.this$);
        }

        jdouble MannWhitneyUTest::mannWhitneyUTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_mannWhitneyUTest_628a76297e217f13], a0.this$, a1.this$);
        }

        jdouble MannWhitneyUTest::mannWhitneyUTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_mannWhitneyUTest_81226d0b24750fea], a0.this$, a1.this$, a2);
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ordering.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ordering.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *Ordering::class$ = NULL;
              jmethodID *Ordering::mids$ = NULL;
              bool Ordering::live$ = false;
              Ordering *Ordering::FULL = NULL;
              Ordering *Ordering::LTM = NULL;
              Ordering *Ordering::LTMWCC = NULL;
              Ordering *Ordering::UTM = NULL;
              Ordering *Ordering::UTMWCC = NULL;

              jclass Ordering::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/Ordering");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_1f6fba851cfb5f7a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;");
                  mids$[mid_values_2990c7897c653ef6] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  FULL = new Ordering(env->getStaticObjectField(cls, "FULL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;"));
                  LTM = new Ordering(env->getStaticObjectField(cls, "LTM", "Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;"));
                  LTMWCC = new Ordering(env->getStaticObjectField(cls, "LTMWCC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;"));
                  UTM = new Ordering(env->getStaticObjectField(cls, "UTM", "Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;"));
                  UTMWCC = new Ordering(env->getStaticObjectField(cls, "UTMWCC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Ordering Ordering::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return Ordering(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1f6fba851cfb5f7a], a0.this$));
              }

              JArray< Ordering > Ordering::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< Ordering >(env->callStaticObjectMethod(cls, mids$[mid_values_2990c7897c653ef6]));
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
              static PyObject *t_Ordering_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Ordering_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Ordering_of_(t_Ordering *self, PyObject *args);
              static PyObject *t_Ordering_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_Ordering_values(PyTypeObject *type);
              static PyObject *t_Ordering_get__parameters_(t_Ordering *self, void *data);
              static PyGetSetDef t_Ordering__fields_[] = {
                DECLARE_GET_FIELD(t_Ordering, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Ordering__methods_[] = {
                DECLARE_METHOD(t_Ordering, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Ordering, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Ordering, of_, METH_VARARGS),
                DECLARE_METHOD(t_Ordering, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_Ordering, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Ordering)[] = {
                { Py_tp_methods, t_Ordering__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_Ordering__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Ordering)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(Ordering, t_Ordering, Ordering);
              PyObject *t_Ordering::wrap_Object(const Ordering& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Ordering::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Ordering *self = (t_Ordering *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_Ordering::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Ordering::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Ordering *self = (t_Ordering *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_Ordering::install(PyObject *module)
              {
                installType(&PY_TYPE(Ordering), &PY_TYPE_DEF(Ordering), module, "Ordering", 0);
              }

              void t_Ordering::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "class_", make_descriptor(Ordering::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "wrapfn_", make_descriptor(t_Ordering::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "boxfn_", make_descriptor(boxObject));
                env->getClass(Ordering::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "FULL", make_descriptor(t_Ordering::wrap_Object(*Ordering::FULL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "LTM", make_descriptor(t_Ordering::wrap_Object(*Ordering::LTM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "LTMWCC", make_descriptor(t_Ordering::wrap_Object(*Ordering::LTMWCC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "UTM", make_descriptor(t_Ordering::wrap_Object(*Ordering::UTM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "UTMWCC", make_descriptor(t_Ordering::wrap_Object(*Ordering::UTMWCC)));
              }

              static PyObject *t_Ordering_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Ordering::initializeClass, 1)))
                  return NULL;
                return t_Ordering::wrap_Object(Ordering(((t_Ordering *) arg)->object.this$));
              }
              static PyObject *t_Ordering_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Ordering::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Ordering_of_(t_Ordering *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_Ordering_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                Ordering result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering::valueOf(a0));
                  return t_Ordering::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_Ordering_values(PyTypeObject *type)
              {
                JArray< Ordering > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering::values());
                return JArray<jobject>(result.this$).wrap(t_Ordering::wrap_jobject);
              }
              static PyObject *t_Ordering_get__parameters_(t_Ordering *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/ShapiroInterSatellitePhaseModifier.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *ShapiroInterSatellitePhaseModifier::class$ = NULL;
          jmethodID *ShapiroInterSatellitePhaseModifier::mids$ = NULL;
          bool ShapiroInterSatellitePhaseModifier::live$ = false;

          jclass ShapiroInterSatellitePhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ShapiroInterSatellitePhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ShapiroInterSatellitePhaseModifier::ShapiroInterSatellitePhaseModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

          ::java::util::List ShapiroInterSatellitePhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void ShapiroInterSatellitePhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
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
          static PyObject *t_ShapiroInterSatellitePhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ShapiroInterSatellitePhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ShapiroInterSatellitePhaseModifier_init_(t_ShapiroInterSatellitePhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ShapiroInterSatellitePhaseModifier_getParametersDrivers(t_ShapiroInterSatellitePhaseModifier *self);
          static PyObject *t_ShapiroInterSatellitePhaseModifier_modifyWithoutDerivatives(t_ShapiroInterSatellitePhaseModifier *self, PyObject *arg);
          static PyObject *t_ShapiroInterSatellitePhaseModifier_get__parametersDrivers(t_ShapiroInterSatellitePhaseModifier *self, void *data);
          static PyGetSetDef t_ShapiroInterSatellitePhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_ShapiroInterSatellitePhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ShapiroInterSatellitePhaseModifier__methods_[] = {
            DECLARE_METHOD(t_ShapiroInterSatellitePhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroInterSatellitePhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroInterSatellitePhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ShapiroInterSatellitePhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ShapiroInterSatellitePhaseModifier)[] = {
            { Py_tp_methods, t_ShapiroInterSatellitePhaseModifier__methods_ },
            { Py_tp_init, (void *) t_ShapiroInterSatellitePhaseModifier_init_ },
            { Py_tp_getset, t_ShapiroInterSatellitePhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ShapiroInterSatellitePhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier),
            NULL
          };

          DEFINE_TYPE(ShapiroInterSatellitePhaseModifier, t_ShapiroInterSatellitePhaseModifier, ShapiroInterSatellitePhaseModifier);

          void t_ShapiroInterSatellitePhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(ShapiroInterSatellitePhaseModifier), &PY_TYPE_DEF(ShapiroInterSatellitePhaseModifier), module, "ShapiroInterSatellitePhaseModifier", 0);
          }

          void t_ShapiroInterSatellitePhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroInterSatellitePhaseModifier), "class_", make_descriptor(ShapiroInterSatellitePhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroInterSatellitePhaseModifier), "wrapfn_", make_descriptor(t_ShapiroInterSatellitePhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroInterSatellitePhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ShapiroInterSatellitePhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ShapiroInterSatellitePhaseModifier::initializeClass, 1)))
              return NULL;
            return t_ShapiroInterSatellitePhaseModifier::wrap_Object(ShapiroInterSatellitePhaseModifier(((t_ShapiroInterSatellitePhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_ShapiroInterSatellitePhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ShapiroInterSatellitePhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ShapiroInterSatellitePhaseModifier_init_(t_ShapiroInterSatellitePhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ShapiroInterSatellitePhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ShapiroInterSatellitePhaseModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ShapiroInterSatellitePhaseModifier_getParametersDrivers(t_ShapiroInterSatellitePhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ShapiroInterSatellitePhaseModifier_modifyWithoutDerivatives(t_ShapiroInterSatellitePhaseModifier *self, PyObject *arg)
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

          static PyObject *t_ShapiroInterSatellitePhaseModifier_get__parametersDrivers(t_ShapiroInterSatellitePhaseModifier *self, void *data)
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
#include "org/orekit/attitudes/FixedRate.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FixedRate::class$ = NULL;
      jmethodID *FixedRate::mids$ = NULL;
      bool FixedRate::live$ = false;

      jclass FixedRate::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FixedRate");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_59f7a5a3efbf6514] = env->getMethodID(cls, "<init>", "(Lorg/orekit/attitudes/Attitude;)V");
          mids$[mid_getAttitude_1306ac39e1d2de3f] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_77e3383de01f3e48] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getReferenceAttitude_ed1eef73b5133690] = env->getMethodID(cls, "getReferenceAttitude", "()Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FixedRate::FixedRate(const ::org::orekit::attitudes::Attitude & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_59f7a5a3efbf6514, a0.this$)) {}

      ::org::orekit::attitudes::Attitude FixedRate::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_1306ac39e1d2de3f], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude FixedRate::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_77e3383de01f3e48], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude FixedRate::getReferenceAttitude() const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getReferenceAttitude_ed1eef73b5133690]));
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
      static PyObject *t_FixedRate_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FixedRate_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FixedRate_init_(t_FixedRate *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FixedRate_getAttitude(t_FixedRate *self, PyObject *args);
      static PyObject *t_FixedRate_getReferenceAttitude(t_FixedRate *self);
      static PyObject *t_FixedRate_get__referenceAttitude(t_FixedRate *self, void *data);
      static PyGetSetDef t_FixedRate__fields_[] = {
        DECLARE_GET_FIELD(t_FixedRate, referenceAttitude),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FixedRate__methods_[] = {
        DECLARE_METHOD(t_FixedRate, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedRate, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedRate, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_FixedRate, getReferenceAttitude, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FixedRate)[] = {
        { Py_tp_methods, t_FixedRate__methods_ },
        { Py_tp_init, (void *) t_FixedRate_init_ },
        { Py_tp_getset, t_FixedRate__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FixedRate)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FixedRate, t_FixedRate, FixedRate);

      void t_FixedRate::install(PyObject *module)
      {
        installType(&PY_TYPE(FixedRate), &PY_TYPE_DEF(FixedRate), module, "FixedRate", 0);
      }

      void t_FixedRate::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedRate), "class_", make_descriptor(FixedRate::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedRate), "wrapfn_", make_descriptor(t_FixedRate::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedRate), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FixedRate_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FixedRate::initializeClass, 1)))
          return NULL;
        return t_FixedRate::wrap_Object(FixedRate(((t_FixedRate *) arg)->object.this$));
      }
      static PyObject *t_FixedRate_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FixedRate::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FixedRate_init_(t_FixedRate *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::attitudes::Attitude a0((jobject) NULL);
        FixedRate object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::attitudes::Attitude::initializeClass, &a0))
        {
          INT_CALL(object = FixedRate(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FixedRate_getAttitude(t_FixedRate *self, PyObject *args)
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

      static PyObject *t_FixedRate_getReferenceAttitude(t_FixedRate *self)
      {
        ::org::orekit::attitudes::Attitude result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
      }

      static PyObject *t_FixedRate_get__referenceAttitude(t_FixedRate *self, void *data)
      {
        ::org::orekit::attitudes::Attitude value((jobject) NULL);
        OBJ_CALL(value = self->object.getReferenceAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/QZSSAlmanac.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *QZSSAlmanac::class$ = NULL;
            jmethodID *QZSSAlmanac::mids$ = NULL;
            bool QZSSAlmanac::live$ = false;

            jclass QZSSAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/QZSSAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getHealth_412668abc8d889e9] = env->getMethodID(cls, "getHealth", "()I");
                mids$[mid_getSource_3cffd47377eca18a] = env->getMethodID(cls, "getSource", "()Ljava/lang/String;");
                mids$[mid_setHealth_a3da1a935cb37f7b] = env->getMethodID(cls, "setHealth", "(I)V");
                mids$[mid_setSource_f5ffdf29129ef90a] = env->getMethodID(cls, "setSource", "(Ljava/lang/String;)V");
                mids$[mid_setSqrtA_10f281d777284cea] = env->getMethodID(cls, "setSqrtA", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            QZSSAlmanac::QZSSAlmanac() : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            jint QZSSAlmanac::getHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealth_412668abc8d889e9]);
            }

            ::java::lang::String QZSSAlmanac::getSource() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSource_3cffd47377eca18a]));
            }

            void QZSSAlmanac::setHealth(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealth_a3da1a935cb37f7b], a0);
            }

            void QZSSAlmanac::setSource(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSource_f5ffdf29129ef90a], a0.this$);
            }

            void QZSSAlmanac::setSqrtA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSqrtA_10f281d777284cea], a0);
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
            static PyObject *t_QZSSAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_QZSSAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_QZSSAlmanac_init_(t_QZSSAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_QZSSAlmanac_getHealth(t_QZSSAlmanac *self);
            static PyObject *t_QZSSAlmanac_getSource(t_QZSSAlmanac *self);
            static PyObject *t_QZSSAlmanac_setHealth(t_QZSSAlmanac *self, PyObject *arg);
            static PyObject *t_QZSSAlmanac_setSource(t_QZSSAlmanac *self, PyObject *arg);
            static PyObject *t_QZSSAlmanac_setSqrtA(t_QZSSAlmanac *self, PyObject *arg);
            static PyObject *t_QZSSAlmanac_get__health(t_QZSSAlmanac *self, void *data);
            static int t_QZSSAlmanac_set__health(t_QZSSAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_QZSSAlmanac_get__source(t_QZSSAlmanac *self, void *data);
            static int t_QZSSAlmanac_set__source(t_QZSSAlmanac *self, PyObject *arg, void *data);
            static int t_QZSSAlmanac_set__sqrtA(t_QZSSAlmanac *self, PyObject *arg, void *data);
            static PyGetSetDef t_QZSSAlmanac__fields_[] = {
              DECLARE_GETSET_FIELD(t_QZSSAlmanac, health),
              DECLARE_GETSET_FIELD(t_QZSSAlmanac, source),
              DECLARE_SET_FIELD(t_QZSSAlmanac, sqrtA),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_QZSSAlmanac__methods_[] = {
              DECLARE_METHOD(t_QZSSAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_QZSSAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_QZSSAlmanac, getHealth, METH_NOARGS),
              DECLARE_METHOD(t_QZSSAlmanac, getSource, METH_NOARGS),
              DECLARE_METHOD(t_QZSSAlmanac, setHealth, METH_O),
              DECLARE_METHOD(t_QZSSAlmanac, setSource, METH_O),
              DECLARE_METHOD(t_QZSSAlmanac, setSqrtA, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(QZSSAlmanac)[] = {
              { Py_tp_methods, t_QZSSAlmanac__methods_ },
              { Py_tp_init, (void *) t_QZSSAlmanac_init_ },
              { Py_tp_getset, t_QZSSAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(QZSSAlmanac)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac),
              NULL
            };

            DEFINE_TYPE(QZSSAlmanac, t_QZSSAlmanac, QZSSAlmanac);

            void t_QZSSAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(QZSSAlmanac), &PY_TYPE_DEF(QZSSAlmanac), module, "QZSSAlmanac", 0);
            }

            void t_QZSSAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSAlmanac), "class_", make_descriptor(QZSSAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSAlmanac), "wrapfn_", make_descriptor(t_QZSSAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_QZSSAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, QZSSAlmanac::initializeClass, 1)))
                return NULL;
              return t_QZSSAlmanac::wrap_Object(QZSSAlmanac(((t_QZSSAlmanac *) arg)->object.this$));
            }
            static PyObject *t_QZSSAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, QZSSAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_QZSSAlmanac_init_(t_QZSSAlmanac *self, PyObject *args, PyObject *kwds)
            {
              QZSSAlmanac object((jobject) NULL);

              INT_CALL(object = QZSSAlmanac());
              self->object = object;

              return 0;
            }

            static PyObject *t_QZSSAlmanac_getHealth(t_QZSSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_QZSSAlmanac_getSource(t_QZSSAlmanac *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getSource());
              return j2p(result);
            }

            static PyObject *t_QZSSAlmanac_setHealth(t_QZSSAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealth", arg);
              return NULL;
            }

            static PyObject *t_QZSSAlmanac_setSource(t_QZSSAlmanac *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setSource(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSource", arg);
              return NULL;
            }

            static PyObject *t_QZSSAlmanac_setSqrtA(t_QZSSAlmanac *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSqrtA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSqrtA", arg);
              return NULL;
            }

            static PyObject *t_QZSSAlmanac_get__health(t_QZSSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealth());
              return PyLong_FromLong((long) value);
            }
            static int t_QZSSAlmanac_set__health(t_QZSSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "health", arg);
              return -1;
            }

            static PyObject *t_QZSSAlmanac_get__source(t_QZSSAlmanac *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getSource());
              return j2p(value);
            }
            static int t_QZSSAlmanac_set__source(t_QZSSAlmanac *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setSource(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "source", arg);
              return -1;
            }

            static int t_QZSSAlmanac_set__sqrtA(t_QZSSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSqrtA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sqrtA", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/MultistepIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEIntegrator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *MultistepIntegrator::class$ = NULL;
      jmethodID *MultistepIntegrator::mids$ = NULL;
      bool MultistepIntegrator::live$ = false;

      jclass MultistepIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/MultistepIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMaxGrowth_557b8123390d8d0c] = env->getMethodID(cls, "getMaxGrowth", "()D");
          mids$[mid_getMinReduction_557b8123390d8d0c] = env->getMethodID(cls, "getMinReduction", "()D");
          mids$[mid_getNSteps_412668abc8d889e9] = env->getMethodID(cls, "getNSteps", "()I");
          mids$[mid_getSafety_557b8123390d8d0c] = env->getMethodID(cls, "getSafety", "()D");
          mids$[mid_getStarterIntegrator_7df926536e4d0676] = env->getMethodID(cls, "getStarterIntegrator", "()Lorg/hipparchus/ode/ODEIntegrator;");
          mids$[mid_setMaxGrowth_10f281d777284cea] = env->getMethodID(cls, "setMaxGrowth", "(D)V");
          mids$[mid_setMinReduction_10f281d777284cea] = env->getMethodID(cls, "setMinReduction", "(D)V");
          mids$[mid_setSafety_10f281d777284cea] = env->getMethodID(cls, "setSafety", "(D)V");
          mids$[mid_setStarterIntegrator_bb1ae62b5d826baa] = env->getMethodID(cls, "setStarterIntegrator", "(Lorg/hipparchus/ode/ODEIntegrator;)V");
          mids$[mid_rescale_10f281d777284cea] = env->getMethodID(cls, "rescale", "(D)V");
          mids$[mid_initializeHighOrderDerivatives_a72bdebc8d5fa5c2] = env->getMethodID(cls, "initializeHighOrderDerivatives", "(D[D[[D[[D)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
          mids$[mid_computeStepGrowShrinkFactor_7e960cd6eee376d8] = env->getMethodID(cls, "computeStepGrowShrinkFactor", "(D)D");
          mids$[mid_start_68e51804793796dd] = env->getMethodID(cls, "start", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble MultistepIntegrator::getMaxGrowth() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMaxGrowth_557b8123390d8d0c]);
      }

      jdouble MultistepIntegrator::getMinReduction() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMinReduction_557b8123390d8d0c]);
      }

      jint MultistepIntegrator::getNSteps() const
      {
        return env->callIntMethod(this$, mids$[mid_getNSteps_412668abc8d889e9]);
      }

      jdouble MultistepIntegrator::getSafety() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSafety_557b8123390d8d0c]);
      }

      ::org::hipparchus::ode::ODEIntegrator MultistepIntegrator::getStarterIntegrator() const
      {
        return ::org::hipparchus::ode::ODEIntegrator(env->callObjectMethod(this$, mids$[mid_getStarterIntegrator_7df926536e4d0676]));
      }

      void MultistepIntegrator::setMaxGrowth(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxGrowth_10f281d777284cea], a0);
      }

      void MultistepIntegrator::setMinReduction(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMinReduction_10f281d777284cea], a0);
      }

      void MultistepIntegrator::setSafety(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSafety_10f281d777284cea], a0);
      }

      void MultistepIntegrator::setStarterIntegrator(const ::org::hipparchus::ode::ODEIntegrator & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setStarterIntegrator_bb1ae62b5d826baa], a0.this$);
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
      static PyObject *t_MultistepIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultistepIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultistepIntegrator_getMaxGrowth(t_MultistepIntegrator *self);
      static PyObject *t_MultistepIntegrator_getMinReduction(t_MultistepIntegrator *self);
      static PyObject *t_MultistepIntegrator_getNSteps(t_MultistepIntegrator *self);
      static PyObject *t_MultistepIntegrator_getSafety(t_MultistepIntegrator *self);
      static PyObject *t_MultistepIntegrator_getStarterIntegrator(t_MultistepIntegrator *self);
      static PyObject *t_MultistepIntegrator_setMaxGrowth(t_MultistepIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepIntegrator_setMinReduction(t_MultistepIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepIntegrator_setSafety(t_MultistepIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepIntegrator_setStarterIntegrator(t_MultistepIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepIntegrator_get__maxGrowth(t_MultistepIntegrator *self, void *data);
      static int t_MultistepIntegrator_set__maxGrowth(t_MultistepIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_MultistepIntegrator_get__minReduction(t_MultistepIntegrator *self, void *data);
      static int t_MultistepIntegrator_set__minReduction(t_MultistepIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_MultistepIntegrator_get__nSteps(t_MultistepIntegrator *self, void *data);
      static PyObject *t_MultistepIntegrator_get__safety(t_MultistepIntegrator *self, void *data);
      static int t_MultistepIntegrator_set__safety(t_MultistepIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_MultistepIntegrator_get__starterIntegrator(t_MultistepIntegrator *self, void *data);
      static int t_MultistepIntegrator_set__starterIntegrator(t_MultistepIntegrator *self, PyObject *arg, void *data);
      static PyGetSetDef t_MultistepIntegrator__fields_[] = {
        DECLARE_GETSET_FIELD(t_MultistepIntegrator, maxGrowth),
        DECLARE_GETSET_FIELD(t_MultistepIntegrator, minReduction),
        DECLARE_GET_FIELD(t_MultistepIntegrator, nSteps),
        DECLARE_GETSET_FIELD(t_MultistepIntegrator, safety),
        DECLARE_GETSET_FIELD(t_MultistepIntegrator, starterIntegrator),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MultistepIntegrator__methods_[] = {
        DECLARE_METHOD(t_MultistepIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultistepIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultistepIntegrator, getMaxGrowth, METH_NOARGS),
        DECLARE_METHOD(t_MultistepIntegrator, getMinReduction, METH_NOARGS),
        DECLARE_METHOD(t_MultistepIntegrator, getNSteps, METH_NOARGS),
        DECLARE_METHOD(t_MultistepIntegrator, getSafety, METH_NOARGS),
        DECLARE_METHOD(t_MultistepIntegrator, getStarterIntegrator, METH_NOARGS),
        DECLARE_METHOD(t_MultistepIntegrator, setMaxGrowth, METH_O),
        DECLARE_METHOD(t_MultistepIntegrator, setMinReduction, METH_O),
        DECLARE_METHOD(t_MultistepIntegrator, setSafety, METH_O),
        DECLARE_METHOD(t_MultistepIntegrator, setStarterIntegrator, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultistepIntegrator)[] = {
        { Py_tp_methods, t_MultistepIntegrator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MultistepIntegrator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultistepIntegrator)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator),
        NULL
      };

      DEFINE_TYPE(MultistepIntegrator, t_MultistepIntegrator, MultistepIntegrator);

      void t_MultistepIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(MultistepIntegrator), &PY_TYPE_DEF(MultistepIntegrator), module, "MultistepIntegrator", 0);
      }

      void t_MultistepIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultistepIntegrator), "class_", make_descriptor(MultistepIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultistepIntegrator), "wrapfn_", make_descriptor(t_MultistepIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultistepIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultistepIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultistepIntegrator::initializeClass, 1)))
          return NULL;
        return t_MultistepIntegrator::wrap_Object(MultistepIntegrator(((t_MultistepIntegrator *) arg)->object.this$));
      }
      static PyObject *t_MultistepIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultistepIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultistepIntegrator_getMaxGrowth(t_MultistepIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMaxGrowth());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MultistepIntegrator_getMinReduction(t_MultistepIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMinReduction());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MultistepIntegrator_getNSteps(t_MultistepIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNSteps());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MultistepIntegrator_getSafety(t_MultistepIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSafety());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MultistepIntegrator_getStarterIntegrator(t_MultistepIntegrator *self)
      {
        ::org::hipparchus::ode::ODEIntegrator result((jobject) NULL);
        OBJ_CALL(result = self->object.getStarterIntegrator());
        return ::org::hipparchus::ode::t_ODEIntegrator::wrap_Object(result);
      }

      static PyObject *t_MultistepIntegrator_setMaxGrowth(t_MultistepIntegrator *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setMaxGrowth(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMaxGrowth", arg);
        return NULL;
      }

      static PyObject *t_MultistepIntegrator_setMinReduction(t_MultistepIntegrator *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setMinReduction(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMinReduction", arg);
        return NULL;
      }

      static PyObject *t_MultistepIntegrator_setSafety(t_MultistepIntegrator *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setSafety(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSafety", arg);
        return NULL;
      }

      static PyObject *t_MultistepIntegrator_setStarterIntegrator(t_MultistepIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::ODEIntegrator a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEIntegrator::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setStarterIntegrator(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setStarterIntegrator", arg);
        return NULL;
      }

      static PyObject *t_MultistepIntegrator_get__maxGrowth(t_MultistepIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMaxGrowth());
        return PyFloat_FromDouble((double) value);
      }
      static int t_MultistepIntegrator_set__maxGrowth(t_MultistepIntegrator *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setMaxGrowth(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "maxGrowth", arg);
        return -1;
      }

      static PyObject *t_MultistepIntegrator_get__minReduction(t_MultistepIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMinReduction());
        return PyFloat_FromDouble((double) value);
      }
      static int t_MultistepIntegrator_set__minReduction(t_MultistepIntegrator *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setMinReduction(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "minReduction", arg);
        return -1;
      }

      static PyObject *t_MultistepIntegrator_get__nSteps(t_MultistepIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNSteps());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_MultistepIntegrator_get__safety(t_MultistepIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSafety());
        return PyFloat_FromDouble((double) value);
      }
      static int t_MultistepIntegrator_set__safety(t_MultistepIntegrator *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setSafety(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "safety", arg);
        return -1;
      }

      static PyObject *t_MultistepIntegrator_get__starterIntegrator(t_MultistepIntegrator *self, void *data)
      {
        ::org::hipparchus::ode::ODEIntegrator value((jobject) NULL);
        OBJ_CALL(value = self->object.getStarterIntegrator());
        return ::org::hipparchus::ode::t_ODEIntegrator::wrap_Object(value);
      }
      static int t_MultistepIntegrator_set__starterIntegrator(t_MultistepIntegrator *self, PyObject *arg, void *data)
      {
        {
          ::org::hipparchus::ode::ODEIntegrator value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEIntegrator::initializeClass, &value))
          {
            INT_CALL(self->object.setStarterIntegrator(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "starterIntegrator", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fitting/PolynomialCurveFitter.h"
#include "org/hipparchus/fitting/PolynomialCurveFitter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *PolynomialCurveFitter::class$ = NULL;
      jmethodID *PolynomialCurveFitter::mids$ = NULL;
      bool PolynomialCurveFitter::live$ = false;

      jclass PolynomialCurveFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/PolynomialCurveFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_create_3cbe57f974583b20] = env->getStaticMethodID(cls, "create", "(I)Lorg/hipparchus/fitting/PolynomialCurveFitter;");
          mids$[mid_withMaxIterations_3cbe57f974583b20] = env->getMethodID(cls, "withMaxIterations", "(I)Lorg/hipparchus/fitting/PolynomialCurveFitter;");
          mids$[mid_withStartPoint_771fe95b412a62a4] = env->getMethodID(cls, "withStartPoint", "([D)Lorg/hipparchus/fitting/PolynomialCurveFitter;");
          mids$[mid_getProblem_cf073573d4101d89] = env->getMethodID(cls, "getProblem", "(Ljava/util/Collection;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PolynomialCurveFitter PolynomialCurveFitter::create(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return PolynomialCurveFitter(env->callStaticObjectMethod(cls, mids$[mid_create_3cbe57f974583b20], a0));
      }

      PolynomialCurveFitter PolynomialCurveFitter::withMaxIterations(jint a0) const
      {
        return PolynomialCurveFitter(env->callObjectMethod(this$, mids$[mid_withMaxIterations_3cbe57f974583b20], a0));
      }

      PolynomialCurveFitter PolynomialCurveFitter::withStartPoint(const JArray< jdouble > & a0) const
      {
        return PolynomialCurveFitter(env->callObjectMethod(this$, mids$[mid_withStartPoint_771fe95b412a62a4], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      static PyObject *t_PolynomialCurveFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialCurveFitter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialCurveFitter_create(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialCurveFitter_withMaxIterations(t_PolynomialCurveFitter *self, PyObject *arg);
      static PyObject *t_PolynomialCurveFitter_withStartPoint(t_PolynomialCurveFitter *self, PyObject *arg);

      static PyMethodDef t_PolynomialCurveFitter__methods_[] = {
        DECLARE_METHOD(t_PolynomialCurveFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialCurveFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialCurveFitter, create, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialCurveFitter, withMaxIterations, METH_O),
        DECLARE_METHOD(t_PolynomialCurveFitter, withStartPoint, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PolynomialCurveFitter)[] = {
        { Py_tp_methods, t_PolynomialCurveFitter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PolynomialCurveFitter)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fitting::AbstractCurveFitter),
        NULL
      };

      DEFINE_TYPE(PolynomialCurveFitter, t_PolynomialCurveFitter, PolynomialCurveFitter);

      void t_PolynomialCurveFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(PolynomialCurveFitter), &PY_TYPE_DEF(PolynomialCurveFitter), module, "PolynomialCurveFitter", 0);
      }

      void t_PolynomialCurveFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialCurveFitter), "class_", make_descriptor(PolynomialCurveFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialCurveFitter), "wrapfn_", make_descriptor(t_PolynomialCurveFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialCurveFitter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PolynomialCurveFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PolynomialCurveFitter::initializeClass, 1)))
          return NULL;
        return t_PolynomialCurveFitter::wrap_Object(PolynomialCurveFitter(((t_PolynomialCurveFitter *) arg)->object.this$));
      }
      static PyObject *t_PolynomialCurveFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PolynomialCurveFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PolynomialCurveFitter_create(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        PolynomialCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::fitting::PolynomialCurveFitter::create(a0));
          return t_PolynomialCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "create", arg);
        return NULL;
      }

      static PyObject *t_PolynomialCurveFitter_withMaxIterations(t_PolynomialCurveFitter *self, PyObject *arg)
      {
        jint a0;
        PolynomialCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withMaxIterations(a0));
          return t_PolynomialCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withMaxIterations", arg);
        return NULL;
      }

      static PyObject *t_PolynomialCurveFitter_withStartPoint(t_PolynomialCurveFitter *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        PolynomialCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.withStartPoint(a0));
          return t_PolynomialCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withStartPoint", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Double.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *CMAESOptimizer::class$ = NULL;
            jmethodID *CMAESOptimizer::mids$ = NULL;
            bool CMAESOptimizer::live$ = false;

            jclass CMAESOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_6ad6377e39b87917] = env->getMethodID(cls, "<init>", "(IDZIILorg/hipparchus/random/RandomGenerator;ZLorg/hipparchus/optim/ConvergenceChecker;)V");
                mids$[mid_getStatisticsDHistory_0d9551367f7ecdef] = env->getMethodID(cls, "getStatisticsDHistory", "()Ljava/util/List;");
                mids$[mid_getStatisticsFitnessHistory_0d9551367f7ecdef] = env->getMethodID(cls, "getStatisticsFitnessHistory", "()Ljava/util/List;");
                mids$[mid_getStatisticsMeanHistory_0d9551367f7ecdef] = env->getMethodID(cls, "getStatisticsMeanHistory", "()Ljava/util/List;");
                mids$[mid_getStatisticsSigmaHistory_0d9551367f7ecdef] = env->getMethodID(cls, "getStatisticsSigmaHistory", "()Ljava/util/List;");
                mids$[mid_optimize_428d2547a0c45016] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
                mids$[mid_doOptimize_adf293b2643f22b0] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/PointValuePair;");
                mids$[mid_parseOptimizationData_946a92401917c130] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CMAESOptimizer::CMAESOptimizer(jint a0, jdouble a1, jboolean a2, jint a3, jint a4, const ::org::hipparchus::random::RandomGenerator & a5, jboolean a6, const ::org::hipparchus::optim::ConvergenceChecker & a7) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_6ad6377e39b87917, a0, a1, a2, a3, a4, a5.this$, a6, a7.this$)) {}

            ::java::util::List CMAESOptimizer::getStatisticsDHistory() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStatisticsDHistory_0d9551367f7ecdef]));
            }

            ::java::util::List CMAESOptimizer::getStatisticsFitnessHistory() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStatisticsFitnessHistory_0d9551367f7ecdef]));
            }

            ::java::util::List CMAESOptimizer::getStatisticsMeanHistory() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStatisticsMeanHistory_0d9551367f7ecdef]));
            }

            ::java::util::List CMAESOptimizer::getStatisticsSigmaHistory() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStatisticsSigmaHistory_0d9551367f7ecdef]));
            }

            ::org::hipparchus::optim::PointValuePair CMAESOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
            {
              return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_428d2547a0c45016], a0.this$));
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
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer$PopulationSize.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer$Sigma.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {
            static PyObject *t_CMAESOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CMAESOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CMAESOptimizer_of_(t_CMAESOptimizer *self, PyObject *args);
            static int t_CMAESOptimizer_init_(t_CMAESOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CMAESOptimizer_getStatisticsDHistory(t_CMAESOptimizer *self);
            static PyObject *t_CMAESOptimizer_getStatisticsFitnessHistory(t_CMAESOptimizer *self);
            static PyObject *t_CMAESOptimizer_getStatisticsMeanHistory(t_CMAESOptimizer *self);
            static PyObject *t_CMAESOptimizer_getStatisticsSigmaHistory(t_CMAESOptimizer *self);
            static PyObject *t_CMAESOptimizer_optimize(t_CMAESOptimizer *self, PyObject *args);
            static PyObject *t_CMAESOptimizer_get__statisticsDHistory(t_CMAESOptimizer *self, void *data);
            static PyObject *t_CMAESOptimizer_get__statisticsFitnessHistory(t_CMAESOptimizer *self, void *data);
            static PyObject *t_CMAESOptimizer_get__statisticsMeanHistory(t_CMAESOptimizer *self, void *data);
            static PyObject *t_CMAESOptimizer_get__statisticsSigmaHistory(t_CMAESOptimizer *self, void *data);
            static PyObject *t_CMAESOptimizer_get__parameters_(t_CMAESOptimizer *self, void *data);
            static PyGetSetDef t_CMAESOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_CMAESOptimizer, statisticsDHistory),
              DECLARE_GET_FIELD(t_CMAESOptimizer, statisticsFitnessHistory),
              DECLARE_GET_FIELD(t_CMAESOptimizer, statisticsMeanHistory),
              DECLARE_GET_FIELD(t_CMAESOptimizer, statisticsSigmaHistory),
              DECLARE_GET_FIELD(t_CMAESOptimizer, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CMAESOptimizer__methods_[] = {
              DECLARE_METHOD(t_CMAESOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CMAESOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CMAESOptimizer, of_, METH_VARARGS),
              DECLARE_METHOD(t_CMAESOptimizer, getStatisticsDHistory, METH_NOARGS),
              DECLARE_METHOD(t_CMAESOptimizer, getStatisticsFitnessHistory, METH_NOARGS),
              DECLARE_METHOD(t_CMAESOptimizer, getStatisticsMeanHistory, METH_NOARGS),
              DECLARE_METHOD(t_CMAESOptimizer, getStatisticsSigmaHistory, METH_NOARGS),
              DECLARE_METHOD(t_CMAESOptimizer, optimize, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CMAESOptimizer)[] = {
              { Py_tp_methods, t_CMAESOptimizer__methods_ },
              { Py_tp_init, (void *) t_CMAESOptimizer_init_ },
              { Py_tp_getset, t_CMAESOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CMAESOptimizer)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer),
              NULL
            };

            DEFINE_TYPE(CMAESOptimizer, t_CMAESOptimizer, CMAESOptimizer);
            PyObject *t_CMAESOptimizer::wrap_Object(const CMAESOptimizer& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CMAESOptimizer::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CMAESOptimizer *self = (t_CMAESOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CMAESOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CMAESOptimizer::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CMAESOptimizer *self = (t_CMAESOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CMAESOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(CMAESOptimizer), &PY_TYPE_DEF(CMAESOptimizer), module, "CMAESOptimizer", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer), "PopulationSize", make_descriptor(&PY_TYPE_DEF(CMAESOptimizer$PopulationSize)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer), "Sigma", make_descriptor(&PY_TYPE_DEF(CMAESOptimizer$Sigma)));
            }

            void t_CMAESOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer), "class_", make_descriptor(CMAESOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer), "wrapfn_", make_descriptor(t_CMAESOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CMAESOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CMAESOptimizer::initializeClass, 1)))
                return NULL;
              return t_CMAESOptimizer::wrap_Object(CMAESOptimizer(((t_CMAESOptimizer *) arg)->object.this$));
            }
            static PyObject *t_CMAESOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CMAESOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CMAESOptimizer_of_(t_CMAESOptimizer *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_CMAESOptimizer_init_(t_CMAESOptimizer *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              jdouble a1;
              jboolean a2;
              jint a3;
              jint a4;
              ::org::hipparchus::random::RandomGenerator a5((jobject) NULL);
              jboolean a6;
              ::org::hipparchus::optim::ConvergenceChecker a7((jobject) NULL);
              PyTypeObject **p7;
              CMAESOptimizer object((jobject) NULL);

              if (!parseArgs(args, "IDZIIkZK", ::org::hipparchus::random::RandomGenerator::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &p7, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
              {
                INT_CALL(object = CMAESOptimizer(a0, a1, a2, a3, a4, a5, a6, a7));
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

            static PyObject *t_CMAESOptimizer_getStatisticsDHistory(t_CMAESOptimizer *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getStatisticsDHistory());
              return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealMatrix));
            }

            static PyObject *t_CMAESOptimizer_getStatisticsFitnessHistory(t_CMAESOptimizer *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getStatisticsFitnessHistory());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(Double));
            }

            static PyObject *t_CMAESOptimizer_getStatisticsMeanHistory(t_CMAESOptimizer *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getStatisticsMeanHistory());
              return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealMatrix));
            }

            static PyObject *t_CMAESOptimizer_getStatisticsSigmaHistory(t_CMAESOptimizer *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getStatisticsSigmaHistory());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(Double));
            }

            static PyObject *t_CMAESOptimizer_optimize(t_CMAESOptimizer *self, PyObject *args)
            {
              JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
              ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

              if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.optimize(a0));
                return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
              }

              return callSuper(PY_TYPE(CMAESOptimizer), (PyObject *) self, "optimize", args, 2);
            }
            static PyObject *t_CMAESOptimizer_get__parameters_(t_CMAESOptimizer *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_CMAESOptimizer_get__statisticsDHistory(t_CMAESOptimizer *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getStatisticsDHistory());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_CMAESOptimizer_get__statisticsFitnessHistory(t_CMAESOptimizer *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getStatisticsFitnessHistory());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_CMAESOptimizer_get__statisticsMeanHistory(t_CMAESOptimizer *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getStatisticsMeanHistory());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_CMAESOptimizer_get__statisticsSigmaHistory(t_CMAESOptimizer *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getStatisticsSigmaHistory());
              return ::java::util::t_List::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/OrekitInternalError.h"
#include "java/util/Locale.h"
#include "java/lang/Throwable.h"
#include "org/orekit/errors/LocalizedException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitInternalError::class$ = NULL;
      jmethodID *OrekitInternalError::mids$ = NULL;
      bool OrekitInternalError::live$ = false;

      jclass OrekitInternalError::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitInternalError");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7d9320fd2ea36122] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
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

      OrekitInternalError::OrekitInternalError(const ::java::lang::Throwable & a0) : ::java::lang::IllegalStateException(env->newObject(initializeClass, &mids$, mid_init$_7d9320fd2ea36122, a0.this$)) {}

      ::java::lang::String OrekitInternalError::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_3cffd47377eca18a]));
      }

      ::java::lang::String OrekitInternalError::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_3cffd47377eca18a]));
      }

      ::java::lang::String OrekitInternalError::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_4b51060c6b7ea981], a0.this$));
      }

      JArray< ::java::lang::Object > OrekitInternalError::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_6555a5198c71b73a]));
      }

      ::org::hipparchus::exception::Localizable OrekitInternalError::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_a86d7419cf3241b7]));
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
      static PyObject *t_OrekitInternalError_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitInternalError_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrekitInternalError_init_(t_OrekitInternalError *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitInternalError_getLocalizedMessage(t_OrekitInternalError *self, PyObject *args);
      static PyObject *t_OrekitInternalError_getMessage(t_OrekitInternalError *self, PyObject *args);
      static PyObject *t_OrekitInternalError_getParts(t_OrekitInternalError *self);
      static PyObject *t_OrekitInternalError_getSpecifier(t_OrekitInternalError *self);
      static PyObject *t_OrekitInternalError_get__localizedMessage(t_OrekitInternalError *self, void *data);
      static PyObject *t_OrekitInternalError_get__message(t_OrekitInternalError *self, void *data);
      static PyObject *t_OrekitInternalError_get__parts(t_OrekitInternalError *self, void *data);
      static PyObject *t_OrekitInternalError_get__specifier(t_OrekitInternalError *self, void *data);
      static PyGetSetDef t_OrekitInternalError__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitInternalError, localizedMessage),
        DECLARE_GET_FIELD(t_OrekitInternalError, message),
        DECLARE_GET_FIELD(t_OrekitInternalError, parts),
        DECLARE_GET_FIELD(t_OrekitInternalError, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitInternalError__methods_[] = {
        DECLARE_METHOD(t_OrekitInternalError, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitInternalError, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitInternalError, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitInternalError, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitInternalError, getParts, METH_NOARGS),
        DECLARE_METHOD(t_OrekitInternalError, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitInternalError)[] = {
        { Py_tp_methods, t_OrekitInternalError__methods_ },
        { Py_tp_init, (void *) t_OrekitInternalError_init_ },
        { Py_tp_getset, t_OrekitInternalError__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitInternalError)[] = {
        &PY_TYPE_DEF(::java::lang::IllegalStateException),
        NULL
      };

      DEFINE_TYPE(OrekitInternalError, t_OrekitInternalError, OrekitInternalError);

      void t_OrekitInternalError::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitInternalError), &PY_TYPE_DEF(OrekitInternalError), module, "OrekitInternalError", 0);
      }

      void t_OrekitInternalError::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitInternalError), "class_", make_descriptor(OrekitInternalError::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitInternalError), "wrapfn_", make_descriptor(t_OrekitInternalError::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitInternalError), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitInternalError_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitInternalError::initializeClass, 1)))
          return NULL;
        return t_OrekitInternalError::wrap_Object(OrekitInternalError(((t_OrekitInternalError *) arg)->object.this$));
      }
      static PyObject *t_OrekitInternalError_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitInternalError::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrekitInternalError_init_(t_OrekitInternalError *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Throwable a0((jobject) NULL);
        OrekitInternalError object((jobject) NULL);

        if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
        {
          INT_CALL(object = OrekitInternalError(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OrekitInternalError_getLocalizedMessage(t_OrekitInternalError *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(OrekitInternalError), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_OrekitInternalError_getMessage(t_OrekitInternalError *self, PyObject *args)
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

        return callSuper(PY_TYPE(OrekitInternalError), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_OrekitInternalError_getParts(t_OrekitInternalError *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitInternalError_getSpecifier(t_OrekitInternalError *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_OrekitInternalError_get__localizedMessage(t_OrekitInternalError *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitInternalError_get__message(t_OrekitInternalError *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitInternalError_get__parts(t_OrekitInternalError *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitInternalError_get__specifier(t_OrekitInternalError *self, void *data)
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
#include "java/util/AbstractMap.h"
#include "java/util/Map$Entry.h"
#include "java/util/Map.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *AbstractMap::class$ = NULL;
    jmethodID *AbstractMap::mids$ = NULL;
    bool AbstractMap::live$ = false;

    jclass AbstractMap::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/AbstractMap");

        mids$ = new jmethodID[max_mid];
        mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_containsKey_221e8e85cb385209] = env->getMethodID(cls, "containsKey", "(Ljava/lang/Object;)Z");
        mids$[mid_containsValue_221e8e85cb385209] = env->getMethodID(cls, "containsValue", "(Ljava/lang/Object;)Z");
        mids$[mid_entrySet_2dfcbd371d62f4e1] = env->getMethodID(cls, "entrySet", "()Ljava/util/Set;");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_65d69db95c5eb156] = env->getMethodID(cls, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_89b302893bdbe1f1] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_keySet_2dfcbd371d62f4e1] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_put_e9b6f8dd03d71e12] = env->getMethodID(cls, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_putAll_6ba01303bcce0307] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
        mids$[mid_remove_65d69db95c5eb156] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_size_412668abc8d889e9] = env->getMethodID(cls, "size", "()I");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_values_12ee61573a18f417] = env->getMethodID(cls, "values", "()Ljava/util/Collection;");
        mids$[mid_clone_e661fe3ba2fafb22] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void AbstractMap::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
    }

    jboolean AbstractMap::containsKey(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsKey_221e8e85cb385209], a0.this$);
    }

    jboolean AbstractMap::containsValue(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsValue_221e8e85cb385209], a0.this$);
    }

    ::java::util::Set AbstractMap::entrySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_entrySet_2dfcbd371d62f4e1]));
    }

    jboolean AbstractMap::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    ::java::lang::Object AbstractMap::get$(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_65d69db95c5eb156], a0.this$));
    }

    jint AbstractMap::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    jboolean AbstractMap::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_89b302893bdbe1f1]);
    }

    ::java::util::Set AbstractMap::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_2dfcbd371d62f4e1]));
    }

    ::java::lang::Object AbstractMap::put(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_put_e9b6f8dd03d71e12], a0.this$, a1.this$));
    }

    void AbstractMap::putAll(const ::java::util::Map & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_putAll_6ba01303bcce0307], a0.this$);
    }

    ::java::lang::Object AbstractMap::remove(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_65d69db95c5eb156], a0.this$));
    }

    jint AbstractMap::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_412668abc8d889e9]);
    }

    ::java::lang::String AbstractMap::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
    }

    ::java::util::Collection AbstractMap::values() const
    {
      return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_values_12ee61573a18f417]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_AbstractMap_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractMap_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractMap_of_(t_AbstractMap *self, PyObject *args);
    static PyObject *t_AbstractMap_clear(t_AbstractMap *self);
    static PyObject *t_AbstractMap_containsKey(t_AbstractMap *self, PyObject *arg);
    static PyObject *t_AbstractMap_containsValue(t_AbstractMap *self, PyObject *arg);
    static PyObject *t_AbstractMap_entrySet(t_AbstractMap *self);
    static PyObject *t_AbstractMap_equals(t_AbstractMap *self, PyObject *args);
    static PyObject *t_AbstractMap_get(t_AbstractMap *self, PyObject *arg);
    static PyObject *t_AbstractMap_hashCode(t_AbstractMap *self, PyObject *args);
    static PyObject *t_AbstractMap_isEmpty(t_AbstractMap *self);
    static PyObject *t_AbstractMap_keySet(t_AbstractMap *self);
    static PyObject *t_AbstractMap_put(t_AbstractMap *self, PyObject *args);
    static PyObject *t_AbstractMap_putAll(t_AbstractMap *self, PyObject *arg);
    static PyObject *t_AbstractMap_remove(t_AbstractMap *self, PyObject *arg);
    static PyObject *t_AbstractMap_size(t_AbstractMap *self);
    static PyObject *t_AbstractMap_toString(t_AbstractMap *self, PyObject *args);
    static PyObject *t_AbstractMap_values(t_AbstractMap *self);
    static PyObject *t_AbstractMap_get__empty(t_AbstractMap *self, void *data);
    static PyObject *t_AbstractMap_get__parameters_(t_AbstractMap *self, void *data);
    static PyGetSetDef t_AbstractMap__fields_[] = {
      DECLARE_GET_FIELD(t_AbstractMap, empty),
      DECLARE_GET_FIELD(t_AbstractMap, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_AbstractMap__methods_[] = {
      DECLARE_METHOD(t_AbstractMap, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractMap, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractMap, of_, METH_VARARGS),
      DECLARE_METHOD(t_AbstractMap, clear, METH_NOARGS),
      DECLARE_METHOD(t_AbstractMap, containsKey, METH_O),
      DECLARE_METHOD(t_AbstractMap, containsValue, METH_O),
      DECLARE_METHOD(t_AbstractMap, entrySet, METH_NOARGS),
      DECLARE_METHOD(t_AbstractMap, equals, METH_VARARGS),
      DECLARE_METHOD(t_AbstractMap, get, METH_O),
      DECLARE_METHOD(t_AbstractMap, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_AbstractMap, isEmpty, METH_NOARGS),
      DECLARE_METHOD(t_AbstractMap, keySet, METH_NOARGS),
      DECLARE_METHOD(t_AbstractMap, put, METH_VARARGS),
      DECLARE_METHOD(t_AbstractMap, putAll, METH_O),
      DECLARE_METHOD(t_AbstractMap, remove, METH_O),
      DECLARE_METHOD(t_AbstractMap, size, METH_NOARGS),
      DECLARE_METHOD(t_AbstractMap, toString, METH_VARARGS),
      DECLARE_METHOD(t_AbstractMap, values, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(AbstractMap)[] = {
      { Py_tp_methods, t_AbstractMap__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_AbstractMap__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(AbstractMap)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(AbstractMap, t_AbstractMap, AbstractMap);
    PyObject *t_AbstractMap::wrap_Object(const AbstractMap& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_AbstractMap::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractMap *self = (t_AbstractMap *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_AbstractMap::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_AbstractMap::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractMap *self = (t_AbstractMap *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_AbstractMap::install(PyObject *module)
    {
      installType(&PY_TYPE(AbstractMap), &PY_TYPE_DEF(AbstractMap), module, "AbstractMap", 0);
    }

    void t_AbstractMap::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMap), "class_", make_descriptor(AbstractMap::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMap), "wrapfn_", make_descriptor(t_AbstractMap::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMap), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_AbstractMap_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, AbstractMap::initializeClass, 1)))
        return NULL;
      return t_AbstractMap::wrap_Object(AbstractMap(((t_AbstractMap *) arg)->object.this$));
    }
    static PyObject *t_AbstractMap_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, AbstractMap::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_AbstractMap_of_(t_AbstractMap *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_AbstractMap_clear(t_AbstractMap *self)
    {
      OBJ_CALL(self->object.clear());
      Py_RETURN_NONE;
    }

    static PyObject *t_AbstractMap_containsKey(t_AbstractMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsKey(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "containsKey", arg);
      return NULL;
    }

    static PyObject *t_AbstractMap_containsValue(t_AbstractMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsValue(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "containsValue", arg);
      return NULL;
    }

    static PyObject *t_AbstractMap_entrySet(t_AbstractMap *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.entrySet());
      return ::java::util::t_Set::wrap_Object(result);
    }

    static PyObject *t_AbstractMap_equals(t_AbstractMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(AbstractMap), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_AbstractMap_get(t_AbstractMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "get", arg);
      return NULL;
    }

    static PyObject *t_AbstractMap_hashCode(t_AbstractMap *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(AbstractMap), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_AbstractMap_isEmpty(t_AbstractMap *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEmpty());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_AbstractMap_keySet(t_AbstractMap *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.keySet());
      return ::java::util::t_Set::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_AbstractMap_put(t_AbstractMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.put(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "put", args);
      return NULL;
    }

    static PyObject *t_AbstractMap_putAll(t_AbstractMap *self, PyObject *arg)
    {
      ::java::util::Map a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
      {
        OBJ_CALL(self->object.putAll(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "putAll", arg);
      return NULL;
    }

    static PyObject *t_AbstractMap_remove(t_AbstractMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "remove", arg);
      return NULL;
    }

    static PyObject *t_AbstractMap_size(t_AbstractMap *self)
    {
      jint result;
      OBJ_CALL(result = self->object.size());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_AbstractMap_toString(t_AbstractMap *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(AbstractMap), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_AbstractMap_values(t_AbstractMap *self)
    {
      ::java::util::Collection result((jobject) NULL);
      OBJ_CALL(result = self->object.values());
      return ::java::util::t_Collection::wrap_Object(result, self->parameters[1]);
    }
    static PyObject *t_AbstractMap_get__parameters_(t_AbstractMap *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_AbstractMap_get__empty(t_AbstractMap *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/parsing/PythonAbstractConstituentParser.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *PythonAbstractConstituentParser::class$ = NULL;
            jmethodID *PythonAbstractConstituentParser::mids$ = NULL;
            bool PythonAbstractConstituentParser::live$ = false;

            jclass PythonAbstractConstituentParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/parsing/PythonAbstractConstituentParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_303f51e33561a967] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/NdmConstituent;");
                mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_finalizeData_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeData", "()Z");
                mids$[mid_finalizeHeader_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeHeader", "()Z");
                mids$[mid_finalizeMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                mids$[mid_getHeader_6fe6597816e9e593] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/section/Header;");
                mids$[mid_inData_89b302893bdbe1f1] = env->getMethodID(cls, "inData", "()Z");
                mids$[mid_inHeader_89b302893bdbe1f1] = env->getMethodID(cls, "inHeader", "()Z");
                mids$[mid_inMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "inMetadata", "()Z");
                mids$[mid_prepareData_89b302893bdbe1f1] = env->getMethodID(cls, "prepareData", "()Z");
                mids$[mid_prepareHeader_89b302893bdbe1f1] = env->getMethodID(cls, "prepareHeader", "()Z");
                mids$[mid_prepareMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "prepareMetadata", "()Z");
                mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_reset_a580586827f4ec13] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void PythonAbstractConstituentParser::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
            }

            jlong PythonAbstractConstituentParser::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
            }

            void PythonAbstractConstituentParser::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
          namespace parsing {
            static PyObject *t_PythonAbstractConstituentParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractConstituentParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractConstituentParser_of_(t_PythonAbstractConstituentParser *self, PyObject *args);
            static PyObject *t_PythonAbstractConstituentParser_finalize(t_PythonAbstractConstituentParser *self);
            static PyObject *t_PythonAbstractConstituentParser_pythonExtension(t_PythonAbstractConstituentParser *self, PyObject *args);
            static jobject JNICALL t_PythonAbstractConstituentParser_build0(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_finalizeData1(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_finalizeHeader2(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_finalizeMetadata3(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonAbstractConstituentParser_getHeader4(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_inData5(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_inHeader6(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_inMetadata7(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_prepareData8(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_prepareHeader9(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_prepareMetadata10(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractConstituentParser_pythonDecRef11(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractConstituentParser_reset12(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonAbstractConstituentParser_get__self(t_PythonAbstractConstituentParser *self, void *data);
            static PyObject *t_PythonAbstractConstituentParser_get__parameters_(t_PythonAbstractConstituentParser *self, void *data);
            static PyGetSetDef t_PythonAbstractConstituentParser__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAbstractConstituentParser, self),
              DECLARE_GET_FIELD(t_PythonAbstractConstituentParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAbstractConstituentParser__methods_[] = {
              DECLARE_METHOD(t_PythonAbstractConstituentParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractConstituentParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractConstituentParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonAbstractConstituentParser, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAbstractConstituentParser, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAbstractConstituentParser)[] = {
              { Py_tp_methods, t_PythonAbstractConstituentParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_PythonAbstractConstituentParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAbstractConstituentParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser),
              NULL
            };

            DEFINE_TYPE(PythonAbstractConstituentParser, t_PythonAbstractConstituentParser, PythonAbstractConstituentParser);
            PyObject *t_PythonAbstractConstituentParser::wrap_Object(const PythonAbstractConstituentParser& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_PythonAbstractConstituentParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractConstituentParser *self = (t_PythonAbstractConstituentParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_PythonAbstractConstituentParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_PythonAbstractConstituentParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractConstituentParser *self = (t_PythonAbstractConstituentParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_PythonAbstractConstituentParser::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAbstractConstituentParser), &PY_TYPE_DEF(PythonAbstractConstituentParser), module, "PythonAbstractConstituentParser", 1);
            }

            void t_PythonAbstractConstituentParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractConstituentParser), "class_", make_descriptor(PythonAbstractConstituentParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractConstituentParser), "wrapfn_", make_descriptor(t_PythonAbstractConstituentParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractConstituentParser), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAbstractConstituentParser::initializeClass);
              JNINativeMethod methods[] = {
                { "build", "()Lorg/orekit/files/ccsds/ndm/NdmConstituent;", (void *) t_PythonAbstractConstituentParser_build0 },
                { "finalizeData", "()Z", (void *) t_PythonAbstractConstituentParser_finalizeData1 },
                { "finalizeHeader", "()Z", (void *) t_PythonAbstractConstituentParser_finalizeHeader2 },
                { "finalizeMetadata", "()Z", (void *) t_PythonAbstractConstituentParser_finalizeMetadata3 },
                { "getHeader", "()Lorg/orekit/files/ccsds/section/Header;", (void *) t_PythonAbstractConstituentParser_getHeader4 },
                { "inData", "()Z", (void *) t_PythonAbstractConstituentParser_inData5 },
                { "inHeader", "()Z", (void *) t_PythonAbstractConstituentParser_inHeader6 },
                { "inMetadata", "()Z", (void *) t_PythonAbstractConstituentParser_inMetadata7 },
                { "prepareData", "()Z", (void *) t_PythonAbstractConstituentParser_prepareData8 },
                { "prepareHeader", "()Z", (void *) t_PythonAbstractConstituentParser_prepareHeader9 },
                { "prepareMetadata", "()Z", (void *) t_PythonAbstractConstituentParser_prepareMetadata10 },
                { "pythonDecRef", "()V", (void *) t_PythonAbstractConstituentParser_pythonDecRef11 },
                { "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V", (void *) t_PythonAbstractConstituentParser_reset12 },
              };
              env->registerNatives(cls, methods, 13);
            }

            static PyObject *t_PythonAbstractConstituentParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAbstractConstituentParser::initializeClass, 1)))
                return NULL;
              return t_PythonAbstractConstituentParser::wrap_Object(PythonAbstractConstituentParser(((t_PythonAbstractConstituentParser *) arg)->object.this$));
            }
            static PyObject *t_PythonAbstractConstituentParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAbstractConstituentParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonAbstractConstituentParser_of_(t_PythonAbstractConstituentParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_PythonAbstractConstituentParser_finalize(t_PythonAbstractConstituentParser *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAbstractConstituentParser_pythonExtension(t_PythonAbstractConstituentParser *self, PyObject *args)
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

            static jobject JNICALL t_PythonAbstractConstituentParser_build0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::ndm::NdmConstituent value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "build", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::ndm::NdmConstituent::initializeClass, &value))
              {
                throwTypeError("build", result);
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

            static jboolean JNICALL t_PythonAbstractConstituentParser_finalizeData1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_finalizeHeader2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_finalizeMetadata3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jobject JNICALL t_PythonAbstractConstituentParser_getHeader4(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::section::Header value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::section::Header::initializeClass, &value))
              {
                throwTypeError("getHeader", result);
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

            static jboolean JNICALL t_PythonAbstractConstituentParser_inData5(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_inHeader6(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_inMetadata7(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_prepareData8(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_prepareHeader9(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_prepareMetadata10(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static void JNICALL t_PythonAbstractConstituentParser_pythonDecRef11(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonAbstractConstituentParser_reset12(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(::org::orekit::files::ccsds::utils::FileFormat(a0));
              PyObject *result = PyObject_CallMethod(obj, "reset", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonAbstractConstituentParser_get__self(t_PythonAbstractConstituentParser *self, void *data)
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
            static PyObject *t_PythonAbstractConstituentParser_get__parameters_(t_PythonAbstractConstituentParser *self, void *data)
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
#include "org/orekit/propagation/events/PositionAngleDetector.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/propagation/events/PositionAngleDetector.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PositionAngleDetector::class$ = NULL;
        jmethodID *PositionAngleDetector::mids$ = NULL;
        bool PositionAngleDetector::live$ = false;

        jclass PositionAngleDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PositionAngleDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_11e2fabc7dbd7987] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;D)V");
            mids$[mid_init$_0921d66304478fa1] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;D)V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getAngle_557b8123390d8d0c] = env->getMethodID(cls, "getAngle", "()D");
            mids$[mid_getOrbitType_2cea2a2cb3e02091] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getPositionAngleType_f4984aee71df4c19] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_099a9e5f7fe40a66] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/PositionAngleDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PositionAngleDetector::PositionAngleDetector(const ::org::orekit::orbits::OrbitType & a0, const ::org::orekit::orbits::PositionAngleType & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_11e2fabc7dbd7987, a0.this$, a1.this$, a2)) {}

        PositionAngleDetector::PositionAngleDetector(jdouble a0, jdouble a1, const ::org::orekit::orbits::OrbitType & a2, const ::org::orekit::orbits::PositionAngleType & a3, jdouble a4) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_0921d66304478fa1, a0, a1, a2.this$, a3.this$, a4)) {}

        jdouble PositionAngleDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
        }

        jdouble PositionAngleDetector::getAngle() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAngle_557b8123390d8d0c]);
        }

        ::org::orekit::orbits::OrbitType PositionAngleDetector::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_2cea2a2cb3e02091]));
        }

        ::org::orekit::orbits::PositionAngleType PositionAngleDetector::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_f4984aee71df4c19]));
        }

        void PositionAngleDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
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
        static PyObject *t_PositionAngleDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PositionAngleDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PositionAngleDetector_of_(t_PositionAngleDetector *self, PyObject *args);
        static int t_PositionAngleDetector_init_(t_PositionAngleDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PositionAngleDetector_g(t_PositionAngleDetector *self, PyObject *args);
        static PyObject *t_PositionAngleDetector_getAngle(t_PositionAngleDetector *self);
        static PyObject *t_PositionAngleDetector_getOrbitType(t_PositionAngleDetector *self);
        static PyObject *t_PositionAngleDetector_getPositionAngleType(t_PositionAngleDetector *self);
        static PyObject *t_PositionAngleDetector_init(t_PositionAngleDetector *self, PyObject *args);
        static PyObject *t_PositionAngleDetector_get__angle(t_PositionAngleDetector *self, void *data);
        static PyObject *t_PositionAngleDetector_get__orbitType(t_PositionAngleDetector *self, void *data);
        static PyObject *t_PositionAngleDetector_get__positionAngleType(t_PositionAngleDetector *self, void *data);
        static PyObject *t_PositionAngleDetector_get__parameters_(t_PositionAngleDetector *self, void *data);
        static PyGetSetDef t_PositionAngleDetector__fields_[] = {
          DECLARE_GET_FIELD(t_PositionAngleDetector, angle),
          DECLARE_GET_FIELD(t_PositionAngleDetector, orbitType),
          DECLARE_GET_FIELD(t_PositionAngleDetector, positionAngleType),
          DECLARE_GET_FIELD(t_PositionAngleDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PositionAngleDetector__methods_[] = {
          DECLARE_METHOD(t_PositionAngleDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PositionAngleDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PositionAngleDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_PositionAngleDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_PositionAngleDetector, getAngle, METH_NOARGS),
          DECLARE_METHOD(t_PositionAngleDetector, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_PositionAngleDetector, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_PositionAngleDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PositionAngleDetector)[] = {
          { Py_tp_methods, t_PositionAngleDetector__methods_ },
          { Py_tp_init, (void *) t_PositionAngleDetector_init_ },
          { Py_tp_getset, t_PositionAngleDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PositionAngleDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(PositionAngleDetector, t_PositionAngleDetector, PositionAngleDetector);
        PyObject *t_PositionAngleDetector::wrap_Object(const PositionAngleDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PositionAngleDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PositionAngleDetector *self = (t_PositionAngleDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PositionAngleDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PositionAngleDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PositionAngleDetector *self = (t_PositionAngleDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PositionAngleDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(PositionAngleDetector), &PY_TYPE_DEF(PositionAngleDetector), module, "PositionAngleDetector", 0);
        }

        void t_PositionAngleDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleDetector), "class_", make_descriptor(PositionAngleDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleDetector), "wrapfn_", make_descriptor(t_PositionAngleDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PositionAngleDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PositionAngleDetector::initializeClass, 1)))
            return NULL;
          return t_PositionAngleDetector::wrap_Object(PositionAngleDetector(((t_PositionAngleDetector *) arg)->object.this$));
        }
        static PyObject *t_PositionAngleDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PositionAngleDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PositionAngleDetector_of_(t_PositionAngleDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PositionAngleDetector_init_(t_PositionAngleDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::orbits::OrbitType a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              PositionAngleDetector object((jobject) NULL);

              if (!parseArgs(args, "KKD", ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_OrbitType::parameters_, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2))
              {
                INT_CALL(object = PositionAngleDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(PositionAngleDetector);
                break;
              }
            }
            goto err;
           case 5:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::orbits::OrbitType a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::orbits::PositionAngleType a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              PositionAngleDetector object((jobject) NULL);

              if (!parseArgs(args, "DDKKD", ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_, &a3, &p3, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a4))
              {
                INT_CALL(object = PositionAngleDetector(a0, a1, a2, a3, a4));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(PositionAngleDetector);
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

        static PyObject *t_PositionAngleDetector_g(t_PositionAngleDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PositionAngleDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_PositionAngleDetector_getAngle(t_PositionAngleDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAngle());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_PositionAngleDetector_getOrbitType(t_PositionAngleDetector *self)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        static PyObject *t_PositionAngleDetector_getPositionAngleType(t_PositionAngleDetector *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_PositionAngleDetector_init(t_PositionAngleDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(PositionAngleDetector), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_PositionAngleDetector_get__parameters_(t_PositionAngleDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_PositionAngleDetector_get__angle(t_PositionAngleDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAngle());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PositionAngleDetector_get__orbitType(t_PositionAngleDetector *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }

        static PyObject *t_PositionAngleDetector_get__positionAngleType(t_PositionAngleDetector *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/frames/StaticTransform.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *FieldStaticTransform::class$ = NULL;
      jmethodID *FieldStaticTransform::mids$ = NULL;
      bool FieldStaticTransform::live$ = false;

      jclass FieldStaticTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/FieldStaticTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_compose_066a6913a4b63ff5] = env->getStaticMethodID(cls, "compose", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/FieldStaticTransform;Lorg/orekit/frames/FieldStaticTransform;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_compositeRotation_014853c586edcdd1] = env->getStaticMethodID(cls, "compositeRotation", "(Lorg/orekit/frames/FieldStaticTransform;Lorg/orekit/frames/FieldStaticTransform;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_compositeTranslation_44279ba3a6027e62] = env->getStaticMethodID(cls, "compositeTranslation", "(Lorg/orekit/frames/FieldStaticTransform;Lorg/orekit/frames/FieldStaticTransform;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getIdentity_2bcc0f7f43ffb45e] = env->getStaticMethodID(cls, "getIdentity", "(Lorg/hipparchus/Field;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getInverse_fe2c5c7bc73a25b6] = env->getMethodID(cls, "getInverse", "()Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getRotation_73da4eeccf2b7e14] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getTranslation_2d64addf4c3391d9] = env->getMethodID(cls, "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_of_d8bca083a85ca2e7] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_of_7bc4315b92dbfe6f] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_of_860013017bff522f] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/StaticTransform;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_of_d7b67bfa134276b0] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_transformLine_d12840109f20e722] = env->getMethodID(cls, "transformLine", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;)Lorg/hipparchus/geometry/euclidean/threed/FieldLine;");
          mids$[mid_transformLine_74f3858d2d426a7f] = env->getMethodID(cls, "transformLine", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)Lorg/hipparchus/geometry/euclidean/threed/FieldLine;");
          mids$[mid_transformPosition_588ed0f09550adb9] = env->getMethodID(cls, "transformPosition", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transformPosition_3d90e30d4cb13513] = env->getMethodID(cls, "transformPosition", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transformVector_588ed0f09550adb9] = env->getMethodID(cls, "transformVector", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transformVector_3d90e30d4cb13513] = env->getMethodID(cls, "transformVector", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldStaticTransform FieldStaticTransform::compose(const ::org::orekit::time::FieldAbsoluteDate & a0, const FieldStaticTransform & a1, const FieldStaticTransform & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldStaticTransform(env->callStaticObjectMethod(cls, mids$[mid_compose_066a6913a4b63ff5], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldStaticTransform::compositeRotation(const FieldStaticTransform & a0, const FieldStaticTransform & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callStaticObjectMethod(cls, mids$[mid_compositeRotation_014853c586edcdd1], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldStaticTransform::compositeTranslation(const FieldStaticTransform & a0, const FieldStaticTransform & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_compositeTranslation_44279ba3a6027e62], a0.this$, a1.this$));
      }

      FieldStaticTransform FieldStaticTransform::getIdentity(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldStaticTransform(env->callStaticObjectMethod(cls, mids$[mid_getIdentity_2bcc0f7f43ffb45e], a0.this$));
      }

      FieldStaticTransform FieldStaticTransform::getInverse() const
      {
        return FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getInverse_fe2c5c7bc73a25b6]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldStaticTransform::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getRotation_73da4eeccf2b7e14]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldStaticTransform::getTranslation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getTranslation_2d64addf4c3391d9]));
      }

      FieldStaticTransform FieldStaticTransform::of(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldStaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_d8bca083a85ca2e7], a0.this$, a1.this$));
      }

      FieldStaticTransform FieldStaticTransform::of(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldStaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_7bc4315b92dbfe6f], a0.this$, a1.this$));
      }

      FieldStaticTransform FieldStaticTransform::of(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::StaticTransform & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldStaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_860013017bff522f], a0.this$, a1.this$));
      }

      FieldStaticTransform FieldStaticTransform::of(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldStaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_d7b67bfa134276b0], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldLine FieldStaticTransform::transformLine(const ::org::hipparchus::geometry::euclidean::threed::FieldLine & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldLine(env->callObjectMethod(this$, mids$[mid_transformLine_d12840109f20e722], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldLine FieldStaticTransform::transformLine(const ::org::hipparchus::geometry::euclidean::threed::Line & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldLine(env->callObjectMethod(this$, mids$[mid_transformLine_74f3858d2d426a7f], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldStaticTransform::transformPosition(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformPosition_588ed0f09550adb9], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldStaticTransform::transformPosition(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformPosition_3d90e30d4cb13513], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldStaticTransform::transformVector(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformVector_588ed0f09550adb9], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldStaticTransform::transformVector(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformVector_3d90e30d4cb13513], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_FieldStaticTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldStaticTransform_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldStaticTransform_of_(t_FieldStaticTransform *self, PyObject *args);
      static PyObject *t_FieldStaticTransform_compose(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldStaticTransform_compositeRotation(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldStaticTransform_compositeTranslation(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldStaticTransform_getIdentity(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldStaticTransform_getInverse(t_FieldStaticTransform *self);
      static PyObject *t_FieldStaticTransform_getRotation(t_FieldStaticTransform *self);
      static PyObject *t_FieldStaticTransform_getTranslation(t_FieldStaticTransform *self);
      static PyObject *t_FieldStaticTransform_of(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldStaticTransform_transformLine(t_FieldStaticTransform *self, PyObject *args);
      static PyObject *t_FieldStaticTransform_transformPosition(t_FieldStaticTransform *self, PyObject *args);
      static PyObject *t_FieldStaticTransform_transformVector(t_FieldStaticTransform *self, PyObject *args);
      static PyObject *t_FieldStaticTransform_get__inverse(t_FieldStaticTransform *self, void *data);
      static PyObject *t_FieldStaticTransform_get__rotation(t_FieldStaticTransform *self, void *data);
      static PyObject *t_FieldStaticTransform_get__translation(t_FieldStaticTransform *self, void *data);
      static PyObject *t_FieldStaticTransform_get__parameters_(t_FieldStaticTransform *self, void *data);
      static PyGetSetDef t_FieldStaticTransform__fields_[] = {
        DECLARE_GET_FIELD(t_FieldStaticTransform, inverse),
        DECLARE_GET_FIELD(t_FieldStaticTransform, rotation),
        DECLARE_GET_FIELD(t_FieldStaticTransform, translation),
        DECLARE_GET_FIELD(t_FieldStaticTransform, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldStaticTransform__methods_[] = {
        DECLARE_METHOD(t_FieldStaticTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldStaticTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldStaticTransform, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldStaticTransform, compose, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldStaticTransform, compositeRotation, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldStaticTransform, compositeTranslation, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldStaticTransform, getIdentity, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldStaticTransform, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_FieldStaticTransform, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_FieldStaticTransform, getTranslation, METH_NOARGS),
        DECLARE_METHOD(t_FieldStaticTransform, of, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldStaticTransform, transformLine, METH_VARARGS),
        DECLARE_METHOD(t_FieldStaticTransform, transformPosition, METH_VARARGS),
        DECLARE_METHOD(t_FieldStaticTransform, transformVector, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldStaticTransform)[] = {
        { Py_tp_methods, t_FieldStaticTransform__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldStaticTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldStaticTransform)[] = {
        &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
        NULL
      };

      DEFINE_TYPE(FieldStaticTransform, t_FieldStaticTransform, FieldStaticTransform);
      PyObject *t_FieldStaticTransform::wrap_Object(const FieldStaticTransform& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldStaticTransform::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldStaticTransform *self = (t_FieldStaticTransform *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldStaticTransform::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldStaticTransform::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldStaticTransform *self = (t_FieldStaticTransform *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldStaticTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldStaticTransform), &PY_TYPE_DEF(FieldStaticTransform), module, "FieldStaticTransform", 0);
      }

      void t_FieldStaticTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStaticTransform), "class_", make_descriptor(FieldStaticTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStaticTransform), "wrapfn_", make_descriptor(t_FieldStaticTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStaticTransform), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldStaticTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldStaticTransform::initializeClass, 1)))
          return NULL;
        return t_FieldStaticTransform::wrap_Object(FieldStaticTransform(((t_FieldStaticTransform *) arg)->object.this$));
      }
      static PyObject *t_FieldStaticTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldStaticTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldStaticTransform_of_(t_FieldStaticTransform *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldStaticTransform_compose(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        FieldStaticTransform a1((jobject) NULL);
        PyTypeObject **p1;
        FieldStaticTransform a2((jobject) NULL);
        PyTypeObject **p2;
        FieldStaticTransform result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, FieldStaticTransform::initializeClass, FieldStaticTransform::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, t_FieldStaticTransform::parameters_, &a2, &p2, t_FieldStaticTransform::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::FieldStaticTransform::compose(a0, a1, a2));
          return t_FieldStaticTransform::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "compose", args);
        return NULL;
      }

      static PyObject *t_FieldStaticTransform_compositeRotation(PyTypeObject *type, PyObject *args)
      {
        FieldStaticTransform a0((jobject) NULL);
        PyTypeObject **p0;
        FieldStaticTransform a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldStaticTransform::initializeClass, FieldStaticTransform::initializeClass, &a0, &p0, t_FieldStaticTransform::parameters_, &a1, &p1, t_FieldStaticTransform::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::FieldStaticTransform::compositeRotation(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "compositeRotation", args);
        return NULL;
      }

      static PyObject *t_FieldStaticTransform_compositeTranslation(PyTypeObject *type, PyObject *args)
      {
        FieldStaticTransform a0((jobject) NULL);
        PyTypeObject **p0;
        FieldStaticTransform a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldStaticTransform::initializeClass, FieldStaticTransform::initializeClass, &a0, &p0, t_FieldStaticTransform::parameters_, &a1, &p1, t_FieldStaticTransform::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::FieldStaticTransform::compositeTranslation(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "compositeTranslation", args);
        return NULL;
      }

      static PyObject *t_FieldStaticTransform_getIdentity(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldStaticTransform result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::FieldStaticTransform::getIdentity(a0));
          return t_FieldStaticTransform::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getIdentity", arg);
        return NULL;
      }

      static PyObject *t_FieldStaticTransform_getInverse(t_FieldStaticTransform *self)
      {
        FieldStaticTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return t_FieldStaticTransform::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldStaticTransform_getRotation(t_FieldStaticTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldStaticTransform_getTranslation(t_FieldStaticTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldStaticTransform_of(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FieldStaticTransform::of(a0, a1));
              return t_FieldStaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FieldStaticTransform::of(a0, a1));
              return t_FieldStaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::StaticTransform a1((jobject) NULL);
            FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::StaticTransform::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::FieldStaticTransform::of(a0, a1));
              return t_FieldStaticTransform::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a2((jobject) NULL);
            PyTypeObject **p2;
            FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FieldStaticTransform::of(a0, a1, a2));
              return t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "of", args);
        return NULL;
      }

      static PyObject *t_FieldStaticTransform_transformLine(t_FieldStaticTransform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldLine a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldLine result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldLine::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::parameters_))
            {
              OBJ_CALL(result = self->object.transformLine(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldLine result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformLine(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformLine", args);
        return NULL;
      }

      static PyObject *t_FieldStaticTransform_transformPosition(t_FieldStaticTransform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.transformPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformPosition", args);
        return NULL;
      }

      static PyObject *t_FieldStaticTransform_transformVector(t_FieldStaticTransform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.transformVector(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformVector(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformVector", args);
        return NULL;
      }
      static PyObject *t_FieldStaticTransform_get__parameters_(t_FieldStaticTransform *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldStaticTransform_get__inverse(t_FieldStaticTransform *self, void *data)
      {
        FieldStaticTransform value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return t_FieldStaticTransform::wrap_Object(value);
      }

      static PyObject *t_FieldStaticTransform_get__rotation(t_FieldStaticTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(value);
      }

      static PyObject *t_FieldStaticTransform_get__translation(t_FieldStaticTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/BurstSelector.h"
#include "java/util/List.h"
#include "org/orekit/time/DatesSelector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *BurstSelector::class$ = NULL;
      jmethodID *BurstSelector::mids$ = NULL;
      bool BurstSelector::live$ = false;

      jclass BurstSelector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/BurstSelector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_972baebc39fce160] = env->getMethodID(cls, "<init>", "(IDDLorg/orekit/time/TimeScale;)V");
          mids$[mid_selectDates_c5683b8e06424542] = env->getMethodID(cls, "selectDates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BurstSelector::BurstSelector(jint a0, jdouble a1, jdouble a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_972baebc39fce160, a0, a1, a2, a3.this$)) {}

      ::java::util::List BurstSelector::selectDates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_selectDates_c5683b8e06424542], a0.this$, a1.this$));
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
      static PyObject *t_BurstSelector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BurstSelector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BurstSelector_init_(t_BurstSelector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BurstSelector_selectDates(t_BurstSelector *self, PyObject *args);

      static PyMethodDef t_BurstSelector__methods_[] = {
        DECLARE_METHOD(t_BurstSelector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BurstSelector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BurstSelector, selectDates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BurstSelector)[] = {
        { Py_tp_methods, t_BurstSelector__methods_ },
        { Py_tp_init, (void *) t_BurstSelector_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BurstSelector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BurstSelector, t_BurstSelector, BurstSelector);

      void t_BurstSelector::install(PyObject *module)
      {
        installType(&PY_TYPE(BurstSelector), &PY_TYPE_DEF(BurstSelector), module, "BurstSelector", 0);
      }

      void t_BurstSelector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BurstSelector), "class_", make_descriptor(BurstSelector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BurstSelector), "wrapfn_", make_descriptor(t_BurstSelector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BurstSelector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BurstSelector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BurstSelector::initializeClass, 1)))
          return NULL;
        return t_BurstSelector::wrap_Object(BurstSelector(((t_BurstSelector *) arg)->object.this$));
      }
      static PyObject *t_BurstSelector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BurstSelector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BurstSelector_init_(t_BurstSelector *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jdouble a1;
        jdouble a2;
        ::org::orekit::time::TimeScale a3((jobject) NULL);
        BurstSelector object((jobject) NULL);

        if (!parseArgs(args, "IDDk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = BurstSelector(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_BurstSelector_selectDates(t_BurstSelector *self, PyObject *args)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionData.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/common/OrbitCorrection.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmOrbitCorrectionData::class$ = NULL;
              jmethodID *RtcmOrbitCorrectionData::mids$ = NULL;
              bool RtcmOrbitCorrectionData::live$ = false;

              jclass RtcmOrbitCorrectionData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getGnssIod_412668abc8d889e9] = env->getMethodID(cls, "getGnssIod", "()I");
                  mids$[mid_getOrbitCorrection_58d117cad6f91792] = env->getMethodID(cls, "getOrbitCorrection", "()Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;");
                  mids$[mid_setGnssIod_a3da1a935cb37f7b] = env->getMethodID(cls, "setGnssIod", "(I)V");
                  mids$[mid_setOrbitCorrection_9a400e8af37b7414] = env->getMethodID(cls, "setOrbitCorrection", "(Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmOrbitCorrectionData::RtcmOrbitCorrectionData() : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              jint RtcmOrbitCorrectionData::getGnssIod() const
              {
                return env->callIntMethod(this$, mids$[mid_getGnssIod_412668abc8d889e9]);
              }

              ::org::orekit::gnss::metric::messages::common::OrbitCorrection RtcmOrbitCorrectionData::getOrbitCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::OrbitCorrection(env->callObjectMethod(this$, mids$[mid_getOrbitCorrection_58d117cad6f91792]));
              }

              void RtcmOrbitCorrectionData::setGnssIod(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGnssIod_a3da1a935cb37f7b], a0);
              }

              void RtcmOrbitCorrectionData::setOrbitCorrection(const ::org::orekit::gnss::metric::messages::common::OrbitCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbitCorrection_9a400e8af37b7414], a0.this$);
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
            namespace correction {
              static PyObject *t_RtcmOrbitCorrectionData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmOrbitCorrectionData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmOrbitCorrectionData_init_(t_RtcmOrbitCorrectionData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmOrbitCorrectionData_getGnssIod(t_RtcmOrbitCorrectionData *self);
              static PyObject *t_RtcmOrbitCorrectionData_getOrbitCorrection(t_RtcmOrbitCorrectionData *self);
              static PyObject *t_RtcmOrbitCorrectionData_setGnssIod(t_RtcmOrbitCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmOrbitCorrectionData_setOrbitCorrection(t_RtcmOrbitCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmOrbitCorrectionData_get__gnssIod(t_RtcmOrbitCorrectionData *self, void *data);
              static int t_RtcmOrbitCorrectionData_set__gnssIod(t_RtcmOrbitCorrectionData *self, PyObject *arg, void *data);
              static PyObject *t_RtcmOrbitCorrectionData_get__orbitCorrection(t_RtcmOrbitCorrectionData *self, void *data);
              static int t_RtcmOrbitCorrectionData_set__orbitCorrection(t_RtcmOrbitCorrectionData *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmOrbitCorrectionData__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmOrbitCorrectionData, gnssIod),
                DECLARE_GETSET_FIELD(t_RtcmOrbitCorrectionData, orbitCorrection),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmOrbitCorrectionData__methods_[] = {
                DECLARE_METHOD(t_RtcmOrbitCorrectionData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmOrbitCorrectionData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmOrbitCorrectionData, getGnssIod, METH_NOARGS),
                DECLARE_METHOD(t_RtcmOrbitCorrectionData, getOrbitCorrection, METH_NOARGS),
                DECLARE_METHOD(t_RtcmOrbitCorrectionData, setGnssIod, METH_O),
                DECLARE_METHOD(t_RtcmOrbitCorrectionData, setOrbitCorrection, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmOrbitCorrectionData)[] = {
                { Py_tp_methods, t_RtcmOrbitCorrectionData__methods_ },
                { Py_tp_init, (void *) t_RtcmOrbitCorrectionData_init_ },
                { Py_tp_getset, t_RtcmOrbitCorrectionData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmOrbitCorrectionData)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData),
                NULL
              };

              DEFINE_TYPE(RtcmOrbitCorrectionData, t_RtcmOrbitCorrectionData, RtcmOrbitCorrectionData);

              void t_RtcmOrbitCorrectionData::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmOrbitCorrectionData), &PY_TYPE_DEF(RtcmOrbitCorrectionData), module, "RtcmOrbitCorrectionData", 0);
              }

              void t_RtcmOrbitCorrectionData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmOrbitCorrectionData), "class_", make_descriptor(RtcmOrbitCorrectionData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmOrbitCorrectionData), "wrapfn_", make_descriptor(t_RtcmOrbitCorrectionData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmOrbitCorrectionData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmOrbitCorrectionData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmOrbitCorrectionData::initializeClass, 1)))
                  return NULL;
                return t_RtcmOrbitCorrectionData::wrap_Object(RtcmOrbitCorrectionData(((t_RtcmOrbitCorrectionData *) arg)->object.this$));
              }
              static PyObject *t_RtcmOrbitCorrectionData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmOrbitCorrectionData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmOrbitCorrectionData_init_(t_RtcmOrbitCorrectionData *self, PyObject *args, PyObject *kwds)
              {
                RtcmOrbitCorrectionData object((jobject) NULL);

                INT_CALL(object = RtcmOrbitCorrectionData());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmOrbitCorrectionData_getGnssIod(t_RtcmOrbitCorrectionData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGnssIod());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmOrbitCorrectionData_getOrbitCorrection(t_RtcmOrbitCorrectionData *self)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(result);
              }

              static PyObject *t_RtcmOrbitCorrectionData_setGnssIod(t_RtcmOrbitCorrectionData *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setGnssIod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGnssIod", arg);
                return NULL;
              }

              static PyObject *t_RtcmOrbitCorrectionData_setOrbitCorrection(t_RtcmOrbitCorrectionData *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::OrbitCorrection::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setOrbitCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOrbitCorrection", arg);
                return NULL;
              }

              static PyObject *t_RtcmOrbitCorrectionData_get__gnssIod(t_RtcmOrbitCorrectionData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGnssIod());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmOrbitCorrectionData_set__gnssIod(t_RtcmOrbitCorrectionData *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setGnssIod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gnssIod", arg);
                return -1;
              }

              static PyObject *t_RtcmOrbitCorrectionData_get__orbitCorrection(t_RtcmOrbitCorrectionData *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(value);
              }
              static int t_RtcmOrbitCorrectionData_set__orbitCorrection(t_RtcmOrbitCorrectionData *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::OrbitCorrection value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::OrbitCorrection::initializeClass, &value))
                  {
                    INT_CALL(self->object.setOrbitCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "orbitCorrection", arg);
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
#include "org/orekit/files/ccsds/section/PythonSection.h"
#include "org/orekit/files/ccsds/section/Section.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *PythonSection::class$ = NULL;
          jmethodID *PythonSection::mids$ = NULL;
          bool PythonSection::live$ = false;

          jclass PythonSection::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/PythonSection");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonSection::PythonSection() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonSection::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonSection::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonSection::pythonExtension(jlong a0) const
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
    namespace files {
      namespace ccsds {
        namespace section {
          static PyObject *t_PythonSection_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonSection_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonSection_init_(t_PythonSection *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonSection_finalize(t_PythonSection *self);
          static PyObject *t_PythonSection_pythonExtension(t_PythonSection *self, PyObject *args);
          static void JNICALL t_PythonSection_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonSection_validate1(JNIEnv *jenv, jobject jobj, jdouble a0);
          static PyObject *t_PythonSection_get__self(t_PythonSection *self, void *data);
          static PyGetSetDef t_PythonSection__fields_[] = {
            DECLARE_GET_FIELD(t_PythonSection, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonSection__methods_[] = {
            DECLARE_METHOD(t_PythonSection, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonSection, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonSection, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonSection, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonSection)[] = {
            { Py_tp_methods, t_PythonSection__methods_ },
            { Py_tp_init, (void *) t_PythonSection_init_ },
            { Py_tp_getset, t_PythonSection__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonSection)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonSection, t_PythonSection, PythonSection);

          void t_PythonSection::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonSection), &PY_TYPE_DEF(PythonSection), module, "PythonSection", 1);
          }

          void t_PythonSection::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSection), "class_", make_descriptor(PythonSection::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSection), "wrapfn_", make_descriptor(t_PythonSection::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSection), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonSection::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PythonSection_pythonDecRef0 },
              { "validate", "(D)V", (void *) t_PythonSection_validate1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonSection_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonSection::initializeClass, 1)))
              return NULL;
            return t_PythonSection::wrap_Object(PythonSection(((t_PythonSection *) arg)->object.this$));
          }
          static PyObject *t_PythonSection_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonSection::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonSection_init_(t_PythonSection *self, PyObject *args, PyObject *kwds)
          {
            PythonSection object((jobject) NULL);

            INT_CALL(object = PythonSection());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonSection_finalize(t_PythonSection *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonSection_pythonExtension(t_PythonSection *self, PyObject *args)
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

          static void JNICALL t_PythonSection_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSection::mids$[PythonSection::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonSection::mids$[PythonSection::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PythonSection_validate1(JNIEnv *jenv, jobject jobj, jdouble a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSection::mids$[PythonSection::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "validate", "d", (double) a0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PythonSection_get__self(t_PythonSection *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensor.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeDeterminationSensor::class$ = NULL;
              jmethodID *AttitudeDeterminationSensor::mids$ = NULL;
              bool AttitudeDeterminationSensor::live$ = false;

              jclass AttitudeDeterminationSensor::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensor");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getNbSensorNoiseCovariance_412668abc8d889e9] = env->getMethodID(cls, "getNbSensorNoiseCovariance", "()I");
                  mids$[mid_getSensorFrequency_557b8123390d8d0c] = env->getMethodID(cls, "getSensorFrequency", "()D");
                  mids$[mid_getSensorNoiseCovariance_a53a7513ecedada2] = env->getMethodID(cls, "getSensorNoiseCovariance", "()[D");
                  mids$[mid_getSensorNumber_412668abc8d889e9] = env->getMethodID(cls, "getSensorNumber", "()I");
                  mids$[mid_getSensorUsed_3cffd47377eca18a] = env->getMethodID(cls, "getSensorUsed", "()Ljava/lang/String;");
                  mids$[mid_setNbSensorNoiseCovariance_a3da1a935cb37f7b] = env->getMethodID(cls, "setNbSensorNoiseCovariance", "(I)V");
                  mids$[mid_setSensorFrequency_10f281d777284cea] = env->getMethodID(cls, "setSensorFrequency", "(D)V");
                  mids$[mid_setSensorNoiseCovariance_cc18240f4a737f14] = env->getMethodID(cls, "setSensorNoiseCovariance", "([D)V");
                  mids$[mid_setSensorNumber_a3da1a935cb37f7b] = env->getMethodID(cls, "setSensorNumber", "(I)V");
                  mids$[mid_setSensorUsed_f5ffdf29129ef90a] = env->getMethodID(cls, "setSensorUsed", "(Ljava/lang/String;)V");
                  mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeDeterminationSensor::AttitudeDeterminationSensor() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              jint AttitudeDeterminationSensor::getNbSensorNoiseCovariance() const
              {
                return env->callIntMethod(this$, mids$[mid_getNbSensorNoiseCovariance_412668abc8d889e9]);
              }

              jdouble AttitudeDeterminationSensor::getSensorFrequency() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSensorFrequency_557b8123390d8d0c]);
              }

              JArray< jdouble > AttitudeDeterminationSensor::getSensorNoiseCovariance() const
              {
                return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSensorNoiseCovariance_a53a7513ecedada2]));
              }

              jint AttitudeDeterminationSensor::getSensorNumber() const
              {
                return env->callIntMethod(this$, mids$[mid_getSensorNumber_412668abc8d889e9]);
              }

              ::java::lang::String AttitudeDeterminationSensor::getSensorUsed() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSensorUsed_3cffd47377eca18a]));
              }

              void AttitudeDeterminationSensor::setNbSensorNoiseCovariance(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNbSensorNoiseCovariance_a3da1a935cb37f7b], a0);
              }

              void AttitudeDeterminationSensor::setSensorFrequency(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSensorFrequency_10f281d777284cea], a0);
              }

              void AttitudeDeterminationSensor::setSensorNoiseCovariance(const JArray< jdouble > & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSensorNoiseCovariance_cc18240f4a737f14], a0.this$);
              }

              void AttitudeDeterminationSensor::setSensorNumber(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSensorNumber_a3da1a935cb37f7b], a0);
              }

              void AttitudeDeterminationSensor::setSensorUsed(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSensorUsed_f5ffdf29129ef90a], a0.this$);
              }

              void AttitudeDeterminationSensor::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_10f281d777284cea], a0);
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
          namespace adm {
            namespace acm {
              static PyObject *t_AttitudeDeterminationSensor_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeDeterminationSensor_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeDeterminationSensor_init_(t_AttitudeDeterminationSensor *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeDeterminationSensor_getNbSensorNoiseCovariance(t_AttitudeDeterminationSensor *self);
              static PyObject *t_AttitudeDeterminationSensor_getSensorFrequency(t_AttitudeDeterminationSensor *self);
              static PyObject *t_AttitudeDeterminationSensor_getSensorNoiseCovariance(t_AttitudeDeterminationSensor *self);
              static PyObject *t_AttitudeDeterminationSensor_getSensorNumber(t_AttitudeDeterminationSensor *self);
              static PyObject *t_AttitudeDeterminationSensor_getSensorUsed(t_AttitudeDeterminationSensor *self);
              static PyObject *t_AttitudeDeterminationSensor_setNbSensorNoiseCovariance(t_AttitudeDeterminationSensor *self, PyObject *arg);
              static PyObject *t_AttitudeDeterminationSensor_setSensorFrequency(t_AttitudeDeterminationSensor *self, PyObject *arg);
              static PyObject *t_AttitudeDeterminationSensor_setSensorNoiseCovariance(t_AttitudeDeterminationSensor *self, PyObject *arg);
              static PyObject *t_AttitudeDeterminationSensor_setSensorNumber(t_AttitudeDeterminationSensor *self, PyObject *arg);
              static PyObject *t_AttitudeDeterminationSensor_setSensorUsed(t_AttitudeDeterminationSensor *self, PyObject *arg);
              static PyObject *t_AttitudeDeterminationSensor_validate(t_AttitudeDeterminationSensor *self, PyObject *args);
              static PyObject *t_AttitudeDeterminationSensor_get__nbSensorNoiseCovariance(t_AttitudeDeterminationSensor *self, void *data);
              static int t_AttitudeDeterminationSensor_set__nbSensorNoiseCovariance(t_AttitudeDeterminationSensor *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDeterminationSensor_get__sensorFrequency(t_AttitudeDeterminationSensor *self, void *data);
              static int t_AttitudeDeterminationSensor_set__sensorFrequency(t_AttitudeDeterminationSensor *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDeterminationSensor_get__sensorNoiseCovariance(t_AttitudeDeterminationSensor *self, void *data);
              static int t_AttitudeDeterminationSensor_set__sensorNoiseCovariance(t_AttitudeDeterminationSensor *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDeterminationSensor_get__sensorNumber(t_AttitudeDeterminationSensor *self, void *data);
              static int t_AttitudeDeterminationSensor_set__sensorNumber(t_AttitudeDeterminationSensor *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDeterminationSensor_get__sensorUsed(t_AttitudeDeterminationSensor *self, void *data);
              static int t_AttitudeDeterminationSensor_set__sensorUsed(t_AttitudeDeterminationSensor *self, PyObject *arg, void *data);
              static PyGetSetDef t_AttitudeDeterminationSensor__fields_[] = {
                DECLARE_GETSET_FIELD(t_AttitudeDeterminationSensor, nbSensorNoiseCovariance),
                DECLARE_GETSET_FIELD(t_AttitudeDeterminationSensor, sensorFrequency),
                DECLARE_GETSET_FIELD(t_AttitudeDeterminationSensor, sensorNoiseCovariance),
                DECLARE_GETSET_FIELD(t_AttitudeDeterminationSensor, sensorNumber),
                DECLARE_GETSET_FIELD(t_AttitudeDeterminationSensor, sensorUsed),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeDeterminationSensor__methods_[] = {
                DECLARE_METHOD(t_AttitudeDeterminationSensor, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, getNbSensorNoiseCovariance, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, getSensorFrequency, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, getSensorNoiseCovariance, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, getSensorNumber, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, getSensorUsed, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, setNbSensorNoiseCovariance, METH_O),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, setSensorFrequency, METH_O),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, setSensorNoiseCovariance, METH_O),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, setSensorNumber, METH_O),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, setSensorUsed, METH_O),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeDeterminationSensor)[] = {
                { Py_tp_methods, t_AttitudeDeterminationSensor__methods_ },
                { Py_tp_init, (void *) t_AttitudeDeterminationSensor_init_ },
                { Py_tp_getset, t_AttitudeDeterminationSensor__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeDeterminationSensor)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AttitudeDeterminationSensor, t_AttitudeDeterminationSensor, AttitudeDeterminationSensor);

              void t_AttitudeDeterminationSensor::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeDeterminationSensor), &PY_TYPE_DEF(AttitudeDeterminationSensor), module, "AttitudeDeterminationSensor", 0);
              }

              void t_AttitudeDeterminationSensor::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensor), "class_", make_descriptor(AttitudeDeterminationSensor::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensor), "wrapfn_", make_descriptor(t_AttitudeDeterminationSensor::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensor), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeDeterminationSensor_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeDeterminationSensor::initializeClass, 1)))
                  return NULL;
                return t_AttitudeDeterminationSensor::wrap_Object(AttitudeDeterminationSensor(((t_AttitudeDeterminationSensor *) arg)->object.this$));
              }
              static PyObject *t_AttitudeDeterminationSensor_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeDeterminationSensor::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeDeterminationSensor_init_(t_AttitudeDeterminationSensor *self, PyObject *args, PyObject *kwds)
              {
                AttitudeDeterminationSensor object((jobject) NULL);

                INT_CALL(object = AttitudeDeterminationSensor());
                self->object = object;

                return 0;
              }

              static PyObject *t_AttitudeDeterminationSensor_getNbSensorNoiseCovariance(t_AttitudeDeterminationSensor *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNbSensorNoiseCovariance());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AttitudeDeterminationSensor_getSensorFrequency(t_AttitudeDeterminationSensor *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSensorFrequency());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeDeterminationSensor_getSensorNoiseCovariance(t_AttitudeDeterminationSensor *self)
              {
                JArray< jdouble > result((jobject) NULL);
                OBJ_CALL(result = self->object.getSensorNoiseCovariance());
                return result.wrap();
              }

              static PyObject *t_AttitudeDeterminationSensor_getSensorNumber(t_AttitudeDeterminationSensor *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSensorNumber());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AttitudeDeterminationSensor_getSensorUsed(t_AttitudeDeterminationSensor *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getSensorUsed());
                return j2p(result);
              }

              static PyObject *t_AttitudeDeterminationSensor_setNbSensorNoiseCovariance(t_AttitudeDeterminationSensor *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNbSensorNoiseCovariance(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNbSensorNoiseCovariance", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDeterminationSensor_setSensorFrequency(t_AttitudeDeterminationSensor *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSensorFrequency(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSensorFrequency", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDeterminationSensor_setSensorNoiseCovariance(t_AttitudeDeterminationSensor *self, PyObject *arg)
              {
                JArray< jdouble > a0((jobject) NULL);

                if (!parseArg(arg, "[D", &a0))
                {
                  OBJ_CALL(self->object.setSensorNoiseCovariance(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSensorNoiseCovariance", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDeterminationSensor_setSensorNumber(t_AttitudeDeterminationSensor *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSensorNumber(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSensorNumber", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDeterminationSensor_setSensorUsed(t_AttitudeDeterminationSensor *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setSensorUsed(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSensorUsed", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDeterminationSensor_validate(t_AttitudeDeterminationSensor *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AttitudeDeterminationSensor), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AttitudeDeterminationSensor_get__nbSensorNoiseCovariance(t_AttitudeDeterminationSensor *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNbSensorNoiseCovariance());
                return PyLong_FromLong((long) value);
              }
              static int t_AttitudeDeterminationSensor_set__nbSensorNoiseCovariance(t_AttitudeDeterminationSensor *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNbSensorNoiseCovariance(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nbSensorNoiseCovariance", arg);
                return -1;
              }

              static PyObject *t_AttitudeDeterminationSensor_get__sensorFrequency(t_AttitudeDeterminationSensor *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSensorFrequency());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeDeterminationSensor_set__sensorFrequency(t_AttitudeDeterminationSensor *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSensorFrequency(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sensorFrequency", arg);
                return -1;
              }

              static PyObject *t_AttitudeDeterminationSensor_get__sensorNoiseCovariance(t_AttitudeDeterminationSensor *self, void *data)
              {
                JArray< jdouble > value((jobject) NULL);
                OBJ_CALL(value = self->object.getSensorNoiseCovariance());
                return value.wrap();
              }
              static int t_AttitudeDeterminationSensor_set__sensorNoiseCovariance(t_AttitudeDeterminationSensor *self, PyObject *arg, void *data)
              {
                {
                  JArray< jdouble > value((jobject) NULL);
                  if (!parseArg(arg, "[D", &value))
                  {
                    INT_CALL(self->object.setSensorNoiseCovariance(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sensorNoiseCovariance", arg);
                return -1;
              }

              static PyObject *t_AttitudeDeterminationSensor_get__sensorNumber(t_AttitudeDeterminationSensor *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSensorNumber());
                return PyLong_FromLong((long) value);
              }
              static int t_AttitudeDeterminationSensor_set__sensorNumber(t_AttitudeDeterminationSensor *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSensorNumber(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sensorNumber", arg);
                return -1;
              }

              static PyObject *t_AttitudeDeterminationSensor_get__sensorUsed(t_AttitudeDeterminationSensor *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getSensorUsed());
                return j2p(value);
              }
              static int t_AttitudeDeterminationSensor_set__sensorUsed(t_AttitudeDeterminationSensor *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setSensorUsed(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sensorUsed", arg);
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
#include "org/orekit/files/ccsds/section/HeaderProcessingState.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *HeaderProcessingState::class$ = NULL;
          jmethodID *HeaderProcessingState::mids$ = NULL;
          bool HeaderProcessingState::live$ = false;

          jclass HeaderProcessingState::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/HeaderProcessingState");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_751b447e12ee0563] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/parsing/AbstractConstituentParser;)V");
              mids$[mid_processToken_7f6d4ab73f1deb26] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          HeaderProcessingState::HeaderProcessingState(const ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_751b447e12ee0563, a0.this$)) {}

          jboolean HeaderProcessingState::processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_processToken_7f6d4ab73f1deb26], a0.this$);
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
        namespace section {
          static PyObject *t_HeaderProcessingState_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HeaderProcessingState_instance_(PyTypeObject *type, PyObject *arg);
          static int t_HeaderProcessingState_init_(t_HeaderProcessingState *self, PyObject *args, PyObject *kwds);
          static PyObject *t_HeaderProcessingState_processToken(t_HeaderProcessingState *self, PyObject *arg);

          static PyMethodDef t_HeaderProcessingState__methods_[] = {
            DECLARE_METHOD(t_HeaderProcessingState, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HeaderProcessingState, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HeaderProcessingState, processToken, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(HeaderProcessingState)[] = {
            { Py_tp_methods, t_HeaderProcessingState__methods_ },
            { Py_tp_init, (void *) t_HeaderProcessingState_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(HeaderProcessingState)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(HeaderProcessingState, t_HeaderProcessingState, HeaderProcessingState);

          void t_HeaderProcessingState::install(PyObject *module)
          {
            installType(&PY_TYPE(HeaderProcessingState), &PY_TYPE_DEF(HeaderProcessingState), module, "HeaderProcessingState", 0);
          }

          void t_HeaderProcessingState::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderProcessingState), "class_", make_descriptor(HeaderProcessingState::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderProcessingState), "wrapfn_", make_descriptor(t_HeaderProcessingState::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderProcessingState), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_HeaderProcessingState_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, HeaderProcessingState::initializeClass, 1)))
              return NULL;
            return t_HeaderProcessingState::wrap_Object(HeaderProcessingState(((t_HeaderProcessingState *) arg)->object.this$));
          }
          static PyObject *t_HeaderProcessingState_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, HeaderProcessingState::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_HeaderProcessingState_init_(t_HeaderProcessingState *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser a0((jobject) NULL);
            PyTypeObject **p0;
            HeaderProcessingState object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::parsing::t_AbstractConstituentParser::parameters_))
            {
              INT_CALL(object = HeaderProcessingState(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_HeaderProcessingState_processToken(t_HeaderProcessingState *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.processToken(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "processToken", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/EulerFieldIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *EulerFieldIntegrator::class$ = NULL;
        jmethodID *EulerFieldIntegrator::mids$ = NULL;
        bool EulerFieldIntegrator::live$ = false;

        jclass EulerFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/EulerFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c9ae9949e6b74bf6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getA_f180d140dce78d62] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_41762fd4377ff26e] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_41762fd4377ff26e] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_94680d98ae991ebd] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/EulerFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EulerFieldIntegrator::EulerFieldIntegrator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_c9ae9949e6b74bf6, a0.this$, a1.this$)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > EulerFieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_f180d140dce78d62]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > EulerFieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_41762fd4377ff26e]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > EulerFieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_41762fd4377ff26e]));
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
        static PyObject *t_EulerFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EulerFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EulerFieldIntegrator_of_(t_EulerFieldIntegrator *self, PyObject *args);
        static int t_EulerFieldIntegrator_init_(t_EulerFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EulerFieldIntegrator_getA(t_EulerFieldIntegrator *self, PyObject *args);
        static PyObject *t_EulerFieldIntegrator_getB(t_EulerFieldIntegrator *self, PyObject *args);
        static PyObject *t_EulerFieldIntegrator_getC(t_EulerFieldIntegrator *self, PyObject *args);
        static PyObject *t_EulerFieldIntegrator_get__a(t_EulerFieldIntegrator *self, void *data);
        static PyObject *t_EulerFieldIntegrator_get__b(t_EulerFieldIntegrator *self, void *data);
        static PyObject *t_EulerFieldIntegrator_get__c(t_EulerFieldIntegrator *self, void *data);
        static PyObject *t_EulerFieldIntegrator_get__parameters_(t_EulerFieldIntegrator *self, void *data);
        static PyGetSetDef t_EulerFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_EulerFieldIntegrator, a),
          DECLARE_GET_FIELD(t_EulerFieldIntegrator, b),
          DECLARE_GET_FIELD(t_EulerFieldIntegrator, c),
          DECLARE_GET_FIELD(t_EulerFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EulerFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_EulerFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_EulerFieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_EulerFieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_EulerFieldIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EulerFieldIntegrator)[] = {
          { Py_tp_methods, t_EulerFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_EulerFieldIntegrator_init_ },
          { Py_tp_getset, t_EulerFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EulerFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(EulerFieldIntegrator, t_EulerFieldIntegrator, EulerFieldIntegrator);
        PyObject *t_EulerFieldIntegrator::wrap_Object(const EulerFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EulerFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EulerFieldIntegrator *self = (t_EulerFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EulerFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EulerFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EulerFieldIntegrator *self = (t_EulerFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EulerFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(EulerFieldIntegrator), &PY_TYPE_DEF(EulerFieldIntegrator), module, "EulerFieldIntegrator", 0);
        }

        void t_EulerFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerFieldIntegrator), "class_", make_descriptor(EulerFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerFieldIntegrator), "wrapfn_", make_descriptor(t_EulerFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EulerFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EulerFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_EulerFieldIntegrator::wrap_Object(EulerFieldIntegrator(((t_EulerFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_EulerFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EulerFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EulerFieldIntegrator_of_(t_EulerFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EulerFieldIntegrator_init_(t_EulerFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          EulerFieldIntegrator object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = EulerFieldIntegrator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EulerFieldIntegrator_getA(t_EulerFieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(EulerFieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_EulerFieldIntegrator_getB(t_EulerFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(EulerFieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_EulerFieldIntegrator_getC(t_EulerFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(EulerFieldIntegrator), (PyObject *) self, "getC", args, 2);
        }
        static PyObject *t_EulerFieldIntegrator_get__parameters_(t_EulerFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EulerFieldIntegrator_get__a(t_EulerFieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_EulerFieldIntegrator_get__b(t_EulerFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_EulerFieldIntegrator_get__c(t_EulerFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/util/List.h"
#include "org/orekit/data/DataProvider.h"
#include "org/orekit/data/DataLoader.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "org/orekit/data/FiltersManager.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataProvidersManager::class$ = NULL;
      jmethodID *DataProvidersManager::mids$ = NULL;
      bool DataProvidersManager::live$ = false;
      ::java::lang::String *DataProvidersManager::OREKIT_DATA_PATH = NULL;

      jclass DataProvidersManager::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataProvidersManager");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addDefaultProviders_0640e6acf969ed28] = env->getMethodID(cls, "addDefaultProviders", "()V");
          mids$[mid_addProvider_eed5c1a33a403243] = env->getMethodID(cls, "addProvider", "(Lorg/orekit/data/DataProvider;)V");
          mids$[mid_clearLoadedDataNames_0640e6acf969ed28] = env->getMethodID(cls, "clearLoadedDataNames", "()V");
          mids$[mid_clearProviders_0640e6acf969ed28] = env->getMethodID(cls, "clearProviders", "()V");
          mids$[mid_feed_3a34776974e98f4e] = env->getMethodID(cls, "feed", "(Ljava/lang/String;Lorg/orekit/data/DataLoader;)Z");
          mids$[mid_getFiltersManager_1fad27d36895899e] = env->getMethodID(cls, "getFiltersManager", "()Lorg/orekit/data/FiltersManager;");
          mids$[mid_getLoadedDataNames_2dfcbd371d62f4e1] = env->getMethodID(cls, "getLoadedDataNames", "()Ljava/util/Set;");
          mids$[mid_getProviders_0d9551367f7ecdef] = env->getMethodID(cls, "getProviders", "()Ljava/util/List;");
          mids$[mid_isSupported_39133ce80a3ed9c9] = env->getMethodID(cls, "isSupported", "(Lorg/orekit/data/DataProvider;)Z");
          mids$[mid_removeProvider_4e919fd3ab7edaa7] = env->getMethodID(cls, "removeProvider", "(Lorg/orekit/data/DataProvider;)Lorg/orekit/data/DataProvider;");
          mids$[mid_resetFiltersToDefault_0640e6acf969ed28] = env->getMethodID(cls, "resetFiltersToDefault", "()V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          OREKIT_DATA_PATH = new ::java::lang::String(env->getStaticObjectField(cls, "OREKIT_DATA_PATH", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DataProvidersManager::DataProvidersManager() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void DataProvidersManager::addDefaultProviders() const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultProviders_0640e6acf969ed28]);
      }

      void DataProvidersManager::addProvider(const ::org::orekit::data::DataProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addProvider_eed5c1a33a403243], a0.this$);
      }

      void DataProvidersManager::clearLoadedDataNames() const
      {
        env->callVoidMethod(this$, mids$[mid_clearLoadedDataNames_0640e6acf969ed28]);
      }

      void DataProvidersManager::clearProviders() const
      {
        env->callVoidMethod(this$, mids$[mid_clearProviders_0640e6acf969ed28]);
      }

      jboolean DataProvidersManager::feed(const ::java::lang::String & a0, const ::org::orekit::data::DataLoader & a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_feed_3a34776974e98f4e], a0.this$, a1.this$);
      }

      ::org::orekit::data::FiltersManager DataProvidersManager::getFiltersManager() const
      {
        return ::org::orekit::data::FiltersManager(env->callObjectMethod(this$, mids$[mid_getFiltersManager_1fad27d36895899e]));
      }

      ::java::util::Set DataProvidersManager::getLoadedDataNames() const
      {
        return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getLoadedDataNames_2dfcbd371d62f4e1]));
      }

      ::java::util::List DataProvidersManager::getProviders() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getProviders_0d9551367f7ecdef]));
      }

      jboolean DataProvidersManager::isSupported(const ::org::orekit::data::DataProvider & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupported_39133ce80a3ed9c9], a0.this$);
      }

      ::org::orekit::data::DataProvider DataProvidersManager::removeProvider(const ::org::orekit::data::DataProvider & a0) const
      {
        return ::org::orekit::data::DataProvider(env->callObjectMethod(this$, mids$[mid_removeProvider_4e919fd3ab7edaa7], a0.this$));
      }

      void DataProvidersManager::resetFiltersToDefault() const
      {
        env->callVoidMethod(this$, mids$[mid_resetFiltersToDefault_0640e6acf969ed28]);
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
      static PyObject *t_DataProvidersManager_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataProvidersManager_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DataProvidersManager_init_(t_DataProvidersManager *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DataProvidersManager_addDefaultProviders(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_addProvider(t_DataProvidersManager *self, PyObject *arg);
      static PyObject *t_DataProvidersManager_clearLoadedDataNames(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_clearProviders(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_feed(t_DataProvidersManager *self, PyObject *args);
      static PyObject *t_DataProvidersManager_getFiltersManager(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_getLoadedDataNames(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_getProviders(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_isSupported(t_DataProvidersManager *self, PyObject *arg);
      static PyObject *t_DataProvidersManager_removeProvider(t_DataProvidersManager *self, PyObject *arg);
      static PyObject *t_DataProvidersManager_resetFiltersToDefault(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_get__filtersManager(t_DataProvidersManager *self, void *data);
      static PyObject *t_DataProvidersManager_get__loadedDataNames(t_DataProvidersManager *self, void *data);
      static PyObject *t_DataProvidersManager_get__providers(t_DataProvidersManager *self, void *data);
      static PyGetSetDef t_DataProvidersManager__fields_[] = {
        DECLARE_GET_FIELD(t_DataProvidersManager, filtersManager),
        DECLARE_GET_FIELD(t_DataProvidersManager, loadedDataNames),
        DECLARE_GET_FIELD(t_DataProvidersManager, providers),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DataProvidersManager__methods_[] = {
        DECLARE_METHOD(t_DataProvidersManager, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataProvidersManager, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataProvidersManager, addDefaultProviders, METH_NOARGS),
        DECLARE_METHOD(t_DataProvidersManager, addProvider, METH_O),
        DECLARE_METHOD(t_DataProvidersManager, clearLoadedDataNames, METH_NOARGS),
        DECLARE_METHOD(t_DataProvidersManager, clearProviders, METH_NOARGS),
        DECLARE_METHOD(t_DataProvidersManager, feed, METH_VARARGS),
        DECLARE_METHOD(t_DataProvidersManager, getFiltersManager, METH_NOARGS),
        DECLARE_METHOD(t_DataProvidersManager, getLoadedDataNames, METH_NOARGS),
        DECLARE_METHOD(t_DataProvidersManager, getProviders, METH_NOARGS),
        DECLARE_METHOD(t_DataProvidersManager, isSupported, METH_O),
        DECLARE_METHOD(t_DataProvidersManager, removeProvider, METH_O),
        DECLARE_METHOD(t_DataProvidersManager, resetFiltersToDefault, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataProvidersManager)[] = {
        { Py_tp_methods, t_DataProvidersManager__methods_ },
        { Py_tp_init, (void *) t_DataProvidersManager_init_ },
        { Py_tp_getset, t_DataProvidersManager__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataProvidersManager)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataProvidersManager, t_DataProvidersManager, DataProvidersManager);

      void t_DataProvidersManager::install(PyObject *module)
      {
        installType(&PY_TYPE(DataProvidersManager), &PY_TYPE_DEF(DataProvidersManager), module, "DataProvidersManager", 0);
      }

      void t_DataProvidersManager::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvidersManager), "class_", make_descriptor(DataProvidersManager::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvidersManager), "wrapfn_", make_descriptor(t_DataProvidersManager::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvidersManager), "boxfn_", make_descriptor(boxObject));
        env->getClass(DataProvidersManager::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvidersManager), "OREKIT_DATA_PATH", make_descriptor(j2p(*DataProvidersManager::OREKIT_DATA_PATH)));
      }

      static PyObject *t_DataProvidersManager_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataProvidersManager::initializeClass, 1)))
          return NULL;
        return t_DataProvidersManager::wrap_Object(DataProvidersManager(((t_DataProvidersManager *) arg)->object.this$));
      }
      static PyObject *t_DataProvidersManager_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataProvidersManager::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DataProvidersManager_init_(t_DataProvidersManager *self, PyObject *args, PyObject *kwds)
      {
        DataProvidersManager object((jobject) NULL);

        INT_CALL(object = DataProvidersManager());
        self->object = object;

        return 0;
      }

      static PyObject *t_DataProvidersManager_addDefaultProviders(t_DataProvidersManager *self)
      {
        OBJ_CALL(self->object.addDefaultProviders());
        Py_RETURN_NONE;
      }

      static PyObject *t_DataProvidersManager_addProvider(t_DataProvidersManager *self, PyObject *arg)
      {
        ::org::orekit::data::DataProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::DataProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addProvider", arg);
        return NULL;
      }

      static PyObject *t_DataProvidersManager_clearLoadedDataNames(t_DataProvidersManager *self)
      {
        OBJ_CALL(self->object.clearLoadedDataNames());
        Py_RETURN_NONE;
      }

      static PyObject *t_DataProvidersManager_clearProviders(t_DataProvidersManager *self)
      {
        OBJ_CALL(self->object.clearProviders());
        Py_RETURN_NONE;
      }

      static PyObject *t_DataProvidersManager_feed(t_DataProvidersManager *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::data::DataLoader a1((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "sk", ::org::orekit::data::DataLoader::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.feed(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "feed", args);
        return NULL;
      }

      static PyObject *t_DataProvidersManager_getFiltersManager(t_DataProvidersManager *self)
      {
        ::org::orekit::data::FiltersManager result((jobject) NULL);
        OBJ_CALL(result = self->object.getFiltersManager());
        return ::org::orekit::data::t_FiltersManager::wrap_Object(result);
      }

      static PyObject *t_DataProvidersManager_getLoadedDataNames(t_DataProvidersManager *self)
      {
        ::java::util::Set result((jobject) NULL);
        OBJ_CALL(result = self->object.getLoadedDataNames());
        return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      static PyObject *t_DataProvidersManager_getProviders(t_DataProvidersManager *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getProviders());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::data::PY_TYPE(DataProvider));
      }

      static PyObject *t_DataProvidersManager_isSupported(t_DataProvidersManager *self, PyObject *arg)
      {
        ::org::orekit::data::DataProvider a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::data::DataProvider::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isSupported(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isSupported", arg);
        return NULL;
      }

      static PyObject *t_DataProvidersManager_removeProvider(t_DataProvidersManager *self, PyObject *arg)
      {
        ::org::orekit::data::DataProvider a0((jobject) NULL);
        ::org::orekit::data::DataProvider result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::DataProvider::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.removeProvider(a0));
          return ::org::orekit::data::t_DataProvider::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "removeProvider", arg);
        return NULL;
      }

      static PyObject *t_DataProvidersManager_resetFiltersToDefault(t_DataProvidersManager *self)
      {
        OBJ_CALL(self->object.resetFiltersToDefault());
        Py_RETURN_NONE;
      }

      static PyObject *t_DataProvidersManager_get__filtersManager(t_DataProvidersManager *self, void *data)
      {
        ::org::orekit::data::FiltersManager value((jobject) NULL);
        OBJ_CALL(value = self->object.getFiltersManager());
        return ::org::orekit::data::t_FiltersManager::wrap_Object(value);
      }

      static PyObject *t_DataProvidersManager_get__loadedDataNames(t_DataProvidersManager *self, void *data)
      {
        ::java::util::Set value((jobject) NULL);
        OBJ_CALL(value = self->object.getLoadedDataNames());
        return ::java::util::t_Set::wrap_Object(value);
      }

      static PyObject *t_DataProvidersManager_get__providers(t_DataProvidersManager *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getProviders());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1064.h"
#include "java/util/List.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmClockCorrectionData.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1064::class$ = NULL;
              jmethodID *Rtcm1064::mids$ = NULL;
              bool Rtcm1064::live$ = false;

              jclass Rtcm1064::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1064");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_fca910fb352c04ac] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1064::Rtcm1064(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_fca910fb352c04ac, a0, a1.this$, a2.this$)) {}
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
            namespace correction {
              static PyObject *t_Rtcm1064_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1064_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1064_of_(t_Rtcm1064 *self, PyObject *args);
              static int t_Rtcm1064_init_(t_Rtcm1064 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1064_get__parameters_(t_Rtcm1064 *self, void *data);
              static PyGetSetDef t_Rtcm1064__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1064, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1064__methods_[] = {
                DECLARE_METHOD(t_Rtcm1064, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1064, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1064, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1064)[] = {
                { Py_tp_methods, t_Rtcm1064__methods_ },
                { Py_tp_init, (void *) t_Rtcm1064_init_ },
                { Py_tp_getset, t_Rtcm1064__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1064)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1064, t_Rtcm1064, Rtcm1064);
              PyObject *t_Rtcm1064::wrap_Object(const Rtcm1064& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1064::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1064 *self = (t_Rtcm1064 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1064::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1064::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1064 *self = (t_Rtcm1064 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1064::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1064), &PY_TYPE_DEF(Rtcm1064), module, "Rtcm1064", 0);
              }

              void t_Rtcm1064::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1064), "class_", make_descriptor(Rtcm1064::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1064), "wrapfn_", make_descriptor(t_Rtcm1064::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1064), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1064_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1064::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1064::wrap_Object(Rtcm1064(((t_Rtcm1064 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1064_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1064::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1064_of_(t_Rtcm1064 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1064_init_(t_Rtcm1064 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1064 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1064(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmCorrectionHeader);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmClockCorrectionData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1064_get__parameters_(t_Rtcm1064 *self, void *data)
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
#include "org/orekit/estimation/sequential/SemiAnalyticalKalmanEstimator.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/conversion/DSSTPropagatorBuilder.h"
#include "java/util/List.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "java/lang/Object.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalKalmanEstimator::class$ = NULL;
        jmethodID *SemiAnalyticalKalmanEstimator::mids$ = NULL;
        bool SemiAnalyticalKalmanEstimator::live$ = false;

        jclass SemiAnalyticalKalmanEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalKalmanEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_5b2d951bb36a8b67] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/MatrixDecomposer;Lorg/orekit/propagation/conversion/DSSTPropagatorBuilder;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)V");
            mids$[mid_processMeasurements_59e9b5905b4638f0] = env->getMethodID(cls, "processMeasurements", "(Ljava/util/List;)Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_setObserver_4275515b1ffe8ceb] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/sequential/KalmanObserver;)V");
            mids$[mid_getKalmanEstimation_32faeba2996c6566] = env->getMethodID(cls, "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SemiAnalyticalKalmanEstimator::SemiAnalyticalKalmanEstimator(const ::org::hipparchus::linear::MatrixDecomposer & a0, const ::org::orekit::propagation::conversion::DSSTPropagatorBuilder & a1, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a2, const ::org::orekit::utils::ParameterDriversList & a3, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a4) : ::org::orekit::estimation::sequential::AbstractKalmanEstimator(env->newObject(initializeClass, &mids$, mid_init$_5b2d951bb36a8b67, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator SemiAnalyticalKalmanEstimator::processMeasurements(const ::java::util::List & a0) const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_processMeasurements_59e9b5905b4638f0], a0.this$));
        }

        void SemiAnalyticalKalmanEstimator::setObserver(const ::org::orekit::estimation::sequential::KalmanObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_4275515b1ffe8ceb], a0.this$);
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
        static PyObject *t_SemiAnalyticalKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SemiAnalyticalKalmanEstimator_init_(t_SemiAnalyticalKalmanEstimator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SemiAnalyticalKalmanEstimator_processMeasurements(t_SemiAnalyticalKalmanEstimator *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanEstimator_setObserver(t_SemiAnalyticalKalmanEstimator *self, PyObject *arg);
        static int t_SemiAnalyticalKalmanEstimator_set__observer(t_SemiAnalyticalKalmanEstimator *self, PyObject *arg, void *data);
        static PyGetSetDef t_SemiAnalyticalKalmanEstimator__fields_[] = {
          DECLARE_SET_FIELD(t_SemiAnalyticalKalmanEstimator, observer),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SemiAnalyticalKalmanEstimator__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimator, processMeasurements, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimator, setObserver, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalKalmanEstimator)[] = {
          { Py_tp_methods, t_SemiAnalyticalKalmanEstimator__methods_ },
          { Py_tp_init, (void *) t_SemiAnalyticalKalmanEstimator_init_ },
          { Py_tp_getset, t_SemiAnalyticalKalmanEstimator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalKalmanEstimator)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractKalmanEstimator),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalKalmanEstimator, t_SemiAnalyticalKalmanEstimator, SemiAnalyticalKalmanEstimator);

        void t_SemiAnalyticalKalmanEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalKalmanEstimator), &PY_TYPE_DEF(SemiAnalyticalKalmanEstimator), module, "SemiAnalyticalKalmanEstimator", 0);
        }

        void t_SemiAnalyticalKalmanEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanEstimator), "class_", make_descriptor(SemiAnalyticalKalmanEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanEstimator), "wrapfn_", make_descriptor(t_SemiAnalyticalKalmanEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalKalmanEstimator::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalKalmanEstimator::wrap_Object(SemiAnalyticalKalmanEstimator(((t_SemiAnalyticalKalmanEstimator *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalKalmanEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SemiAnalyticalKalmanEstimator_init_(t_SemiAnalyticalKalmanEstimator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
          ::org::orekit::propagation::conversion::DSSTPropagatorBuilder a1((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a2((jobject) NULL);
          ::org::orekit::utils::ParameterDriversList a3((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a4((jobject) NULL);
          SemiAnalyticalKalmanEstimator object((jobject) NULL);

          if (!parseArgs(args, "kkkkk", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, ::org::orekit::propagation::conversion::DSSTPropagatorBuilder::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = SemiAnalyticalKalmanEstimator(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SemiAnalyticalKalmanEstimator_processMeasurements(t_SemiAnalyticalKalmanEstimator *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(result = self->object.processMeasurements(a0));
            return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "processMeasurements", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanEstimator_setObserver(t_SemiAnalyticalKalmanEstimator *self, PyObject *arg)
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

        static int t_SemiAnalyticalKalmanEstimator_set__observer(t_SemiAnalyticalKalmanEstimator *self, PyObject *arg, void *data)
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
#include "org/orekit/estimation/sequential/UnscentedKalmanEstimator.h"
#include "java/lang/Iterable.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *UnscentedKalmanEstimator::class$ = NULL;
        jmethodID *UnscentedKalmanEstimator::mids$ = NULL;
        bool UnscentedKalmanEstimator::live$ = false;

        jclass UnscentedKalmanEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/UnscentedKalmanEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_estimationStep_e70572bb561aea25] = env->getMethodID(cls, "estimationStep", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)[Lorg/orekit/propagation/Propagator;");
            mids$[mid_processMeasurements_48e4d72357877767] = env->getMethodID(cls, "processMeasurements", "(Ljava/lang/Iterable;)[Lorg/orekit/propagation/Propagator;");
            mids$[mid_setObserver_4275515b1ffe8ceb] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/sequential/KalmanObserver;)V");
            mids$[mid_getKalmanEstimation_32faeba2996c6566] = env->getMethodID(cls, "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< ::org::orekit::propagation::Propagator > UnscentedKalmanEstimator::estimationStep(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0) const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_estimationStep_e70572bb561aea25], a0.this$));
        }

        JArray< ::org::orekit::propagation::Propagator > UnscentedKalmanEstimator::processMeasurements(const ::java::lang::Iterable & a0) const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_processMeasurements_48e4d72357877767], a0.this$));
        }

        void UnscentedKalmanEstimator::setObserver(const ::org::orekit::estimation::sequential::KalmanObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_4275515b1ffe8ceb], a0.this$);
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
        static PyObject *t_UnscentedKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnscentedKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnscentedKalmanEstimator_estimationStep(t_UnscentedKalmanEstimator *self, PyObject *arg);
        static PyObject *t_UnscentedKalmanEstimator_processMeasurements(t_UnscentedKalmanEstimator *self, PyObject *arg);
        static PyObject *t_UnscentedKalmanEstimator_setObserver(t_UnscentedKalmanEstimator *self, PyObject *arg);
        static int t_UnscentedKalmanEstimator_set__observer(t_UnscentedKalmanEstimator *self, PyObject *arg, void *data);
        static PyGetSetDef t_UnscentedKalmanEstimator__fields_[] = {
          DECLARE_SET_FIELD(t_UnscentedKalmanEstimator, observer),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnscentedKalmanEstimator__methods_[] = {
          DECLARE_METHOD(t_UnscentedKalmanEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnscentedKalmanEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnscentedKalmanEstimator, estimationStep, METH_O),
          DECLARE_METHOD(t_UnscentedKalmanEstimator, processMeasurements, METH_O),
          DECLARE_METHOD(t_UnscentedKalmanEstimator, setObserver, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnscentedKalmanEstimator)[] = {
          { Py_tp_methods, t_UnscentedKalmanEstimator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UnscentedKalmanEstimator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnscentedKalmanEstimator)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractKalmanEstimator),
          NULL
        };

        DEFINE_TYPE(UnscentedKalmanEstimator, t_UnscentedKalmanEstimator, UnscentedKalmanEstimator);

        void t_UnscentedKalmanEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnscentedKalmanEstimator), &PY_TYPE_DEF(UnscentedKalmanEstimator), module, "UnscentedKalmanEstimator", 0);
        }

        void t_UnscentedKalmanEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanEstimator), "class_", make_descriptor(UnscentedKalmanEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanEstimator), "wrapfn_", make_descriptor(t_UnscentedKalmanEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnscentedKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnscentedKalmanEstimator::initializeClass, 1)))
            return NULL;
          return t_UnscentedKalmanEstimator::wrap_Object(UnscentedKalmanEstimator(((t_UnscentedKalmanEstimator *) arg)->object.this$));
        }
        static PyObject *t_UnscentedKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnscentedKalmanEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnscentedKalmanEstimator_estimationStep(t_UnscentedKalmanEstimator *self, PyObject *arg)
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

        static PyObject *t_UnscentedKalmanEstimator_processMeasurements(t_UnscentedKalmanEstimator *self, PyObject *arg)
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

        static PyObject *t_UnscentedKalmanEstimator_setObserver(t_UnscentedKalmanEstimator *self, PyObject *arg)
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

        static int t_UnscentedKalmanEstimator_set__observer(t_UnscentedKalmanEstimator *self, PyObject *arg, void *data)
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
