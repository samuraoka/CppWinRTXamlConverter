 Converter lookup fails due to memory access violation.

#### In Windows.Foundation.Collections.h
```
template <typename D, typename K, typename V> WINRT_IMPL_AUTO(V) consume_Windows_Foundation_Collections_IMap<D, K, V>::Lookup(impl::param_type<K> const& key) const
{
    V winrt_impl_result{ empty_value<V>() };
    check_hresult(WINRT_IMPL_SHIM(Windows::Foundation::Collections::IMap<K, V>)->Lookup(impl::bind_in(key), put_abi(winrt_impl_result)));
    return winrt_impl_result;
}
```
* If typename **V** was **Windows::Foundation::IInspectable**, **m_ptr** that is member variable of **winrt_impl_result** don't be initialized.
* Then in the **put_abi** function, nullptr is assigned to **winrt_impl_result**.
* It invokes **IUnknown& operator=(std::nullptr_t)** function, and then **release_ref** function is called.
* Finally in **unconditional_release_ref** function, **Release** function is called by using invalid **m_ptr** address.
